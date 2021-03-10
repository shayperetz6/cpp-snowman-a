#include <string>
#include <iostream>
 
#include <stdexcept>
#include "snowman.hpp"
using namespace std;
namespace ariel{
    
string snowman(int  num)
{
   string str="";
   if (num<0)
        throw std::out_of_range{" the number must be positive"};
    if((num<11111111)|| (num>44444444))
        throw std::out_of_range{"the number is not in the range"};
    int x=num;
    while(x>0)
    {
        if((x%10==0)||(x%10>4))
            throw std::out_of_range{"the digit needs to be between 1 to 4"};
        x=x/10;
    }
    return "       \n _===_ \n\\(o,o) \n ( : )\\\n ( : ) ";

}

}