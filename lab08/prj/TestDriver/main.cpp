#include <iostream>
#include <ModulesKobiz.h>

using namespace std;

void test_calculation(){
    float exp_res [10] = {888.53, 5916.97, 4338.99, 1591.12, 2286.24, 5170.93, 2487.97, 9983.79, 88.53, 37.53};
    float res [10];
    int datain [10][3] = {{10, 10, 10},
                           {44, 22 ,11},
                           {11, 33 ,22},
                           {33, 1, 6},
                           {8, 16, 24},
                           {10, 49, 13},
                           {7, 32, 11},
                           {40, 40, 20},
                           {0, 0, 10},
                           {-13, 10 ,10}
                           };
    for(int i = 0; i < 10; i++){
        res[i] = s_calculation(datain[i][0], datain[i][1], datain[i][2]);
        if(res[i] == exp_res[i])
            cout << "Testcase #" << i+1 << " is Passed."<< endl;
        else
            cout << "Testcase #" << i+1 << " is Failed." << endl;
    }
}

int main()
{
    test_calculation();
    return 0;
}
