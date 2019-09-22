#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	int n;
	cout << "Masukan panjang pola : "; cin >> n;
	
//	Pola Pertama
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=1; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}
	cout <<endl<<endl;
	
//	Pola Kedua
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=n; j>=i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
//	Pola Ketiga
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=1; j<i; j++){
			cout << " ";
		}
		for (int k=n; k>=i; k--){
			cout << "*";
		}
		cout << endl;
	}
	
//	Pola Keempat
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=n; j>i; j--){
			cout << " ";
		}
		for (int k=1; k<=i; k++){
			cout << "*";
		}
		cout << endl;
	}
	
//	Pola Kelima
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=n; j>i; j--){
			cout << " ";
		}
		for (int k=1; k<=(2*i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
	
//	Pola Keenam
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=1; j<i; j++){
			cout << " ";
		}
		for (int k=n; k>=(2*i - n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
//	Pola Ketujuh
	cout << "\n\n";
	for ( int i=1; i<=n; i++ ){
		for ( int j=n; j>i; j--){
			cout << " ";
		}
		for (int k=1; k<=(2*i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}
	
	for ( int i=2; i<=n; i++ ){
		for ( int j=1; j<i; j++){
			cout << " ";
		}
		for (int k=n; k>=(2*i - n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	_getch();
	return 0;
}
