//  Task-1
//  Iqra Shahid
//  CE-
#include <iostream>
using namespace std;
int main()
{
	int BirthMonth, BirthDay;
	char opt;
	
	
  do{
	cout<< "\n\n\n\n\n\n  Put your Month of birth, Assume  1 for January and 12 for December ----> ";
	cin>>BirthMonth;
	cout<< "Day of birth,   1   to   31     ------- > ";
	cin>>BirthDay;
	
     cout<<"\n\n\n"; // just to skip three lines
	
	if ((BirthDay>=21 && BirthDay<31 && BirthMonth==3)||(BirthDay<=19 && BirthDay>=1 && BirthMonth==4))
	   {
	    	cout<<"Your Horoscope Sign is ARIES.."<<endl;
	    	if (BirthDay<=23 && BirthMonth==3) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to PISCES as well\n";
			
			if(BirthDay>=17 && BirthMonth==4) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to TAURUS as well\n";
	    	if (BirthMonth==3||4) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Leo And Sagittarius \n" ;   
	   }
	else if ((BirthDay>=20 && BirthDay<31 && BirthMonth==4)||(BirthDay<=20 && BirthDay>=1 && BirthMonth==5))
	   {
            cout<<"Your Horoscope Sign is TAURUS.."<<endl;
            if (BirthDay<=22 && BirthMonth==4) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to ARIES as well\n";
			
			if(BirthDay>=18 && BirthMonth==5) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to GEMINI as well\n";
	    	    if (BirthMonth==4||5) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Virgo And Capricorn \n" ;   
       }
    else if ((BirthDay>=21 && BirthDay<31 && BirthMonth==5)||(BirthDay<=21 && BirthDay>=1 && BirthMonth==6))
	   {
            cout<<"Your Horoscope Sign is GEMINI.."<<endl;
            if (BirthDay<=23 && BirthMonth==5) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to TAURUS as well\n";
			
			if(BirthDay>=19 && BirthMonth==6) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to CANCER as well\n";
			if (BirthMonth==5||6) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Libra And Aquarius \n" ;   
	    	    
       }
    else if ((BirthDay>=22 && BirthDay<31 && BirthMonth==6)||(BirthDay<=22 && BirthDay>=1 && BirthMonth==7))
	   {
            cout<<"Your Horoscope Sign is CANCER.."<<endl;
            if (BirthDay<=24 && BirthMonth==6) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to GEMINI as well\n";
			
			if(BirthDay>=20 && BirthMonth==7) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to LEO as well\n";
	    	    if (BirthMonth==6||7) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Scorpio And Pisces \n" ;   
       }
    else if ((BirthDay>=23 && BirthDay<31 && BirthMonth==7)||(BirthDay<=22 && BirthDay>=1 && BirthMonth==8))
	   {
            cout<<"Your Horoscope Sign is LEO.."<<endl;
            if (BirthDay<=25 && BirthMonth==7) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to CANCER as well\n";
			
			if(BirthDay>=20 && BirthMonth==8) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to VIRGO as well\n";
			if (BirthMonth==7||8) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Sagittarius And Aries \n" ;   
	    	    
       }
    else if ((BirthDay>=23 && BirthDay<31 && BirthMonth==8)||(BirthDay<=22 && BirthDay>=1 && BirthMonth==9))
	   {
            cout<<"Your Horoscope Sign is VIRGO.."<<endl;
            if (BirthDay<=25 && BirthMonth==8) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to LEO as well\n";
			
			if(BirthDay>=20 && BirthMonth==9) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to LIBRA as well\n";
	    	    if (BirthMonth==8||9) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Taurus And Capricorn \n" ;   
       }
    else if ((BirthDay>=23 && BirthDay<31 && BirthMonth==9)||(BirthDay<=22 && BirthDay>=1 && BirthMonth==10))
	   {
            cout<<"Your Horoscope Sign is LIBRA.."<<endl;
            if (BirthDay<=25 && BirthMonth==9) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to  as VIRGO well\n";
			
			if(BirthDay>=20 && BirthMonth==10) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to SCORPIO as well\n";
			if (BirthMonth==9||10) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Gemini And Aquarius \n" ;   
	    	    
       }
    else if ((BirthDay>=23 && BirthDay<31 && BirthMonth==10)||(BirthDay<=21 && BirthDay>=1 && BirthMonth==11))
	   {
            cout<<"Your Horoscope Sign is SCORPIO.."<<endl;
            if (BirthDay<=25 && BirthMonth==10) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to LIBRA as well\n";
			
			if(BirthDay>=19 && BirthMonth==11) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to SAGITARIUS as well\n";
			if (BirthMonth==10||11) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Pisces And Cancer \n" ;   
	    	    
       }
    else if ((BirthDay>=22 && BirthDay<31 && BirthMonth==11)||(BirthDay<=21 && BirthDay>=1 && BirthMonth==12))
       {
            cout<<"Your Horoscope Sign is SAGUITTARIUS.."<<endl;
            if (BirthDay<=24 && BirthMonth==11) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to SCORPIO as well\n";
			
			if(BirthDay>=19 && BirthMonth==12) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to CAPRICORN as well\n";
	    	    if (BirthMonth==11||12) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Leo And Aries \n" ;   
       }
    else if ((BirthDay>=22 && BirthDay<31 && BirthMonth==12)||(BirthDay<=19 && BirthDay>=1 && BirthMonth==1))
       {
            cout<<"Your Horoscope Sign is CAPRICORN.."<<endl;
            if (BirthDay<=24 && BirthMonth==12) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to SAGITARIUS as well\n";
			
			if(BirthDay>=17 && BirthMonth==1) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to AQUARIUS as well\n";
			if (BirthMonth==12||1) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Taurus And Virgo \n" ;   
	    	    
       }
    else if ((BirthDay>=20 && BirthDay<31 && BirthMonth==1)||(BirthDay<=18 && BirthDay>=1 && BirthMonth==2))
	   {
	        cout<<"Your Horoscope Sign is AQUARIUS.."<<endl;
	        if (BirthDay<=22 && BirthMonth==1) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to CAPRICORN as well\n";
			
			if(BirthDay>=16 && BirthMonth==2) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to PISCES as well\n";
	    	    if (BirthMonth==1||2) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Gemini And Libra \n" ;   
	   }
	else if ((BirthDay>=19 && BirthDay<31 && BirthMonth==2)||(BirthDay<=20 && BirthDay>=1 && BirthMonth==3)) 
       {
            cout<<"Your Horoscope Sign is PISCES.."<<endl;
            if (BirthDay<=21 && BirthMonth==2) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to AQUARIUS as well\n";
			
			if(BirthDay>=18 && BirthMonth==3) cout<< "\n\n You are on a \"Cusp\", You are adjuscent to ARIES as well\n";
	    	 if (BirthMonth==2||3) cout<<" YOUR COMPATIBLE SIGNS ACCORDING TO YOUR SIGN ARE = Scorpio And Cancer \n" ;   
       }   
       
    else {
            cout<<"You Have entered wrong input"<<endl;
         }

   cout<<"\n\n\nDo you want to cntinue? Y/N  -----> ";
   cin>>opt;
  } while (opt=='Y'||opt=='y');

return 0;
}

	
	

