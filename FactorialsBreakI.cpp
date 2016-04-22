/*Entering -1 gave the answer 1
to change the code one needs to add an if statement that will check if the code is a negative number
my minimum number is 12
*/

#include <iostream>
using namespace std;

int main ()
{
    short number;
    cout << "Enter a number: ";
    cin >> number;
    if(number>=0 && number <=12)
    {
    cout << "The factorial of " << number << " is ";
    int accumulator = 1;
    for(;number > 0; accumulator *= number--);
    cout << accumulator << ".\n";
        }
else{
    cout << "Negative numbers are not allowed!Numbers greater than 12 will produce wrong output!\n";
    }
return 0;
}


