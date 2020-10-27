#include "truongphong.h"

truongphong::truongphong() {
    
}

truongphong::truongphong(string name, string bd, string id, string position_id, int base_salary, int working_day, string date_promote, int mag_allowance): nhanvien(name, bd, id, position_id, base_salary, working_day) {
    this->date_promote = date_promote;
    this->mag_allowance = mag_allowance;
}

int truongphong::cal_salary() {
    return this->base_salary + 20000 * this->working_day + this->mag_allowance;
}