//  Task-1
//  Iqra Shahid
//  CE-
#include <iostream>
using namespace std;
int main()
{
	float Cost;
	int HH,MM,Call_Duration;
	char Day[3];
	cout<< "Enter the Day as     Mo Tu We Th Fr Sa Su ----> ";
	cin>>Day;
	if(Day[0] =='S')Day[0]='s';
	if(Day[1] == 'U') Day[1]='u';
	if(Day[1] == 'A') Day[1]='a';
	
	cout<< "Put Current Time  using 24 hpurs time format HH MM----> ";
	cin>>HH>>MM;
	cout<< "Call durration in minutes  ----> ";
	cin>>Call_Duration;
	if(Day[0]=='s' && (Day[1]=='a'||Day[1]=='u'))
	     Cost = Call_Duration * 0.15;
	else
	  {
	  	if(HH >= 8 && (HH<=18 && MM==0) )  Cost = Call_Duration * 0.25;
	  	else  Cost = Call_Duration * 0.40;
	  }

     

	cout<<"Cost of this Call is = "<<Cost<<endl;
	return 0;
}
	
	
