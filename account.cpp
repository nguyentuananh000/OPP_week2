#include <iostream>
using namespace std;
class Account {
    private:
        string accountNumber;
        double balance;
        string ownerName;
        double a_balance;
    public:
    void set_accountNumber(string _accountNumber){accountNumber = _accountNumber;}
    void set_balance(double _balance){balance = _balance;}
    void set_ownerName(string _ownerName){ownerName = _ownerName;}
    //gửi tiền
    void deposit(double amount) {
        balance += amount;      //cộng số dư khi gửi tiền 
        cout << "Deposited: " << amount << endl;
    }
    // rút tiền
    void withdraw(double amount, double min_balance) {
        //Nếu số dư không đạt tối thiểu sẽ xảy ra lỗi
        if (balance - amount < min_balance) {
            cout << "Error: Cannot withdraw " << amount << ". Minimum balance of " << min_balance << " must be maintained!" << endl;
            cout << "Current balance: " << balance << ", Available for withdrawal: " << (balance - min_balance) << endl;
        } else {
            balance -= amount;  //số dư trừ theo số tiền đã rút
            cout << "Withdraw: " << amount << endl;
        }
    }
    void displayBalance() {     //hiển thị thông tin khách hàng và số dư
        cout << "Client: "<< ownerName<< endl;
        cout << "Current balance: " << balance << endl;
    }
    void avalable_balance(double min){      //số tiền có thể rút sau số dư tối thiểu
        a_balance = balance - min;
        cout << "Money can be withdraw: "<< a_balance<< endl;
    }

};
int main() {
    Account acc1;
    acc1.set_accountNumber ( "123456789");
    acc1.set_balance  (1000.0);
    acc1.set_ownerName  ("Tá Senu");
    double min_balance = 100;
    
    acc1.displayBalance();
    acc1.deposit(500);
    acc1.displayBalance();
    acc1.withdraw(200, min_balance);
    acc1.displayBalance();
    acc1.withdraw(1300, min_balance); 
    acc1.displayBalance();
    acc1.avalable_balance(min_balance);
    return 0;
}