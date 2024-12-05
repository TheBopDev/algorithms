/* Author: TheBopDev
 * GitHub: github.com/TheBopDev
 * File created: 2024/10/11
 * File modified:	2024/10/11
 */


#include <math.h>
#include <stdio.h>
#include <argp.h> /// Option parsing

#include "../inc/LLE.h"
#include "argex.c"


int main(int argc, char* argv[])
{

	char *argp_program_bug_address = "<josh@bop.dev>";	
	char *argp_program_version = "Calculate the Largest Lyapunov Exponent v0.0.1";	



	/// Parse arguments with argp
	struct arguments arguments;
	FILE *outstream;

	char sampleParagraph[] = "Blah blah blah, fill this\
														out later.";

	/// Init with default arguments.
	arguments.outfile = NULL;
	arguments.string1 = "";
	arguments.string2 = "";
	arguments.verbose = 0;

	/// Parse arguments
	argp_parse(&argp, argc, argv, 0, 0, &arguments);

	/// Did user specify output file?
	if (arguments.outfile) /// Yes, write to that file.
	{
		outstream = fopen(arguments.outfile, "w");
	}
	else /// No, print to terminal.
	{
		outstream = stdout;
	}

	/// Print verbose
	if (arguments.verbose)
	{
		fprintf(outstream, sampleParagraph);
	}


	/// If the user passed a file, open it (ARG1)
	printf(arguments)

	/// How do we want to import the time-series data to analyze?
	
	/// Flags:
	/// -o --output-file	<path/to/file>	-> Write the Largest Lyapunov Exponent to this file.
	/// -i --input-file		<path/to/file>	-> Point to an input file for time-series data.
	/// -h --help													-> Print the help statement.
	


	

	/// Assume all went well.
	return 0;
}










