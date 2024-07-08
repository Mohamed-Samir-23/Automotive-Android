#ifndef _TASK_H_  
#define _TASK_H_  

#include<iostream>

struct Name {
    std::string firstName;
    std::string middleName;
    std::string lastName;
};

struct DateOfBirth {
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

struct Address {
    std::string street;
    std::string city;
    std::string country;
};

struct Contacts {
    std::string telephoneNumber;
    std::string mobileNumber;
    std::string emailAddress;
};


#endif 