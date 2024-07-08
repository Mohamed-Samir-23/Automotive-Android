#include <iostream>


enum class error_network {
    Bad_Request = 400,
    Not_found =404,
    Server_Error =500,
    Gatway_Timeout=504,
};


void printError(error_network arg_error)
{

    switch (arg_error)
    {
    case error_network::Bad_Request:
        std::cout<<"Bad Request"<< std::endl;
        break;
    case error_network::Not_found:
        std::cout<<"Not found"<< std::endl;
        break;
    case error_network::Server_Error:
        std::cout<<"Server Error"<< std::endl;
        break;
    case error_network::Gatway_Timeout:
        std::cout<<"Gatway Timeout"<< std::endl;
        break;
    default:
        std::cout<<"not handle"<< std::endl;
        break;
    }


}



int main(void)
{
    error_network p1 =  error_network::Bad_Request;
    
    printError(error_network::Bad_Request);
    printError(error_network::Not_found);
    printError(error_network::Server_Error);
    printError(error_network::Gatway_Timeout);


    return 0;
}


