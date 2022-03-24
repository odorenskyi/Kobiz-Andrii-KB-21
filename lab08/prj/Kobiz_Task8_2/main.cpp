#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ModulesKobiz.h>

using namespace std;

void showDisplayInfo(){
    cout << "==================================" << endl;
    cout << "Лабораторне завдання 8.2" << endl;
    cout << (char)0xA9<< " 2022 Кобізь Андрій" << endl;
    cout << "==================================" << endl << endl << endl;

}

void logic_compare(int a, int b){
    bool res = false;
    a + 1 < b? res = 1: res = 0;
    cout << "a + 1 < b = " << noboolalpha << res << endl;
}

void showNumbers (int x, int y, int z){
    cout << "Десяткове значення = " << (int)s_calculation(x, y, z) << endl;
    x = s_calculation(x, y, z);
    cout << "Шістнядцяткове значення = " << hex << x << endl;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "ukrainian");
    system("cls");
    showDisplayInfo();
    int x, y, z;
    char a, b;
    cout << "Введіть 3 числа та 2 символи: ";
    cin >> x >> y >> z >> a >> b;
    logic_compare(a, b);
    showNumbers(x, y, z);
    return 0;
}
