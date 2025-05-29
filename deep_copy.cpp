#include <iostream>
using namespace std;


//A deep copy copies the actual data by allocating separate memory, ensuring objects are independent.


class Deep {
    int *data;
public:
    Deep(int value) {
        data = new int(value);
    }

    // Deep Copy Constructor
    Deep(const Deep &obj) {
        this->data = new int(*obj.data);  // Allocate new memory and copy value
    }

    void display() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

   
};

int main() {
    Deep obj1(100);
    Deep obj2 = obj1;  // Deep copy

    obj1.display();
    obj2.display();

    return 0;
}
// output : (here you can see addresses are different)
// Value: 100, Address: 0x13ae05f70
// Value: 100, Address: 0x13ae06180


