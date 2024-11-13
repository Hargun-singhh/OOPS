// Inline Fuction - used more that function that are called again and again 
#include <iostream>
using namespace std;
void greet();
// Prototyping function - phele sirf declare kiya kya hai then usko bata diya kya karna hai


inline int square(int x) {
    return x * x;
}

int add(int a, int b = 10, int c = 20) {
    return a + b + c;
}
// deafult to give a default value to fucntion like above

int main() {
    cout << "Square of 5: " << square(5) << endl; // expands to 5 * 5
    cout << "Square of 10: " << square(10) << endl; // expands to 10 * 10
    cout << "Square of 20: " << square(20) << endl; // expands to 10 * 10
    cout << "add  " << add(20) << endl; // expands to 10 * 10
    greet();
    return 0;
}

void greet(){
    cout <<"welcome  " << endl;
}


