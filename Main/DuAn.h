#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class DuAn
{
private:
	static int MaDuAn_BD;
	int MaDuAn;
	string TenDuAn;
	string KieuDuAn;
	int KinhPhi;
public:
	// Khoi tao gia tri ban dau 
	DuAn();

	// Nhap du lieu cho du an
	void NhapDA();

	// Xuat cac du lieu cua du an
	void XuatDA() const;

	// Lay ra ma du an
	int getMaDA();
	
	// Lay ra ten du an
	string getTenDA();
	
};
