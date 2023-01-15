#include <iostream>
using namespace std;
string  position(int x, int y, int h);
main()
 {
    int x;
    int y;
    int h;
    string result;
    cout<<"enter the h:";
    cin>>h;
    cout<<"enter the x:";
    cin>>x;
    cout<<"enter the y:";
    cin>>y;
    result =position(x,y,h);
    cout<<result;
 }
    string   position(int x, int y, int h)
    
{
    string result;
    if(x<0 || x>2*h || y>=3*h)
    {
        result="outside";

    }
    else if(x%h==0 || y%h == 0)
    {
        result="border";
    }
    if(x>=0 || x<+2*h || y<=3*h)
    {
        result="inside";
    } 
     return result;
}     