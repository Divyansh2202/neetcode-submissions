class Solution {
public:
    bool isAnagram(string s, string t) {


    // HashMap is a generic solution, while an array takes advantage of the fixed 
    // character range (a-z). Therefore, both are O(n), but the array has a smaller constant 
    // factor and is faster in practice.  

    //     if(s.length()!=t.length()){
    //         return false;
    //     }

    //     unordered_map<char,int> mp;
    //     for(int i=0; i<s.length(); i++){

    //         mp[s[i]]++;
    //         mp[t[i]]--;
    //     }
        
    //     for(auto x : mp){
    //         if(x.second!=0){
    //             return false;
    //         }
    //     }

    //     return true;
    // }


    //  unordered_map is less optimized here because every access requires hashing the character
    //  and finding the correct bucket, which adds extra overhead. Since there are only 26 
    //  possible lowercase letters, an array can directly access the frequency using an index 
    //  (ch - 'a') without hashing, making it faster and more memory-efficient.


            if(s.length()!=t.length()){
                return false;
            }

            int freq[26] = {0};

            for(int i=0; i<s.length(); i++){

                freq[s[i]-'a']++;
                freq[t[i]-'a']--;
            }

            for(int i=0; i<26; i++){
                if(freq[i]!=0){
                    return false;
                }
            }

            return true;


    }
};
