#include<iostream>
using namespace std;
class BankAccount {
    private:
        string accountHolder;
        int accountNumber;
        float balance;
    public:
        string accountType;
    

    void inputDetails() {
        cout << "Enter Account holder Name : " << endl;
        getline(cin >> ws,accountHolder);
        cout << "Enter Account Number : " << endl;
        cin >> accountNumber;
        cout << "Enter Account Balance : " << endl;
        cin >> balance;
    }

    void deposit();
    void withdraw();
    void displayDetails();

};

void BankAccount::deposit() {
    float d;
    cout << "Enter the deposit amount : " << endl;
    cin >> d;
    balance = balance + d;
}

void BankAccount::withdraw() {
    float w;
    cout << "Enter the withdrawal amount : " << endl;
    cin >> w;
    if(w>balance) {
        cout << "Invalid withdrawl amount entered";
        return;
    }
    balance = balance - w;
}
void BankAccount::displayDetails() {
    cout << "==========Account Details============" << endl;
    cout << "ACCOUNT HOLDER : " << accountHolder << endl;
    cout << "ACCOUNT NUMBER : " << accountNumber << endl;
    cout << "ACCOUNT BALANCE : " << balance << endl;
    cout << "ACCOUNT TYPE : " << accountType << endl;
}
int main() {

    BankAccount b1;
        cout << "Enter details of Client 1" << endl;
        b1.inputDetails();
        b1.deposit();
        b1.withdraw();
        cout << "Enter the Account type for client 1 : " << endl;
        cin >> b1.accountType;

    BankAccount b2;
        cout << "Enter details of Client 2" << endl;
        b2.inputDetails();
        b2.deposit();
        b2.withdraw();
        cout << "Enter the Account type for client 2 : " << endl;
        cin >> b2.accountType;

    cout << "========Account Holder Details==========" << endl;
    cout << "**********Client 1 details**********" << endl;
    b1.displayDetails();  
    cout << "**********Client 2 details***********" << endl;
    b2.displayDetails();
    return 0;
}