#include <iostream>
#include <string>


namespace DyamicAlloc
{
    int ** allocat2darr(int row ,int col)
    {
        int **arr=new int*[row];
        for(int i=0;i<row;i++)
        {
            arr[i]=new int[col];
        }
        return arr;
    }

    void delete2darr(int **arr,int col)
    {
        for(int i=0;i<col;i++)
        {
            delete []arr[i];
        }
        delete []arr;
    }
}



int main(void) {

    int **ptr2darr=DyamicAlloc::allocat2darr(5,6);
    ptr2darr[0][0]=1;
    
   
    return 0;
}


