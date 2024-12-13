#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interestRate,payment ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate ;
	cout << "Enter amount you can pay per year: ";
	cin >> payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	cout << fixed << setprecision(2); 
	int year = 1 ;
	while(loan > 0){
		
		double interest = ( interestRate / 100.0 ) * loan ;
		double total = interest + loan ;
		double NewBalance = total - payment ;
	
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		if(total > payment){
			cout << setw(13) << left << payment;
		}else{
			cout << setw(13) << left << total;
		}

		if(total > payment){
			cout << setw(13) << left << NewBalance;
		}else{
			cout << setw(13) << left << 0.0 ;
		}
		
		cout << "\n";	
		loan = NewBalance ;
		year++ ;
		
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	return 0;
}