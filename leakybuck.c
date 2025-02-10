#include <stdio.h>

void main() {
  int incoming, outgoing, bucket_size, n, store = 0;
  printf("Enter bucket size and number of inputs: ");
    scanf("%d %d", &bucket_size, &n);
  printf("Enter the outgoing rate:\n");
    scanf("%d" ,&outgoing);
  while (n != 0) {
  printf("Enter the incoming packet size:\n");
  scanf("%d", &incoming);
  printf("Incoming packet size: %d\n", incoming);
   if (incoming <= (bucket_size - store)) {
      store += incoming;  
      printf("\nBucket buffer size: %d out of %d\n", store, bucket_size);
    } else {
    printf("Dropped %d packets\n", incoming - (bucket_size - store));
       store = bucket_size;  
       printf("Bucket buffer size: %d out of %d\n", store, bucket_size);
     }
      if (store >= outgoing) {
       store -= outgoing;  
     } else {
       store = 0;  
     }
    printf("After outgoing, there are %d out of %d packets left in the buffer\n", store, bucket_size);
      n--;
    }
}

