#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ModulesKobiz.h>

using namespace std;

void showDisplayInfo(){
    cout << "==================================" << endl;
    cout << "����������� �������� 8.2" << endl;
    cout << (char)0xA9<< " 2022 ����� �����" << endl;
    cout << "==================================" << endl << endl << endl;

}

void logic_compare(int a, int b){
    bool res = false;
    a + 1 < b? res = 1: res = 0;
    cout << "a + 1 < b = " << noboolalpha << res << endl;
}

void showNumbers (int x, int y, int z){
    cout << "��������� �������� = " << (int)s_calculation(x, y, z) << endl;
    x = s_calculation(x, y, z);
    cout << "س������������ �������� = " << hex << x << endl;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "ukrainian");
    system("cls");
    showDisplayInfo();
    int x, y, z;
    char a, b;
    cout << "������ 3 ����� �� 2 �������: ";
    cin >> x >> y >> z >> a >> b;
    logic_compare(a, b);
    showNumbers(x, y, z);
    return 0;
}
