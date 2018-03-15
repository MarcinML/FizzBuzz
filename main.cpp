#include <iostream>

int main()
{
    for(int i=1; i<101; ++i)
    {
        std::string out{};
        if(i%3 == 0) out+="Fizz";
        if(i%5 == 0) out+="Buzz";
        if(out == "") std::cout<<i<<std::endl;
            else std::cout<<out<<std::endl;

    }

    return 0;
}
