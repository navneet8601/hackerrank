int* reverseArray(int a_count, int* a, int* result_count) {
    int i,temp;
    *result_count=a_count;
    for(i=0;i<a_count/2;i++) {
        temp=*(a+i);
        *(a+i)=*(a+a_count-1-i);
        *(a+a_count-1-i)=temp;
    }
    return a;
}
