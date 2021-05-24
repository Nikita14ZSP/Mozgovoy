#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int number() {
    int p = 0;
    for (;;) {
    char k = cin.get();
    if (k >= '0' && k <= '9')
    p = p * 10 + k - '0';
    else {
    cin.putback(k);
    return p;
    }
    }
}
int n();
int s() {
    char k = cin.get();
    if (k == '(') {
    int x = n();
    cin.get();
    return x;
    }
    else {
    cin.putback(k);
    return number();
 }
}
int factor() {
    int x = s();
    for (;;) {
    char k = cin.get();
    switch (k) {
    case '*':
    x *= s();
    break;
    case '/':
    x /= s();
    break;
    default:
    cin.putback(k);
    return x;
    }
    }
}
int n() {
    int x = factor();
    for (;;) {
    char k = cin.get();
    switch (k) {
    case '+':
    x += factor();
    break;
    case '-':
    x -= factor();
    break;
    default:
    cin.putback(k);
    return x;
    }
    }
}
int main() {
    int p = n();
    cout << p;
}