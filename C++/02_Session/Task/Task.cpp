#include<iostream>
#include <cmath>
#include "Task.hpp"
using namespace std;

void question_1 (void)
{
    int result = 0; 
    int x = 0;
    cout << "Please, Enter number: ";
    cin >> x;
    while (0 != x)
    {
        result += x; 
        cout << "Please, Enter a new number: "; 
        cin >> x; 
    }
    cout << "Result= " << result << endl;

}

void question_2 (void)
{
    unsigned int nseconds; 
    unsigned int hours;   
    unsigned int minutes; 
    cout << "Please, Enter number in seconds: "; 
    cin >> nseconds; 
    hours = (unsigned int)(nseconds / 3600); 
    nseconds = nseconds - ((hours) * 3600); 
    minutes = (unsigned int)(nseconds / 60); 
    nseconds = nseconds - ((minutes) * 60); 
    cout << "H-M-S :- " << hours << ":" << minutes << ":" << nseconds << endl;
    
}


void question_3 (void)
{
    int op;    
    int num1;
    cout << "1) Decimal to Binary" << endl;
    cout << "2) Binary to Decimal" << endl;
    cout << "Please, Enter the operation: ";
    cin >> op;  
    cout << "Please, Enter a number: ";
    cin >> num1;  
    switch (op)
    {
        case 1:
            decimalToBinary(num1);  
            break;
        case 2:
            BinaryTodecimal(num1);  
            break;
        default:
            cout << "Invalid operation" << endl;  
            break;
    }
    
}

void decimalToBinary(int num)
{
    int arr[32];  
    int i = 0;


    while (num > 0)
    {
        arr[i] = num % 2; 
        num = num / 2;     
        i++;
    }

  
    cout << "Binary is = ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];  
    }
    cout << endl;
}

void BinaryTodecimal(int num)
{
    int dec = 0, i = 0, rem;

    
    while (num != 0)
    {
        rem = num % 10;          
        num /= 10;               
        dec += rem * pow(2, i);  
        ++i;                     
    }

    cout << "Decimal value: " << dec << endl; 
}


void question_4 (void)
{
    double population = 162100; 
    double growth_rate = 0.065; 
    int year = 0;               

    while (population <= 1000000) {
        cout << "Year " << year << ": " << population << endl;
        population *= (1 + growth_rate); 
        year++; 
    }

    cout << "it will take " << year << " years to reach one million." << endl;

}


int main (void)
{

    question_1();
    question_2();
    question_3();
    question_4();

    return  0;
}