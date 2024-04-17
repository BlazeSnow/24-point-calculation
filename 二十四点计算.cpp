#include "iostream"
#include "algorithm"

using namespace std;

// 运算专用的函数
int operation(int a, int b, char compute) {
    if (compute == '+') {
        return a + b;
    } else if (compute == '-') {
        return a - b;
    } else if (compute == '*') {
        return a * b;
    } else if ((compute == '/') && (a % b == 0)) {
        return a / b;
    } else {
        return -1000;
    }
}

// 括号形式A_B_C_D
int parenthesis1(int num[], char cul[]) {
    int temp = operation(num[0], num[1], cul[0]);
    temp = operation(temp, num[2], cul[1]);
    return operation(temp, num[3], cul[2]);
}

// 括号形式(A_B)_(C_D)
int parenthesis2(int num[], char cul[]) {
    int step1 = operation(num[0], num[1], cul[0]);
    int step2 = operation(num[2], num[3], cul[2]);
    return operation(step1, step2, cul[1]);
}

//for循环运算符，然后代入各种括号的运算形式
void calculate(int number[]) {
    //统计成功计算的次数
    int NumberOfAnswer = 0;
    //定义数组用于加减乘除符号存放
    const char MathematicalSymbol[4] = {'+', '-', '*', '/'};
    //从小到大排序数组
    sort(number, number + 4);
    //排列组合数字和符号
    do {
        //排列组合符号
        for (char i: MathematicalSymbol) {
            for (char j: MathematicalSymbol) {
                for (char k: MathematicalSymbol) {
                    //定义运算用的加减乘除字符数组
                    char cul[3] = {i, j, k};
                    if (parenthesis1(number, cul) == 24) {
                        cout << "((" << number[0] << cul[0] << number[1] << ") ";
                        cout << cul[1] << number[2] << " )";
                        cout << cul[2] << number[3] << " = 24" << endl;
                        NumberOfAnswer++;
                    }
                    if (parenthesis2(number, cul) == 24) {
                        cout << "(" << number[0] << cul[0] << number[1] << ") ";
                        cout << cul[1] << " (" << number[2];
                        cout << cul[2] << number[3] << ") = 24" << endl;
                        NumberOfAnswer++;
                    }
                }
            }
        }
        //最后排列组合数字，然后下一个循环，最后一个循环结束后退出循环
        //用next_permutation排列组合数字并输入主程序中进行运算
    } while (next_permutation(number, number + 4));
    cout << "共有" << NumberOfAnswer << "个答案" << endl;
}

int main() {
    //定义数组
    int number[4];
    //输入数字
    cout << "请输入四个数字(以空格隔开):" << endl;
    for (int &i: number) {
        cin >> i;
        if (!((0 < i) && (i <= 13))) {
            cout << "ERROR:数字范围应当为(0,13]" << endl;
            abort();
        }
    }
    //进入函数进行运算
    cout << "有以下结果:" << endl;
    calculate(number);
    return 0;
}
