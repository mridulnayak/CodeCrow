#include<stdio.h>
int main()
{
	float lcm,r,a;
	float pi = 3.14;
	printf("enter the radius of circle\n");
	scanf("%f", &r);
	a = pi*r*r;
	printf("area of the circle is %f\n", a);
	int num1,num2;
	printf("enter any two numbers to find lcm\n");
	scanf("%d%dd",&num1,&num2);
	lcm = num1*num2;
	printf("lcm of two number is %f\n", lcm);
	return 0;
}
