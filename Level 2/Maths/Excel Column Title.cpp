string Solution::convertToTitle(int A) {
    int con=64;
     string res;
     char tmp;
    int s;
      while(A){

       A=A-1;

        tmp = 'A' + A % 26;

        res = tmp + res;

        A /= 26;
      }
    return res;
}
