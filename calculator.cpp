#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num_of_process = 0;
    float x = 0.0, y = 0.0, z = 0.0, i = 0.0;
    cout << "If you want the addition process, press 1\n";
    cout << "If you want the subtraction process, press 2\n";
    cout << "If you want to multiply, press 3\n";
    cout << "If you want to divide the process, press 4\n";
    cout << "If you want the mod process, press 5\n";
    cout << "If you want the power process, press 6\n";
    cout << "If you want the square process, press 7\n";
    cout << "If you want the ln process, press 8\n";
    cout << "If you want the log process, press 9\n";
    cout << "If you want sin process, press 10\n";
    cout << "If you want cos process, press 11\n";
    cout << "If you want tan process, press 12\n";
    cout << "If you want sec process, press 13\n";
    cout << "If you want csc process, press 14\n";
    cout << "If you want cot process, press 15\n";

    cin >> num_of_process;
    if (num_of_process > 0 && num_of_process < 7)
    {
        cout << "please inter x\n";
        cin >> x;

        cout << "please inter y\n";
        cin >> y;

        switch (num_of_process)

        {
        case 1:
            z = x + y;
            break;
        case 2:
            z = x - y;
            break;
        case 3:
            z = x * y;
            break;
        case 4:
            z = x / y;
            break;
        case 5:
            z = (int)x % (int)y;
            break;
        case 6:
            z = pow(x, y);
            break;
        }
        cout << "the result is  " << z;
    }
    else if (num_of_process > 0 && num_of_process < 16)
    {
        cout << "please inter i\n";
        cin >> i;
        switch (num_of_process)
        {
        case 7:
            z = i * i;
            break;
        case 8:
            z = log(i);
            break;
        case 9:
            z = log10(i);
            break;
        case 10:
            z = sin(i);
            break;
        case 11:
            z = cos(i);
            break;
        case 12:
            z = tan(i);
            break;
        case 13:
            z = 1 / cos(i);
            break;
        case 14:
            z = 1 / sin(i);
            break;
        case 15:
            z = 1 / tan(i);
            break;
        }
        cout << "the result is  " << z;
    }
    else
        cout << "please try again";

    return 0;

}
