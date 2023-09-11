#include <iostream>
using namespace std;
int main()
{
    int num, r, sum = 0, temp;
    cout << "enter the number   :\n";
    cin >> num;
    for (temp = num; num != 0; num = num / 10) 
	{
        r = num % 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;
}
