//armstrong
#include<stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum=0,rem;
	printf("enter the number:");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+pow(rem,3);
		a=a/10;
	}
	if(sum==b)
	{
		printf("%d is armstrong",b);
	}
	else
	{
		printf("%d is not armstrong",b);
	}
	return 0;
}
