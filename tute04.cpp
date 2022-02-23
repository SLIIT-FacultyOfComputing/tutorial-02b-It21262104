/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long factorial (int no);	//function declaration
long nCr (int n, int r);

int main ()
{
  int n, r;

  std::cout << "Enter a value for n ";
  std::cin >> n;

  std::cout << "Enter a value for r ";
  std::cin >> r;

  std::cout << "nCr = ";
  
  std::cout << nCr(n,r);	//function calling
  std::cout << std::endl;

  return 0;
}

long factorial (int no)		//function implemetation
{
	long fact = 1;
	while (no >= 1)
	{
		fact = fact * no;
		no--; 
	}
	return fact;
}

long nCr (int n, int r)
{
	long ncr;
  int rf = 1, nf = 1;
	
	n = n - 1;
	while (n >= 1)
	{
		nf = nf * n;
		n--;
	}
	
	while (r >= 1)
	{
		rf = rf * r;
		r--;
	}
	
	ncr = factorial / (rf * nf);
	return ncr;
}
