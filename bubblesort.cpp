#include<iostream>
using namespace std;
void maopao(int* a, int n)
{
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			else
			{
				continue;
			}
		}
	}
}
int main()
{
    int n;
    cout<<"How many numbers do you want to sort?";
    cin>>n;
    int *a=new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    maopao(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    system("pause");
	return 0;
    return 0;
}