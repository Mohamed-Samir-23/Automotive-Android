#include<iostream>

using namespace std;

int main (void)
{




    return  0;
}


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
