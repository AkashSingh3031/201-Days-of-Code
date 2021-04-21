#include<iostream>
using namespace std;

const int n=4;
void Transpose(int mat[n][n])
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            swap(mat[i][j], mat[j][i]);

    for(int i=0; i<n; i++)
    {
        cout<<endl;
        for(int j=0; j<n; j++)
            cout<<mat[i][j]<<" ";
    }
}

int main()
{
    cout<<"Transpose of Matrix = ";
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    Transpose(mat);
    cout<<endl;
}

