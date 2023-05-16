class Solution{
    public:
    int Maximize(int a[],int n)
    {
        sort ( a, a + n );
        size_t s{}, m( 1e9 + 7 );
        for ( size_t i{}; i < n; ++i )
            ( s += i * a[ i ] ) %= m;
        return s;
    }
};
