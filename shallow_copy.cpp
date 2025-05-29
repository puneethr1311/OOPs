#include <iostream>
using namespace std;

class Shallow {
    int *data;
public:
    Shallow(int value) {
        data = new int(value);
    }

    // Shallow Copy Constructor
    Shallow(const Shallow &obj) {
        this->data = obj.data;  // Just copy the pointer
    }

    void display() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    
};

int main() {
    Shallow obj1(100);
    Shallow obj2 = obj1;  // Shallow copy

    obj1.display();
    obj2.display();

    return 0;
}
// this is the output : 
// Value: 100, Address: 0x13ae05f70
// Value: 100, Address: 0x13ae05f70
