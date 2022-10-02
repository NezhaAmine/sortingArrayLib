
void sorting( int size,int arr[size]){

int i,j,temp;

for ( i = 0; i < size; i++) {
        for (j = i+1; j <size ; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }



    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


}
