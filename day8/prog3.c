#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	int i=0;
	
	printf("\n No of Argument count=%d",argc);
	
	for(i=0;i<argc;i++)

		printf("\nargv[%d] = %s",i,argv[i]);

	for(i=0;i<strlen(argv[0])+1;i++)

		printf("\n%c = %d",argv[0][i],argv[0][i]);

	printf("\n\n");

	return 0;
}
