class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> sc;
        int cows=0, bulls=0;
        int n = secret.size();
        for(int i = 0; i<n; i++)
        {
            sc[secret[i]]++;
            if(secret[i]==guess[i])
            {
                cows++;
                sc[secret[i]]--;
            }
        }
        for(int i = 0; i<n; i++)
        {
            
            if(secret[i]!=guess[i])
            {
                if(sc[guess[i]]>0)
                {
                    bulls++;
                    sc[guess[i]]--;
                }
            }
        }
        string ans = to_string(cows)+"A"+to_string(bulls)+"B";
        return ans;
    }
};
