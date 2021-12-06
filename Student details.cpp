#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,sum = 0;
    cout<<"Enter number of students details : ";
    cin>>num;
    int marks[num];
    for(int i = 0;i<num ;i++)
    {
        cout<<"Marks of student  "<<i+1<<" = ";
        cin>>marks[i];
        sum = sum + marks[i];
    }
    double avg =(float)sum / num;
    cout<<"Total sum is : "<<sum<<endl;
    cout<<"Avarage is: "<<avg<<endl;
    int max = marks[0];
    int min = marks[0];
    for(int i = 1; i<num ;i++)
    {
        if(max < marks[i])
            max = marks[i];
        if(min > marks[i])
            min  = marks[i];
    }
    cout<<"Maximum marks is : " <<max<<endl;
    cout<<"Minimum marks is : " <<min<<endl;


    getch();
}
