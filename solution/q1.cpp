#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        cout << "Enter no of rows ( 0 to quit ) : " << endl;
        int Number_of_rows;
        cin >> Number_of_rows;
        if (Number_of_rows == 0)
            break;

        string background_character = "#";
        cout << "Enter Background : " << endl;
        cin >> background_character;

        for (int i = 1; i <= Number_of_rows; i++)
        {
            for (int j = Number_of_rows - i + 1; j >= 1; j--)
            {
                cout << background_character;
            }

            for (int j = 2 * i - 1; j >= 1; j--)
            {
                cout << "*";
            }

            for (int j = Number_of_rows - i + 1; j >= 1; j--)
            {
                cout << background_character;
            }

            cout << endl;
        }
    }

    return 0;
}