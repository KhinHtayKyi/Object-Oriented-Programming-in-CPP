#include<iostream>
using namespace std;
struct stel{
	
	int po,st,pe;
};
int main()
{
	stel s1,s2,s3;
	char ch;
	cout<<"s1.";
	cin>>s1.po>>ch>>s1.st>>ch>>s1.pe;
	cout<<"s2.";
	cin>>s2.po>>ch>>s2.st>>ch>>s2.pe;
	int pe1=(s1.po*240)+(s1.st*12)+s1.pe;
	int pe2=(s2.po*240)+(s2.st*12)+s2.pe;
	double test=5+2.0/20+8.0/240;
	int s=pe1-pe2;
	s3.po=s/240;
	s3.st=(s%240)/12;
	s3.pe=(s%240)%12;
	cout<<"In old style"<<'\x9c'<<s3.po<<ch<<s3.st<<ch<<s3.pe;
	double old=s3.po+float(s3.st)/20+float(s3.pe)/240;
	//double testing=5+float(test)/100;
	cout<<"Test"<<test;
	cout<<"new style"<<'\x9c'<<old;
	
	
}