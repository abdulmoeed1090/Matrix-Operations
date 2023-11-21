#include <iostream>
using namespace std;
// main function
int main()
{
    // variable
    char choice;
    // 2-D arrays
    int arr[3][3];
    int Arr[3][3];
    int mul[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int sum[3][3];
    int avg[3][3];

    // Get input for matrix arr
    cout << "Enter elements for matrix arr (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element of array arr: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // Get input for matrix Arr
    cout << "Enter elements for matrix Arr (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element Arr:";
            cin >> Arr[i][j];
        }
        cout << endl;
    }

    // Choose operation
    cout << "Enter:\n'a' to perform matrix multiplication\n'b' to perform matrix addition\n'c' to find average of matrices\n-------------------------------------\n ";
    cin >> choice;
    cout << "\n\n";

    switch (choice)
    {
    case 'a':
        // Matrix multiplication
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                for (int k = 0; k < 3; k++)
                {
                    mul[i][j] += arr[i][k] * Arr[k][j];
                }

                cout << mul[i][j] << "   ";
            }
            cout << "\n\n";
        }
        break;

    case 'b':
        // Matrix addition
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum[i][j] = arr[i][j] + Arr[i][j];
                cout << sum[i][j] << "   ";
            }
            cout << "\n\n";
        }
        break;
    case 'c':
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                avg[i][j] = static_cast<double>(arr[i][j] + Arr[i][j]) / 2;
                cout << avg[i][j] << "   ";
            }
            cout << "\n\n";
        }
        break;
    default:
        cout << "Invalid Input!!!!\n";
        break;
    }

    return 0;
}
