#ifndef nhanvien_h
#define nhanvien_h

#include <string>
using namespace std;

class nhanvien {
protected:
    string name;
    string birthday;
    string id;
    string position_id;
    int base_salary;
    int working_day;
public:
    nhanvien();
    nhanvien(string name, string bd, string id, string position_id, int base_salary, int working_day);
    ~nhanvien();
    int cal_salary();
};


#endif