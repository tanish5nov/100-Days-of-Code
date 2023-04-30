//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        for(int i = 0;i<str.length() ; i++)
        {
            if((patt.find(str[i]) != patt.npos))
            {
                return i;
            }
        }
        return -1;
    }
};
