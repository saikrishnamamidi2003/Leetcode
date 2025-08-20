// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low =0;
        int hi=n-1;
        if(n==1) return 1;
        while(low<=hi){
           // return 3;
            int mid= low+((hi-low)/2);
            if((isBadVersion(mid))){
                if(!(isBadVersion(((mid-1))))){
                    return mid;
                }
                hi=(mid-1);
            }
            else{
                low=(mid+1);
            }
        }
        return n;
        
    }
};