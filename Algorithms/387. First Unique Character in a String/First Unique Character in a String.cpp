 class Solution {
 public:
	 int firstUniqChar(string s) {
		 if (s.size() == 0) return -1;
		 if (s.size() <= 100000) {
			 unordered_map<char, int> m;
			
             for (int i = 0; i < s.size(); i++) {
				 m[s[i]]++;
			 }
	
			 for (int i= 0; i < s.size(); i++) {
				 auto it = m.find(s[i]);
				 if (it->second == 1) {
					 return i;
				 }
			 }
		 }
		 return -1;
	 }
 };