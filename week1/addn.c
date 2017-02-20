#include<stdio.h>
int add(int a[],int n)
{
	int i , sum;
	sum = 0;
	for(i = 0; i<n ;i++)
	{
		sum = sum + a[i];
	}
	return sum;

}
void main()
{
	int n , i , sum;
	int a[100];

	printf("Enter number of elements \n ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum = add(a ,n);
	printf("§um = %d \n ",sum);
}

