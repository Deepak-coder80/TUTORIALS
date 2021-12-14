/*
Problem Statement : 
    Write a class which contains a one dimensional array of integers . 
    Use a copy constructor for initialising the data members . 
    Include a member  function to find most occuring number
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Demo{
    private:
        int array[50];
        int size;
    public:
        //default constructor
        Demo(){}   
        //copy constructor    
        Demo(Demo &b){         
          size=b.size;       
          for(int i=0;i<size;i++){
              array[i]=b.array[i];
          }
        }
        //other member function declarations
        void setData();
        void display();
        void maxOccuring();

       
        
};
//function definitions
void Demo::setData(){
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array :";
    for(int i = 0;i<size;i++){
        cin>>array[i];
    }
}
void Demo::display(){
     cout<<"Array elements are :";
    for(int i=0;i<size;i++){
        cout<<"["<<array[i]<<"] ,";
    }
    cout<<endl; 
}

void Demo::maxOccuring(){
    int max =0;
    int element =0;

    for(int i=0;i<size;i++){
        int counter=0;
        for(int j=0;j<size;j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        if(max <counter){
            max=counter;
            element = array[i];
        }
    }

    cout<<"Maximum Occuring element is  "<<element<<" with occurence :"<<max<<endl;
}

int main(){
    //create first object of Demo class
    Demo obj1;
    //read data of first object
    obj1.setData();
    //make copy of first object using copy consturctor
    Demo obj2(obj1);  
    //display the array in the object 2
    obj2.display();
    //maximum occurence
    obj2.maxOccuring();

    return 0;
}