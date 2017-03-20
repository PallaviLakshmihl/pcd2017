#include<stdio.h>
unsigned int rightRotate(unsigned int x ,unsigned int n)
{
	n = n%(sizeof(int)*8);
	int l = (sizeof(int)*8)-n;
	return (x>>n|x<<l);
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
