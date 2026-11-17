#include <stdio.h>
#include <math.h>

void task_7();
void task_42();
void task_51();
void task_98();
void task_114();	
void task_163();
void task_170();
void task_189();
void task_225();
void task_226();

int main()
{

	int taskNumber;
	while (1)
	{
		printf("Enter task number (7, 42, 51, 98, 114, 163, 170, 189, 225, 226) or 0 to exit: ");
		if (scanf_s("%d", &taskNumber) != 1)
		{
			printf("Invalid input. Please enter a valid task number.\n");
			while (getchar() != '\n'); 
			continue;
		}	
		if (taskNumber == 0)
		{
			printf("Exiting the program.\n");
			break;
		}
		switch (taskNumber) 
		{
		case 7:
			task_7();
			break;
		case 42:
			task_42();
			break;
		case 51:
			task_51();
			break;
		case 98:
			task_98();
			break;
		case 114:
			task_114();
			break;
		case 163:
			task_163();
			break;
		case 170:
			task_170();
			break;
		case 189:
			task_189();
			break;
		case 225:
			task_225();
			break;
		case 226:
			task_226();
			break;
		default:
			printf("Invalid task number. Please try again.\n");
		}
	}

	return 0;
}

void task_7()
{
	printf("Task 7.\n\n");
	int a = 143;
	int b = 777;
	int dobutok = a * b;

	printf("Product of %d and %d is %d\n", a, b, dobutok);

	for (int i = 1; i <= 9; i++)
	{
		int result = dobutok * i;
		printf("Result: %d\n\n", result);
	}
	return;
}

void task_42() 
{
	printf("Task 42.\n\n"); //Обчислити в = cos x + cos x2 + cos x3 + ... + cos xп.
    
	int n;
	double x, sum = 0.0;

	while (1)
	{
		printf("Enter the value of x (in radians): ");
		if (scanf_s("%lf", &x) != 1)
		{
			printf("Invalid input. Please enter a valid number for x.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}
	
	while (1)
	{
		printf("Enter the value of n (positive integer): ");
		if (scanf_s("%d", &n) != 1 || n <= 0)
		{
			printf("Invalid input. Please enter a positive integer for n.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}
	for (int i = 1; i <= n; i++)
	{
		sum += cos(pow(x, i));
	}
	printf("The result of the summation is: %lf\n\n", sum);

	return;

}

void task_51() 
{
	printf("Task 51.\n\n");

	int n = 0;
	unsigned long long sum = 0;

	while (1)
	{
		printf("Enter a positive integer n: ");
		if (scanf_s("%d", &n) != 1 || n <= 0)
		{
			printf("Invalid input. Please enter a positive integer for n.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	for (int i = n; i <= 2 *n; i++)
	{
		sum += (unsigned long long)i * i;
	}
	printf("The sum of squares of integers from %d to %d is: %llu\n", n, 2 * n, sum);
	return;
}

void task_98() //Відома кількість опадів, що випали за кожен день січня та березня. Визначити середньоденну кількість опадів за кожний місяць.
{
	printf("Task 98.\n\n");

	int days = 31; 
	double januaryTotal = 0.0;
	double marchTotal = 0.0;
	double dailyRainfall;

	printf("Enter the daily rainfall for January:\n");

	for (int i = 0; i < days; i++)
	{
		printf("Day %d: ", i + 1);
		if (scanf_s("%lf", &dailyRainfall) != 1 || dailyRainfall < 0)
		{
			printf("Invalid input. Please enter a non-negative number.\n");
			while (getchar() != '\n'); 
			i--; 
			continue;
		}
		januaryTotal += dailyRainfall;
	}

	printf("Enter the daily rainfall for March:\n");

	for (int i = 0; i < days; i++)
	{
		printf("Day %d: ", i + 1);
		if (scanf_s("%lf", &dailyRainfall) != 1 || dailyRainfall < 0)
		{
			printf("Invalid input. Please enter a non-negative number.\n");
			while (getchar() != '\n');
			i--; 
			continue;
		}
		marchTotal += dailyRainfall;
	}

	printf("Results:\n");

	double januaryAverage = januaryTotal / days;
	double marchAverage = marchTotal / days;
	printf("Average daily rainfall for January: %.2lf\n", januaryAverage);
	printf("Average daily rainfall for March: %.2lf\n", marchAverage);

	return;
}

void task_114() //Покупець має заплатити до каси С грн. У нього є купюри по 1, 5, 10, 50, 100, 500, 1000 та 10000 грн. Скільки купюр різної гідності віддасть покупець, якщо він починає платити із найбільших купюр?
{
	printf("Task 114.\n\n");

	int c = 0;

	while (1)
	{
		printf("Enter the amount to pay (C) in UAH: ");
		if (scanf_s("%d", &c) != 1 || c < 0)
		{
			printf("Invalid input. Please enter a non-negative integer for C.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	while (c > 0)
	{
		if (c >= 10000)
		{
			printf("10000 UAH: %d\n", c / 10000);
			c %= 10000;
		}
		else if (c >= 1000)
		{
			printf("1000 UAH: %d\n", c / 1000);
			c %= 1000;
		}
		else if (c >= 500)
		{
			printf("500 UAH: %d\n", c / 500);
			c %= 500;
		}
		else if (c >= 100)
		{
			printf("100 UAH: %d\n", c / 100);
			c %= 100;
		}
		else if (c >= 50)
		{
			printf("50 UAH: %d\n", c / 50);
			c %= 50;
		}
		else if (c >= 10)
		{
			printf("10 UAH: %d\n", c / 10);
			c %= 10;
		}
		else if (c >= 5)
		{
			printf("5 UAH: %d\n", c / 5);
			c %= 5;
		}
		else
		{
			printf("1 UAH: %d\n\n", c);
			break; 
		}
	}
	return;
}

void task_163() 
{
	printf("Task 163.\n\n");

	long long n = 0;
	long long temp = 0;
	long long reversed = 0;
	int a = 0;
	long long mult = 1;

	while (1)
	{
		printf("Enter the value of n: ");
		if (scanf_s("%llu", &n) != 1 || n <= 0)
		{
			printf("Invalid input. Please enter a positive integer for n.\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}

	while (1)
	{
		printf("Enter the digit a to remove from n: ");
		if (scanf_s("%d", &a) != 1 || a < 0 || a > 9)
		{
			printf("Invalid input. Please enter a single digit (0-9) for a.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	// a)
	temp = n;
	while (temp > 0)
	{
		reversed = reversed * 10 + (temp % 10);
		temp /= 10;
	}

	printf("a) Reversed number: %llu\n\n", reversed);

	// b)
	temp = n;
	int digits = 0;
	while (temp > 0)
	{
		digits++;
		temp /= 10;
	}
	mult = 1;
	for (int i = 0; i <= digits; i++)
	{
		mult *= 10;
	}

	long long result_b = 2 * mult + n * 10 + 2; 
	printf("b) Number with '2' appended at the beginning and end: %llu\n\n", result_b);

	// c)
	long long result_c = 0;
	mult = 1;
	temp = n;
	while (temp > 0)
	{
		int digit = temp % 10;
		if (digit != a)
		{
			result_c += digit * mult;
			mult *= 10;
		}
		temp /= 10;
	}
	printf("c) Number after removing all occurrences of %d: %llu\n\n", a, result_c);

	// d)
	int lastDigit = n % 10;
	temp = n;
	mult = 1;
	while (temp >= 10)
	{
		mult *= 10;
		temp /= 10;
	}
	int firstDigit = temp;

	long long middlePart = (n % mult)/10; 

	long long result_d = lastDigit * mult + middlePart * 10 + firstDigit; 
	printf("d) Number after swapping first and last digits: %llu\n\n", result_d);

	// e)
	temp = n;
	mult = 1;
	while (temp > 0)
	{
		mult *= 10;
		temp /= 10;
	}

	long long result_e = n * mult + n; 

	printf("e) Number after the same number has been appended to it: %llu\n\n", result_e);

	return;
}

void task_170() 
{
	printf("Task 170.\n\n"); 


	double n = 0.0;
	double a[15]; 
	int is_ascending = 1; // Прапорець правильності

	
	while (1) 
	{
		printf("Enter a number n: ");
		if (scanf_s("%lf", &n) != 1) 
		{
			printf("Invalid input! Please enter a NUMBER for n.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	
	printf("\nEnter a sequence of 15 real numbers:\n");
	for (int i = 0; i < 15; i++) 
	{
		while (1) 
		{
			printf("Enter a number %d: ", i + 1);
			if (scanf_s("%lf", &a[i]) != 1) 
			{
				printf("Invalid input! Please enter a NUMBER.\n");
				while (getchar() != '\n'); 
				continue; 
			}
			break;
		}
	}


	for (int i = 1; i < 15; i++) {
		if (a[i] <= a[i - 1]) 
		{
			is_ascending = 0; 
			break; 
		}
	}

	for (int i = 0; i < 15; i++) 
	{
		if (a[i] = n)
		{
			is_ascending = 0;
			printf("\n[ERROR] The sequence contains the number n!\n");
			break;
		}
	}

	if (is_ascending == 0) 
	{
		printf("\n[ERROR] The sequence is not strictly increasing!\n");
		printf("Please restart the program and enter correct data.\n"); 
		return;
	}

	//Пункт А (Числа, менші за n)
	
	printf("\na) Numbers less than n (%g):\n", n);
	for (int i = 0; i < 15; i++)
	{
		if (a[i] < n)
		{
			printf("%g ", a[i]);
		}
	}
	printf("\n");

	
	//Пункт Б (Інтервал для n)
	printf("\nb) The number n (%g) is located between:\n", n);
	for (int i = 0; i < 14; i++) 
	{
		if (a[i] < n && n < a[i + 1])
		{
			printf("Element #%d: %g\n", i + 1, a[i]);
			printf("Element #%d: %g\n", i + 2, a[i + 1]);
			break; 
		}
	}

	
	return;


}

void task_189() 
{
	printf("Task 189.\n\n");

	double a;
	double sum = 0.0; 
	double i = 1.0;   // Знаменник
	int is_first = 1; // Прапорець для форматування (перше число чи ні)


	while (1) 
	{
		printf("Enter a real number a: ");
		if (scanf_s("%lf", &a) != 1) 
		{
			printf("Invalid input! Please enter a number.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	printf("\nNumbers less than %g:\n", a);

	while (1) 
	{
		sum += 1.0 / i; 

		
		if (sum >= a) 
		{
			break;
		}

	
		if (is_first) 
		{
			printf("%g", sum);
			is_first = 0;
		}
		else 
		{
			printf(", %g", sum); 
		}

		i++; 
	}

	printf("\n"); 
	return;

}

void task_225() 
{
	printf("Task 225.\n\n");

	double a, b, h;
	double x, F;


	while (1) 
	{
		printf("Enter the start of the interval (a): ");
		if (scanf_s("%lf", &a) != 1)
		{
			printf("Invalid input! Please enter a number for a.\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	while (1)
	{
		printf("Enter the end of the interval (b): ");
		if (scanf_s("%lf", &b) != 1 || b <= a)
		{
			printf("Invalid input! Please enter a number for b (b > a).\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}

	while (1)
	{
		printf("Enter the step (h): ");
		if (scanf_s("%lf", &h) != 1 || h <= 0)
		{
			printf("Invalid input! Please enter a number for h (h > 0).\n");
			while (getchar() != '\n'); 
			continue;
		}
		break;
	}

	printf("\n----------------------\n");
	printf("|    x     |  F(x)    |\n");
	printf("----------------------\n");

	
	for (x = a; x <= b + (h / 2.0); x += h) {
		F = sin(x) * sin(x);
		printf("| %8.4lf | %8.4lf |\n", x, F);
	}

	printf("----------------------\n");

	return;
}

void task_226()
{
	printf("Task 226.\n\n");
	double a, b, h;
	double x, F;
	
	while (1)
	{
		printf("Enter the start of the interval (a): ");
		if (scanf_s("%lf", &a) != 1)
		{
			printf("Invalid input! Please enter a number for a.\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}
	while (1)
	{
		printf("Enter the end of the interval (b): ");
		if (scanf_s("%lf", &b) != 1 || b <= a)
		{
			printf("Invalid input! Please enter a number for b (b > a).\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}
	while (1)
	{
		printf("Enter the step (h): ");
		if (scanf_s("%lf", &h) != 1 || h <= 0)
		{
			printf("Invalid input! Please enter a number for h (h > 0).\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}
	printf("\n----------------------\n");
	printf("|    x     |  F(x)    |\n");
	printf("----------------------\n");
	for (x = a; x <= b + (h / 2.0); x += h) {
		F = 2.0 * cos(x) - 1.0;
		printf("| %8.4lf | %8.4lf |\n", x, F);
	}
	printf("----------------------\n");
	return;
}


	


	




