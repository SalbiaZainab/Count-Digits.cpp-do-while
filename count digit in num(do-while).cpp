#include <iostream>
using namespace std;

int main() 
{
    int num, count = 0;
    cout << "Enter number: ";
    cin >> num;

    do 
	{
        num /= 10;
        count++;
    } 
	while(num != 0);

    cout << "Digits = " << count;
    return 0;
}
