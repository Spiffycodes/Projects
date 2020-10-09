#include <stdio.h>

int main()
{
	int radius;
	printf("Please enter a radius: ");
	scanf("%i", &radius);
	
	double area = 3.145926545 * (radius * radius);
	printf("The area of a circle with a radius of %i is %f\n",radius, area);
	return 0;
}
