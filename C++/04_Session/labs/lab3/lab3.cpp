#include <iostream>


template<typename T1 ,typename T2>
class pair
{
    public:
        pair();
        pair(T1 first,T2 second):first(first),second(second){};
        T1 getFirst(void);
        T2 getSecond(void);
        void setFirst(T1 first);
        void setSecond(T2 second);
        void setPairs(T1 first,T2 second);

    private:
        T1 first{0};
        T2 second{0};
};

template<typename T1, typename T2>
T1 pair<T1, T2>::getFirst() {
    return first;
}

template<typename T1, typename T2>
T2 pair<T1, T2>::getSecond(void)
{
    return second;
}
template<typename T1, typename T2>
void pair<T1, T2>::setFirst(T1 first)
{
    this->first=first;
}
template<typename T1, typename T2>
void pair<T1, T2>::setSecond(T2 second)
{
    this->second=second;
}
template<typename T1, typename T2>
void pair<T1, T2>::setPairs(T1 first,T2 second)
{
    this->first=first;
    this->second=second;
}




int main(void)
{
    pair <int,int>var1{5,6};
    std::cout<<"first  : "<<var1.getFirst()<<std::endl;
    std::cout<<"second  : "<<var1.getSecond()<<std::endl;
    var1.setPairs(15,17);
    std::cout<<"first  : "<<var1.getFirst()<<std::endl;
    std::cout<<"second  : "<<var1.getSecond()<<std::endl;



    return 0;
}


