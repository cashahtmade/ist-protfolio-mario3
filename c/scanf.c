#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("Please enter your age: ");
	scanf("%i", &age);
	printf("Please enter your gpa: ");
	scanf(" %f", &gpa);
	printf("Please enter your grade: ");
	scanf(" %c", &grade);
	
	printf("Your age=%i Your gpa=%f Youre grade=%c", age,gpa,grade);
	
	return 0;
}
