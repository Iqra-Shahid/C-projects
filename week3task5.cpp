#include <iostream>
using namespace std;

int main ()
{  
    float weight, cost;
    int opt;
    char repeat;
    do{
	
    cout<< "\n\n\n\n\n Enter the Weight of Parcel-----> ";
    cin >> weight;
    do{
	
        cout<< "\n\n\n Delivery Within City Press   1  or   2  for any where else in the country -----> ";
        cin>>opt;
      }while (opt < 1  || opt > 2 );
      
    if(opt==1)
          cost = weight * 2 + 20;
        
    else  cost = weight * 2 + 40;
    
    cout << "\n Total Cost for Parcel postage = "<<cost<<endl;
    
	
	cout<<"\n\n\n Enter 'y' or 'Y' to repeat for other parcel---> ";
			cin>>repeat;
		
		} while (repeat == 'Y' || repeat == 'y');
		
		return 0;
}
