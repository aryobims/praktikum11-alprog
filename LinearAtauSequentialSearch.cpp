#include <iostream>
using namespace std;

int main (){
	int data [5]={20,37,42,77,89};
	int cari, ditemukan=0;
	
	cout<<"Data Array\n";
	for (int i=0; i<5; i++) {
		cout<<data[i]<<" ";
	}
	
	cout<<"\nMasukkan nilai yang Anda cari : ";
	cin>>cari;
	
	for (int i=0; i<5; i++) {
		if (data[i] == cari) {
			ditemukan = i;
			cout<<"Nilai yang dicari terdapat pada data ke "<<i+1;
			break;
		} 
	}
	if (ditemukan ==0) {
		cout<<"Nilai yang dicari tidak ditemukan";
	}
}