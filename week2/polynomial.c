#include<stdio.h>
float polynomial(int x , int n,float a[n+1])
{
	float sum = 0;
	sum = (a[n]*x)+a[n-1];
	for(int i = (n-2);i>=0;i++)
	{
		sum = (sum*x)+a[i];
	}
	return sum;
}
int main()
{
	int x , n;
	float a[n+1];
	float result ;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the degree of polynomial : ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Enter the value of coefficients \n");
		for(int i = 0 ;i<=n;i++)
		{
			scanf("%f",&a[i]);
		}
		result = polynomial(x ,n ,a);
		printf("Sum = %f \n",result);
	}
	else
	{
		printf("Invalid degree of polynomial \n");
	}
	return 0;
}	

