#include "shell2.h"

/**
 * exec_args - executes programs
 * @args: argument vector for args[0] and args.
 * @env: environment variables.
 *
 * Return: int.
 */

int exec_args(char **args, char **env)
{
	int exec_val = execve(args[0], args, env);

	return (exec_val);
}
