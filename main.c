#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char ** parse_args(char * line){
	char *curr = line;
	char **tokens = malloc(5 * sizeof(char *));
	int i = 0;
	while(curr){
		tokens[i] = strsep(&curr, " ");
		printf("tokens:[%s]\n", tokens[i]);		
		i++;
	}
	return tokens;
}
int main(){
	char line[100] = "ls -a -l";
	char **args = parse_args(line);
	printf("testing using ls -a -l\n");
	execvp(args[0], args);
	return 0;
}
