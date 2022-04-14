#include<iostream>
#include<string.h>
#include<iomanip>
su dung khong gian ten std;
cau truc NS {
	int ngay , thang , nam;
	NS() {
		this->ngay=this->thang=this->nam = 0;
	}
};
class Khachhang {
	tu:
		char ten[30];
		NS ns;
		char cccd[10];
 ho_khau char[50];
	cong cong:
		Khachhang() {
 strcpy (this->ten, "");
 >ns nay. ngay= ns. ngay;
 >ns nay. thang = ns. th?ng;
 >ns nay. nam = ns. nam;
 strcpy (this->cccd, "");
 strcpy (> nay ho_khau," ); 
		}
		~Khachhang() {

		}

		void nhap() {
 cout << "\tNhap ten khach hang: ";
 cin. getline (10, 31);
			lam {
 cout << "\tNhap ngay sinh: ";
 cin >> ns. ngay;
 neu(ns. ngay< 0) {
 cout << "\n\tNhap lai ngay";
				}
 } while(ns. ngay < 0);
			lam {
 cout << "\tNhap thang: ";
 cin >> ns. thang;
 neu(ns. thang< 0) {
 cout << "\n\tNhap lai thang";
				}
 } while(ns. thang < 0);
			lam {
 cout << "\tNhap nam: ";
 cin >> ns. nam;
 neu(ns. nam< 0) {
 cout << "\n\tNhap lai nam";
				}
 } while(ns. nam < 0);

 cout << "\tNhap so cmt: ";
 cin. bo qua();
 cin. getline (cccd,11);
 cout << "\tNhap ho khau: ";
 cin. getline (ho_khau, 51);
		}
		void xuat() {
 cout << "\t" << trai
 << "| " << setw(20) << mu?i
 << "| " << setw(2) << ns. ngay << "/" << setw(2) << ns. thang << "/" << setw(7) << ns. nam
			     << "|    " << setw(12) << cccd
			     << "|    " << setw(21) << ho_khau << "|" <<endl;
		}
 friend istream&operator >> (istream & is, Khachhang &a) {
 a.nhap();
 tro lai la;
		}
 friend ostream&operator << (ostream &os, Khachhang &a) {
 a.xuat();
he dieu hanh tra ve;
		}
		void set_thang(int thang) {
 >ns nay. th?ng = th?ng;
		}
		int get_thang() {
 tra lai >ns nay. thang;
		}
		friend bool operator > (Khachhang &a , Khachhang &b) {
 return strlen(a.ten) > strlen(b.ten);
		}
};
void nhap(Khachhang kh[], int &n) {
	for(int i = 0; i <n ; i++) {
 cout << "\n\tNhap thong tin khach hang: " << i+1 <<endl;
		cin >> kh[i];
	}
}
void sap_xep(Khachhang kh[], int n) {
 for(int i = 0; i <n-1; i++) {
		for(int j = i+1; j <n ; j++) {
			if(kh[i] > kh[j]) {
 hoan doi(kh[i], kh[j]);
			}
		}
	}
}
menu void();
void tieude() {
	cout <<   "\t+------------------------+-----------------+----------------+-------------------------+";
 cout << "\n\t| H? Va Mu?i | Ngay sinh | | CMT H? Khau | ";
	cout << "\n\t+------------------------+-----------------+----------------+-------------------------+\n";
}
void xuat(Khachhang kh[], int n) {
	sap_xep(kh,n);
	tieude();
	for(int i = 0; i <n ; i++) {
		cout << kh[i];
		cout << "\t+------------------------+-----------------+----------------+-------------------------+\n";
	}
}
void xuat_dk(Khachhang kh[], int n) {
	int dem = 0;
	for(int i = 0; i <n ; i++) {
 neu(kh[i]. get_thang() == 12) {
			dem++;
		}
	}
	if(dem != 0) {
		tieude();
		for(int i = 0; i <n ; i++) {
 neu(kh[i]. get_thang() == 12) {
 kh[i]. xuat();
				cout << "\t+------------------------+-----------------+----------------+-------------------------+\n";
			}
		}
 } else cout << "\n\t[!] Khong co khach hang nao sinh nhat thang 12";
}
menu void() {
	cout << "\n\n\t+-------------------------MENU-------------------------+";
 cout << "\n\t| 1. Nhap thong tin khach hang | ";
 cout << "\n\t| 2. In thong tin khach hang tang dan theo ten | ";
 cout << "\n\t| 3. Danh sach khach hang co sinh nh?t thang 12 | ";
 cout << "\n\t| 0. Thoat chuong trinh | ";
	cout << "\n\t+------------------------------------------------------+\n";
}
int main() {
	int n, chon, dem=0;
 Khachhang *kh = Khachhang m?i[n];

	lam {
		thuc don();
 cout << "\n\tNhap lua chon cua ban: ";
		cin >> chon;
		switch(chon) {
 th1:
 cout << "\n\t[?] Nhap so khach h?ng: ";
				cin >> n;
 cin. bo qua();
				nhap(kh,n);
				dem++;
				pha vo;
 th2:
				if(dem != 0) {
					xuat(kh,n);
				} khac {
					cout << "\n\t[sos] Ban chua nhap thong tin khach hang\n";
				}
				pha vo;
 th3:
				if(dem != 0) {
					xuat_dk(kh,n);
				} khac {
					cout << "\n\t[sos] Ban chua nhap thong tin khach hang\n";
				}
				pha vo;
 th0 0:
 cout << "\n\tThoat chuong trinh";
				pha vo;
		}
	} while(chon != 0);
 tra ve 0;
}
