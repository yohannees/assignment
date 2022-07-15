#include <iostream>
#include <climits>
using namespace std;

void transposeMatrix()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7, 8, 9}};
    int transpose[3][3];
    cout << "\t\t\t\tThe old matrix is" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "\t\t\t";
        for(int j = 0; j < 3; j++)
        {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\t\t\t\tThe transpose matrix is" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "\t\t\t";
        for(int j = 0; j < 3; j++)
        {
            cout<<  matrix[j][i] << " ";
        }
        cout << endl;
    }

}
void sortArray(int arr[], int size)
{
    int maxIndex;
    for(int i = 0; i < size; i++)
    {
        int max = INT_MIN;
        for(int j = i; j < size; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
                maxIndex = j;
            }
        }
        arr[maxIndex] = arr[i];
        arr[i] = max;
        cout << max << " ";

    }
    cout << endl;

}
void printOddNaturalNumber()
{
    int n;
    cout << "\t\t\t\t Input the number of terms";
    cin >>n;
    cout << endl;
    cout << "\t\t\t\t the odd numbers are";
    int i = 1;
    while(i <= 2*n)
    {
        if(i % 2 != 0)
        {
            cout << i << ' ';
        }
        i++;
    }
}

void multiplicationTable()
{
    int n;
    cout << "\t\t\t\tInput the number up to:";
    cin>>n;
    cout << endl;
    cout << "\t\t\t\tMultiplication table 1 to " << n << endl;
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << j << "*" << i << "=" << i*j << "\t\t";
        }
        cout << endl;
    }
}

void charPrinter(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

void patternPrinter()
{
    int n = 1;
    int space = 0;
    for(int i = 0; i <= 4; i++)
    {
        if(n != 5)
        {
            cout << n;
            charPrinter(space);
            if(n != 1)
                cout << n;
            cout << endl;
            cout << endl;
            n++;
            space = space + 5;

        }
        else
        {
            for(int j = 0; j <= 4; j++)
            {
                 cout << n << "    " << " ";
            }

        }
    }
}
int main()
{
    one:
    system("cls");
    cout << "\t\t\t=======================WELCOME=====================" << endl;cout<<endl;
    cout << "\t\t\t\t Press 1 - to Find transpose of a matrix" << endl;
    cout << "\t\t\t\t Press 2 - to sort array elements" << endl;
    cout << "\t\t\t\t Press 3 - to display n terms of odd natural numbers and their sum" << endl;
    cout << "\t\t\t\t Press 4 - to display the multiplication table" << endl;
    cout << "\t\t\t\t Press 5 - to see a given patter" << endl;
    cout << "\t\t\t\t Press 6 - to Exit" << endl;cout<<endl;
    cout << "\t\t\t===================================================" << endl;
    int sort[] = {4, 2, 7, 1, 9};
    int choice;
    cout << "\t\t\t\t please enter your choice:";
    cin>>choice;
     switch(choice)
        {
            case 1:
                transposeMatrix();
                break;
            case 2:
                sortArray(sort, 5);
                break;
            case 3:
                printOddNaturalNumber();
                break;
            case 4:
                multiplicationTable();
                break;
            case 5:
                patternPrinter();
                break;
            default:
                
                exit (0);
        }
    cout<<"enter"<<endl;
    cout<<"1:main menu"<<endl;
    cout<<"press any other key to exit"<<endl;
                int j;
                cin>>j;
                if (j==1)goto one;
                else{return 0;}
        return 0;
    }
    