//what causes exceptions
/*
insuficient resources
missing resources
invalid operation
range vialation 
overflow and underflows
and so on. 

keywords: 
try
throw 
catch 


*/
#include <iostream>

int a1;
int b1;
int ExceptionHandling(int a, int b);
int divideZero(int a, int b);
void checkEx(int num1);

int divideZero(int a, int b) {
 
        return a / b; // crashes if b = 0;
 
  
}

void checkEx(int num1)
{
    if (num1 <= 0) {
        throw 0;
    }
    else {
        std::cout << "Num is :" << num1;
    }
}



int ExceptionHandling(int a, int b) {
    try {
        if (b == 0) {
            throw 0;
        }
        else {
            return a / b;
        }
    }
    catch (int& e) {
        std::cerr <<"Divide by zero\n";
    }

}

/// Km/h 

double calcKMPL(int km, int Lit) {
    if (Lit == 0) {
        throw 0;
    }
    if (km < 0 || Lit < 0) {
        throw std::string{ "Negative Values" };
    }
    return km / Lit;
}



int main()
{
    std::cout << " enter a : ";
    std::cin >> a1;
    std::cout << " enter b : ";
    std::cin >> b1;
    std::cout << divideZero(a1, b1) << std::endl;
    std::cout << "Exception Handling --------------" << std::endl;
    ExceptionHandling(a1, b1);
    /*

    /// another example 

    try {
        checkEx(0);
    }
    catch(int& ex){
        if (ex == 0) {
            std::cout << "Zero has been entered " << std::endl;
        }
    }


////

    try {
        double res=calcKMPL(a1, b1);
        std::cout << "Result = " << res << std::endl;
    }
    catch (int& e) {
        std::cout << "Divided by zero" << std::endl;
    }
    catch (std::string& es) {
        std::cout << es;
    }
    catch (...) {
        std::cout << " unknown exception" << std::endl;
    }
    */
    return 0;
}
