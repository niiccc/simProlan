#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih,idMahasiswa=0,idDosen=0,idTendik=0;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
				idMahasiswa++;
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk,semesterke,skslulus;
				id = "Mhs" + to_string(idMahasiswa);
				cout<<"Nama mahasiswa\t\t\t\t\t:";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir\t\t\t\t\t:";
				cin>>dd;
				cout<<"bulan lahir\t\t\t\t\t\t:";
				cin>>mm;
				cout<<"tahun lahir\t\t\t\t\t\t:";
				cin>>yy;
				cout<<"nrp\t\t\t\t\t\t\t\t:";
				cin>>nrp;
				cout<<"departemen\t\t\t\t\t\t:";
				cin>>departemen;
				cout<<"tahun masuk\t\t\t\t\t\t:";
				cin>>tahunmasuk;
				cout<<"semester yang sedang berlangsung\t:";
				cin>>semesterke;
				cout<<"jumlah sks yang telah lulus\t\t\t\t:";
				cin>>skslulus;
				mahasiswa dataMahasiswa= mahasiswa (id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
				break;
			}
			case 2:{
				idDosen++;
				string id,nama,npp,departemen,pendidikan;
				int dd,mm,yy;
				id="Dosen"+to_string(idDosen);
				cout<<"Nama dosen\t\t";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir\t:";
				cin>>dd;
				cout<<"bulan lahir\t\t:";
				cin>>mm;
				cout<<"tahun lahir\t\t:";
				cin>>yy;
				cout<<"npp\t\t\t\t:";
				cin>>npp;
				cout<<"departemen\t\t:";
				cin>>departemen;
				cout<<"pendidikan\t\t:";
				break;
			}
			case 3:{
				idTendik++;
				string id,nama,npp,unit;
				int dd,mm,yy;
				id="Tendik"+to_string(idTendik);
				cout<<"Nama tenaga kependidikan	\t";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir\t\t\t:";
				cin>>dd;
				cout<<"bulan lahir\t\t\t\t:";
				cin>>mm;
				cout<<"tahun lahir\t\t\t\t:";
				cin>>yy;
				cout<<"npp\t\t\t\t\t\t:";
				cin>>npp;
				cout<<"unit\t\t\t\t\t\t:";
				cin>>unit;
				break;
			}
			case 4:{
				for (int i = 0; i < idMahasiswa; i++)
				{
					cout<<"nama\t\t\t\t\t\t\t\t:"<<recMhs[i].getNama()<<endl;
					cout<<"tanggal lahir\t\t\t\t\t:"<<recMhs[i].getTglLahir()<<"/"<<recMhs[i].getBulanLahir()<<"/"<<recMhs[i].getTahunLahir()<<endl;
					cout<<"nrp\t\t\t\t\t\t\t\t:"<<recMhs[i].getNrp()<<endl;
					cout<<"departemen\t\t\t\t\t\t:"<<recMhs[i].getDepartemen()<<endl;
					cout<<"tahun masuk\t\t\t\t\t\t:"<<recMhs[i].getTahunMasuk()<<endl;
					cout<<"semester yang sedang berlangsung\t:"<<recMhs[i].getSemester()<<endl;
					cout<<"jumlah sks yang telah lulus\t\t:"<<recMhs[i].getSKSLulus()<<endl;
				}
				break;
			}
			case 5:{
				for (int i = 0; i < idDosen; i++)
				{
					cout<<"nama\t\t\t\t\t\t\t\t:"<<recDosen[i].getNama()<<endl;
					cout<<"tanggal lahir\t\t\t\t\t:"<<recDosen[i].getTglLahir()<<"/"<<recDosen[i].getBulanLahir()<<"/"<<recDosen[i].getTahunLahir()<<endl;
					cout<<"npp\t\t\t\t\t\t\t\t:"<<recDosen[i].getNpp()<<endl;
					cout<<"departemen\t\t\t\t\t\t:"<<recDosen[i].getDepartemen()<<endl;
					cout<<"pendidikan\t\t\t\t\t\t:"<<recDosen[i].getPendidikan()<<endl;
				}
				break;
			}
			case 6:{
				for (int i = 0; i < idTendik; i++)
				{
					cout<<"nama\t\t\t\t\t\t\t\t:"<<recTendik[i].getNama()<<endl;
					cout<<"tanggal lahir\t\t\t\t\t:"<<recTendik[i].getTglLahir()<<"/"<<recTendik[i].getBulanLahir()<<"/"<<recTendik[i].getTahunLahir()<<endl;
					cout<<"npp\t\t\t\t\t\t\t\t:"<<recTendik[i].getNpp()<<endl;
					cout<<"unit\t\t\t\t\t\t:"<<recTendik[i].getUnit()<<endl;
				}
				
				
				break;
			}
		}
	}

	return 0;
}
