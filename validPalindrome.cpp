class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp= "";
        for(char& c : s)
        {
            if(c>='A' && c<='Z')
            {
                temp.push_back(c+ 'a'-'A');
}
            else if((c>='a' && c<='z') || (c>='0' && c<='9'))
            {
                temp.push_back(c);
}
}
        int n= temp.size();
        for(int i=0;i<n/2;i++)
        {
            if(temp[i]!=temp[n-1-i])
                return false;
}
        return true;
        
    }
};