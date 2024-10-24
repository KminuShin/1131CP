#include <stdio.h>

int main() {
    int t, n;
    int votes[n]{0};
    int score[n]{0};
    int highvotes;
    int champ = 0;

    scanf("%d%d", &t, &n);

    for (int i = 0;i < t;i++) {
        highvotes = 0;

        for (int j = 0;j < n;j++) {
            scanf("%d", &votes[j]);
            if (votes[j] > highvotes) {
                highvotes = votes[j];
                // printf("new highvotes\n");
            }
        }

        // printf("highvotes: %d\n", highvotes);

        //search for highest votes, check same votes
        for (int j = 0;j < n;j++) {
            if (votes[j] == highvotes) {
                score[j] += 1;
            }
            // printf("score %d: %d ", j, score[j]);
        }
    }

    for (int i = 0;i < n;i++) {
        if (score[i] > champ) {
            champ = score[i];
        }
    }

    for (int i = 0;i < n;i++) {
        if (score[i] == champ) {
            printf("%d ", i+1);
        }
    }
}

