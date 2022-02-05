class Solution {
public:
    
    bool isPalindrome(string s) {     
        
        // int i = 0;
        // int len = s.length();
        // while(i < len){
        //      if (!isalnum(s[i]) || s[i] == ' '){
        //         s.erase(i,1);
        //         len--;
        //     }else
        //         i++;
        // }
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        // for(i=0;i<len/2;i++)
        // {
        //     if(s[i]!=s[len-1-i])
        //         return false;
        // }
        // //cout<<s;
        // return true;
        long long int n,j=0;
        string fin;
        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        n=s.length();
        
    //cout<<n;
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9') ||(s[i]>='A' && s[i]<='Z'))
            {
                //fin[j]=s[i];
                fin.push_back(s[i]);
                cout<<fin[j];
                j++;
                
            }                
        }
    //cout<<fin;
	
    	for(int i=0;i<j;i++)
        {
            if(fin[i]>='A' && fin[i]<='Z')
                fin[i]=fin[i]+32;
           //cout<<fin[i];
        }
   		
    
    	//cout<<fin<<endl;
    
        int st=0,e=j-1;
    
        
        while(st<e)
        {
            //cout<<"hi";
            if(fin[st]!=fin[e])
            {
                //cout<<"hi";
                return false;
            }           
            else
            {
                st++;
            	e--;
            }       
                
            
        }
        return true;
    }
};
