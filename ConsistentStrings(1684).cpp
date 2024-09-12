class Solution {
public:
    Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(string w: words){
            bool consistent = true;
            for(char c: w){
                char curr = c;
                bool isAllowed = false;
                for(char d: allowed){
                    if( curr == d){
                        isAllowed = true;
                        break;
                    }
                }
                if(!isAllowed){
                    consistent = false;
                }
            }
            if(consistent) count++;
        }
        return count;
    }
};
