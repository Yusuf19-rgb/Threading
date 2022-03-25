#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void main(){
	
	cout << "Bilangan Ganjil : " << endl;
	for(int i=1;i<=20;i++){
		if(i%2!=0)
			cout << i << ", ";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	cout <<endl;

	cout << "Bilangan Genap : " << endl;
	for(int i=1;i<=20;i++){
		if(i%2==0)
			cout << i << ", ";
		std::this_thread::sleep_for(std::chrono::milliseconds(2500));
	}
	cin.get();
}