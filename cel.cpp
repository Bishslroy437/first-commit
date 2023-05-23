
#include <iostream>
using namespace std;
class Cal
{
    public:
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string mn[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int year = 2023;
    int date = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

    void title()

    {
        cout << "\n---------------------------------------";
        cout << "\n\tCalendar "<< year;
        cout << "\n---------------------------------------\n";
    }
    int n = 0;
    void month()
    {
        for (int i = 0; i <= n; i++)
        {
            if (i == n)
            {
                cout << "\n---------------------------------------";
                cout << "\n\t" << mn[n] << year;
                cout << "\nSun   Mon   Tue   Wed   Thu   Fri   Sat\n";
            }
            for (int j = 0; j < date; j++)
            {
                cout << "     ";
            }
            int week = date;
            for (int m = 1; m <= d[i]; m++)
            {
                if (m <= 10)
                {
                    cout << "     ";
                }
                else
                {
                    cout << "    ";
                }
                if (week > 6)
                {
                    cout << "\n"
                         << m;
                    week = 0;
                }
                else
                {
                    cout << m;
                }
                week++;
            }
            date = week;
        }
    }
    char opt;
    void func()
    {
        do
        {
            cout << "\nEnter 'n' for next month, 'p' for previous month, or 'q' to quit: ";
            cin >> opt;
            if (opt == 'n')
            {
                n++;
                month();
            }
            else if (opt == 'p')
            {
                n--;
                month();
            }
        }while (opt != 'q');
    }
};
        int main()
        {
            Cal c1;
            c1.title();
            c1.month();
            c1.func();
            return 0;
        }