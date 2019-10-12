#include <stdio.h>
#include <string.h>
int main() {
	
	FILE *fp;
	char *filename = "PE-1.txt";
	char *contents = "I want to learn PE file format!";
	fp = fopen(filename, "w");
	int i;
	for(i=0; i < strlen(contents); i++){
		putc(contents[i], fp);
	}
	printf("file contains: %s", contents);
	return 0;
}
