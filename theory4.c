#include <stdio.h>
#include <string.h>

#define size 10


void compute_freq(char *str, int freq[]) {
    for (int i=0; i<size; i++) {
        freq[i] = 0;
    }
    for (int i = 0; str[i]!='\0'; i++) {
        freq[str[i] - 'a']++;
    }
}


int frequencies_equal(int freq1[], int freq2[]) {
    for (int i=0; i<size; i++) {
        if (freq1[i] != freq2[i]) {
            return 0; // Not equal
        }
    }
    return 1; // Equal
}


void scrambled_transactions(char *transactions[],int n) {
    char *groups[10][20];  
    int group_sizes[20];  
    int group_count = 0;            
    for (int i=0;i<n;i++) {
        int freq[size];
        compute_freq(transactions[i],freq);

        int found_group = 0;
        for (int j = 0; j < group_count; j++) {
            int existing_freq[size];
            compute_freq(groups[j][0],existing_freq);

            if (frequencies_equal(freq,existing_freq)) {
                groups[j][group_sizes[j]]=transactions[i];
                group_sizes[j]++;
                found_group=1;
                break;
            }
        }

        if (!found_group) {
            groups[group_count][0]=transactions[i];
            group_sizes[group_count]=1;
            group_count++;
        }
    }
    for (int i = 0; i<group_count;i++) {
        printf("[");
        for (int j = 0;j<group_sizes[i];j++) {
            printf("\"%s\"", groups[i][j]);
            if (j<group_sizes[i]-1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
}

int main() {
   
 char *transactions[] ={"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = 6;

scrambled_transactions(transactions,n);
    return 0;
}
