#include<stdlib.h>
#include<iostream>
using namespace std;

class Factorial
{
	public:
		int num;
    	int factorial = 1;
    	void calculateFactorial();
    	void print();
};

void
Factorial::calculateFactorial()
{
    cout << "Enter a number : ";
    cin >> num;

    if (num == 0 || num == 1)
    {
        factorial = 1;
    }
    else
    {
        while (num > 1)
        {
            factorial = factorial * num;
            num--;
        }
    }
}

void Factorial::print()
{
    cout << "Factorial : " << factorial << endl;
}

main()
{
    Factorial fact;
    fact.calculateFactorial();
    fact.print();

	cout<<"\n";
	system("pause");
}
