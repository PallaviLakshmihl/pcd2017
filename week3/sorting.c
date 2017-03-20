#include<stdio.h>
void bubbleSort(int n ,int a[n])
{
	int temp ;
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0 ; j < (n-i-1) ; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main ()
{
	int n ;
	printf("Enter the number of numbers : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d array elements to sort ",n);
	for(int i = 0 ; i < n ; i ++)
	{
		scanf("%d",&a[i]);
	}
	bubbleSort(n , a);
	printf("Array elements after sorting : \n");
	for(int i = 0 ; i < n ; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

