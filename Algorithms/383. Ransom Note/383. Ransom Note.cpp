class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (magazine.size() < ransomNote.size())
            return false;
        map<char, int> mp;

        for (int i = 0; i < magazine.size(); i++)
        {
            mp[magazine[i]]++;
        }

        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        for (int i = 0; i < ransomNote.size(); i++)
        {
            auto it = mp.find(ransomNote[i]);
            if (it == mp.end())
            {
                return false;
            }
            else
            {
                if (it->second <= 0)
                {
                    return false;
                }
                else
                {
                    mp[ransomNote[i]]--;
                    //  cout<<mp.find(ransomNote[i])->second<<" ";
                }
            }
        }

        return true;
    }
};