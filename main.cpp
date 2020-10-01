#include <iostream>

using namespace std;

class BasicMath{
public:
    double addnum(double x, double y){
        return x + y;
    }
    double subnum(double x, double y){
        return x - y;
    }
    double multnum(double x, double y){
        return x * y;
    }
    double divnum(double x, double y){
        return x / y;
    }
    long long int modnum(long long int x, long long int y){
        return x % y;
    }
};
int main()
{
    char answer;
    double x;
    double y;
    cout << "Pick a number: " << std::endl;
    cin >> x;
    cout << "Pick another number: " << std::endl;
    cin >> y;
    cout << "What math operation would you like to do? " << std::endl;
    cout << "(A)dd Numbers " << std::endl;
    cout << "(S)ubtract Numbers " << std::endl;
    cout << "(M)ultiply Numbers " << std::endl;
    cout << "(D)ivide Numbers " << std::endl;
    cout << "(G)et the remainder of Numbers " << std::endl;
    cin >> answer;
    BasicMath bm;
    if (answer == 'A'){
        cout << bm.addnum(x, y) << std::endl;
    } else if (answer == 'S'){
        cout << bm.subnum(x, y) << std::endl;
    } else if (answer == 'M'){
        cout << bm.multnum(x, y) << std::endl;
    } else if (answer == 'D'){
        if (x < 0 || y < 0){
            cout << "Invalid Numbers. " << std::endl;
        } else {
            cout << bm.divnum(x, y) << std::endl;
        }
    } else if (answer == 'G'){
        cout << bm.modnum(x, y) << std::endl;
    } else {
        cout << "Invalid Choice. \n";
    }
    return 0;
}
