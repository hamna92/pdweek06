#include <iostream>
using namespace std;
float price(string days,  string fruit, float quantity);
main()
{
    string days;
    string fruit;
    int quantity;
    cout << "enter the days";
    cin >> days;
    cout << "enter the fruit:";
    cin >> fruit;
    cout << "enter the quantity:";
    cin >> quantity;
    float result;
    result= price(days, fruit, quantity);
}
float price(string days, string fruit, float quantity)
{
    float totalprice;
    float result;
    if (fruit == "banana" && days == "monday" || days == "tuesday"  || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "apple" && days == "monday" || days == "tuesday"  || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }
    if (fruit == "orange" && days == "monday" || days == "tuesday"  || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "grapefruit" && days == "monday" || days == "tuesday"  || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "kiwi" && days == "monday" || days == "tuesday" || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "pineapple" && days == "monday" || days == "tuesday"  || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "grapes" && days == "monday" || days == "tuesday" || days == "wednesday" || days == "thursday" || days == "friday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "banana" && days == "saturday" || days == "sunday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

    if (fruit == "apple" && days == "saturday" || days == "sunday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }
    if (fruit == "orange" && days == "saturday" || days == "sunday" && quantity == 2)
    {
        result = quantity * totalprice;
        return result;
    }

 if (fruit == "grapefruit" && days == "saturday" || days == "sunday" && quantity == 2)
 {
    result = quantity * totalprice;
    return result;
 }
 if (fruit == "kiwi" && days == "saturday" || days == "sunday" && quantity == 2)
 {
    result = quantity * totalprice;
    return result;
 }
 if (fruit == "pineapple" && days == "saturday" || days == "sunday" && quantity == 2)
 {
    result = quantity * totalprice;
    return result;
 }
 if (fruit == "grapes" && days == "saturday" || days == "sunday" && quantity == 2)
 {
    result = quantity * totalprice;
    return result;
 }

 if(days!="monday" || days!="tuesday" || days!="wednesday" || days!="thursday days" ||  days!="friday")
 {
  cout<<"error";
 }
 if(days!="sunday" || days!= "saturday")
 {
    cout<<"error";
 }

}
