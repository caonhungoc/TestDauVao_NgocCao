/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "nhanvien.h"
#include "truongphong.h"

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    
    nhanvien *a = new nhanvien(); // nhanvien(string name, string bd, string id, string position_id, int base_salary, int working_day);
    nhanvien *b = new nhanvien("cao nhu ngoc", "1/1/1996", "idngoc", "NV01", 5000000, 22);
    
    truongphong *tp = new truongphong("cao nhu ngoc", "1/1/1996", "idngoctp", "NV01", 5000000, 22, "1/1/2020", 1000000); 
    
    int sal_a = a->cal_salary(), sal_b = b->cal_salary(), tp_sal = tp->cal_salary();
    
    cout << "luong cua nhan vien a la: " << sal_a << endl;
    cout << "luong cua nhan vien b la: " << sal_b << endl;
    cout << "luong cua truong phong tp la: " << tp_sal << endl;

    return 0;
}
