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
             
// Encapsulation means wrapping data and code (functions) together into a single unit (a class), 
//and hiding the internal details from the outside world.

// Think of it like a capsule in medicine:
// You don’t see the inner medicine — you just swallow the capsule!

class Student {
private:
    int age;       // Hidden from outside
    string name;   // Hidden from outside

public:
    // Public method to set data (controlled access)
    void setData(int a, string n) {
        age = a;
        name = n;
    }

    // Public method to get data (controlled access)
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


int main(){ 
    Student s1;
    s1.setData(20, "Aditya");  // Cannot access age/name directly
    s1.display();              // Outputs: Name: Aditya, Age: 20
    // s1.age = 25; ❌ Error: 'age' is private

    return 0 ;
}


//advantage : data hide -> security increases
            //   help in unit testing
            //   code reusable
            //   if we want to make class , read only!