#include <iostream>
#include <chrono> /*library untuk menangani tanggal dan waktu*/
#include <thread>
/*urutan instruksi yang dapat dieksekusi secara bersamaan dengan urutan  multithreading , sambil berbagi ruang alamat yang sama.*/
using namespace std;

void main(){
	
	cout << "Bilangan Ganjil : " << endl;
	for(int i=1;i<=20;i++){
	/*Perulangan digunakan untuk menampilkan deret bilangan ganjil*/
		if(i%2!=0)
		/*Didalam perulangan tersebut terdapat statement “if” yang digunakan untuk memilah data dengan sebuah kondisi*/
			cout << i << ", ";
		        /*menampilakan nilai i*/
		std::this_thread::sleep_for(std::chrono::seconds(1));
		/*memanggil thread dan mengatur waktu yang akan digunakan sesuai kondisi*/
	}
	cout <<endl;

	cout << "Bilangan Genap : " << endl;
	for(int i=1;i<=20;i++){
	/*Perulangan digunakan untuk menampilkan deret bilangan ganjil.*/
		if(i%2==0)
		/*Didalam perulangan tersebut terdapat statement “if” yang digunakan untuk memilah data dengan sebuah kondisi,*/
			cout << i << ", ";
		        /*menampilakan nilai i*/
		std::this_thread::sleep_for(std::chrono::milliseconds(2500));
		/*menampilakan thread dan mengatur waktu yang akan digunakan sesuai kondisi*/
	}
}
