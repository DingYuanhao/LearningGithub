#include<iostream>
#include<vector>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multi(int a, int b) {
    return a * b;
}

int main() {
    cout<<add(2, 5);
    cout<<multi(2, 5);
    return 0;
}