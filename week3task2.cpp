#include <iostream>
using namespace std;

int main ()
{  
    int N;
	float Score, Points,Tot_Score, Tot_Points, Per;
    char repeat;
    do{
	   Tot_Score=0, Tot_Points=0; 
       cout<< "\n\n\n\n\n How many exercises to input-----> ";
       cin >> N;
    
        for(int I = 1 ; I <= N ; I++)
    {
	
        cout<< "\n Score received for exercise "<<I<<" -----> ";
        cin>>Score;
        Tot_Score+=Score;
        cout<< "Total points possible for exercise"<<I<<" -----> ";
        cin>>Points;
        Tot_Points+=Points;
    }
      Per = Tot_Score/Tot_Points*100.0;
	  cout<<"\n\n\n Your total is "<<Tot_Score<<" out of "<<Tot_Points<<", or "<<Per<<"%."<<endl;
   
	
	cout<<"\n\n\n Enter 'y' or 'Y' to repeat ---> ";
			cin>>repeat;
		
		} while (repeat == 'Y' || repeat == 'y');
		
		return 0;
}
