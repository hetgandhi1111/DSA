#include<iostream>
using namespace std;
int main()
{
    /*
   
    int age;
    cout<<"Enter your Age::";
    cin>>age;
    if(age>18)
    {
        cout<<"Adult";
    }
    else{
        cout<<"Not Adult";
    } 
    int marks;
    cout<<"Enter the marks";
    cin>>marks;
    if(marks>25 && marks<44)
    {
        cout<<"Grade -E";
    }
    else if(marks>45 && marks<49)
    {
        cout<<"Grade -D";
    }
       if(marks>50 && marks<59)
    {
        cout<<"Grade -C";
    }
       if(marks>60 && marks<79)
    {
        cout<<"Grade -B";
    }
       if(marks>80 && marks<100)
    {
        cout<<"Grade -A";
    }*/
    int age;
    cout<<"Enter your age::";
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for job";
    }

    else if(age<=57)
    {
        cout<<"Eligible for job ";
        if(age>=55)
        {
            cout<<"But retirement soon";
        }
    }
    else{
            cout<<"Retirement time";
    }
    return 0;
}