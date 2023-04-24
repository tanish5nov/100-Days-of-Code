int sumOfMultiples(int n) {
        if(n==1 || n==0){return 0;}
        vector<int>ans;
        
        for(int i=1; i<=n; i++){
            ans.push_back(i);
        }
        
        int i=0;
        int sum=0;
        
        while(i<ans.size()){
            if(ans[i]%3==0 || ans[i]%5==0 || ans[i]%7==0){
                sum=sum+ans[i];
            }
            
            i++;
        }
        return sum;
    }
