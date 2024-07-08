#include <iostream>
#include <string>

namespace n1 
{
    void print(double num)
    {
        std::cout<<"the square root of "<<num<<" =  "<<(num*num)<<std::endl;;
    }
}


namespace n2 
{
    void print(std::string textarg)
    {
        for (auto& x : textarg) { 
        x = tolower(x); 
        } 
        std::cout<<"array "<<textarg<<std::endl;
    }
}

namespace n3 
{
    void print(int arr [],int size)
    {
        for(int i =(size-1);i>=0;i--)
        {
            std::cout<<arr[i]<<"  ";
        }
        std::cout<<""<<std::endl;;
    }
}

int main(void) {

    n1::print(5);
    n2::print("MOHAMED");
    int arr[5]={1,2,3,4,5};
    n3::print(arr,5);
    return 0;
}
