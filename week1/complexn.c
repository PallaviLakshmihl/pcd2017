#include<stdio.h>
struct complex {
        float real;
        float img;
};
struct complex add(int n,struct complex a[n]) {
        struct complex sum;
        for(int i = 0 ; i<n ;i++)
        {
                sum.real = sum.real + a[i].real;
                sum.img = sum.img+a[i].img;
        }
        return sum;
}
int main() {
        int n;
        struct complex a[n],sum;
        printf("Enter the number of complex numbers :");
        scanf("%d",& n);
        printf("Enter %d imaginary numbers ",n);
        for(int i = 0 ; i<n ;i++)
        {
                printf("Enter real part of %d complex number :");
                scanf("%f",& a[i].real);
                printf("Enter imaginary part of %d complex number :");
                scanf("%f",& a[i].img);
        }
        sum = add(n,a);
        printf("Sum of %d complex numbers is %f + i%f",n,sum.real,sum.img);
}
