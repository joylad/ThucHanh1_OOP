#include "NhanVien.h"

int NhanVien::MaNV_BD = 10000;

NhanVien::NhanVien()
{
	MaNhanVien = MaNV_BD++;
	HoTen = "Unknown";
	DiaChi = "Unknown";
	SDT = "Unknown";
	ChuyenMon = "Unkown";
}

void NhanVien::NhapNV()
{

	cout << "	Ho ten nhan vien: "; getline(cin, HoTen);
	cout << "	Dia chi: "; getline(cin, DiaChi);
	cout << "	So dien thoai: "; getline(cin, SDT);
	cout << "	Chuyen mon: "; getline(cin, ChuyenMon);
}
void NhanVien::XuatNV() const
{
	cout << setw(20) << left << MaNhanVien << setw(20) << left << HoTen;
	cout << setw(20) << left << DiaChi << setw(20) << left << SDT;
	cout << setw(20) << left << ChuyenMon << endl;
}
int NhanVien::getMaNV()
{
	return MaNhanVien;
}
string NhanVien::getHoTenNV()
{
	return HoTen;
}