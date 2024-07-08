#include <iostream>



class pair
{
    public:
        pair();
        pair(int first,int second):first(first),second(second){};
        int getFirst(void);
        int getSecond(void);
        void setFirst(int first);
        void setSecond(int second);
        void setPairs(int first,int second);
        void swaps(void);

    private:
        int first{0};
        int second{0};
};

int pair::getFirst(void)
{
    return first;
}
int pair::getSecond(void)
{
    return second;
}
void pair::setFirst(int first)
{
    this->first=first;
}
void pair::setSecond(int second)
{
    this->second=second;
}
void pair::setPairs(int first,int second)
{
    this->first=first;
    this->second=second;
}
void pair::swaps(void)
{
    int temp=this->second;
    this->second=this->first;
    this->first=temp;
}

class pair2
{
    public:
        pair2();
        pair2(std::string first,std::string second):first(first),second(second){};
        std::string getFirst(void);
        std::string getSecond(void);
        void setFirst(std::string first);
        void setSecond(std::string second);
        void setPairs(std::string first,std::string second);
        void swaps(void);

    private:
        std::string first{""};
        std::string second{""};
};

std::string pair2::getFirst(void)
{
    return first;
}
std::string pair2::getSecond(void)
{
    return second;
}
void pair2::setFirst(std::string first)
{
    this->first=first;
}
void pair2::setSecond(std::string second)
{
    this->second=second;
}
void pair2::setPairs(std::string first,std::string second)
{
    this->first=first;
    this->second=second;
}
void pair2::swaps(void)
{
    std::string temp=this->second;
    this->second=this->first;
    this->first=temp;
}

int main(void)
{
    pair var1{5,6};
    std::cout<<"first  : "<<var1.getFirst()<<std::endl;
    std::cout<<"second  : "<<var1.getSecond()<<std::endl;
    var1.setPairs(15,17);
    std::cout<<"first  : "<<var1.getFirst()<<std::endl;
    std::cout<<"second  : "<<var1.getSecond()<<std::endl;

    pair2 var2{"mohamed","samir"};
    std::cout<<"first  : "<<var2.getFirst()<<std::endl;
    std::cout<<"second  : "<<var2.getSecond()<<std::endl;

    return 0;
}


