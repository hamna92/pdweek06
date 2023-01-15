#include <iostream>
using namespace std;
float servicecode(char type, string time, float minutes);
main()
{
    char type;
    string time;
    float amount;
    float left;
    int minutes;
    cout << "enter the type p or r:";
    cin >> type;
    cout << "enter the time:";
    cin >> time;
    cout << "enter the amount:";
    cin >> amount;
    float charge = servicecode(type, time, amount);
    cout << charge;
}
float servicecode(char type, string time, float minutes)
{
    float result;
    
    float left;
    if (type == 'r')
    {

        if (minutes <= 50)
        {
            result = 10;
        }
        if (minutes > 50)
        {
            left = minutes - 50;
            result = left * 0.20 + 10;
        }
    }
    if (type == 'p')
    {

        if (time == "day")
        {
            if (minutes <= 75)
                result = 25;
        }
        if (minutes < 75)
        {
            left = minutes - 75;
            result = left * 0.10 + 25;
        }
        if (time == "night")
        {
            if (minutes > 100)
            {
                left = minutes - 100;
                result = (left * 0.05) + 25;
            }
        }
        if (time == "night")
        {
            if (minutes > 75)
            {
                result = 25;
            }
        }
        return result;
    }
}