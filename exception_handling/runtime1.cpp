#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int index = 5;

    try {
        if (index < 0 || index >= 3)
            throw out_of_range("Array index out of bounds!");
        cout << arr[index] << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
