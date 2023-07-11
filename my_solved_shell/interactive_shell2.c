#include "shell2.h"

/**
 * interactive_shell - perform interactive part of the shell
 *
 * Return: pointer.
 */

void interactive_shell(void)
{
	while (1)
	{
		pid_t ch_pid;
		char *myLine = NULL;
		int exec_val;
		char **envs = NULL;
		char **args;
		char *prompt = "$ ";

		write(STDOUT_FILENO, prompt, 2);

		myLine = read_line();
		args = split_line(myLine);
		ch_pid = _fork();

		if (ch_pid == -1)
		{
			perror("Errors Occured.");
			exit(EXIT_FAILURE);
		}
		if (ch_pid == 0)
		{
			exec_val = exec_args(args, envs);
			if (exec_val == -1)
			{
				perror("Errorx:");
			}
		}
		else
		{
			wait(NULL);
		}
		free(myLine);
		free(args);
	}
}
