#include"variable.h"
#include"login.h"
#include"staff.h"
#include"student.h"
int main()
{
	string tk, mk;
	short lc = 1;//0: giao vu ; 1: sinh vien

	LogIn(tk, mk, lc);//dn sai thi tu dong thoat ra luon
	system("cls");
	if (lc == 0)
	{
		GiaoVu();
	}
	else if (lc == 1)
	{
		SinhVien();
		changePass(lc, tk, mk);
	}

	return 0;
}