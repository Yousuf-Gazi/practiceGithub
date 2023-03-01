#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(100, 20) << endl;
    return 0;
}