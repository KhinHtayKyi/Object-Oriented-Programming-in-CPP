//Heal the world.Make a better place!!!

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="Don't heal the world";
	string s2="make a better place";
	string s3;
	s1.erase(0,6);
	s1.replace(0,1,"H");
	s1.append(1,'.');	
	//cout<<s1<<endl;
	s2.replace(0,1,"M");
	s2.append(3,'!');
	//cout<<s2;
	s3=s1+s2;
	cout<<s3;
}