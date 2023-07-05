class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.length()%2){return false;}
        
        stack<char>s;
        for(int i=0; i<x.length(); i++){
            char ch= x[i];
            
            //open
            if(ch=='(' || ch=='{' || ch=='['){
                s.push(ch);
            }
            else{
                //close
                if(!s.empty()){
                    if(s.top()=='(' && ch ==')'){
                        s.pop();
                    }
                    else if(s.top()=='[' && ch==']'){
                        s.pop();
                    }
                    else if(s.top()=='{' && ch=='}'){s.pop();}
                    else{return false;}
                }
                else{
                    return false;
                }
            }
        }
        
        if(s.empty()){return true;}
        else{
            return false;
        }
    }

};
