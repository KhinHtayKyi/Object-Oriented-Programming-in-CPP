#include<iostream> 
using namespace std;
int main()
{
	int yard1,feet1,inches1;
	int yard2,feet2,inches2;
	int yard3,feet3,inches3;
	int ansyard,ansfeet,ansinches; 
	char ch;
	
	
	cout<<"Enter length	:";
	cin>>yard1>>ch>>feet1>>ch>>inches1;
	cout<<"Enter Width	:";
	cin>>yard2>>ch>>feet2>>ch>>inches2;
	cout<<"Enter height	:";
	cin>>yard3>>ch>>feet3>>ch>>inches3; 
	
	    /*  int yard=yard1*yard2*yard3;
		  int feet=feet1*feet2*feet3;
		  int inches=inches1*inches2*inches3;
		  
		 if(inches>=12)
		 {
			feet+=inches/12;
			inches=inches%12;
 			
 		}
		 if(feet>=3)
		 {
 			yard+=feet/3;
 			feet=feet%3;
 		}
		 cout<<"Volume of the room is"<<yard<<ch<<feet<<ch<<inches;*/

		 	
    int l=yard1*36+feet1*12+inches1;
	int w=yard2*36+feet2*12+inches2;
	int h=yard3*36+feet3*12+inches3;
	int volume=l*w*h;   
	cout<<"Volume in cubic inches is"<<volume;
	ansyard=volume/(27*1728);
	ansfeet=(volume%(27*1728))/(1728);
	ansinches=(volume%(27*1728))%(1728);
	
	cout<<"Volume of the room is"<<ansyard<<"cubic yard"<<ansfeet<<"cubic feet"<<ansinches<<"cubic inches";
}
