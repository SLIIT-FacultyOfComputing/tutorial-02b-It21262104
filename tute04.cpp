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

long nCr (int n, int r)   //function implementation
{
  return factorial (n) / (factorial (r) * factorial (n-r));
}

long factorial (int no)
{
  long fac_n = 1;
  for (int i = 1; i <= no; i++)
    {
      fac_n = fac_n * i;
    }
  return fac_n;
}