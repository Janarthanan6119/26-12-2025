#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << i << "\n";
        cin >> arr[i];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'o')
            {
                count++;
            }
        }
    }
    cout << count * s;
}