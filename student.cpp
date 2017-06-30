#include<iostream>
#include<string>
using namespace std;
class Date{
	private:int day,month,year;
	public:
	void getdate()
	{
		 char ch;
		cout<<"Enter date";
		cin>>day>>ch>>month>>ch>>year;
	}
	
	void showdate()
	{
		cout<<"Date is"<<day<<"/"<<month<<"/"<<year;
	}
};

class Biography
{
	private:char name[20];
	//string s;
int rollno;
//char address[20];
		
	public:
	void getbio()
	{
		cout<<"Enter name";
      cin>>name;
	   //cin.getline(name,20);
	   cin.ignore();
	  //getline(cin,s);
	cout<<"Enter rollno";
	cin>>rollno;
	
	//cout<<"enter address";
	//cin.ignore();
	//cin.getline(address,20);
	}
	
	void showbio()
	{
		cout<<"name is"<<name<<"rollno is"<<rollno;
	//	cout<<"name is"<<name<<"rollno is"<<address;
	}
};

class YCCstudent
{
	private:static int registerno;
	    int count;
	    Date d;
	    Biography b;
	    
	    public:
	    
	    YCCstudent()
	    {
    		registerno++;
    		count=registerno;
    	}
    	
    	void getdata()
    	{
	    	d.getdate();
	    	b.getbio();
	    }
	    
	    void showdata()
	    {
    		cout<<"Your register no is"<<count;
    		d.showdate();
    		b.showbio();
    	}
};

int YCCstudent::registerno=0;
int main()
{
	YCCstudent s[3];
	for(int i=0;i<3;i++)
	{
		s[i].getdata();
	
	}
	for(int i=0;i<3;i++)
	{
		s[i].showdata();
	
	}
} 