class Solution {
public:
    void reverseString(vector<char>& s) {
        
//         int n;
//        // n=sizeof(s)/ sizeof(s[0]);
//         std::string ans(s.begin(), s.end());
//         //cout<<ans;
//         n=ans.length();
//         //cout<<s[0];
//         int j=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             s[j]=ans[i];
//             j++;
//         }
    
        //cout<<"hi";
        int st=0,e=s.size()-1;
        while(st<e)
        {
            swap(s[st++],s[e--]);
        }
    }
};
