class Solution {
public:
    
    int *arr;
	int top;
    int n=10000;
    
    
    	Solution()
		{
			arr=new int[n];
			top=-1;
		}
		
		void push(int val)
		{
			if(top==n-1)
			{
				cout<<"Stack overflow"<<endl;
				return;
			}
			top++;
			arr[top]=val;
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack underflow";
			}
			top--;
			
		}
		
		int Top()
		{
			int num;
			num=arr[top];
			return num;
		}
		
		bool empty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
		
		void display()
		{
			cout<<"STACK IS :"<<endl;
			for(int i=top;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
    
    int evalRPN(vector<string>& tokens) {
        
        Solution st;
        //int a=stoi(tokens[0]);
        //cout<<a;
	//cout<<(tokens[1]-"0");
	for(int i=0;i<tokens.size();i++)
	{
        
		
		if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
		{
			int op2,op1;
			op2=st.Top();
			st.pop();
			op1=st.Top();
			st.pop();
            //char a=tokens.at(i);
            if(tokens[i]=="+")
            {
                st.push(op1+op2);
					//break;
                
            }
            else if(tokens[i]=="-")
            {
                st.push(op1-op2);
					//break;
            }
            else if(tokens[i]=="*")
            {
                st.push(op1*op2);
					//break;
            }
            else 
            {
                st.push(op1/op2);
					//break;
            }
			
		}
        else
		{
            int a=stoi(tokens[i]);
			st.push(a);
            cout<<a<<endl;
		}
	}
	return(st.Top());
        
    }
};
