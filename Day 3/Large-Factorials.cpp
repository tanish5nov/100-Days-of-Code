


vector<int> fact(int n){
   
   int i=1;
   int power=0;
   vector<int>ans;
   double fact=1;
   
   for(i=1; i<=n; i++){
       fact=fact*i;
       
       while(int(fact)>9){
           ++power;
           fact/=10;
       }
   }
   
   ans.push_back(fact);
   ans.push_back(power);
   
   return ans;
}
 
 
 
