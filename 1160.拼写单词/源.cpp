#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
        int ret = 0;
        for (auto word : words)
        {
            string tmp = chars;
            int i = 0;
            for (i=0; i<word.size(); i++)
            {
                int index = -1;
                if ( (index = tmp.find(word[i])) != -1)
                {
                    //erase������ͨ���±�ɾ��ʱ��Ҫ�ṩ�ڶ�������������ͻ��index�±�ɾ�������
                    tmp.erase(index, 1);
                }
                else
                {
                    break;
                }
                
            }
            if (i == word.size())
            {
                ret += word.size();
            }
        }
        return ret;
    }
};
 
int main()
{
    Solution s;
    vector<string> vec;
    vec.push_back("cat");
    vec.push_back("bt");
    vec.push_back("hat");
    vec.push_back("tree");

    s.countCharacters(vec, "atach");
}