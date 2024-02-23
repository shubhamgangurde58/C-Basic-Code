#include<stdio.h>
void main()
{
	int Grade;
	printf("Enter the grade=");
	scanf("%s",&Grade);
	switch(Grade)
	{
		case 'a':
			printf("Excellent!");
			break;
		case 'b':
			printf("Good job!");
			break;
		case 'c':
			printf("Satisfactory");
			break;
			default:
			printf("Invalid grade");
			break;
	}
	return 0;
}