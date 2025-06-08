#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findSum(int i, long j)
{
    int k = i + j;
    return k;
    // cout << "The sum is " << " " << k
}
int main()
{
    // int x;
    // int y;
    // // float z = 123.435;
    // // cout << z;

    // cout << "Enter value for x: ";
    // cin >> x;

    // cout << "Enter value for y: ";
    // cin >> y;

    // cout << "value of x: " << x << ", value of y: " << y << endl;
    // string str;
    // cout << "what is your name";
    // getline(cin, str);
    // // cin >> str;
    // cout << "Your name is" << " " << str;

    // The data types you will be using for most of the problems ,
    // int , long , long long , float , double
    // string and getline
    // char

    // int age;
    // cout << "Enter your age:" << endl;
    // cin >> age;
    // // cout << "your age is" << " " << age;

    // if (age <= 18)
    // {
    //     cout << "you are a minor";
    // }

    // else
    // {
    //     cout << "you are an adult";
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << i;
    // }

    // int age;
    // cout << "enter your age" << endl;
    // cin >> age;
    // while (age)
    // {
    //     cout << "akshat";
    //     break;
    // }

    // switch statements

    // int day;
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    // {
    //     cout << "Day is Monday";
    //     break;
    // }

    // case 2:
    // {
    //     cout << "day is tuesday";
    //     break;
    // }
    // default:
    // {
    //     cout << "invalid";
    // }
    // }

    // int arr[5];
    // vector<int> vec = {1, 2, 3, 4, 5};
    // // cout << vec[0];
    // int length = vec.size();
    // int i;
    // for (i = 0; i < length; i++)
    // {
    //     cout << vec[i];
    // }

    // int arr[1][4];

    // arr[1][4] = 50;
    // cout << arr[1][4];

    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << "Hello" << i;
    // }

    // for (int i = 0; i <= 25; i = i + 5)
    // {
    //     cout << "Hello" << i;
    // }

    // int i = 2;
    // do
    // {
    //     cout << "Akshat";
    //     i++;
    // } while (i < 3);

    // int i = 0;
    // while (i < 5)
    // {
    //     cout << "Akshat" << " " << i << endl;
    //     i++;
    // }

    // take two numbers and print its sum

    int i, j;
    cout << "Enter the first Number" << endl;
    cin >> i;
    cout << "Enter the second Number" << endl;
    cin >> j;
    int z = findSum(i, j);
    cout << "the sum is " << z;

    return 0;
}
