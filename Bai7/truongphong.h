#ifndef truongphong_h
#define truongphong_h

#include "nhanvien.h"

class truongphong: public nhanvien {
protected:
    string date_promote;
    int mag_allowance;
public:
    truongphong();
    truongphong(string name, string bd, string id, string position_id, int base_salary, int working_day,string date_promote,int mag_allowance);
    int cal_salary();
};


#endif