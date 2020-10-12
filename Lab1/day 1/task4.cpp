#include <iostream>
using namespace std;

inline void displayNum(int num) {
    cout << num << endl;
}

int main() {
    // first function call
    displayNum(51);

    // second function call
    displayNum(333);

    // third function call
    displayNum(896);

    return 0;
}
