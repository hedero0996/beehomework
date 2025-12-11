#include<iostream>
#include"calculator.h"
using namespace std;
int main(){
calculator s;

cout <<calculator::add(2,3)<<endl;
cout<<calculator::mod(4.2,2)<<endl;
cout<<calculator::factorial(5)<<endl;
cout<<calculator::sin(0.5)<<endl;
cout<<calculator::cos(0)<<endl;
    return 0;
}