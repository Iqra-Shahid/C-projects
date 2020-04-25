// Babylonian_Algorithm
#include <iostream>
//#include <cstdlib>
using namespace std;
int main()
{
	int count=5, I, n;
	double answer_n, r,  guess=2.0	;

	cout << "This program will compute the square root\n";
	cout << "of a number using the Babylonian algorithm.\n";
	cout << "We assume a 'guess' number 2 to divide by:\n\n\n";
	cout << "Please enter a whole number and press the return key -----> ";
	cin >> n;
	r = n/guess;
	guess = (guess + r)/2.0;

	for(I=1;  I<= count;  I++)
	  {
		r = n/guess;
	    guess = (guess + r)/2.0;

        if (guess <= (guess * 0.01) + guess)
			answer_n = guess;
	    else
		   	r = n/guess;
        guess = (guess + r)/2;

       }

	cout.setf(ios::fixed);
  	cout.setf(ios::showpoint);
  	cout.precision(2);
	cout << "The sqaure root of "<< n << " is  approximately " << answer_n<<endl;

return 0;

}

