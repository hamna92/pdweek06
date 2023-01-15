#include <iostream>
using namespace std;
float price( string month, int people);
main()
{
 string type_of_room;
 string month;
 string time;
 float price_after_discount;
 float discount;
 int people;
 cout<<"enter the month:";
 cin>>month;
 cout<<"enter the time:";
 cin>>time;
 cout<<"enter the people:";
 cin>>people;
 float result;
 result=price(month,people);
}
   float price( string month, int people)
 {
   float result;
  if(month=="may" || month =="october")
  {
    if(people<7)
    {
        result=people*50;
        cout<<"price of studio is:"<<result <<endl;
        result=people*50;
        cout<<"price of department is:"<<result<<endl;
    }
  }
  else if(people>=7 && people<=14)
  {
    result=(50-(0.05*50))*people;
    cout<<"price  of studio is: "<<result<<endl;
    result=65*people;
    cout<<"price of department is :"<<result<<endl;
  }
   if(people>14)
   {
    result=(50-(0.3*50))*people;
    cout<<"price  of studio is :"<<result<<endl;
    result=(65-(0.1*65))*people;
    cout<<"price of department is:"<<result<<endl;
   }
  if(month=="june" || month=="september")
  {
    if(people<=14)
    {
        result=75.2*people;
        cout<<"price of studio is:"<<result<<endl;
        result=60.70*people;
        cout<<"price of department is:"<<result<<endl;
    }
  }
 else  if(people>14)
  {
    result =(75.2-(0.2*75.2))*people;
    cout<<"price of studio is:"<< result<<endl;
    result=(60.70-(0.1*60.70))*people;
    cout<<"price of department is:"<< result <<endl;
  }
  if(month=="july" || month=="august")
  {
    if(people<=14)
    {
      result=76*people;
      cout<<"price of studio is:"<<result
       << endl;
      result=77*people;
      cout<<"price of department is:" << result<<endl;
    }
  }
  else if(people>14)
  {
      result=76*people;
      cout<<"price of studio is:"<<result
       << endl;
      result=(77-(0.1*77))*people;
      cout<<"price of department is :"<<result<<endl;
  }
   return result;
 }

 


