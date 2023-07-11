#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define TOK_DELIM " \t\r\n\a\""

/**
 * main - function
 * @argvv: arguments vector pointer.
 * @envp: env. variable pointer.
 * @argc: arg count
 */

int main(int *argc, char **argv, char **envp)
{
	char *prompt = "$ ";
	if (isatty(STDIN_FILENO) == 1)       
			
		while (1)        
		{
			write(STDOUT_FILENO, prompt, 2);

			char *line = NULL;
        		size_t len = 0;
        		ssize_t lineSize = 0;

			lineSize = getline(&line, &len, stdin);

			if (lineSize == -1)
			{
				if (feof(stdin))                
				{                        
					free(line);                        
					exit(EXIT_SUCCESS);                
				}                
				else                
				{                        
					free(line);                        
					perror("error while reading the line from stdin");                       
					exit(EXIT_FAILURE);                
				}
			}
			


			char *token = NULL;
			int argc = 0, i = 0;
			char *line_cpy = NULL;
			char **argv = NULL;

			line_cpy = strdup(line);
			token = strtok(line_cpy, TOK_DELIM);

			while (token != NULL)
			{
				token = strtok(NULL, TOK_DELIM);
				argc++;
			}

			argv = malloc(sizeof(char *) * argc);
			token = strtok(line, TOK_DELIM);

			while (token != NULL)
			{
				argv[i] = token;
				token = strtok(NULL, TOK_DELIM);
				i++;
			}
			argv[i] = NULL;
			free(line_cpy);
			
			char *path, *file_path;
			struct stat buffer;
			int command_length, directory_length;

			path = getenv("PATH");
			command_length = strlen(argv[0]);
			token = strtok(path, ":");
			for (i = 0; token != NULL; i++)
			{
				directory_length = strlen(token);
				file_path = malloc(command_length + directory_length + 2);
				strcpy(file_path, token);
				strcat(file_path, "/");
				strcat(file_path, argv[0]);
				strcat(file_path, "\0");
				if (stat(file_path, &buffer) == 0){
					if (execve(file_path, argv, NULL) == -1){            
						perror("Error:");
					}
				}
				else
				{
					free(file_path);
					token = strtok(NULL, ":");
				}
			}
		}		

	return (0);

}
