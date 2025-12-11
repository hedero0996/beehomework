#include<iostream>
#include<cstdlib>
#include<cmath>
#include"calculator.h"
using namespace std;
 


    calculator :: calculator(){}
calculator :: ~calculator(){}
    
    double  calculator ::  add(double a, double b) {
    return a + b;
}

double  calculator :: subtract(double a,double b){


    return a-b;

}
double  calculator :: multiply(double a,double b){

    return a*b;

}
double calculator :: divide(double a,double  b){
if(b==0){
    cerr<<"Error: Division by zero!"<<endl;
    exit(EXIT_FAILURE);
}
    return a/b;
}
double  calculator :: mod(double a,double b){
    return fmod(a,b);
}
double calculator :: sin(double a){
    return std::sin(a);
}
double calculator :: cos(double a){
    return std::cos(a);
}
double calculator :: tan(double a){
    return std::tan(a);
}
double calculator :: pow(double a, double b){
    return std::pow(a,b);
    // we can make it in a for loop also
}
double calculator :: sqrt(double a){
if(a<0){
cerr<<"ERORR BECAUSE A MUST BE POSITIVE\n";
exit(EXIT_FAILURE);

}

return std::sqrt(a);
// ملاحظة استطيع كتابة تابع يرد جذر لكن بطريقة اكثر تعقيد من خلال الحلقات المتداخلة
}
double calculator :: log(double a,double b){

return std::log(a)/std ::log(b);


}
int calculator :: factorial(int a){
    if(a<0){
        cerr<<"Error: Factorial of negative number!"<<endl;
        exit(EXIT_FAILURE);
    }
else if(a==0||a==1)
return 1;
else 
{
int r=1;
for(int i=a;i>=1;i--)
{
r*=i;
}
return r;
}
}
void calculator :: calculate(){
    cout<<"Welcome to the calculator!"<<endl;
   double number1, number2;
   char possible_operations[] = {'+', '-', '*', '/', '%', 's', 'c', 't', 'p', 'q', 'l', 'f'};
   char chosen_operation;
   cout<<"Enter first number: ";
   cin>>number1;
   cout<<"Enter valid operation like +,-,/,*,%,s(sin),c(cos),t(tan),p(pow),q(sqrt),l(log),!(factorial): \n";
cin>>chosen_operation;

for(char op : possible_operations){
    
      
        switch(chosen_operation){
            case '+':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::add(number1, number2)<<endl;
                break;
            case '-':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::subtract(number1, number2)<<endl;
                break;
            case '*':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::multiply(number1, number2)<<endl;
                break;
            case '/':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::divide(number1, number2)<<endl;
                break;
            case '%':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::mod(number1, number2)<<endl;
                
                break;
            case 's':
                cout<<"Result: "<<calculator::sin(number1)<<endl;
                break;
            case 'c':
                cout<<"Result: "<<calculator::cos(number1)<<endl;
                break;
            case 't':
                cout<<"Result: "<<calculator::tan(number1)<<endl;
                break;
            case 'p':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::pow(number1, number2)<<endl;
                break;
            case 'q':
                cout<<"Result: "<<calculator::sqrt(number1)<<endl;
                break;
            case 'l':
              cout<<"Enter second number: ";
        cin>>number2;
                cout<<"Result: "<<calculator::log(number1, number2)<<endl;
                break;
               case '!':
                cout<<"Result: "<<calculator::factorial(static_cast<int>(number1))<<endl;
                break;
                default:
                cerr<<"Error invalid operation!\n";
                exit(EXIT_FAILURE);
        }
        return;
    }

}
