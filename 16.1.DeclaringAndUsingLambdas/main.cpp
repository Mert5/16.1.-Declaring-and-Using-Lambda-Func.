#include <iostream>

// Reference => freeCodeCamp.org

int main(){
    /*
    Lambda function signature :
                                [capture list](parameters)->return type{
                                        // Function body
                                };
    */


    // Calling lambda function
    /*
    [](){     
        std::cout << "Hello World!" << std::endl;
    }();    // you may call directly function by putting "()" to the end when you write it or (go below)
    */

    /*
    auto func = [](){     
        std::cout << "Hello World!" << std::endl;
    };

    func();     // you can define as above and call as this.
    */


    // Lambda function that takes parameters

    /*  // a method
    [](double a, double b){     
        std::cout << "Total is : " << a+b << std::endl;
    }(5.2,7.7);
    */

    /*  // a method
    auto result = [](double a, double b){     
        std::cout << "Result : " << (a+b) << std::endl;
    }; 

    result(5.1,9.9);
    */


    // Lambda function that returns something
    /*  // a method
    auto func2 = [](double a, double b){     
        return a+b;
    }(10.5,5.5);

    std::cout << "Total is : " << func2 << std::endl;
    */

    /*  // a method
    std::cout << "Total is : " << [](double a, double b){     
        return a+b;
    }(12.5,5.0) << std::endl;

    std::cout << "You are done!" << std::endl;
    */

    /*  // a method
    auto func3 = [](double a, double b){     
        return a+b;
    };

    auto result2 = func3(15.5,22.5);
    std::cout << "For result2, total is : " << result2 << std::endl;
    std::cout << "For directly, Total is : " << func3(12.5,7.5) << std::endl;
    */


    // Explicitly specify the return type
    /* // a method
    std::cout << "Total is : " << [](double a, double b)-> double {     
        return a+b;
    }(5.5,6.7) << std::endl;
    */

    auto func4 = [](double a, double b)-> int {     
        return a+b;
    };

    auto func5 = [](double a, double b){    // explicitly left it empty
        return a+b;
    };

    double a{5.6};
    double b{7.8};
    auto trial = func4(a,b); 
    auto trial2 = func5(a,b);

    std::cout << "sizeof(trial) : " << sizeof(trial) << std::endl;      //4  
    std::cout << "sizeof(trial2) : " << sizeof(trial2) << std::endl;    // 8 


    std::cout << "Trial(int) : " << trial << std::endl;
    std::cout << "Total is : " << func4(11.2,20.1) << std::endl;
    std::cout << "Trial2(double) : " << trial2 << std::endl;

    return 0;
}