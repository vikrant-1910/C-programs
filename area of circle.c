#include<stdio.h>
int main()
{
	double r,area,pi=3.14;
	printf("Enter the radious of the circle:");
	scanf("%lf",&r);
	area=pi*r*r;
	printf("Area of circle is :%lf\n",area);
	return 0;
}
