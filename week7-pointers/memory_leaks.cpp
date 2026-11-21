
#include <iostream>
using namespace std;

void createLeak() {
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
}

void fixLeak() {
    int* ptr = new int(42);

    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Memory has been successfully freed." << endl;
}

int main() {
    cout << "Calling function that leaks memory..." << endl;
    createLeak();

    cout << "Function finished. The memory is now leaked." << endl;

    cout << "\n--- Testing the Fix ---" << endl;
    fixLeak();

    return 0;
}

