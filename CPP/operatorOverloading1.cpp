/*
STATEMENT : 
    A class contains a one one diamensional array.Overload the operator (unary -)
    to multiply each element of the object by -1
*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Overloading{
    private:
        int array[50];
        int size;
    public:
        void setData();
        void operator -();
        void display();

};

void Overloading::setData(){
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array :";
    for(int i = 0;i<size;i++){
        cin>>array[i];
    }
}

void Overloading::operator-(){
    for(int i=0;i<size;i++){
        array[i] = array[i]*-1;
    }
}

void Overloading::display(){
    cout<<"Array elements are :";
    for(int i=0;i<size;i++){
        cout<<"["<<array[i]<<"] ,";
    }
    cout<<endl;
          
}

int main(){
    Overloading obj1;

    obj1.setData();

    -obj1;

    obj1.display();
}