// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int sieve[6] = {0};
    int len = arr.size();
    for(int i=0; i<len; i++){
        sieve[arr[i]]++;
    }
    int max = 0,count=0;
    for(int i=0; i<6; i++)
        if(max<sieve[i]){
            max = sieve[i];
            count = i;
        }
    return count;
}
