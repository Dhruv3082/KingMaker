#include<stdio.h>

int main() {
	int marks;
	printf("enter the marks:\n");
	scanf_s("%d", &marks);
	if (marks >= 85 && marks <= 100) {
		printf("student get Grade A.\n");
	}
	else
	{
		if (marks >= 70 && marks <= 84)
		{
			printf("student get Grade B.\n");
		}
		else
		{
			if (marks >= 55 && marks <= 69)
			{
				printf("student get Grade C.\n");
			}
			else
			{
				if (marks >= 40 && marks <= 54)
				{
					printf("student get Grade D.\n");
				}
				else
				{
					printf("student get Grade F.\n");
				}
			}
		}
	}
	return 0;
}
