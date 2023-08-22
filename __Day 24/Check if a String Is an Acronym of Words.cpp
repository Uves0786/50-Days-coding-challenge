class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string copy;
        bool flag = true;
        for (int i = 0; i < words.size(); i++)
        {
            string k = words[i];
            copy += k[0];
            k.clear();
        }
        if ((copy.size() > s.size()) || (copy.size() < s.size()))
        {
            return false;
        }
        else
        {
            for (int i = 0; i < copy.size(); i++)
            {
                if (copy[i] != s[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};