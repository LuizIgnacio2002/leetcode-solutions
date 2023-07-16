class Solution {
public:
    bool isAnagram(string s, string t) {
        bool valor=false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            valor=true;
        }
        return valor;
    }
};
