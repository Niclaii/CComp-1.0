#include <iostream>
#include <string>

using namespace std;

class Account {
    
    public:

        Account(string accountName, int initialBalance)
            : name{accountName} {

            if (initialBalance > 0) {
            balance = initialBalance;
            }
        }

        void deposit(int depositAmount){
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        void withdraw (float getWithdraw){
            if (getWithdraw <= balance){
                balance = balance - getWithdraw;
                cout<<"Withdrawing $"<<getWithdraw<< " ...";
            }
            else {
                cout<<"Withdraw amount exceeded account balance.";
            }
        }
        int getBalance() const {
            return balance;
        }

        void setName (string accountName){
            name = accountName;
        }

        string getName() const {
            return name;
        }

    private:
        string name;
        int balance{0};
};