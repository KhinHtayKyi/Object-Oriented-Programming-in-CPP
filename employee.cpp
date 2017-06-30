#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	char name[20];
	int enno;
	float comp;
	
	public:
	employee()
	{
		 name[0]='\0';
		 enno=0;
		 comp=0.0;
			}
	
	employee(char s[],int e,float n)
	{
		strcpy(name,s);
		enno=e;
		comp=n;
	}
	
	void getdata()
	{
		cout<<"Enter name";
		cin.getline(name,20);
		cout<<"Enter no and comp";
		cin>>enno>>comp;
	}
	
	void showdata()
	{
		cout<<name<<enno<<comp;
	}
};

int main()
{
	employee e1("David",10,11.5);
	employee e2;
	e2.getdata();
	e1.showdata();
	e2.showdata();
}