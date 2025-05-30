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
                 

// The keyword static is used to tell C++:


// static variable inside a function  :

// It remembers its value even after the function ends.
// It is created only once, no matter how many times the function runs.

void hello() {
    static int count = 0;  // Remember this
    count++;
    cout << count << endl;
}


// Static Variable Inside a Class :

// It is shared by all objects of that class.
// It is like a global variable, but only for that class.

class MyClass {
public:
    static int count; // Declaration

    MyClass() {
        count++;
    }

    void showCount() {
        cout << "Count: " << count << endl;
    }
};


// Definition and Initialization outside the class
int MyClass::count = 0;



//  Inside a Class (Static Member Function)
// Can access only static members of the class.

// Can be called using the class name, without an object.


class My {
private:
    static int count;
public:
    static void showCount() {
        cout << "Count: " << count << endl;
    }

    My() {
        count++;
    }
};

int My::count = 0;


// Static Function Outside a Class (in a file):

// Only visible inside that file.
// Other files can’t use it.


static void helper() {
    // This can't be used in other files
}




int main(){

    hello(); // 1
    hello(); // 2
    hello(); // 3
    
    MyClass a, b, c;
    a.showCount(); // Count: 3

    My g, bh;
    My::showCount(); // Count: 2

    return 0 ;
}