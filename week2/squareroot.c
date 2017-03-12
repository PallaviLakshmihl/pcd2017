#include<stdio.h>
#include<math.h>
float squareRoot(float num)
{
	float k1,k2;
	k1 =1;
	k2 = 0.5 * (k1+(num/k1));
	while(fabs(k1-k2)>0.0000001)
	{
		k1 = k2;
		k2 = 0.5*(k1+(num/k1));
	}
	return k2;
}
int main()
{
	float num ,result;
	printf("Enter the number : ");
	scanf("%f",&num);
	result = squareRoot(num);
	printf("sqare root of %f is %f ",num ,result);
	return 0;
}
