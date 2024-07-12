#include <iostream>
#include <string>
#include "car.hpp"

using namespace std;

int main()
{
    Car f1_car;

    string company, model;
    int year;

    cout <<"Please enter the car company: ";
    cin >> company;
    cout <<"Please enter the car model: ";
    cin >> model;
    cout <<"Please enter the car year: ";
    cin >> year;

    f1_car.set_car_company(company);
    f1_car.set_car_model(model);
    f1_car.set_car_year(year);

    cout <<"Your car details:"<<endl;
    cout <<"*- Car company: "<< f1_car.get_car_company()<<endl;
    cout<<"*- Car model: "<< f1_car.get_car_model()<<endl;
    cout<<"*- Car year: "<< f1_car.get_car_year()<< endl;
    


    return 0;
}




