#pragma once
#include"variable.h"
#include"student.h"
#include"console.h"
void drawTable(int Row, int Col, int sizeCol[]);
void viewDsSvLop(LopHoc A);
void BackGround();
void viewDsMon(HocKy A, int ki, int namhoc);
void viewDsSvMon(NodeMon A);
void viewDsKi(NamHoc A);
void viewDsLop(NodeLop* head, int nam, int namhoc);