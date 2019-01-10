#include <iostream>
using namespace std;

class Date

{
public:
Date();
void setDay (int d);
void setMonth (int m);
void setYear (int y);
void print();

private:
int day;
int month;
int year;
};

Date::Date()

{
day = month = year = 1;
}

void Date::setDay (int d)
{
day = d;
}
void Date::setMonth (int m)
{
month = m;
}
void Date::setYear (int y)
{
year = y;
}
void Date::print()
{
cout << day << "/" << month << "/" << year << endl;
}

int main()

{

int m;
int d;
int y;
int day;
int month;
int year;


cout<<"\n Enter the month: ";
cin>>m;
cout<<"\n Enter the day: ";
cin>>d;
cout<<"\n Enter the year: ";
cin>>y;


myDate.print();
return 0;

}
