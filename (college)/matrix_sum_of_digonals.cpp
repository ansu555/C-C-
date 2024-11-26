#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of a square matrix : "<<endl;
cin>>n;
int matrix[100][100];

//input
cout<<"enter the element of the matrix : "<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>matrix[i][j];
    }
}
//sums

int insumleft=0;
int insumright=0;
//cal
for(int i=0;i<n;i++)
{
    insumleft=insumleft+matrix[i][i];
    insumright=insumright+matrix[i][n-1-i];
}
cout<<"matrix : "<<endl;
for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"sum of the left diagonal : "<<insumleft<<endl;
     cout<<"sum of the left diagonal : "<<insumright<<endl;
return 0;
}