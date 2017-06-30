#include <iostream.h>
int main()
{
int month,day,year;
int month1,day1,year1;
char dummy;
int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
cout << "\nEnter start date(dd/mm/yy): "; //get date
cin >> day>>dummy>>month>>dummy>>year;
cout << "\nEnter end date(dd/mm/yy): ";
cin >> day1>>dummy>>month1>>dummy>>year1;

long int total_days = day; //separate days
for(int j=0; j<month-1; j++) //add days each month
total_days += days_per_month[j];
totaldays+=(year-1)*365;


long int total_days1 = day1; //separate days
for(int j=0; j<month1-1; j++) //add days each month
total_days1+= days_per_month[j];
total_days1+=(year1-1)*365;

long int resultdays=(total_days1-total_days)+1;


cout << "Total number of days between two date: " <<resultdays<< endl;
return 0;
   }

