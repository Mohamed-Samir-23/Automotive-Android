#include <iostream>
#include <cstring>

using namespace std;

int number_name = 0;

char **arr = NULL;


int main()
{
    char temp[20];

    cout << "Please enter Number of Name" << endl;
    cin >> number_name;

    arr = (char**) malloc(number_name * sizeof(char));

    for(int i =0; i < number_name ; i++)
    {
        arr[i] = (char*)malloc(20 * sizeof(char));
    }

    for(int  i =0 ; i <number_name ; i++)
    {
        cout << "Please enter Names NO." << i +1 << endl;
        fgets(temp, sizeof(temp), stdin);
        strcpy(arr[i] , temp);
    }

    cout <<"printing"<< endl;

    for(int  i =0 ; i <number_name ; i++)
    {
        printf("%s" , arr[i]);
    }

    return 0;
}
