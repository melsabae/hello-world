#ifndef __MAIN_H__
#define __MAIN_H__

/*! \file main.h
 * \brief Documents the main() function
 *
 * This document documents the documentation.
 */


/*! \brief the entry and exit point of the program
 *
 * Prints "hello, world!" to stdout if available.
 *
 * \param ARGC - count of the arguments
 * \param[in] ARGV - array of strings passed to main as parameters
 * \return always returns EXIT_SUCCESS
 * @pre No precondition
 * @post Will print to stdout if stdout is available
 * @side Prints to stdout
 * @invariant ARGC, ARGV cannot be mutated (segfault protection, marked const)
 */
int main(const int ARGC, const char* const * const ARGV);

#endif
