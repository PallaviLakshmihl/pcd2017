#include<stdio.h>
unsigned int rightRotate(unsigned int x , int n)
{
	for(int i = 0 ; i<n ; i++)
	{
		if(x%2==0)
		{
			x = x>>1;
		}
		else
		{
			x = x>>1;
			x = x|(1<<((sizeof(int)*8)-1));
		}
        
	}
	return x;
}
int main()
{
	unsigned x , n , newNum;
	printf("Enter the number : ");
	scanf("%u",&x);
	printf("Enter the number of rotations : ");
	scanf("%u",&n);
	newNum = rightRotate(x ,n);
	printf("The given number is %x \n ",x);
	printf("The new number afer right rotating by %d is %x\n ",n,newNum);
	return 0;
}
