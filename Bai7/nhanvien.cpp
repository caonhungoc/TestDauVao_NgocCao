#include "nhanvien.h"

nhanvien::nhanvien() {
    this->name = "";
    this->id = "";
    this->working_day = 20;
    base_salary = 5000000;
}

nhanvien::nhanvien(string name, string bd, string id, string position_id, int base_salary, int working_day) {
    this->name = name;
    this->birthday = bd;
    this->id = id,
    this->position_id = position_id;
    this->base_salary = base_salary;
    this->working_day = working_day;
}

int nhanvien::cal_salary() {
    return this->base_salary + 30000 * this->working_day;
}

nhanvien::~nhanvien() {
    
}