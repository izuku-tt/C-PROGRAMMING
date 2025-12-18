/*
0 and 1 triangle
eg -
1
0 1
1 0 1
0 1 0 1
 this is when n==4
  this is the method 1 , ,a new concept in method 2
*//*
#include <stdio.h>

int main()
{
	int n, a;
	printf ("enter the number of rows :");
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		if(i%2!=0) a=1 ;
		else a=0 ;

		for (int j = 1; j<=i; j++)
		{
			printf(" %d ", a);
			if (a==0) a=1;
			else a=0;
		}
		printf("\n");
	}
	return 0;
}*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the number of rows :");
	scanf("%d", &n);
		for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
		{
            if((i+j)%2== 0) printf (" 1 ");
            else printf(" 0 ");
		}
		printf("\n");
	}
return 0;
}



