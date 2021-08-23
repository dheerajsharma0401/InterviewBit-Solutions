int Solution::isPalindrome(string A) {
    
    int start=0;
    int end=A.length()-1;
  while(start<end)
  {
      while(start<end && !isalnum(A[start]))
      start++;
      while(start<end && !isalnum(A[end]))
      end--;
      
      if(toupper(A[start])!=toupper(A[end]))
      return 0;
      else
      {
      start++;
      end--;
      }
      
  }
  return 1;
}

