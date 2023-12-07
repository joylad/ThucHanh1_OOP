#include "PhanCong.h"

// Ham in ra khung DANH SACH DU AN
static void XuatDuAn()
{
	cout << setfill('-');
	cout << setw(80) << '-' << endl;
	cout << setfill(' ');
	cout << setw(45) << right << "DANH SACH DU AN" << endl;
	cout << setfill('-');
	cout << setw(80) << '-' << endl;
	cout << setfill(' ');
	cout << setw(20) << left << "Ma Du An" << setw(20) << left << "Ten Du An";
	cout << setw(20) << left << "Kieu Du An" << setw(20) << left << "Tong kinh phi";
	cout << endl;
	cout << setfill('-');
	cout << setw(80) << '-' << endl;
	cout << setfill(' ');
}

// Ham in ra khung DANH SACH NHAN VIEN
static void XuatNhanVien()
{
	cout << setfill('-');
	cout << setw(100) << '-' << endl;
	cout << setfill(' ');
	cout << setw(55) << right << "DANH SACH NHAN VIEN" << endl;
	cout << setfill('-');
	cout << setw(100) << '-' << endl;
	cout << setfill(' ');
	cout << setw(20) << left << "Ma Nhan Vien" << setw(20) << left << "Ho Ten";
	cout << setw(20) << left << "Dia Chi" << setw(20) << left << "So Dien Thoai";
	cout << setw(20) << left << "Chuyen Mon" << endl;
	cout << setfill('-');
	cout << setw(100) << '-' << endl;
	cout << setfill(' ');
}

// Ham in ra khung BANG PHAN CONG
static void XuatPhanCong()
{
	cout << setfill('-');
	cout << setw(120) << '-' << endl;
	cout << setfill(' ');
	cout << setw(65) << right << "BANG DANH SACH PHAN CONG" << endl;
	cout << setfill('-');
	cout << setw(120) << '-' << endl;
	cout << setfill(' ');
	cout << setw(20) << left << "Ma Nhan Vien" << setw(20) << left << "Ho Ten";
	cout << setw(20) << left << "Ma Du An" << setw(20) << left << "Ten Du An";
	cout << setw(20) << left << "So Ngay" << setw(20) << left << "Vi Tri";
	cout << endl;
	cout << setfill('-');
	cout << setw(120) << '-' << endl;
	cout << setfill(' ');
}

// Dieu kien sap xep BANG PHAN CONG theo ten (tang)
static bool Tang(PhanCong a, PhanCong b)
{
	return a.getDLNV().getHoTenNV() < b.getDLNV().getHoTenNV();
}

// Dieu kien sap xep BANG PHAN CONG theo so ngay lam (giam)
static bool Giam(PhanCong a, PhanCong b)
{
	return a.getSoNgay() > b.getSoNgay();
}