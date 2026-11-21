#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    cout << " Inside function - Before swap: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << " Inside function - After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before calling swapByValue:" << endl;
    cout << " x = " << x << ", y = " << y << endl;

    swapByReference(x, y);

    cout << "After calling swapByValue:" << endl;
    cout << " x = " << x << ", y = " << y << endl;

    cout << "\nExplanation: The function received COPIES of x and y." << endl;
    cout << "Changes made inside the function do not affect the originals." << endl;

    return 0;
}
