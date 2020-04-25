#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0;
int num_customers;
int sentinel=0;
const double UnitPrice1= 6.95, UnitPrice2= 5.75,UnitPrice3= 7.25, UnitPrice4= 8.95, UnitPrice5= 4.95;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0;


cout<<"___________________Menu________________\n\n"
     <<"_____(1) Buffalo_Wings		    Rs:6.95_____\n"
     <<"_____(2) Super_Burger		    Rs:5.75_____\n"
	 <<"_____(3) Italian_Sandwich	    Rs:7.25_____\n"
	 <<"_____(4) Shrimp_Nuggets		    Rs:8.95_____\n"
	 <<"_____(5) Veggie_Supreme		    Rs:4.95_____\n";
	 

         
         
while (order != sentinel)
{
cout<<"From the list of food, what would you like:\n";
cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                     
                cout<<"How many Buffalo Wings would you like to order:\n";
                               cin>>num1;
                
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
                
          
                 
				case 2: 
                cout<<"How many Super Burgers would you like to order:\n";
				               cin>>num2;
               
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                
                case 3: 
                cout<<"How many Italian Sandwiches would you like to order:\n";
                                  cin>>num3;
                
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                
                 
                case 4: 
                cout<<"How many Shrimp Nuggets would you like to order:\n";
                                cin>>num4;
                
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                
                
                case 5: 
                cout<<"How many would Veggie Supremes you like to order:\n";
                                cin>>num5;
                
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                
                default: cout<<"Please choose a valid item from our list\n";
                }
                

{       

cout<<"You have ordered:\n\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"QUANTITY"<<right<<setw(15)<<"UNIT PRICE"<<right<<setw(20)<<"AMOUNT OF SALE\n";


cout<<"Buffalo Wings"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"Super Burger:"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"Italian Sandwich:"<<setw(6)<<left<< num3 <<setw(16)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

cout<<"Shrimp Nuggets:"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"Veggie Supreme:"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;
}
              }

system("PAUSE");
return 0;
}
