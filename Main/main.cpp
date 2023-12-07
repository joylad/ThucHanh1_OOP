#include <vector>
#include <algorithm>
#include "HamPhu.h"

int main()
{
	// 1. BANG DANH SACH DU AN
	vector<DuAn> ListDA;
	int SLDA;
	cout << "Nhap so luong du an: "; cin >> SLDA; cin.ignore();
	ListDA.resize(SLDA);
	for (int i = 0; i < SLDA; i++)
	{
		cout << "Du an thu " << i+1 << ": " << endl;
		ListDA[i].NhapDA();
	}
	if (SLDA > 0) XuatDuAn();
	for (int i = 0; i < SLDA; i++)
	{
		ListDA[i].XuatDA();
	}
	system("pause");
	system("cls");


	// 2. BANG DANH SACH SINH VIEN
	vector<NhanVien> ListNV;
	int SLNV;
	cout << "Nhap so luong nhan vien: "; cin >> SLNV; cin.ignore();
	ListNV.resize(SLNV);
	for (int i = 0; i < SLNV; i++)
	{
		cout << "Nhan vien thu" << i + 1 << ": " << endl;
		ListNV[i].NhapNV();
	}
	if (SLNV > 0) XuatNhanVien();
	for (int i = 0; i < SLNV; i++)
	{
		ListNV[i].XuatNV();
	}
	system("pause");
	system("cls");


	// 3. BANG PHAN CONG 
	vector<PhanCong> ListPC(0);
	for (int i = 0; i < SLNV; i++)
	{
		cout << "Phan cong viec cho " << ListNV[i].getHoTenNV() << endl;
		for (int j = 0; j < SLDA; j++)
		{
			cout << "Du an " << ListDA[j].getTenDA() << endl;
			int x;
			cout << "Neu chon du an thi bam 1, huy thi bam 2: "; cin >> x; cin.ignore();
			if (x == 1)
			{
				PhanCong PC;
				PC.NhapPC(ListNV[i], ListDA[j]);
				PC.NhapCV();
				ListPC.push_back(PC);
			}
		}
	}
	if (ListPC.size() > 0) XuatPhanCong();
	for (int i = 0; i < ListPC.size(); i++)
	{
		ListPC[i].getDL();
	}
	system("pause");
	system("cls");


	// 4.a Sap xep theo ten nhan vien
	cout << "Sap xep Bang phan cong theo ten nhan vien: " << endl;
	sort(ListPC.begin(), ListPC.end(), Tang);
	if (ListPC.size()>0)XuatPhanCong();
	for (int i = 0; i < ListPC.size(); i++)
	{
		ListPC[i].getDL();
	}
	system("pause");
	system("cls");


	// 4.b Sap xep theo so ngay tham gia
	cout << "Sap xep Bang phan cong theo so ngay tham gia: " << endl;
	sort(ListPC.begin(), ListPC.end(), Giam);
	XuatPhanCong();
	for (int i = 0; i < ListPC.size(); i++)
	{
		ListPC[i].getDL();
	}
	system("pause");
	system("cls");


	// 5. Tim phan cong theo ten
	string namefind;
	cout << "Nhap ten ban muon xem phan cong: "; getline(cin, namefind);
	XuatPhanCong();
	for (int i = 0; i < ListPC.size(); i++)
	{
		if (ListPC[i].getDLNV().getHoTenNV() == namefind)
		{
			ListPC[i].getDL();
		}
	}
	system("pause");


	return 0;
}