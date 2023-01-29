#include <iostream>
using namespace std;

int summation(int n) {
    if (n==1) return n;
    else return n + summation(n-1);
}

int main() {
    int n;
    cout<<"n : ";
    cin>>n;
    int s = summation(n);
    cout<<"Sum : "<<s;
}