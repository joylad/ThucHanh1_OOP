#include "PhanCong.h"

void PhanCong::NhapPC(NhanVien a, DuAn b)
{
	NV = a;
	DA = b;
}
void PhanCong::NhapCV()
{
	cout << "	So ngay: "; cin >> SoNgay; cin.ignore();
	cout << "	Vi tri: "; getline(cin, ViTri);
}
void PhanCong::getDL()
{
	cout << setw(20) << left << NV.getMaNV() << setw(20) << left << NV.getHoTenNV();
	cout << setw(20) << left << DA.getMaDA() << setw(20) << left << DA.getTenDA();
	cout << setw(20) << left << SoNgay << setw(20) << left << ViTri << endl;
}
NhanVien PhanCong::getDLNV()
{
	return NV;
}
int PhanCong::getSoNgay()
{
	return SoNgay;
}
