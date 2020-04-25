#include <iostream>
using namespace std;

int main()
{
	float marks, grade;
	cout<<" Enter your marks to get to know about your grades = " ;
	cin>>marks;
	grade = (marks/50) * 100;
	
	if ( grade>=45)cout<<" Your Grade is \'A\' ";
	else if (grade >=40 ) cout<< " Your Grade is \'B\' ";
	else if ( grade>=35) cout<<" Your Grade is \'C\' ";
	else if ( grade>=30) cout<<" Your Grade is \'D\' ";
	else  cout<<" Your Grade is \'F\' ";
	return 0;
	
}
