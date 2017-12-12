#include <iostream>
using namespace std;

typedef struct {
	string nama;
	string ktp;
	string alamat;
	int umur;
	string hp;
	string goldar;
	string asal;
	string tujuan;
	} data; 

typedef struct {
	int jam;
	int menit;
	int detik;
	} waktu;

typedef struct { 
	string hari,bulan;
	int tgl;
	int tahun;	
	} tanggal;

int main () {
	waktu brngkt;
	tanggal KAbrngkt;
	data cost;        

	cout<<"                  ID PENUMPANG  "<<endl;
	cout<<"==========================================="<<endl;
	cout<<" Masukan Nama      : ";
	cin>> cost.nama;        
	cout<<" Masukan No KTP    : ";
	cin>> cost.ktp;
	cout<<" Masukan Alamat    : ";
	cin>> cost.alamat;
	cout<<" Masukan No Hp     : ";
	cin>>cost.hp;
	cout<<" Masukan Umur      : ";
	cin>> cost.umur;
	cout<<" Masukan Gol Darah : ";
	cin>> cost.goldar;
	cout<<" Masukan Asal      : ";
	cin>> cost.asal;
	cout<<" Masukan Tujuan    : ";
	cin>> cost.tujuan;
	cout<<" Masukan Jam       : ";
	cin>> brngkt.jam;
	cout<<" Masukan Menit     : ";
	cin>> brngkt.menit;
	cout<<" Masukan Detik     : ";
	cin>> brngkt.detik;
	cout<<" Masukan Hari      : ";
	cin>> KAbrngkt.hari;
	cout<<" Masukan Tanggal   : ";
	cin>> KAbrngkt.tgl;
	cout<<" Masukan Bulan     : ";
	cin>> KAbrngkt.bulan;
	cout<<" Masukan Tahun     : ";
	cin>> KAbrngkt.tahun;



    cout<<"============================================================"<<endl;
	cout<<"                         TIKET KERETA                    "<<endl;
	cout<<"============================================================"<<endl;
	cout<<" Nama          : "<<cost.nama<<endl;
	cout<<" No. KTP       : "<<cost.ktp<<endl;
	cout<<" Alamat        : "<<cost.alamat<<endl;
	cout<<" No. HP        : "<<cost.hp<<endl;
	cout<<" Umur          : "<<cost.umur<<endl;
	cout<<" Gol. Darah    : "<<cost.goldar<<endl;
	cout<<" Asal          : "<<cost.asal<<endl;
	cout<<" Tujuan        : "<<cost.tujuan<<endl;
	cout<<" Keberangkatan : "<<brngkt.jam<<" : "<<brngkt.menit<<" : "<<brngkt.detik<<endl;
	cout<<" Hari/Tanggal  : "<<KAbrngkt.hari<<" , "<<KAbrngkt.tgl<<" "<<KAbrngkt.bulan<<" "<<KAbrngkt.tahun<<endl;
	cout<<"============================================================"<<endl;

	return 0;
}
