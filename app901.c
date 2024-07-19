#include <stdio.h>
// 2.callMessage Sub function
void callPostcode(){
    int postCodes[] = {23000, 24000, 25000, 26000, 27000, 29000};
    // int count = sizeof(postCodes) / sizeof(postCodes[0]); // 4 byte * 5 element = 20
    int count = sizeof(postCodes) / sizeof(postCodes[0]);
    printf("Count: %d\n,count");

    for (int i = 0; i <= count - 1; i++)
    {
        printf("Post code: %d\n", postCodes[i]);
    }
}
// 3.studen Sub function
void student() {}
