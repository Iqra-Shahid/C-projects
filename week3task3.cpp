
// C++ Program to get a number in the Range of 1000 to 3000  Arabic (ordinary) numeral and
// outputs the year written in roman numerals.
#include <iostream> 
using namespace std; 
  

  
// Driver program to test above function 
int main() 
{ 
      int Year;
      char opt;
	  // storing roman values of digits from 0-9  
     // when placed at different places 
     string M[] = {"", "M", "MM", "MMM"};
	  
     string C[] = {"", "C", "CC", "CCC", "CD", "D","DC", "DCC", "DCCC", "CM"}; 
     
     string X[] = {"", "X", "XX", "XXX", "XL", "L",  
                        "LX", "LXX", "LXXX", "XC"}; 
     string I[] = {"", "I", "II", "III", "IV", "V",  
                        "VI", "VII", "VIII", "IX"}; 
                        
     do{
	     do{
		 
	         cout << "\n\n\nEnter the Year between the range of 1000  to 3000 needed to convert in Roman ---> ";
             cin>>Year;
		   }  while(Year<1000 || Year > 3000);
     
          
     // Converting to roman 
         string thousands = M[Year/1000]; 
         string hundereds = C[(Year%1000)/100]; 
         string tens =  X[(Year%100)/10]; 
         string ones = I[Year%10]; 
          
         string ans = thousands + hundereds + tens + ones; 
           
         cout << ans<<endl; 
      
        cout<<"\n\n\n\n Want to continue for other converstion ---> ";
        cin>>opt;
       } while(opt=='y'||opt=='Y');
  
      return 0; 
} 
