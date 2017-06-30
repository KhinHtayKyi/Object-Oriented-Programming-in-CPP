/*name of book, ISBN no, name of author, code no, edition
*/


#include<iostream>
#include<ctype.h>
#include<iomanip.h>
using namespace std;
struct bookdata
	{  char bname[50];
	   int ISBNno;
	   char author[20];
	   int codeno;
	   char editionno[10];
	};
	
	
int main()
{
	 int n,flag=0,j;
	 cout<<"Enter no of books you want to fill:";
	 cin>>n;
      bookdata b[n];
      char choice;
      int search;
	  
	  for(int i=0;i<n;i++)
	  {
	     cout<<setiosflags(ios::left)<<setw(30)<<"Enter name of book:";
	     cin>>b[i].bname;
		 cout<<setw(30)<<"Enter ISBN no:";
		 cin>>b[i].ISBNno;
		 cout<<setw(30)<<"Enter author of book:";
		 cin>>b[i].author;
		 cout<<setw(30)<<"Enter codeno:";
		 cin>>b[i].codeno;		 
		 cout<<setw(30)<<"Enter  editionno:";
		 cin>>b[i].editionno;
		 
	  }
	  
	  do{
  		
	  	cout<<setiosflags(ios::left)<<setw(30)<<"Enter the ISBNno you want to display";
	  	cin>>search;
		for(j=0;j<n;j++)
	  {
	    
	  	if(search==b[j].ISBNno)
	  	{
	  	   flag=1;
	       break;
		   	
	  	}
	  }
	  if(flag==1)
	  {
  		    cout<<setiosflags(ios::left)<<setw(30)<<" Book's information that you want to search are:"<<endl;
   		    cout<<setw(25)<<" Book's name        :"<<b[j].bname<<endl;
		   cout<<setw(25)<<" ISBN no     :"<<b[j].ISBNno<<endl;
		   cout<<setw(25)<<" Author's Name  :"<<b[j].author<<endl;
		   cout<<setw(25)<<" Code No :"<<b[j].codeno<<endl;
		   cout<<setw(25)<<" Edition No :"<<b[j].editionno<<endl;
		   flag=0;
  	   }
  	   else
  	   
	  	cout<<"Sorry!!In our library , there is no book that you want to search. "<<endl;
		  	  	
	  	cout<<"Do you want to search another book:Type y or n:";
	  	cin>>choice;
	  }
	  while(toupper(choice)!='N');
	  }
	 
