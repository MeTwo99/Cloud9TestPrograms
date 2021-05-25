#include <iostream>
using namespace std;
int main()
{
  int i;
  cin >> i;
  cout << "num " << i << (i % 2 == 0 ? " is " : " is not ") << "divisible by 2" << endl;
} 