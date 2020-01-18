#include <iostream>

/**
 * The C++ if-else statement cannot return a value or be evaluated to a value as the if-else statement in Lisp, 
 * Scheme, Scala, Haskell and other functional languages. Despite that the ternary operator (?) can be evaluated 
 * to some value, it cannot contain complex expressions as if-else statements.
 */

int main()
{

    int a = 30, b = 20;
    int result;

    // Solution: Wrap the if-else statement into a self-executing lambda expression.
    result = [&]() {
        if(a < b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }();

    if(result)
    {
        std::cout << a << " < " << b << std::endl;
    }
    else
    {
        std::cout << a << " > " << b << std::endl;
    }
    
    return 0;
}