// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
	//printf_s("hello world\n");
	printf_s("enter the numbers\n");
	int number1, number2;
	scanf_s("%d", &number1);
	scanf_s("%d", &number2);
	int choice = -1;
//	int sa;

	while (choice != 5)
	{
		printf_s("enter the choice you want\n");
		printf_s("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
	//	printf_s("\n");
		//scanf_s("%d", &sa);
		scanf_s("%d", &choice);
		getchar();
		switch (choice) {

		case 1: //printf_s("here i am\n");
				printf_s("Addition of %d and %d is %d\n",number1,number2, add(number1, number2));
			break;
		case 2: printf_s("subtraction of %d and %d is %d\n", number1, number2, sub(number1, number2));
			break;
		case 3: printf_s("multiplication of %d and %d is %d\n", number1, number2, mul(number1, number2));
			break;
		case 4: printf_s("Division of %d and %d is %d\n", number1, number2, div(number1, number2));
			break;
		case 5: break;
		}
		printf_s("\n");
	//	scanf_s("%d", &sa);
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
