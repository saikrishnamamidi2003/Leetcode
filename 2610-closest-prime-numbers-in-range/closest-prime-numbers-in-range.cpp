class Solution {
public:
    vector<int> prime;
    void genPrime(){
        int n = 1e6;
    vector<bool> fl(n+1, true);

        fl[0] = fl[1] = false;
        for(int i=2 ; i*i <= n; i++){

            if(fl[i]){

            for(int j= i*i; j <= n; j += i){
                fl[j] = false;
            }

            }
        }
        for(int i=2; i<=n; i++){
            if(fl[i]){
                prime.push_back(i);
            }
        }

    }
    vector<int> closestPrimes(int left, int right) {
        genPrime();
        int mini = INT_MAX;
        vector<int> res(2, -1);
        int first = -1;
        int sec = -1;
        bool go = true;
        for(int i : prime){
            if(i >= left && i <= right){
                if(go){
                    first = i;
                    go = false;
                }
                else {
                    sec = i;
                    int temp = sec - first;
                    if(temp < mini){
                        mini = temp;
                        res[0] = first;
                        res[1] = sec;
                    }
                    first = i;
                }
            }
            else if( i > right){
                break;
            }
        }
        return res;
    }
};