#include <iostream>
#include <cmath>
using namespace std;


const double PI = 3.14;

double circArea(double r) {
    return PI*(pow(r, 2));
}

int main() {
    double r;
    cout<<"Radius: ";
    cin>>r;
    double a = circArea(r);
    cout<<"Area : "<<a;
}