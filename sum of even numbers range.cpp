#include <iostream>
using namespace std;
int even_range(int start, int end)
 {
    int sum = 0;
    for (int i = start; i <= end; i++)
 {
      if (i % 2 == 0) 
		{ 
         sum += i;
   }
 }
    return sum;
} 
int main()
 {
    int start = 10;
    int end = 20;
    int sum = even_range(start, end);
    cout << "Sum of even numbers from " << start << " to " << end << " is: " << sum <<endl;
    return 0;
}
