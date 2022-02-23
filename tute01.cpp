/* Exercise 01 */

#include <iostream>
using namespace std;

int main ()
{
  float cm, inches;

  cout << "Enter a length in cm : ";
  cin >> cm;

  inches = cm / 2.54;

  cout << "The length in inches is " << inches << endl;

  return 0;
}
