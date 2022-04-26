#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class GV
{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl;
	public:
		void nhap()
		{
			cout<<"\tTen GV la: "; cin.getline(ht,30);
			cout<<"\tTuoi GV la: "; cin>>t;
			cin.ignore();
			cout<<"\tBang cap la: "; cin.getline(bc,15);
			cout<<"\tChuyen nganh la: "; cin.getline(cn,20);
			cout<<"\tBac luong la: "; cin>>bl;
			cin.ignore();
		}
		float lcb()
		{
			return bl*610.0;
		} 
		char* chuyennganh()
		{
			return cn;
		}
		void xuat()
		{
			cout<<left<<setw(30)<<ht
						<<setw(15)<<t
						<<setw(20)<<bc
						<<setw(25)<<cn
						<<setw(15)<<bl
						<<setw(20)<<lcb()<<endl;
		}
};

void tieude()
{
	cout<<left<<setw(30)<<"Ho Ten"
				<<setw(15)<<"Tuoi"
				<<setw(20)<<"Bang Cap"
				<<setw(25)<<"Chuyen Nganh"
				<<setw(15)<<"Bac Luong"
				<<setw(20)<<"Luong Co Ban"<<endl;
}

int main()
{
	int n;
	GV a[100];
	cout<<"Nhap so GV la: "; cin>>n;
	cin.ignore();
	for(int i=0;i<n; i++)
	{
		cout<<"\nNhap thong tin GV thu "<<i+1<<" la:\n";
		a[i].nhap();
	}
	cout<<"\nDanh sach cac giao vien co tien luong nho hon 2000 la:\n";
	tieude();
	for(int i=0;i<n; i++)
	{
		if(a[i].lcb() < 2000)
		{
			a[i].xuat();
		}
	}
	for(int i=0; i < n; i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if( a[i].chuyennganh() != a[j].chuyennganh() )
			{
				GV tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout<<"\nDanh sach giao vien sap xep theo chuyen nganh la:\n";
	tieude();
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	return 0;
}
