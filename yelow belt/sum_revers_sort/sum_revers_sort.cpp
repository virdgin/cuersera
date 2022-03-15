#include "sum_reverse_sort.h"
#include <iostream>
#include <algorithm>
//#include <vector>

using namespace std;

int Sum(int x, int y)
{
    return x + y;
}
string Reverse(string s)
{
    string result;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        result += s[i];
    }
    return result;
}
void Sort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}