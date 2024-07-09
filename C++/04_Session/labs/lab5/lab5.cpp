#include <iostream>
#include <string>

enum class type_id {
    int_type ,
    double_type ,
    char_type ,
};


struct node_type
{
    void *pvalue;
    type_id type;
};


class Dyamic_array 
{

private:
    uint32_t size_array;
    node_type * ptr {nullptr};

public:
    Dyamic_array(uint32_t size_array):size_array(size_array)
    {
        ptr=new node_type[size_array];
    }

    void Dyamic_array_set(int index,type_id var_id,void *value)
    {
        if(index<this->size_array)
        {
            ptr[index].pvalue=value;
            ptr[index].type=var_id;
        }
        else
        {
            std::cout << "Error: not found index" << std::endl;
        }
    }

    void Dyamic_array_get(int index,void *value)
    {
        if (index < size_array) 
        {
            switch (ptr[index].type)
            {
                case type_id::int_type:
                    *((int*)value)=*((int*)value);

                    break;
                case type_id::double_type:
                    *((double*)value)=*((double*)value);
                    break;
                case type_id::char_type:
                    *((char*)value)=*((char*)value);
                    break;
                default:
                    std::cout << "Error: unknown type" << std::endl;
                    break;
            }
        } 
        else {
            std::cout << "Error: index out of range" << std::endl;
        }
    }

    type_id getType(int index)
    {
        return ptr[index].type;
    }

    int getSize(void)
    {
        return size_array;
    }

    void printArray() 
    {
        for (uint32_t i = 0; i < size_array; ++i) {
            switch (ptr[i].type) {
            case type_id::int_type:
                std::cout << *static_cast<int*>(ptr[i].pvalue) << std::endl;
                break;
            case type_id::double_type:
                std::cout << *static_cast<double*>(ptr[i].pvalue) << std::endl;
                break;
            case type_id::char_type:
                std::cout << *static_cast<char*>(ptr[i].pvalue) << std::endl;
                break;
            }
        } 
    }


    ~Dyamic_array()
    {
        delete[]ptr;
    }
        
};




int main() {
    int num = 10;
    double pi = 3.14159;
    char m='a';

    Dyamic_array array(3);

    array.Dyamic_array_set(0, type_id::int_type, &num);
    array.Dyamic_array_set(1, type_id::double_type, &pi);
    array.Dyamic_array_set(2, type_id::char_type, &m);

    array.printArray();

    return 0;
}