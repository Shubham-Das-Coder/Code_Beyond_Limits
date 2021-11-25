/*
Link of the question : https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/
Leetcode question number : 1974
*/
class Solution
{
public:
    int minTimeToType(string word)
    {
        int time = 0;
        char prev = 'a';
        for (auto ch : word)
        {
            int minTime = min(abs(ch - prev), min(prev - 'a' + 'z' - ch + 1, 'z' - prev + ch - 'a' + 1));
            cout << prev << " " << minTime << " " << ch << endl;
            time += 1 + minTime;
            prev = ch;
        }
        return time;
    }
};