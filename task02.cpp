#include <iostream>
using namespace std;
float grade(string subject ,string name, float marks, string grade, float percentage );
main()
{
    string subject;
    float marks;
    string name;
    string grade;
    float percentage;
    cout<<"enter the subject:";
    cin>>subject;
    cout<<"enter the name:";
    cin>>name;
    float result;

}
  
   float garde(string subject ,string name, float marks, string grade, float percentage )
   {
     result= grade;
    if(subject=="english" && name==" " && percentage>=90 || percentage<=100)
    {
        if(subject=="maths" && name==" " && percentage>=90 || percentage<=100)
        {
            if(subject=="chem" && name==" " && percentage>=90 || percentage<=100)
            {
                if(subject=="social science" && name== " " && percentage>=90 || percentage<=100 )
                {
                    if(subject=="bio" && name==" " && percentage>=90 || percentage<=100)
                    percentage=(subject*500)/100;
                    return grade= "A+";
                }
            }
            
        }

    }
    if(subject=="english" && name==" " && percentage>=80 || percentage<=90)
    {
        if(subject=="maths" && name==" " && percentage>=80|| percentage<=90)
        {
            if(subject=="chem" && name==" " && percentage>=80 || percentage<=90)
            {
                if(subject=="social science" && name== " " && percentage>=90 || percentage<=100 )
                {
                    if(subject=="bio" && name==" " && percentage>=90 || percentage<=100)
                    percentage=(subject*500)/100;
                     return grade= "A-"; 
                }   
            }
        }
    }
            
 }