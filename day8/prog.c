
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	printf("\n%d\n",argc);
	if(argc>2 && argc<=3)
	{
		if(strcmp(argv[1],"square") == 0)
		{
			printf("\nArea of Square : %d\n",(atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		}
	}
	else if(argc>3 && argc <=4)
	{
		printf("\nArea of other Shape\n");
		if(strcmp(argv[1],"triangle")==0)
		{
			printf("\nTriangle Area: %f\n",(0.5*atof(argv[2])*atof(argv[3])));
		}
		else if(strcmp(argv[1],"rectangle")==0)
		{
			printf("\nRectangle Area:%d\n",(atoi(argv[2])*atoi(argv[3])));
		}
		else{
			printf("\nEnter the correct shape name\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("\n Check the no of args required\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}

