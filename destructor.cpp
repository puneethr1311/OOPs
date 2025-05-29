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
          

//A destructor is a special member function of a class that is automatically called when an object
// goes out of scope or is explicitly deleted.

class Car {
public:
    Car() {
        cout << "Constructor: Car created\n";
    }

    ~Car() {
        cout << "Destructor: Car destroyed\n";
    }
};



//custom destructor:


class Student {
    char* name;
public:
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Constructor: Memory allocated for name\n";
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    // Custom Destructor
    ~Student() {
        delete[] name;
        cout << "Destructor: Memory released for name\n";
    }
};


int main() {
    Car myCar;  // Constructor is called
    // Destructor will be called automatically at the end of scope

    Student s("Aditya");
    s.display();
    return 0;
}