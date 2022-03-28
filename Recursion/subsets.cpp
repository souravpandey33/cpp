#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> &nums, int index, vector<int> &res, vector<vector<int>> &sets)
{
    if(index>=nums.size())
    {
        sets.push_back(res);
        return;
    }
    int value=nums[index];
    res.push_back(value);
    subsets(nums, index+1, res, sets);

    res.pop_back();
    subsets(nums, index+1, res, sets);
}

int main()
{
    vector<int> res;
    vector<vector<int>> sets;
    vector<int> nums={4,7,9};
    subsets(nums, 0, res, sets);
    for(int i=0;i<sets.size();i++)
    {
        for(int j=0;j<sets[i].size();j++)
        {
            cout<<sets[i][j];
        }
        cout<<endl;
    }
    return 0;
}