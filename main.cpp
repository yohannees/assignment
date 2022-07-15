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


