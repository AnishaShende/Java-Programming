// FIRST COME FIRST SERVE PAGE REPLACEMENT ALGORITHM
// IF PAGE REQUIRED BY CPU IS NOT IN THE MAIN MEMORY THEN WE HAVE TO SWAP OUT THE PAGE
// WHICH CAME FIRST IN THE FRAMES AND SWAP IN THE PAGE REQUIRED BY CPU AT THAT LOCATION
#include <stdio.h>

int main(){
    int ref_str[20], page_faults = 0, s, pages, frames;
    // PAGE FAULT OCCURES WHEN A PAGE REQUESTED BY CPU IS NOT FOUND IN MAIN MEMORY
    printf("Enter total number of pages : "); // TOTAL NUMBER OF PAGES IN MAIN MEMORY
    scanf("%d", &pages);
    printf("Enter the value of reference string : \n"); // PAGE NUMBER OF PERTICULAR PAGE CPU WANTS TO ACCESS
    for (int m = 0; m < pages; m++)
    {
        printf("Value no.[%d] : ", m+1);
        scanf("%d", &ref_str[m]);
    }
    printf("Enter the number of frames : "); // NUMBER OF MAXIMUM PAGES THAT CAN BE IN THE MAIN MEMORY AT A TIME 
    scanf("%d", &frames);
    int temp[frames]; // TEMP WILL CONTAIN THE VALUE OF N PAGE FRAMES
    for (int m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }
    for (int m = 0; m < pages; m++)
    {
        s = 0; // INITIALIZING THE PAGE HIT WITH 0
        for (int n = 0; n < frames; n++)
        {
            if (ref_str[m] == temp[n])
            {
                s ++;
                page_faults --;
            }
        }
            page_faults ++;
        if ((page_faults <= frames) && (s == 0))
        {
            temp[m] = ref_str[m];
        }
        else if(s == 0){
            // IN ORDER TO REPLACE THE FIRST CAME PAGE
            temp[(page_faults-1) % frames] = ref_str[m];
        }
        printf("\n");
        for (int n = 0; n < frames; n++)
        {
            printf("%d\t", temp[n]);
        }
    }
    printf("\n Total page faults : %d\n", page_faults);
    return 0;
}

// CORRECT OUTPUT
/*
Enter total number of pages : 15
Enter the value of reference string :
Value no.[1] : 7
Value no.[2] : 0
Value no.[3] : 1
Value no.[4] : 2
Value no.[5] : 0
Value no.[6] : 3
Value no.[7] : 0
Value no.[8] : 4
Value no.[9] : 2
Value no.[10] : 3
Value no.[11] : 0
Value no.[12] : 3
Value no.[13] : 1
Value no.[14] : 2
Value no.[15] : 0
Enter the number of frames : 3

7       -1      -1
7       0       -1
7       0       1
2       0       1
2       0       1
2       3       1
2       3       0
4       3       0
4       2       0
4       2       3
0       2       3
0       2       3
0       1       3
0       1       2
0       1       2
 Total page faults : 12
*/