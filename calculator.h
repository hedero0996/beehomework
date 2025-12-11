#ifndef calculator_h 
#define calculator_h

class calculator
{
private:
   

    
public:
    calculator();
    ~calculator();
     
static double add(double a,double b);
static double subtract (double a,double b);
static double multiply (double a,double b);
static double divide (double a,double b);
static double mod(double a,double b);
static double sin(double a);
static double cos(double a);
static double tan(double a);
static double pow(double a, double b);
static double sqrt(double a);
static double log(double a,double b);
static double factorial(int a);
};

#endif