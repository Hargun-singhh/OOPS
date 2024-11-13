#include <iostream>
using namespace std;

class Example {
public:
    static int count;  // Static member variable

    // Constructor increments the static count
    Example() {
        count++;
    }

    // Static member function
    static void displayCount() {
        cout << "Count is: " << count << endl;
    }

    // Constant member function
    int getCount() const {
        return count;
    }
};

// Initialize the static member variable
int Example::count = 0;

int main() {
    // Static objects
    {
        Example obj1;
        Example obj2;
        Example::displayCount();  // Output will show 2, as two objects were created
    }

    Example obj3;  // Static count will be 3 after obj3 is created
    obj3.displayCount();  // Output will show 3

    // Constant object
    const Example obj4; // This object cannot modify its state
    cout << "Constant object count: " << obj4.getCount() << endl; 
    Example obj6;
   cout << "count till now: " << obj6.getCount() << endl;


    return 0;
}
