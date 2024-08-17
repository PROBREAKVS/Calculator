#include <iostream>
using namespace std;
int main() {

    int first;
    int second;
    int do_;
    int result;
    char* type;

    cout << "\nДействие (площадь=1, периметр=2) ";
    cin >> do_;

    cout << "\nЕдиница измерения: ";
    cin >> type;

    cout << "\nПервое число: ";
    cin >> first;

    cout << "\nВторое число: ";
    cin >> second;

    if (do_ == 1) {
        result = first * second;
        cout << "Площадь:" << result << "(" << type << "2)\n";
        return 0;
    }
    if (do_ == 2) {
        int res = first + second;
        result = res * 2;
        cout << "\nПериметр:" << result << "(" << type << ")\n";
        return 0;
    }
}
