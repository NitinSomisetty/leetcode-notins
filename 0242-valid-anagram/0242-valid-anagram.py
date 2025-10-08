class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        freq_s={}
        for i in s:
            if i in freq_s:
                freq_s[i]+=1
            else:
                freq_s[i]=1
        
        freq_t={}
        for j in t:
            if j in freq_t:
                freq_t[j]+=1
            else:
                freq_t[j]=1
        return(freq_t==freq_s)
         
        