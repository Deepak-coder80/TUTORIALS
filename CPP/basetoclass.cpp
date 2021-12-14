// Base to Class Conversion - Constructor Method.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Time{
    private:
        int hours;
        int minutes;
    public:
        //constructor
        Time();
        //parameter constructor - which is responsible for conversion
        Time(int);
        //display
        void displayTime();     
};
//defult constructor 
Time::Time(){
    hours=0;
    minutes=0;
}
//parameterized constructor definition
Time::Time(int t){
    hours=t/60;
    minutes=t%60;
}
//display
void Time::displayTime(){
    cout<<"The time is "<<hours<<"hrs and "<<minutes<<"min"<<endl;
}
int main(){
    int duartion;
    Time T1;

    //read duration
    cout<<"Enter duration in minutes:";
    cin>>duartion;

    //convertion
    T1=duartion;

    T1.displayTime();

    
}