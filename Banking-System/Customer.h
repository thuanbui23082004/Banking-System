#pragma once
#pragma once
#include "Human.h"
#include "string.h"
#include <iostream>
#include <fstream>




using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer :public Human {
private:
	std::string username;
	string password;
	int balance;
	string accountNumber;

public:

	Customer();
	Customer(string n, string id, string sex, string ad, string te, string d, string mail, std::string username, string password , string accountNumber);
    Customer(string username, string password);
	~Customer();
	std::string getUsername();
	void setUsername(std::string);
	string getPassword();
	void setPassword(string);
	int getBalance();
	void setBalance(int);
	string getAccountNumber();
	void setAccountNumber(string);
    void checkLogin(string username, string password);
    void getCustomerbyFile();
    void show();
	//t?o t�i kho?n m?i
	//void createAccount();


	//xu li voi file 
	void saveCustomerToFile();

	//register


	//doi mk
	//void changePassword();

	//logn in
    bool checkLogin();
    void login();
	//bool checkLogin(string username, string password);


	//show
	//void enterInforCustomer();
	//Customer getCustomerById(int id);

	//x�a
	//void deleteCustomer();

	//rut tien

	//nap tien

	//



};




#endif
