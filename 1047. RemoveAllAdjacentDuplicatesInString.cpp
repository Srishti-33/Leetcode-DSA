class Solution {
public:
string removeDuplicates(string s) {
  stack <char> st;
  int i=0; 

  while(i < s.length()) {
      if( st.empty() || st.top() != s[i]) {
          st.push(s[i]);
          i++;
      }
      else {
       st.pop();
       i++;
      }
   }
   if(st.empty()) {
       return "";
   }
   else {
       string short_string = "";
       while(!st.empty()) {
         short_string = st.top() + short_string;
         st.pop();
       }
       return short_string;
   }
}
};
