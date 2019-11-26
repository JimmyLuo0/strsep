#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char ** parse_args(char * line){
	char *curr;
	strncpy(curr, line, 100);
	char ** tokens;
	//int i = 0;
	//while(&curr){
		//tokens[i] = strsep(&curr, " ");
		//i++;
	//}
	return tokens;
}
int main(){
	char ex[100] = "this is a scam";
	parse_args(ex);
	return 0;
}
