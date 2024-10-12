/* Author: TheBopDev
 * GitHub: github.com/TheBopDev
 * File created: 
 * File modified:
 */


#include <stdio.h>
#include <argp.h>


/// Put these in main?
///char *argp_program_version = "Claculate the Largest Lyapunov Exponent v0.0.1";

///char *argp_program_bug_address = "<josh@bop.dev>";

// Used by main to communicate with parse_opt.
struct arguments
{
	char *args[2];		/* ARG1 and ARG2 */
	int verbose;			/* -v */
	char *outfile;		/* -o */
	char *string1, *string2; /* -a and -b */
};



/* Order of fields: {NAME, KEY, ARG, FLAGS, DOC} */
static struct argp_option options[] =
{
	{"verbose", 'v', 0, 0, "Produce verbose output."},
	{"alpha", 'a', "STRING1", 0, "Manipulate STRING1 related to flag -a"},
	{"bravo", 'b', "STRING2", 0, "Manipulate STRING2 related to flag -b"},
	{"output", 'o', "OUTFILE", 0, "Direct output to OUTFILE instead of console"},
	{0}
};


/* Order of fields: KEY, ARG, STATE. */
static error_t
parse_opt (int key, char *arg, struct argp_state *state)
{
	struct arguments *arguments = state->input;

	switch (key)
	{
		case 'v':
			arguments->verbose = 1;
			break;
		case 'a':
			arguments->string1 = arg;
			break;
		case 'b':
			arguments->string2 = arg;
			break;
		case 'o':
			arguments->outfile = arg;
			break;
		/* What does this do? */
		case ARGP_KEY_ARG:
			if (state->arg_num >= 2)
				{
					argp_usage(state);
				}
			arguments->args[state->arg_num] = arg;
			break;

		/* What does this do? */
		case ARGP_KEY_END:
			if (state->arg_num < 2)
				{
					argp_usage(state);
				}
			break;

		/* Default case */
		default:
			return ARGP_ERR_UNKNOWN;
	}

	// shouldn't ever reach this point.
	return 0;
}



/* What does this mean...? */

/* ARGS_DOC. Field 3 in ARGP.
 * A description of the non-option command-line arguments
 * that we accept.
 */
static char args_doc[] = "ARG1 ARG2";


/* DOC. Field 4 in ARGP.
 * Program documentation"
 */
static char doc[] = "Following along with crasseux.com tutorial";


/* ARGP structure itself */
static struct argp argp = {options, parse_opt, args_doc, doc};


