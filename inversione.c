#include <stdio.h>
#define N[10];

void riempi (int a[], int t)																
{
	int i=0;
	for(i;i<t;i++)
	{
		scanf("%d",a+i);
	}
}

	void scambia (int a[], int t)
	{
		int i=0,x;
		fro (a;a<N+N/2;a+i)
		{
			x=a+i;
			*(a+i)=*(a+N-i-1);
			*(a+N-i-1)=x;
			i++;
		}
	}
		
	

int main (void)
{
	int a[N];
	riempi (a,'N');
	scambia (a,'N');
	printf("visualizza scambia %d", scambia);
	
	
	

	return 0;
}