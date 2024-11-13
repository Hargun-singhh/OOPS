#include <iostream>
using namespace std;

class fac {
    private:
    int number;

    public:
    fac(int n): number(n) {};
    int cal() {
        int a= 1;
        for(int i=1;i<=number;i++){
            a *= i;
        }
        return a;
    }
    void display() {
        cout << "Factorial of " << number <<" is " <<cal()<< endl;

    }


};
int main(){
    fac f1(5);
    f1.display();
}