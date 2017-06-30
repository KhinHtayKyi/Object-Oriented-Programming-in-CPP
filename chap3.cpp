#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	char ch;
	double x,x1;
	do{
			
		cout<<"Enter a,b,c to solve the quadratic equation";
		cin>>a>>b>>c;
	
	     d=(b*b)-(4*a*c);
   				if(d==0)	
   				{
          			x=(-b/(2*a));
          			cout<<"Value of X is"<<x;
	            }
     
   				else if (d>0)
           {
           		x=(-b+(sqrt(d)))/(2*a);
           		x1=(-b-(sqrt(d)))/(2*a);
           		cout<<"Value of X1 is"<<x<<endl<<"Value of x2 is"<<x1;
           } 

 else
          cout<<"There is no solution for x";
 cout<<"Do another (y or n)";
 cin>>ch;
}

 while(toupper(ch)!='N');
}