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
double calculator :: factorial(int a){
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