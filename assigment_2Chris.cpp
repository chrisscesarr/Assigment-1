#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std; 

int main (){
    
    double loan, rate;
    int years;
    
    cout<< "Enter the loan ammount: " ; 
    cin >> loan;
    if (loan < 0){
        cout << " Not valid, positive values only.\n";
    }
    
     cout << "Enter the number of years: ";
    cin >> years; 
    if (years < 0){
        cout << " Not valid, positive values only.\n";
    }
    
    
    cout << "Enter the annual interest rate: ";
    cin >> rate;
    if (rate < 0){
        cout << " Not valid, positive values only.\n";
    }
   
    cout.setf(ios::fixed);
    cout.precision(2);
    
    
    double R = (rate / 100) / 12;
    int N = years *12;
    
    double payment = loan * R/ (1 - pow(1+ R, -N));
    
    
    
    
    cout << "Monthly Payment: " << payment << "\n" ; 
    
    
    
    
    
    double balance = loan;
    double total_interest;
    double total_principal;
    
    cout << setw(5)<< "Payment  " << setw(8) << "Interest  "<< setw(9) << "Principal  " << setw(14) << "Balance  "<< endl ;
    
    for (int i = 1; i <= N; i++){
        
        double interest = balance * R;
        double loan = payment - interest;
        total_interest += interest; 
        total_principal += loan; 
        
        balance -= loan;
        
        cout << setw(5)<< i << setw(11) << interest << setw(12) << loan << setw(17) << balance << endl;
    
        
        
    }
    
    
     cout << "Total amount paid: " << total_principal + total_interest;
    
    
    
    return 0; 
}