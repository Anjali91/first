#include<stdio.h>

int main()
{
	int i,j,k;
	int temp=4;
	for(i=1;i<=4;i++)
	  {
		  for(k=1;k<=temp;k++)
			  printf(" ");
		  temp--;
		for(j=1;j<=2*i-1;j++)
			printf("*"); 
	         	
		 
	  printf("\n");
	  }
		return 0;
}

