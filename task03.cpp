#include <iostream>
using namespace std;
string sign(string month, int date);
main()
{
    string month;
    int date;
    cout<<"enter the month:";
    cin>>month;
    cout<<"enter the date:";
    cin>>date;
    string result;
    result=sign(month, date);
    cout<< "sign is"<<result;
}

    string sign(string month, int date)
{
      string result;
    if(month=="march"|| month=="april" && date>=21 || date<=19)
     {
     result= "Aries";
     }
    if(month=="april" || month=="may" && date>=20 || date<=20)
    {
      result= "taurus";
    }
    if(month=="may" || month=="june" && date>=21 || date<=20)
    {
      result= "gemini";
    }
    if(month=="june" || month=="july" && date>=23 || date<=22)
    {
      result= "cancer";
    }
    if(month=="july" || month=="august" && date>=23 || date<=22)
    {
      result= "leo";
    }
    if(month=="august" || month=="september" && date>=23 || date<=22)
    {
      result= "virgo";
    }
    if(month=="september" || month=="october" && date>=23 || date<=22)
    {
      result= "libra";
    }
    if(month=="october" || month=="november" && date>=23 || date<=21)
    {
      result= "scorpio";
    }
    if(month=="november" || month=="december" && date>=22 || date<=21)
    {
      result= "saggitarius";
    }
    if(month=="december" || month=="january" && date>=22 || date<=19)
    {
      result= "capricon";
    }
    if(month=="january" || month=="february" && date>=20 || date<=18)
    {
      result= "aquarius";
    }
    if(month=="february" || month=="march" && date>=19 || date<=20)
    {
      result= "pisces";
    }
    return result;
}
