#include <iostream>
using namespace std;
int main()
{
  int i;
  cout << "Enter a number: ";
  cin >> i;
  cout << "The number " << i << (i % 2 == 0 ? " is " : " is not ") << "divisible by 2" << endl;
} 