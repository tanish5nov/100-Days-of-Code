

//User function Template for C++

void rotate(int arr[], int n)
{
 int t=arr[0];
    for (int i=1;i<n;i++)
    {
        int b=arr[i];
          arr[i]=t;
          t=b;
        
    }
    arr[0]=t;   
}
