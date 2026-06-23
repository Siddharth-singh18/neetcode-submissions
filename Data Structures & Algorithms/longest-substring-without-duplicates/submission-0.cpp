class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char>st;
        int l=0;

        //Boundary condition
        // int ans=INT_MIN; => empty ke case me INT_MIN ans aayega par wo galat hai ans 0 hogaa kam se kam to
        int ans=0;

        
        for(int r=0;r<n;r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);

            int current_window_length = r-l+1;
            ans = max(ans,current_window_length);

        }

         return ans;
    }
};
