#include <iostream>
#include <cmath>
using namespace std;

int main(){


int a=5;
int* b = &a;
cout<<b;

// &--> Address of operator
// * -->(value at) Dereference  operator


 
int**c=&b; //pointer to pointer
cout<<c;

    return 0;
    }