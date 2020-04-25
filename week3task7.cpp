#include <iostream>
using namespace std;

int main()
{
    long t1 = 0, t2 = 1, nextTerm = 0;



    cout << "Fibonacci Series upt0 term 200 : \n";
    cout << t1<<", "<<t2<<", ";
   do
    {
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(nextTerm > 200) break;
        cout << nextTerm << ", ";
    } while (nextTerm < 200);
    return 0;
}
