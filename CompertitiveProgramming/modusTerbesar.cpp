#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int modusTerbesar(const vector<int> &data)
{
    unordered_map<int, int> frekensi;

    for (int val : data)
    {
        frekensi[val]++;
    }

    int maxFrekunesi = 0;
    int mod = -1;

    for (const auto& pair : frekensi)
    {
        if (pair.second > maxFrekunesi)
        {
            maxFrekunesi = pair.second;
            mod = pair.first;
        }
    }
    return mod;
}

int main()
{

    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    cout << modusTerbesar(data) << endl;

    return 0;
}