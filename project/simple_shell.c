/**
 * Simple shell interface program.
 *
 * Operating System Concepts - Tenth Edition
 * Copyright John Wiley & Sons - 2018
 *
 * Modified by Ilker Demirkol
 */

#include <stdio.h>
#include <unistd.h>

#define MAX_LINE		80 /* 80 chars per line, per command */

int main(void)
{
	char *args[MAX_LINE/2 + 1];	/* command line (of 80) has max of 40 arguments */
    	int should_run = 1;
		
    	while (should_run){   
        	printf("osh>");
        	fflush(stdout);
        
        	/**
         	 * Steps are: 
		 * 1) Read user input
		 * 2) If it is a built-in command, call the relevant function
         	 * 3) Else: fork a child process
         	 *  3.11) the child process will invoke execvp() to execute the command provided by the user
		 *  3.12) the parent will wait till the command (child) ends, then displays "Command run successfully.", if the exit value returned is positive, else: some negative message
         	 */
    	}
    
	return 0;
}
