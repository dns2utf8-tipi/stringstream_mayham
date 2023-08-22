#include <iostream>
#include <sstream>

int main() {

    std::stringstream a {
        "ABC",
        std::ios_base::app
        //std::ios_base::in | std::ios_base::out
        //std::ios_base::in | std::ios_base::out | std::ios_base::app
    };

    a << "123";

    std::cout << a.str() << std::endl;

}
