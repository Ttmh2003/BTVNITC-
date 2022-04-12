#include<iostream>
using namespace std;

struct Ngay
{
	int Ngay,Thang,Nam;
};


class PTGT
{
	protected:
		int MaPT;
		char HangSX[30];
		Ngay Ngay;
		int GiaCT;
	public:
		PTGT(int a=0,const char *b=" ",int c=0,int d=0,int e=0,int f=0)
		{
			this->MaPT=a;
			strcpy(this->HangSX,b);
			this->Ngay.Ngay=c;
			this->Ngay.Thang=d;
			this->Ngay.Nam=e;
			this->GiaCT=f;
		}
		~PTGT(){
		}
		void Nhap()
		{
			cout<<"NHAP MA PTGT: ";
			cin>>MaPT;
			fflush(stdin);
			cout<<"NHAP HANG SAN XUAT: ";
			cin.getline(HangSX,30);
			cout<<"NHAP NGAY XUAT XUONG: ";
			cin>>Ngay.Ngay>>Ngay.Thang>>Ngay.Nam;
			cout<<"NHAP GIA CHUA THUE: ";
			cin>>GiaCT;
		}
		void Xuat()
		{
			cout<<"MA PHUONG TIEN: "<<MaPT<<endl;
			cout<<"HANG SAN XUAT: "<<HangSX<<endl;
			cout<<"NGAY XUAT XUONG: "<<Ngay.Ngay<<"/"<<Ngay.Thang<<"/"<<Ngay.Nam<<endl;
			cout<<"GIA CHUA THUE: "<<GiaCT<<endl;
		}
};

int main()
{
	int n;
	cout<<"NHAP SO PTGT: ";
	cin>>n;
	PTGT a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"NHAP THONG TIN PTGT THU "<<i+1<<endl;
	    a[i].Nhap();
	}
	cout<<"----THONG TIN PTGT----"<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].Xuat();
		cout<<endl;
	}
	
	return 0;
}
