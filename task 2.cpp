#include <iostream>
using namespace std;

int main()
{
    	int weight, radius, volume, Fb;
    	cout<<"Put the weight of sphere in pounds =";
    	cin>>weight;
    	cout<<"Put the radius of sphere in feets =";
        cin>>radius;
    volume= (4/3) * 3.14 * (radius * radius * radius);
    weight= 62.4/ (radius * radius * radius);
        Fb= volume * weight;
        if (Fb>=weight) cout<<"The object will float having volume ="<<Fb;
        else cout<<" The object will sink having volume ="<<Fb;
	return 0;
}
