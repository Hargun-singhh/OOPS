// function overloaing basic example
// bas data type change karo overloading ho gayi

#include <iostream>
using namespace std;

void display(int i) {  // 1
    cout << "Integer: " << i << endl;
}

void display(double d) { //  2
    cout << "Double: " << d << endl;
}

void display(string s) { // 3
    cout << "String: " << s << endl;
}

int main() {
    // same function name but diff output 
    display(5);
    display(3.14);
    display("Hello");
    return 0;
}
