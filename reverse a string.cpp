#include <iostream>
#include <algorithm> 

int main() 
{
    std::string original_string = "Hello, world!";
    std::reverse(original_string.begin(), original_string.end());
    std::cout << "Original: " << "Hello, world!" << std::endl;
    std::cout << "Reversed: " << original_string << std::endl;
    return 0;
}

