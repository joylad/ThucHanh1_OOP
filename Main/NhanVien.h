#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class NhanVien
{
protected:
	static int MaNV_BD;
	int MaNhanVien;
	string HoTen;
	string DiaChi;
	string SDT;
	string ChuyenMon;
public:
	// Khoi tao gia tri cho Nhan Vien
	NhanVien();

	// Nhap cac gia tri cho nhan vien
	void NhapNV();

	// Xuat du lieu cua nhan vien
	void XuatNV() const;
	
	// Lay ra ma nhan vien
	int getMaNV();
	
	// Lay ra ho ten nhan vien
	string getHoTenNV();
	
};

