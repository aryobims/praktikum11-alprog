#include <iostream>
using namespace std;

int main(){
	int data [10], i, j, tmp; //tmp adalah temporary sebagai wadah sementara
	cout<<"Program mengurutkan angka kecil ke besar"<<endl;
	for(i=0; i<10; i++) {
		cout<<"Masukkan Angka ke "<<(i+1)<<" : "; //menginputkan data acak
		cin>>data[i];
	}
	cout<<"Data sebelum diurutkan : "<<endl; //menampilkan data sebelum diurutkan
	for(i=0; i<10; i++) {
		cout<<data[i]<<" ";
	
	}
	
	for(i=0; i<9; i++) { 
			for(j=i+1; j<10; j++){
			if(data[i]>data[j]){ //membandingkan data indeks i dan indeks j, seandainya data pada i > j maka akan ditukar ke sebelah,
				tmp = data [i]; 
				data [i] = data [j]; //mengelompokan data yang lebih kecil kekiri dan yang lebih besar kekanan 
				data [j] = tmp;
			}
		}
	}
	
	cout<<"\nData setelah diurutkan : "<<endl; //menampilkan data yang telah diurutkan
	for(i=0; i<10; i++) {
		cout<<data[i]<<" ";
	}
}