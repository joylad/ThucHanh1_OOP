#include "DuAn.h"
#include "NhanVien.h"

class PhanCong
{
private:
	NhanVien NV;
	DuAn DA;
	int SoNgay;
	string ViTri;
public:
	// Lay du lieu phan cong tu nhan vien a, du an b
	void NhapPC(NhanVien a, DuAn b);

	// Them ngay lam va vi tri lam viec
	void NhapCV();

	// Lay ra du lieu bang phan cong
	void getDL();

	// Truy cap vao nhan vien de lay ten nhan vien
	NhanVien getDLNV();
	
	// Lay ra so ngay lam
	int getSoNgay();
	
};