#include<stdio.h>
#include<stdlib.h>

int main(int argc,char**argv)
	
{
	FILE *fp_src,*fp_des;
	

       if(argc > 4)
	{
		fprintf(stderr,"\nPlease enter your name");
		exit(EXIT_FAILURE);
		
	}
       fp_src = fopen(argv[1],"r");
       if(fp_src == NULL)
       {
	       fprintf(stdout,"\nUnable to open file");
	       exit(EXIT_FAILURE);
       }
       fp_des = fopen(argv[2],"w");
       if(fp_des == NULL)
       {
	       fprintf(stdout,"\nUnable to open file");
	       exit(EXIT_FAILURE);
       }


	char ch;
	while((ch=fgetc(fp_src))!=EOF)
	{
		putc(ch,fp_des);
	}
	fclose(fp_src);
	fclose(fp_des);

return 0;
}


