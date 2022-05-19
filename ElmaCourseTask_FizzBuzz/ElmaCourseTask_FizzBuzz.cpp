#include <iostream>
using namespace std;

int main()
{
    const int MAX_COUNTER_VALUE = 100;
    for (int counter = 1; counter <= MAX_COUNTER_VALUE; counter++)
    {
        if (counter % 15 == 0) {
            cout << "FizzBuzz";
        }
        else if (counter % 5 == 0) {
            cout << "Buzz";
        }
        else if (counter % 3 == 0) {
            cout << "Fizz";
        }
        else cout << counter;

        cout << endl;
    }

    cin.get();
}

