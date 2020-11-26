#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

#define MAX 10

int main(int argc, char* argv[]){
	if(argc != 2){
		printf("Usage: %s input-file-name",argv[0]);
		return 0;
	}

	FILE *fd;
	fd=fopen(argv[1],"w+");
	if(fd==NULL){
		printf("%s file open failed",argv[1]);
		return 0;
	}

	int temp=0;
	while(temp < MAX){
		fprintf(fd,"%d, %d\n",temp,rand());
		temp++;
	}
	
	fclose(fd);
}
