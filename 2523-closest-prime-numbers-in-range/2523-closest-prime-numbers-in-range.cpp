class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans(2,-1);
        vector<int> tele;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                tele.push_back(i);
            }
        }
        if(tele.size()<2){
            return {-1,-1};
        }
        int m=INT_MAX;
        for(int i=1;i<tele.size();i++){
            int newm= tele[i]-tele[i-1];
            m = min(m,newm);
        }
        for(int i=1;i<tele.size();i++){
            if(tele[i]-tele[i-1]==m){
                ans[0]=tele[i-1];
                ans[1]=tele[i];
                break;
            }
        }
        return ans;
    }
};