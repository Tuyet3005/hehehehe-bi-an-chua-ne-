#pragma once
#include"variable.h"
#include"login.h"
#include"staff.h"
#include"student.h"
#include"display.h"
#include"console.h"
#include"realtime.h"
#include"DKKH.h"
int InMenuBatDau(int ma_tk);
bool XlMenuBD(int chon, bool role, string tk, string& mk, ListNamHoc& l);
bool Ask_YN(string cauhoi);
// TAI DU LIEU TU FILE LEN HE THONG
//NAM HOC 
void TaiData_Nam(ListNamHoc& l);
//LOP HOC
NodeSv_Lop* TaoNodeSv(Sv sv);
NodeSv_Lop* TaiData_SvLop(NodeLop* nodeLop);
void TaiData_Lop(NodeNamHoc* n);
//MON HOC  
void ThemNodeMon(NodeMon*& A, NodeMon* T);
NodeLop* timNodeLop(NodeNamHoc* namhoc, int styear, string lop);
NodeSv_Lop* timNodeSv_Lop(NodeSv_Lop* head, int mssv);
Sv findInfo(int id);
string timLop(int id);
//them node mon vua tao cua 1 sv vao ds mon ma sv do hoc 
void ThemNodeMon_Sv(NodeMon_Sv*& head, NodeMon* A, NodeSv_Mon* sv_mon);
void TaiData_SvMon(NodeMon*& mon, NodeNamHoc* nodeNam, int ki);
void TaiData_Mon(NodeNamHoc* n);
Sv taiTT_GV(string id);
