// call by ref and call by value
#include <iostream>
using namespace std;

void modifyValue(int a) {
    a = 10;
    cout << "Inside function: " << a << endl;
}
void modifyReference(int &a) {
    a = 10;
    cout << "Inside function: " << a << endl;
}

int main() {
    int x = 5;
    modifyValue(x);
    cout << "Outside function: " << x << endl; // x remains 5
    modifyReference(x);
    cout << "Outside function: " << x << endl; // x  10
    return 0;
}
