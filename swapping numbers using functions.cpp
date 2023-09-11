#include <iostream>
using namespace std;
void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  cout << "\nResult after Swapping Two Numbers:\n";
  cout << "num1: " << x;
  cout << "\nnum2: " << y;
}
int main()
{
  int num1, num2;
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
  swap(num1, num2); 
  return 0;
}
