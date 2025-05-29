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
     
// getter and setter : in simple terms , In direct way to access the private member of class in main function.


//  Why Do We Need Them?
// To protect private data members from direct access.

// To apply validation logic before modifying or returning data.

// To achieve encapsulation: exposing only necessary parts of a class.


class hero{
    private: 
    int health;
    
    public :
    char level ;
    
    // Getter: A function that gets or returns the value of a private data member.
    int get_health(){
        return health;
    }
    
    // Setter : A function that sets or updates the value of a private data member.
    void set_health(int h){
        health = h;
    }

};




int main(){ 
    hero h1;
    h1.set_health(10);
    cout<<h1.get_health()<<endl;

   
    return 0 ;
}