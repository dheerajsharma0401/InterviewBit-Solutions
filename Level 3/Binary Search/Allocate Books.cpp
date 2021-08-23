bool isPossible(int B,vector<int>& A,int pageLimit)//can B students get all books with given min pages
{
    int pages=0;//pages allotted to a student
    int students=0;//number of students who have been allotted books
    int i=0;
    while(i<A.size())
    {
        while(i<A.size() and pages+A[i]<=pageLimit)//allotting pages to a student
            pages+=A[i++];
        students++;
        pages=0;
        if(students>B)//more students are required, some books are left
            return false;
    }
    return true;
}
 
int Solution::books(vector<int> &A, int B)
{
    int left,right,mid;
    long long int ans;
    if(B>A.size())//more students than books
        return -1;
    left=*max_element(A.begin(),A.end());//1 book per student, minPages = pages in longest book
    right=accumulate(A.begin(),A.end(),0);//Only 1 student, maxPages = total pages in all books
    while(left<right)
    {
        mid=(left+right)/2;
        if(isPossible(B,A,mid))
            right=mid;//possible to assingn minimum 'mid' pages to B students
        else
            left=mid+1;//not possible to assing minimum 'mid' pages to B students, some books still left
    }
    return left;
}