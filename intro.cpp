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

// oops : object oriented programming : things are around the obect(entitiy)
// why oops ?  : it provides readiability , managebility and extensibility.

// class -> user defined data types (custom data types)
// it encapsulates data for object and methods .
// It groups together data members (variables) and member functions (methods) that operate on 
// those variables into a single unit.

//syntax : 
class class_name{
    //access specifier {public,private,protected}
    //data members (variables)
    //members functions (methods)
};

//for empty class  ( which has no properties ) -> has of size of 0 bytes. because
  //  To ensure unique memory address per object

class car{
    public:
    //data members
    string name ;
    string model ;
    int milage ;
    int price ;

    //member functions
    void display(){
        cout<< name <<" | "<<model <<" | "<<milage <<" | "<<price<<endl;
    }
};

//size of class = sum of all non static data member + padding 

//padding -> Padding is extra unused memory added by the compiler between or after data members 
// of a class or struct to ensure proper alignment of data members in memory.

class student{
    int rollno ; // 4 bytees
    char grade; //1 bytes 
};
//size of this class is 8 bytes :  5 (data members) + 3 (padding)


//object -> which contains data and methods 

// C++ supports three access specifiers:


// public	-> Members accessible from anywhere in the program
// private(by default)	-> Members accessible only within the class 
// protected ->	Accessible within the class and its derived (child) classes


//we can use , class of another file ,just have to include the file #include"file_name.cpp" -> but that file dont have main() function

int main(){ 
    car c1 ;//c1 is object of class car ;
    cout<<sizeof(c1)<<endl; // it show : 56 bytes ( 24 + 24 + 4 + 4)
     
    c1.name = "maruti suzuki";//to access data member of class : we can use " . " operator
    c1.model = "brezza";
    c1.milage = 24;
    c1.price =  1300000;


    c1.display();



     student s1;
    cout<<sizeof(s1); // it show 8

    return 0 ;
}