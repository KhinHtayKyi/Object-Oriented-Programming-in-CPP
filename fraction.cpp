#include<iostream>
using namespace std; 
class frac
	{
	private:int a,b;
	
	public: 
	frac()
	{
		a=b=0;
	}
	
	void getdata()
	{
		char ch;
		cout<<"enter";
		cin>>a>>ch>>b;
	}
	
	void showdata()
	{
		cout<<a<<"/"<<b;
	}
	
	float Addition(frac x,frac y)
	{
	  float de=(x.a*y.b)+(y.a*x.b);
		float no=x.b*y.b;
		float ans=de/no;
		return ans;
	}
	
	float Subtraction(frac x,frac y)
	{
	 	float de=(x.a*y.b)-(y.a*x.b);
		float no=x.b*y.b;
		float ans=de/no;
		return ans;
	}
};
int main()
{
	char ch,choice;
	do
	{
	    frac f1,f2;
	    float ans;
	    
	  f1.getdata();
       f2.getdata();
	cout<<"Enter operator u want to do";
	cin>>ch;
	if(ch=='+')
	{
		ans=f1.Addition(f1,f2);
		cout<<"Answer is"<<ans;
	}
	
	else if(ch=='-')
	{
		ans=f1.Subtraction(f1,f2);
		cout<<"Answer is"<<ans;
	}
	
	else
	cout<<"u can only type + or -";
	cout<<"Wanna try again, y or n";
	cin>>choice;
	}while(choice=='y');
}