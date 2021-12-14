//Conversion of Class type into Basic Data.

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
        Time(int hours,int minutes);
        // typecasting overloaded
        operator int();
       

};
//constructor
Time::Time(int hours,int minutes){
    this->hours=hours;
    this->minutes=minutes;
}
Time::operator int(){
    return (hours*60+minutes);
}

int main(){
    int duration,h,t;
    
    //Read datas
    cout<<"Enter hours :";
    cin>>h;
    cout<<"Enter minute :";
    cin>>t;

    //object
    Time T1(h,t);
    

    duration = T1.operator int();

    cout<<"Duration is :"<<duration<<"minutes"<<endl;

    return 0;
}