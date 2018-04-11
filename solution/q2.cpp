#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        cout << "Enter an odd number for rows ( 0 to quit ) : " << endl;
        int Number_of_rows;
        cin >> Number_of_rows;
        if (Number_of_rows == 0)
            break;

        if (Number_of_rows % 2 == 0)
        {
            cout << "You have not entered an odd number of rows \n";
            continue;
        }

        for (int i = 1; i <= Number_of_rows / 2; i++)
        {
            for (int j = i * 2 - 1; j >= 1; j--)
            {
                cout << "*";
            }

            cout << endl;
        }

        for (int i = 1; i <= Number_of_rows; i++)
        {
            cout << "*";
        }

        cout << endl;

        for (int i = Number_of_rows / 2; i >= 1; i--)
        {
            for (int j = i * 2 - 1; j >= 1; j--)
            {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}