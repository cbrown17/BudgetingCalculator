#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
  double savingsaccount = 900.00;

  double checking_amount; 
  double price; 
  double transfer;
  int code;
    
    

    cout<<"Enter your checking amount: " << endl;
    cin >> checking_amount;

    cout << "enter code: 1 to transfer from savings to checking | 2 to print new checking value | 3 to subtracting price from checking from a transaction" << endl;
    cin >> code;


  switch(code)
  {
    
    case 1: //transfer amount and print new savings value
    cout<< "Enter transfer amount: " << endl;
    cin >> transfer;
      
    if(transfer < savingsaccount)
    {
      
      savingsaccount -= transfer; 
      cout << "Your new savings amount is: "<< savingsaccount << endl; 
      
    }
    else if( transfer == savingsaccount)
      cout<<"Your savings will result to zero or a negative number after transfer" << endl;

    break;
    case 2: //Print new checking value
    checking_amount += transfer; 
    cout << "Your checking account amount is now: " << checking_amount                                                 << endl; 
  
    break;
    case 3: //Subtract total price from checking amount 
    cout<< "Enter Price: " << endl;
    cin >> price; 
    if(checking_amount != 0)
    {
      checking_amount -= price;
      cout << "Your checking amount is now: " << checking_amount << endl;
    }
    break;
    default:
    cout << fixed << setprecision(2);
    cout << "Your savings account is now: " << savingsaccount; 

  }

}