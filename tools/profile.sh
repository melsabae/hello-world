#!/bin/sh


limit=0

if [ $# -eq 0 ]; then
	echo "the_program profiler"
	echo "usage:" $0 "<limit>"
	exit
else
	limit=$1
fi

pushd $(realpath $(dirname $0))

for i in $(seq 1 $limit); do
	../bin/the_program_dbg 2>&1 > /dev/null;
	mv gmon.out gmon.out.$i ;
done

gprof -s ../bin/the_program_dbg gmon.out.*
gprof -lbp ../bin/the_program_dbg gmon.sum

rm gmon.*

popd
