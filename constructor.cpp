#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
#include<string>
#include<utility>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<functional>
#include<deque>
#include<list>
#include<chrono>
                    
using namespace std ; 
       

// constructor is a special member function of a class that is automatically called when 
// an object of the class is created. Its primary purpose is to initialize the object’s data members.

class car{
    public:
    car(); //this is called constructor declaration
};
// when you create your own constructor , default constructor is not form.


// Feature	:

// Same name as class	-> No return type (not even void)
// Auto-invoked	-> Called when object is created
// Can be overloaded -> 	You can have multiple constructors with different parameters
// Can have default values	Like regular functions




class student{
    private:
    string name ;
    int age ;

    public:
    student() { //constructor without parameter, but it will give these values to every object we created 
        name = "Unknown";
        age = 0;
        cout << "Constructor called!" << endl;
    }

     void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    void setter(string name , int age){
        this->name = name;
        this->age = age;
    }
};


// this operator : 
//  this keyword is a special pointer available inside non-static member functions of a class.
// It points to the current object 


// constructor with parameter 

class hero{
    private :
    int health ;
    string name;

    public:
    hero(string name, int health){
        this->health = health;
        this->name = name;
    }

    void display(){
        cout<<"name : "<< name<<"  "<<"health : " <<health;
    }

};


//copy constructor:
// create a new object as a copy of an existing object.

// this is of two types : 
// Shallow Copy  and  Deep Copy

// Aspect	                                Shallow Copy	                            Deep Copy
// Memory allocation	                Copies pointer (address)	                Allocates new memory
// Independence	                        Not independent (shared memory)             Independent memory blocks
// Safety	                            Unsafe for dynamic data	                            Safe

//by default it is shallow copy . 

//we can also create a  copy constructor by itself 



int main(){ 
    student s1;
    s1.display();


    hero h1 = hero("paul",10);
    h1.display();
    return 0 ;
}




