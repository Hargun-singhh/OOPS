#include <iostream>
using namespace std;

class Fab {
private:
    int number;

public:
    Fab(int num) : number(num) {}

   
    int cal(int n) {
        if (n == 0) {
            return 0;   
        } else if (n == 1) {
            return 1;  
        } else {
            return cal(n - 1) + cal(n - 2);
        }
    }

    // Method to display the Fibonacci series
    void display() {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < number; ++i) {
            cout << cal(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    Fab fb(5);    
    fb.display();

    return 0;
}
