#include "DuAn.h"

int DuAn::MaDuAn_BD = 10000;

DuAn::DuAn()
{
	MaDuAn = MaDuAn_BD++;
	TenDuAn = "Unknown";
	KieuDuAn = "Unknown";
	KinhPhi = 0;
}
void DuAn::NhapDA()
{
	cout << "	Ten du an: "; getline(cin, TenDuAn);
	cout << "	Kieu du an: "; getline(cin, KieuDuAn);
	cout << "	Tong kinh phi: "; cin >> KinhPhi; cin.ignore();
}
void DuAn::XuatDA() const
{
	cout << setw(20) << left << MaDuAn << setw(20) << left << TenDuAn;
	cout << setw(20) << left << KieuDuAn << setw(20) << left << KinhPhi;
	cout << endl;

}
int DuAn::getMaDA()
{
	return MaDuAn;
}
string DuAn::getTenDA()
{
	return TenDuAn;
}