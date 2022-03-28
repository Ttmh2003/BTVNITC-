#include<iostream>
using namespace std;

class  DaThuc3
{
	private:
		int a,b,c,d;
	public:
		DaThuc3()
		{
			a = 0;
			b = 0;
			c = 0;
			d = 0;
		}
		void nhap()
		{
			cout<<"Nhap a la: "; cin>>a;
			cout<<"Nhap b la: "; cin>>b;
			cout<<"Nhap c la: "; cin>>c;
			cout<<"Nhap d la: "; cin>>d;
		}
		void xuat()
		{
			cout<<a<<"x3 + "<<b<<"x2 + "<<c<<"x + "<<d;
		}
		int A()
		{
			return a;
		}
		int B()
		{
			return b;
		}
		int C()
		{
			return c;
		}
		int D()
		{
			return d;
		}
};

int main()
{
	DaThuc3 s1,s2;
	int a,b,c,d;
	cout<<"Nhap da thuc 1 la:\n";
	s1.nhap();
	cout<<"\nNhap da thu 2 la:\n";
	s2.nhap();
	a = s1.A() + s2.A();
	b = s1.B() + s2.B();
	c = s1.C() + s2.C();
	d = s1.D() + s2.D();
	cout<<"\nTong 2 da thuc la: "<<a<<"x3 + "<<b<<"x2 + "<<c<<"x + "<<d;
	return 0;	
}
