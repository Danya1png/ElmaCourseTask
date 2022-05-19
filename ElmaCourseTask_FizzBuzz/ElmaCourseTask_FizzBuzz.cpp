#include <iostream>
using namespace std;

int main()
{
  
    for (int i;i<= 100;i++)
    {
        if (i%3 == 0) {
            cout << "Fizz";
        }
        if(i%5 == 0) {
            cout << "Buzz";
        }
        if (i % 15 == 0) {
            cout << "FizzBuzz";
        }
        cout << i;
    }

