#include <iostream>
using namespace std;
string activity(string  temp, string humidity);
main()
{
  string temp;
  string  humidity;
  cout<<"enter the temp";
  cin>>temp;
  cout<<"enter the humidity";
  cin>>humidity;
  activity(temp,humidity);
}
 string activity(string  temp, string humidity)
{
string result;

 if(temp=="warm" && humidity=="dry")
 {
    cout<<"play tennis";
 }
 if(temp=="warm" && humidity=="humid")
 {
    cout<<"swim";
 }
 if(temp=="cold" && humidity=="dry")
 {
    cout<<"play basketball";

 }
 if(temp=="cold" && humidity=="humid")
 {
    cout<<"watch tv";
 }
  return result;
}

