class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3) return false;
        int vc = 0;
        int c = 0;
        for(int i=0; i< n; i++){
            char t = tolower(word[i]);
            if(!isalnum(t)) return false;
            if(isalpha(t)){
            if(t == 'a' || t == 'e' || t == 'o' || t == 'i' || t == 'u' ){
                vc++;
            }
           else {
                c++;
            }
            }

        }
        cout<<vc << c<<endl;
        if(vc && c){
                return true;
            }

        return false;
    }
};