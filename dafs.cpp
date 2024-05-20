#include <iostream>
#include <string>
int main()
{
    std::string s = "Hello, world"; // 12 characters
    std::cout << s.size() << '\n'; // prints 12 (number of code units)

    std::string s2 = "ハロー・ワールド"; // 8 characters
    std::cout << s2.size() << '\n'; // prints 24 (number of code units)
}
