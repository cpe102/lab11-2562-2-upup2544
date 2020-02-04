#include<iostream>

using namespace std;

unsigned long long  fibonacci(int x);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}


unsigned long long  fibonacci(int y){
	if(y==0){return 0;}else{
if(y==1){return 1;}else{
	return fibonacci(y-1) + fibonacci(y-2);
} } }
