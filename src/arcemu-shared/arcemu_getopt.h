/*
 *
 */

#ifndef _arcemu_GETOPT_H
#define _arcemu_GETOPT_H

/* getopt() wrapper */
#define arcemu_no_argument            0
#define arcemu_required_argument      1
#define arcemu_optional_argument      2
struct arcemu_option
{
	const char *name;
	int has_arg;
	int *flag;
	int val;
};
extern char arcemu_optarg[514];
int arcemu_getopt_long_only (int ___argc, char *const *___argv, const char *__shortopts, const struct arcemu_option *__longopts, int *__longind);

#endif
