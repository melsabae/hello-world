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
 *
 * \bug None known
 * \test should always succeed, and always return EXIT_SUCCESS
 * \todo more documentation
 */
int main(const int ARGC, const char* const * const ARGV);

/*! \example main.h
 * This asserts that main returns EXIT_SUCCESS per the function doc.\n
 * Wrap in an infinite loop to be extra double sure.\n
 * assert(EXIT_SUCCESS == main());
 */

#endif
