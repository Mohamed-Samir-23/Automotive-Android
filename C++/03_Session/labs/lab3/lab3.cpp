#include <iostream>
#include <string>

namespace n1
{
    
    std::pair<int,int> * createArray(int size)
    {
         std::pair<int,int>*arr=new std::pair<int,int>[size];
         return arr;
    }

    void deleteArray(std::pair<int,int> * arr)
    {
         delete []arr;
    }

    void setPair(std::pair<int,int> * arr,int size,int index,int first,int second )
    {
        if(index<size)
        {
            arr[index].first = first;
            arr[index].second = second;
        }
        else
        {
            std::cout<<"index not valid"<<std::endl;
        }

    }
   std::pair<int,int> getPair(std::pair<int,int> * arr,int size,int index )
   {
        std::pair<int, int> temp1;
        if(index<size)
        {
            temp1.first=arr[index].first ;
            temp1.second=arr[index].second; 
        }
        else
        {
            std::cout<<"index not valid"<<std::endl;
        }
        return temp1;
   }

    void printArray(std::pair<int,int> * arr,int size)
    {
        for(int i  = 0 ;i<size;i++)
        {
            std::cout<<"pair["<<i<<"] "<<"f( "<<arr[i].first<<" )"<<"s( "<<arr[i].second<<" )"<<std::endl;
        }
    }
   
}


int main(void) {

    std::pair<int,int> * ptr =n1::createArray(3);
    n1::setPair(ptr,3,0,1,2);
    n1::setPair(ptr,3,1,3,4);
    n1::setPair(ptr,3,2,5,6);
    n1::printArray(ptr,3);
    return 0;
}
