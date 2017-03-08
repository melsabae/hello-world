BUILD_DIR			=		../build
INC_DIR				=		../include
LIB_DIR 			=		../lib
SRC_DIR 			=		../src
TEST_DIR 			=		.
DBG_DIR				=		$(BUILD_DIR)/debug

CC						=		gcc
CFLAGS				=		-Wall -std=gnu11 -ggdb3 -O0 -coverage

IDIR					=		-I $(INC_DIR)
LDIR					=		-L $(LIB_DIR)
LFLAGS				=		-lcriterion

_SOURCES      +=  second_file.c
_SOURCES      +=  third_file.c
SOURCES       =   $(patsubst %, $(SRC_DIR)/%, $(_SOURCES))
HEADERS       =   $(patsubst %.c, $(INC_DIR)/%.h, $(_SOURCES))
OBJECTS       =   $(patsubst %.c, $(DBG_DIR)/%.o, $(_SOURCES))

_TEST_SOURCE	+=	second_file.c
_TEST_SOURCE	+=	third_file.c
TEST_PRE			=		test_
TEST_SOURCES	=		$(patsubst %, $(TEST_DIR)/$(TEST_PRE)%, $(_TEST_SOURCE))
TEST_OBJECTS 	= 	$(patsubst %.c, $(TEST_DIR)/$(TEST_PRE)%.o, $(_TEST_SOURCE))
TESTS 				= 	$(patsubst %.c, $(TEST_DIR)/$(TEST_PRE)%, $(_TEST_SOURCE))
ALL_TEST			=		test_all

all: .PHONY $(ALL_TEST)

.PHONY:
	cd .. && $(MAKE) test

$(ALL_TEST): $(TEST_OBJECTS)
	$(CC) -o $(ALL_TEST) $(TEST_OBJECTS) $(OBJECTS) $(CFLAGS) $(LDIR) $(LFLAGS)

$(TEST_DIR)/$(TEST_PRE)%.o: $(TEST_DIR)/$(TEST_PRE)%.c
	$(CC) -c -o $@ $< $(CFLAGS) $(IDIR)

$(TEST_DIR)/$(TEST_PRE)%.c: $(INC_DIR)/%.h

clean:
	$(RM) $(TESTS) $(TEST_OBJECTS) $(ALL_TEST) *.gcno *.gcda

