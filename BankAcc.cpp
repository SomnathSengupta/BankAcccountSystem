#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
class Bank{
string name;
int accountNo;
vector<int> Account;
public:
   void create(){
        cout << "Enter your name: " << endl;
        cin >> name;
        srand(time(nullptr));
        accountNo=rand();
        cout << "Mr " << name << " your account no is: " << accountNo << endl; 
        cout << "Deposti Some Money to initiate you account." << endl;
        int Ammount;
        cout << "How many ruppess you want to deposit first: " << endl;
        cin >> Ammount;
        Account.push_back(Ammount);
        cout << "Account has been created successfully.";
    }
    void deposit(){
        int accountNo1;
        int Ammount;
        cout << "Enter your account no: " << endl;
        cin >> accountNo1;
        if(accountNo1 != accountNo){
            cout << "Account not founded";
            exit(1);
        }
        else{
            cout << "Enter the ammount you want to deposit: " << endl;
            cin >> Ammount;
            Account.push_back(Ammount);
            cout << "Ammount has been deposited succesfully." << endl;   
        }
    }
    void withdraw(){
        int accountNo1;
        cout << "Enter your account no: " << endl;
        cin >> accountNo1;
        if(accountNo1 != accountNo){
            cout << "Account not founded";
            exit(1);
        }
        else{
            Account.pop_back();
            cout << "Ammount Withdrawing succesfully done." << endl;   
        }
    }
    void showBalance(){
        int sum=0;
        for(int i: Account){
            sum=sum+i;
        }
        cout << "Balance: " << sum << " rs" << endl;
    }
    

};
int main()
{
    Bank h1;
    h1.create();
    h1.deposit();
    h1.withdraw();
    h1.showBalance();
    
    return 0;
}