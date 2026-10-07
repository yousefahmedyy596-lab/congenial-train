#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}*/
//###################################################
/*int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}*/
//##################################################
/*void fibSeries(int n, int a, int b)
{
	if (n == 0)
		return;

	printf("%d ", a);
	fibSeries(n - 1, b, a + b);
}*/
//###################################################
/*int sumDigits(int n) 
{
	if (n == 0)
		return 0;
	return (n % 10) + sumDigits(n / 10);
}*/
//#################################################
/*int reverse(int n, int rev) 
{
	if (n == 0)
		return rev;
	return reverse(n / 10, rev * 10 + n % 10);
}*/
//#################################################
/*int power(int a, int b)
{
	if (b == 0)
		return 1;
	return a * power(a, b - 1);
}*/
//#############################################
/*int gcd(int a, int b) 
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}*/
//#############################################
/*void printDesc(int n)
{
	if (n == 0)
		return;
	printf("%d ", n);
	printDesc(n - 1);
}*/
//#############################################
/*void printAsc(int n) 
{
	if (n == 0)
		return;
	printAsc(n - 1);
	printf("%d ", n);
}*/
//#############################################
/*int factorial(int n) 
{
	printf("Enter n = %d\n", n);

	if (n == 0)
		return 1;

	int result = n * factorial(n - 1);

	printf("Return n = %d\n", n);
	return result;
}*/

int main()
{
	/*int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factorial = %d\n", factorial(n));*/
//##############################################
	/*int n;
	printf("Enter position: ");
	scanf("%d", &n);
	printf("Fibonacci = %d\n", fib(n));*/
//#############################################
	/*int n;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	fibSeries(n, 0, 1);*/
//############################################
	/*int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Sum = %d\n", sumDigits(n));*/
//###########################################
	/*int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Reversed = %d\n", reverse(n, 0));*/
//##############################################
	/*int a, b;
	printf("Enter base and power: ");
	scanf("%d %d", &a, &b);
	printf("Result = %d\n", power(a, b));*/
//##############################################
	/*int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("GCD = %d\n", gcd(a, b));*/
//##############################################
	/*int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printDesc(n);*/
//#############################################
	/*int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printAsc(n);*/
//###########################################

	/*int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Result = %d\n", factorial(n));*/

	getchar();
	getchar();
	return 0;
}