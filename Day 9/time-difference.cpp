// User function Template for C++

class Solution{
public:
    string timeGap(string st, string et){
        int hr_st= stoi(st.substr(0,2));
        int min_st= stoi(st.substr(3,2));
        int sec_st = stoi(st.substr(6,2));
        int total_st= (hr_st*3600)+(min_st*60)+sec_st;
        
        int hr_et= stoi(et.substr(0,2));
        int min_et= stoi(et.substr(3,2));
        int sec_et = stoi(et.substr(6,2));
        int total_et= (hr_et*3600)+(min_et*60)+sec_et;
        
        int time_diff=total_et-total_st;
        
        int hr= time_diff/3600;
        int min= (time_diff%3600)/60;
        int sec=(time_diff%3600)%60;
        
        string ans="";
        
        if(hr<10){
            ans=ans+to_string(0)+to_string(hr);
        }
        else{
            ans=ans+to_string(hr);
        }
        
        ans.push_back(':');
        
        if(min<10){
            ans=ans+to_string(0)+to_string(min);
        }
        else{
            ans=ans+to_string(min);
        }
        
        ans.push_back(':');
        
        if(sec<10){
            ans=ans+to_string(0)+to_string(sec);
        }
        else{
            ans=ans+to_string(sec);
        }
        
        return ans;
    }
};
