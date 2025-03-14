#include <sstream>
#include "Customer.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <Windows.h>
#include <cstring>
#include "string.h"
#include <regex> 

using namespace std;

Customer::Customer()
{
	this->username = "";
	this->password = "";
	this->balance = 0;
	this->accountNumber = "";
}


Customer::Customer(string name, string id, string sex, string address, string phone, string date,
	string mail, std::string username, string password, string accountNumber)
	: Human(name, id, sex, address, phone, date, mail)
{
	this->username = username;
	this->password = password;
	this->balance = 0;
	this->accountNumber = accountNumber;
}
  
Customer::Customer(string username, string password)
{
    this->username = username;
    this->password = password;
}
std::string Customer::getUsername()
{
	return this->username;
}
void Customer::setUsername(std::string username)
{
	// Kiểm tra độ dài
	if (username.length() < 5 || username.length() > 20) {
		cout << "Username phải từ 5 đến 20 ký tự!" << endl;
		return;
	}

	// Kiểm tra có chứa ký tự không hợp lệ không (chỉ chấp nhận chữ và số)
	for (char c : username) {
		if (!isalnum(c)) { // Nếu không phải chữ hoặc số
			cout << "Username chỉ được chứa chữ cái và số!" << endl;
			return;
		}
	}

	// Kiểm tra username có khoảng trắng không
	if (username.find(' ') != -1) {
		cout << "Username không được chứa khoảng trắng!" << endl;
		return;
	}

	// Nếu hợp lệ, gán vào thuộc tính username
	this->username = username;
}
void Customer::show() {
    cout << "ID: " << this->getId() << endl;
    cout << "Name: " << this->getName() << endl;
}
string Customer::getPassword()
{
	return this->password;
}

void Customer::setPassword(string password)
{
	// Kiểm tra độ dài
	if (password.length() < 5 || password.length() > 20) {
		cout << "Password phải từ 5 đến 20 ký tự!" << endl;
		return;
	}

	// Nếu hợp lệ, gán vào thuộc tính password
	this->password = password;
}


int Customer::getBalance()
{
	return this->balance;
}

void Customer::setBalance(int balance)
{
	this->balance = balance;
}

string Customer::getAccountNumber()
{
	return this->accountNumber;
}

void Customer::setAccountNumber(string accountNumber)
{
	this->accountNumber = accountNumber;
}

void Customer::saveCustomerToFile()
{
	
    ofstream o("InfoCustomer.txt", ios::app);  // Mở file ở chế độ ghi tiếp (append)

    if (!o.is_open()) {
        cerr << "Error: Could not open file for writing." << endl;
        return;
    }

    o << left << setw(10) << this->getId() << "," << setw(25) << getName() << "," << setw(5) << this->getSex() << ","
        << setw(17) << getDateOfBirth() << "," << setw(15) << this->getAddress() << ","
        << setw(15) << this->getAge() << "," << setw(15) << this->getPhoneNumber() << "," << setw(30) << this->getEmail() << "," <<
        setw(15) << this->getUsername() << "," << setw(15) << this->getPassword() << "," <<setw(15)<<this->getAccountNumber()<< "," <<setw(15)<<this->getBalance()<<endl;

    o.close();  // Đóng file sau khi ghi
}
void trim(string& s) {
    s = regex_replace(s, regex("\\s+$"), "");  // Xóa khoảng trắng cuối chuỗi
}
bool Customer::checkLogin() {
    ifstream file("InfoCustomer.txt");
    if (!file) {
        cout << "Error: Could not open file!" << endl;
        return false;
    }
    string idTxt, nameTxt, lineTxt, UsernameTxt, PasswordTxt, sexTxt, dateOfBirthTxt, addressTxt, ageTxt, phoneNumberTxt, emailTxt, accountNumberTxt, balanceTxt;
    while (getline(file, lineTxt)) {
        stringstream ss(lineTxt);
        getline(ss, idTxt, ','); trim(idTxt);
        getline(ss, nameTxt, ','); trim(nameTxt);
        getline(ss, sexTxt, ','); trim(sexTxt);
        getline(ss, dateOfBirthTxt, ','); trim(dateOfBirthTxt);
        getline(ss, addressTxt, ','); trim(addressTxt);
        getline(ss, ageTxt, ','); trim(ageTxt);
        getline(ss, phoneNumberTxt, ','); trim(phoneNumberTxt);
        getline(ss, emailTxt, ','); trim(emailTxt);
        getline(ss, UsernameTxt, ','); trim(UsernameTxt);
        getline(ss, PasswordTxt, ','); trim(PasswordTxt);
        getline(ss, accountNumberTxt, ','); trim(accountNumberTxt);
        getline(ss, balanceTxt, ','); trim(balanceTxt);
      
       
        if ( this->username==UsernameTxt &&  this->password==PasswordTxt) {
            setId(idTxt);
            setName(nameTxt);
            setSex(sexTxt);
            setDateOfBirth(dateOfBirthTxt);
            setAddress(addressTxt);
            setAgeByDateOfBirth(dateOfBirthTxt);
            setPhoneNumber(phoneNumberTxt);
            setEmail(emailTxt);
            setBalance(stoi(balanceTxt));
            setAccountNumber(accountNumberTxt);
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}


Customer::~Customer()
{
}

