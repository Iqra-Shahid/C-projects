# include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    int num1, num2;

   cout << "Enter two operands -----> ";
    cin >> num1 >> num2;
    
    cout << "Enter operator OR first Letter of Function   +   -     *    /    %      >     <   Sin    Cos   Tan    ----->  ";
    cin >> op;


    switch(op)
    {
        case '+':
            cout <<"\n Sum = " <<num1+num2;
            break;

        case '-':
            cout <<"\n Difference = " << num1-num2;
            break;

        case '*':
            cout <<"\n Product = " << num1*num2;
            break;

        case '/':
            cout<<"\n quotation (integer division) = "  << num1/num2;
            break;
        case '%':
        	cout<<"\n Mod (remainder) = "  << num1%num2;
        	break;
       	case '>':
        	 if(num1>num2) cout << num1<<" is bigger than "<<num2;
        	  else cout << num1<<" is not bigger than "<<num2;
        	  
        	break;
       	case '<':
        	 if(num1<num2) cout << num1<<" is Less than "<<num2;
        	  else cout << num1<<" is not Less than "<<num2;
        	break;
        case 'S':
        case 's':
			cout << "sin ("<<num1<<") = "<<sin(double(num1));
			break;
		case 'C':
        case 'c':
			cout << "cos ("<<num1<<") = "<<cos(double(num1));
			break;
		case 'T':
        case 't':
			cout << "Tan ("<<num1<<") = "<<tan(double(num1));
			break;
			
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
