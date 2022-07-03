#include <stdio.h>
#include <stdlib.h>

void gaussian(char *str, int len)
{
int i,j;
double temp;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
	temp = 0;
	for (j = 0; j < 12; j++)
	{
	temp += (double)rand()/RAND_MAX;
	}
	temp-=6;
	fprintf(fp,"%lf\n",temp);
}
fclose(fp);
}


int  main(void)
{

//Gaussian random numbers
gaussian("gau.dat", 1000000);

return 0;
}
