#include <iostream>
#include <conio.h>
using namespace std;

//Deklarasi Variabel umum
string nama, nim,kelas,prodi;
float hasil, ipk;
char predikat;
int jum=0;
int trb=0;
void grade(int nilai[], int b){
	//Alokasi Memory Dinamis pada data nilai berbentuk array
//	int nilai[20];
	int *pointer;
	pointer=nilai;
	
	string makul[20];
	
	//Menampilkan Inputan Nilai
	for(int i=0; i<b;i++)
	{
		cin.ignore();
		cout<<"\n+++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\nNama Mata Kuliah ke- "<<i+1<<" : ";
		getline(cin,makul[i]);
		cout<<"Nilai "<<makul[i]<<" \t: ";
		cin>>nilai[i];
		
	}for(int i=0; i<b;i++){
		hasil += nilai[i];
	}
	ipk=hasil/jum;
		hasil=0;
	//Logika Predikat IPK
		if(ipk>=80){
			predikat='A';
		}else if(ipk<80 && ipk>=65){
			predikat='B';
		}else if(ipk<65 && ipk>=55){
			predikat='C';
		}else if(ipk<55){
			predikat='D';
		}
	
}

//membuat fungsi void nilai
void input()
{
    //Meminta User untuk menginput Berapa banyak nilai
    cout<<"\nJumlah Nilai yang akan diinputkan : ";
	cin>>jum;
	int nilai[jum];
    grade (nilai,jum);
    
    int *ptr;
    ptr = nilai;
    cout << "\n Urutan nilai mahasiswa: ";
    trb = *ptr;
    for (int i = 0; i < jum; i++) {
    cout << *(ptr + i) << ','; /*mengurutkan nilai mahasiswa berdasarkan input*/
    if (trb < *(ptr + i)) {
    trb = *(ptr + i); }
      
    }
    
    cout << "\n Urutan descending: "; /*mengurutkan nilai mahasiswa dari yg tinggi ke yg rendah */
    for (int i = 1; i <= jum; i++) {
    cout << *(ptr + i) << ',';
    }

  cout << "\n Nilai tertinggi    :  " << trb;
	
	
		cout<<"\n=======================================================\n";
}
//Fungsi Void
void mahasiswa()
{
	cin.ignore();
	//Menginputkan Data-data Mahasiswa
	cout<<"\nMasukan Nama Mahasiswa \t\t: ";
	getline(cin,nama);
	cout<<"Masukan NIM Mahasiswa \t\t: ";
	getline(cin,nim);
	cout<<"Masukan Kelas Mahasiswa \t: ";
	getline(cin,kelas);
	cout<<"\n=======================================================\n";
	
	//Memanggil Fungsi Void nilai ke dalam fungsi void mahasiswa
	input();
	
	//Output dari Data Mahasiswa
	cout<<"\n\nData Atas nama : "<<"\nNama \t\t: "<<nama<<"\nNIM \t\t: "<<nim<<"\nKelas \t\t: "<<kelas<<"\nPredikat IPK \t: "<<predikat<<"\nRata-rata Nilai : "<<ipk<<"\n\nBERHASIL DISIMPAN."<<endl;
}
//Fungsi int
int main()
{
	data:
	cout<<"SELAMAT DATANG DI SISTEM INPUT DATA MAHASISWA AMIKOM YK\n";
	cout<<"=======================================================\n";
	
	int jml;
	cout<<"\nBerapa Mahasiswa yang ingin di Inputkan \t: ";
	cin>>jml;
	
	//Perulangan Inputan Data Mahasiswa
	for(int i=0;i<jml;i++){
		//Memanggil Fungsi Void mahasiswa ke dalam Fungsi int
		mahasiswa();
	}
	//Sistem layar bersih agar tidak terlihat penuh
	cin.ignore();
	cout<<"\nTekan Enter untuk kembali menginputkan. ";
	cin.get();
	system("cls");
	goto data;
}
