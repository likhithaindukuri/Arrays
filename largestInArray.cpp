class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int n = arr.size();
        int maxiVal = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxiVal)
            {
                maxiVal = arr[i];
            }
        }
        return maxiVal;
    }
};
