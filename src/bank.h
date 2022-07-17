#ifndef BANK_H_
#define BANK_H_

#include "user.h"
#include <unordered_map>
#include <string>
#include <vector>

class Bank
{
    //Bank name
  	std::string name;
    //Map borrower name with his/her loan details
  	std::unordered_map<std::string, User*> borrowers_map;

public:
    Bank()      = default; //constructor
    Bank(std::string name_); //constructor 
    //~Bank()     = default; //destructor

    //getter and setter method for bank name
    std::string get_bank_name()
    {
		return name;
    }
    void set_bank_name(std::string name_)
	{
		name = name_;
	}

    // User get_borrowers();
    // void set_borrower_details(User&)

    User* loan(std::string, double, int, double);

    void payment(User*, double, int);

    std::vector<std::string> balance(User*, int);

    //adds new borrower in the bank
    void add_borrower(User*, std::string);
    
    //gets borrower details from the name of borrower
    User* get_borrower(std::string);
};

#endif