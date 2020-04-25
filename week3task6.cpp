#include <iostream>

using namespace std;

int main()
{
    int popA, popB, year = 1; 
    double growth_rateA, growth_rateB; 

    cout << "Enter the population of Town A----> ";
    cin >> popA;
     cout << "Enter the growth rate of Town A ---> ";
	cin >> growth_rateA;

     cout << "Enter the population of Town B ----> ";
    cin >> popB;
     cout << "Enter the growth rate of Town B-----> ";
	cin >> growth_rateB;

    if (popA < popB && growth_rateA > growth_rateB)
    {
        {   
        do {
                (popA = ((growth_rateA / 100) * popA) + popA); // calculates population growth in one year
                (popB = ((growth_rateB / 100) * popB) + popB);
                year++;
            }

            while (popA < popB);

            cout << "Town A will surpass Town B in population after " << year << " years.\n" << endl;
            cout << "The final population of Town A is: " << popA << ".\n" << endl;
            cout << "The final population of Town B is: " << popB << ".\n" << endl;
        }
    }
    else
    {
        cout << "Invalid Data.";
    }

    return 0;
}
