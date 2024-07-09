#include <iostream>


class Vector_class
{
    public:
        Vector_class();
        Vector_class(int curretSize):curretSize(curretSize){};
        
        Vector_class(T1 first,T2 second):first(first),second(second){};


    private:
        int * arr {nullptr};
        int capacity{1};
        int curretSize{0};

};



int main(void)
{

    return 0;
}
