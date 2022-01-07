//sum of n terms in while loop
#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter n th term :");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("total sum is %d ",sum);
}
