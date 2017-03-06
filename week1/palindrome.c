#include<stdio.h>
int palindrome(int num)
{
	int reverseNum = 0;
	while(num > 0)
	{
		reverseNum = (reverseNum*10)+(num%10);
		num = num/10;
	}
	return reverseNum;
}

int main()
{
        int givenNum ,reverseNum;
        printf("Enter the number :");
        scanf("%d",&givenNum);
        reverseNum = palindrome(givenNum);
        if(givenNum==reverseNum)
        {
                printf("%d is a palindrome \n",givenNum);
        }
        else
        {
                printf("%d is not a palindrome \n",givenNum);
        }
        return 0;
}

