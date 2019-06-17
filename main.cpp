#include <iostream>

using namespace std;

class BasicMath{
public:
    int addnum(int x, int y){
        return x + y;
    }
    int subnum(int x, int y){
        return x - y;
    }
    int multnum(int x, int y){
        return x * y;
    }
    int divnum(int x, int y){
        return x / y;
    }
    int modnum(int x, int y){
        return x % y;
    }
};
int main()
{
    char answer;
    int x;
    int y;
    cout << "Pick a number: \n";
    cin >> x;
    cout << "Pick another number: \n";
    cin >> y;
    cout << "What math operation would you like to do? \n";
    cout << "(A)dd Numbers \n";
    cout << "(S)ubtract Numbers \n";
    cout << "(M)ultiply Numbers \n";
    cout << "(D)ivide Numbers \n";
    cout << "(G)et the remainder of Numbers \n";
    cin >> answer;
    BasicMath bm;
    if (answer == 'A'){
        cout << bm.addnum(x, y) << endl;
    } else if (answer == 'S'){
        cout << bm.subnum(x, y) << endl;
    } else if (answer == 'M'){
        cout << bm.multnum(x, y) << endl;
    } else if (answer == 'D'){
        if (x < 0 || y < 0){
            cout << "Invalid Numbers. \n";
        } else {
            cout << bm.divnum(x, y) << endl;
        }
    } else if (answer == 'G'){
        cout << bm.modnum(x, y) << endl;
    } else {
        cout << "Invalid Choice. \n";
    }
    return 0;
}
