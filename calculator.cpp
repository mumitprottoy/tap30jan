#include <iostream> // header file
using namespace std; // pre-assigning standard namespace

// addition function
int add(int a, int b) {
    return a+b;
}

// substraction function
int sub(int a, int b) {
    return a-b;
}

// multiplication function
int multiply(int a, int b) {
    return a*b;
}

// division function
double divide(float a, float b) {
    return a/b;
}


// modular function
int mod(int a, int b) {
    return a%b;
}



int main() {
    int a,b;
    char sign;

    cout<<"calculate : ";
    cin>>a>>sign>>b;

    switch (sign) {
        case '+':
            cout<<"sum : "<<add(a,b);
            break;
        
        case '-':
            cout<<"sub : "<<sub(a,b);
            break;
        
        case '*':
            cout<<"product : "<<multiply(a,b);
            break;
        
        case '/':
            cout<<"quotient : "<<divide(a,b);
            break;
        
        case '%':
            cout<<"remainder : "<<mod(a,b);
            break;        
    }

}