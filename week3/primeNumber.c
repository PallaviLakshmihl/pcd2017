#include<stdio.h>
int isprime(int n)
{
	for(int i = 2 ; i <=n/2 ;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num , status ;
	printf("Enter the number : ");
	scanf("%d",&num);
	status = isprime(num);
	if(status == 1)
		printf("%d is a prime number \n ",num);
	else
		printf("%d is not a prime number \n",num);
	return 0;
}
