
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int real , int img){
            this->real = real;
            this->img = img;
        }
        void operator ++(){
             cout<<"PRE INCREMENT "<<endl;
            ++real;
            ++img;
        }
        void operator ++(int){
            cout<<"POST INCREMENT "<<endl;
            real++;
            img++;            
        }
        void display(){
            cout<<"Complex Number is :"<<real<<" + "<<img<<"i"<<endl;
        }
};
int main(){
    Complex c1(4,5);  
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    return 0;
}