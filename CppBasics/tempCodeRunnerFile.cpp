#include <bits/stdc++.h>
using namespace std;

void pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// logical

void pattern4(int n)
{
    int i;
    int j;
    // int n;
    // cin >> n;
    // int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }

        for (j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (j = 0; j < n - i + 1; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}
// same thing inverted
void pattern5(int n)
{
    int i;
    int j;
    // int n;
    // cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        };

        for (j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

// this one is a combination of pattern 4 and pattern 5
void pattern6()
{
    int i;
    int j;
    int n;
    cin >> n;
}

// int main()
// {
//     int t;
//     // int n;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         pattern4(n);
//         pattern5(n);
//     }

//     // pattern4(n);
//     // pattern5(n);
//     return 0;
// }

void pattern7()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8()
{
    int start;
    for (int i; i <= 5; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        // int space = 2 * (n - 1);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << "";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern9(n);
    }
}