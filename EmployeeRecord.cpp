#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;


struct address
{
    int houseno;
    char area[30];
    char city[30];
    char state[30];
} addr;
struct emp
{
    int empno;
    char name[30];
    char desig[30];
    address addr;
    float basic;
} stud;
emp sales[10];
void display(int a);
void enter();
int main()
{
    int eno, i;
    char ch;
    enter();
    do
    {
        cout << "\nEnter employee no. whose information is to be displayed:\n";
        cin >> eno;
        int flag = 0;
        for (i = 0; i < 3; ++i)
        {
            if (sales[i].empno == eno)
            {
                display(i);
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "\nSorry! No such employee exists.\n";
        }
        cout << "\nDisplay?(y/n)..\n";
        cin >> ch;
    } while (ch == 'y');
    getch();
}
void enter(void)
{
    int N;
        cout<<endl<<"Enter how many employees you want to add"<<endl;
        cin>>N;
    for (int i = 0; i < N; i++)
    {        
        cout << "\n Employee no :";
        cin >> sales[i].empno;
        cout << "\nEmployee name:";
        gets(sales[i].name);
        cout << "\nDesignation:";
        gets(sales[i].desig);
        cout << "\nAddress\n";
        cout << "\nHouse no:";
        cin >> sales[i].addr.houseno;
        cout << "\nArea:";
        gets(sales[i].addr.area);
        cout << "\nCity:";
        gets(sales[i].addr.city);
        cout << "\nState:";
        gets(sales[i].addr.state);
        cout << "\nBasic Pay:";
        cin >> sales[i].basic;
        cout << "\n";
    }
}
void display(int a)
{
    cout << "Employee Data\n";
    cout << "\nEmployee no:" << sales[a].empno;
    cout << "\nName:";
    cout << sales[a].name;
    cout << "\ndesignation:";
    cout << sales[a].desig;
    cout << "\nAdress: " << sales[a].addr.houseno;
    cout << sales[a].addr.area;
    cout << sales[a].addr.city;
    cout << sales[a].addr.state;
    cout << "\n Basic pay:" << sales[a].basic;
    cout << "\n";
}