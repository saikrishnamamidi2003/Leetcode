class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low; i<= high ; i++){
            string s = to_string(i);
            int n = s.size();
            if(n % 2 == 0){
                int sum = 0;
                for(int j = 0; j< (n/2); j++){
                    sum += s[j];
                    sum -= s[n-1-j];
                }
                if(sum == 0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};