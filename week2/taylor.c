#include<stdio.h>
# include<math.h>
float convertRadians(float d)
{
	float radian ;
	radian = (3.1412/180)*d;
	return radian;
}
float computeSin(int x)
{
	float term ,sum, diff, prev;
	int i;
	sum = term = diff = x;
	for(i = 3 ;prev>0.000001;i=(i+2))
	{
		prev = term ;
		term = (-term * x *x)/(i*(i-1));
		diff = fabs(prev-term);
		sum = sum +term;
	}
	return sum;
}
int main()
{
	float degree , x , sum ;
	printf("Enter the degree : ");
	scanf("%f",&degree);
	x = convertRadians(degree);
	sum = computeSin(x);
	printf("sin(%f) = %f \n",degree ,sum);
	return 0;
}
