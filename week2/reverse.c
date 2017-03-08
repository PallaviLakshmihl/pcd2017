#include<stdio.h>
int reverseNum(int num)
{
	int reverse = 0;
	while(num>0)
	{
		reverse = (reverse *10)+(num%10);
		num = num/10;
	}
	return reverse;
}
int main()
{
	int givenNum , reverse ;
	printf("Enter the number : ");
	scanf("%d",&givenNum);
	reverse = reverseNum(givenNum);
	printf("Reverse of given number %d is %d \n",givenNum 
,reverse);
	return 0;
}
