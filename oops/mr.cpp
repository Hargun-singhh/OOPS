// max and reverse of array witrh class
 

 #include <iostream>
using namespace std;

class ArrayOperations {
private:
    int *arr;   
    int size;  

public:
    ArrayOperations(int s) : size(s) {
        arr = new int[size];
    }

    ~ArrayOperations() {
        delete[] arr;
    }
    void inputArray() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void displayArray() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    int findMax() {
        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }


    void reverseArray() {
        for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

   
    ArrayOperations a1(n);

    // Input and display the array
    a1.inputArray();
    a1.displayArray();

    // Find and display the maximum element
    cout << "Maximum element: " << a1.findMax() << endl;

    // Reverse and display the array
    a1.reverseArray();
    cout << "Reversed array: ";
    a1.displayArray();

    return 0;
}
