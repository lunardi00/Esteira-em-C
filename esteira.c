#include <stdio.h>

int cont;
int aux, i, j, k, l, m, n, o, p, q;
int a, b, c, d, S, saldo;
char key, fase = 'A';

int main(void) {

    char esteira1[20], esteira2[20], esteira3[20], esteira4[20], esteira5[20], esteira6[20], esteira7[20], esteira8[20], esteira9[20], esteira10[20];

    while (aux < 20) {
        esteira1[aux] = '_';
        esteira2[aux] = '_';
        esteira3[aux] = '_';
        esteira4[aux] = '_';
        esteira5[aux] = '_';
        esteira6[aux] = '_';
        esteira7[aux] = '_';
        esteira8[aux] = '_';
        esteira9[aux] = '_';
        esteira10[aux] = '_';
        aux++;
    }

    printf("%Pressione enter para movimentar... \n\n", esteira1);
    printf("%s\n", esteira1);
    printf("%s\n", esteira2);
    printf("%s\n", esteira4);
    printf("%s\n", esteira5);
    printf("%s\n", esteira6);
    printf("%s\n", esteira7);
    printf("%s\n", esteira8);
    printf("%s\n", esteira9);
    printf("%s\n", esteira10);

    while (cont < 20) {
        scanf("%c", &key);
        if (key == 10) {
            esteira1[cont] = fase;
            esteira1[cont - 1] = '_';
            printf("%s\n", esteira1);
            printf("%s\n", esteira2);
            printf("%s\n", esteira3);
            printf("%s\n", esteira4);
            printf("%s\n", esteira5);
            printf("%s\n", esteira6);
            printf("%s\n", esteira7);
            printf("%s\n", esteira8);
            printf("%s\n", esteira9);
            printf("%s\n", esteira10);
            a = 1;
            switch (cont) {
                case 3:
                    fase = 'B';
                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                    b = a + 1;
                    break;

                case 8:
                    fase = 'C';
                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                    c = b + 1;
                    break;

                case 13:
                    fase = 'D';
                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                    d = c + 1;
                    break;

                case 18:
                    fase = '$';
                    S = (d + 1) * 10;
                    break;

                case 19:
                    printf("\nVoce chegou na fase final esteira 1\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d", a, b, c, d, S);
                    fase = 'A';
                    while (i < 20) {
                        scanf("%c", &key);
                        if (key == 10) {
                            esteira2[i] = fase;
                            esteira2[i - 1] = '_';
                            printf("%s\n", esteira1);
                            printf("%s\n", esteira2);
                            printf("%s\n", esteira3);
                            printf("%s\n", esteira4);
                            printf("%s\n", esteira5);
                            printf("%s\n", esteira6);
                            printf("%s\n", esteira7);
                            printf("%s\n", esteira8);
                            printf("%s\n", esteira9);
                            printf("%s\n", esteira10);
                            a = 2;
                            switch (i) {
                                case 3:
                                    fase = 'B';
                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                    b = a + 2;
                                    break;

                                case 8:
                                    fase = 'C';
                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                    c = b + 2;
                                    break;

                                case 13:
                                    fase = 'D';
                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                    d = c + 2;
                                    break;

                                case 18:
                                    fase = '$';
                                    S = (d + 2) * 10;
                                    break;

                                case 19:
                                    printf("\nVoce chegou na fase final esteira 2\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                           a, b, c, d, S);
                                    fase = 'A';
                                    while (j < 20) {
                                        scanf("%c", &key);
                                        if (key == 10) {
                                            esteira3[j] = fase;
                                            esteira3[j - 1] = '_';
                                            printf("%s\n", esteira1);
                                            printf("%s\n", esteira2);
                                            printf("%s\n", esteira3);
                                            printf("%s\n", esteira4);
                                            printf("%s\n", esteira5);
                                            printf("%s\n", esteira6);
                                            printf("%s\n", esteira7);
                                            printf("%s\n", esteira8);
                                            printf("%s\n", esteira9);
                                            printf("%s\n", esteira10);
                                            a = 3;
                                            switch (j) {
                                                case 3:
                                                    fase = 'B';
                                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                                    b = a + 3;
                                                    break;

                                                case 8:
                                                    fase = 'C';
                                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                                    c = b + 3;
                                                    break;

                                                case 13:
                                                    fase = 'D';
                                                    printf("\n\nVoce chegou na fase %c esteira %d\n", fase, a);
                                                    d = c + 3;
                                                    break;

                                                case 18:
                                                    fase = '$';
                                                    S = (d + 3) * 10;
                                                    break;

                                                case 19:
                                                    printf("\nVoce chegou na fase final esteira 3\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                           a, b, c, d, S);
                                                    fase = 'A';
                                                    while (k < 20) {
                                                        scanf("%c", &key);
                                                        if (key == 10) {
                                                            esteira4[k] = fase;
                                                            esteira4[k - 1] = '_';
                                                            printf("%s\n", esteira1);
                                                            printf("%s\n", esteira2);
                                                            printf("%s\n", esteira3);
                                                            printf("%s\n", esteira4);
                                                            printf("%s\n", esteira5);
                                                            printf("%s\n", esteira6);
                                                            printf("%s\n", esteira7);
                                                            printf("%s\n", esteira8);
                                                            printf("%s\n", esteira9);
                                                            printf("%s\n", esteira10);
                                                            a = 4;
                                                            switch (k) {
                                                                case 3:
                                                                    fase = 'B';
                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                           fase, a);
                                                                    b = a + 4;
                                                                    break;

                                                                case 8:
                                                                    fase = 'C';
                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                           fase, a);
                                                                    c = b + 4;
                                                                    break;

                                                                case 13:
                                                                    fase = 'D';
                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                           fase, a);
                                                                    d = c + 4;
                                                                    break;

                                                                case 18:
                                                                    fase = '$';
                                                                    S = (d + 4) * 10;
                                                                    break;

                                                                case 19:
                                                                    printf("\nVoce chegou na fase final esteira 4\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                           a, b, c, d, S);
                                                                    fase = 'A';
                                                                    while (l < 20) {
                                                                        scanf("%c", &key);
                                                                        if (key == 10) {
                                                                            esteira5[l] = fase;
                                                                            esteira5[l - 1] = '_';
                                                                            printf("%s\n", esteira1);
                                                                            printf("%s\n", esteira2);
                                                                            printf("%s\n", esteira3);
                                                                            printf("%s\n", esteira4);
                                                                            printf("%s\n", esteira5);
                                                                            printf("%s\n", esteira6);
                                                                            printf("%s\n", esteira7);
                                                                            printf("%s\n", esteira8);
                                                                            printf("%s\n", esteira9);
                                                                            printf("%s\n", esteira10);
                                                                            a = 5;
                                                                            switch (l) {
                                                                                case 3:
                                                                                    fase = 'B';
                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                           fase, a);
                                                                                    b = a + 5;
                                                                                    break;

                                                                                case 8:
                                                                                    fase = 'C';
                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                           fase, a);
                                                                                    c = b + 5;
                                                                                    break;

                                                                                case 13:
                                                                                    fase = 'D';
                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                           fase, a);
                                                                                    d = c + 5;
                                                                                    break;

                                                                                case 18:
                                                                                    fase = '$';
                                                                                    S = (d + 5) * 10;
                                                                                    break;

                                                                                case 19:
                                                                                    printf("\nVoce chegou na fase final esteira 5\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                           a, b, c, d, S);
                                                                                    fase = 'A';
                                                                                    while (k < 20) {
                                                                                        scanf("%c", &key);
                                                                                        if (key == 10) {
                                                                                            esteira6[m] = fase;
                                                                                            esteira6[m - 1] = '_';
                                                                                            printf("%s\n", esteira1);
                                                                                            printf("%s\n", esteira2);
                                                                                            printf("%s\n", esteira3);
                                                                                            printf("%s\n", esteira4);
                                                                                            printf("%s\n", esteira5);
                                                                                            printf("%s\n", esteira6);
                                                                                            printf("%s\n", esteira7);
                                                                                            printf("%s\n", esteira8);
                                                                                            printf("%s\n", esteira9);
                                                                                            printf("%s\n", esteira10);
                                                                                            a = 6;
                                                                                            switch (m) {
                                                                                                case 3:
                                                                                                    fase = 'B';
                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                           fase, a);
                                                                                                    b = a + 6;
                                                                                                    break;

                                                                                                case 8:
                                                                                                    fase = 'C';
                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                           fase, a);
                                                                                                    c = b + 6;
                                                                                                    break;

                                                                                                case 13:
                                                                                                    fase = 'D';
                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                           fase, a);
                                                                                                    d = c + 6;
                                                                                                    break;

                                                                                                case 18:
                                                                                                    fase = '$';
                                                                                                    S = (d + 6) * 10;
                                                                                                    break;

                                                                                                case 19:
                                                                                                    printf("\nVoce chegou na fase final esteira 6\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                                           a, b, c, d,
                                                                                                           S);
                                                                                                    fase = 'A';
                                                                                                    while (k < 20) {
                                                                                                        scanf("%c",
                                                                                                              &key);
                                                                                                        if (key == 10) {
                                                                                                            esteira7[n] = fase;
                                                                                                            esteira7[n -
                                                                                                                     1] = '_';
                                                                                                            printf("%s\n",
                                                                                                                   esteira1);
                                                                                                            printf("%s\n",
                                                                                                                   esteira2);
                                                                                                            printf("%s\n",
                                                                                                                   esteira3);
                                                                                                            printf("%s\n",
                                                                                                                   esteira4);
                                                                                                            printf("%s\n",
                                                                                                                   esteira5);
                                                                                                            printf("%s\n",
                                                                                                                   esteira6);
                                                                                                            printf("%s\n",
                                                                                                                   esteira7);
                                                                                                            printf("%s\n",
                                                                                                                   esteira8);
                                                                                                            printf("%s\n",
                                                                                                                   esteira9);
                                                                                                            printf("%s\n",
                                                                                                                   esteira10);
                                                                                                            a = 7;
                                                                                                            switch (n) {
                                                                                                                case 3:
                                                                                                                    fase = 'B';
                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                           fase,
                                                                                                                           a);
                                                                                                                    b = a +
                                                                                                                        7;
                                                                                                                    break;

                                                                                                                case 8:
                                                                                                                    fase = 'C';
                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                           fase,
                                                                                                                           a);
                                                                                                                    c = b +
                                                                                                                        7;
                                                                                                                    break;

                                                                                                                case 13:
                                                                                                                    fase = 'D';
                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                           fase,
                                                                                                                           a);
                                                                                                                    d = c +
                                                                                                                        7;
                                                                                                                    break;

                                                                                                                case 18:
                                                                                                                    fase = '$';
                                                                                                                    S = (d +
                                                                                                                         7) *
                                                                                                                        10;
                                                                                                                    break;

                                                                                                                case 19:
                                                                                                                    printf("\nVoce chegou na fase final esteira 7\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                                                           a,
                                                                                                                           b,
                                                                                                                           c,
                                                                                                                           d,
                                                                                                                           S);
                                                                                                                    fase = 'A';
                                                                                                                    while (o <
                                                                                                                           20) {
                                                                                                                        scanf("%c",
                                                                                                                              &key);
                                                                                                                        if (key ==
                                                                                                                            10) {
                                                                                                                            esteira8[o] = fase;
                                                                                                                            esteira8[
                                                                                                                                    o -
                                                                                                                                    1] = '_';
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira1);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira2);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira3);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira4);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira5);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira6);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira7);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira8);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira9);
                                                                                                                            printf("%s\n",
                                                                                                                                   esteira10);
                                                                                                                            a = 8;
                                                                                                                            switch (o) {
                                                                                                                                case 3:
                                                                                                                                    fase = 'B';
                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                           fase,
                                                                                                                                           a);
                                                                                                                                    b = a +
                                                                                                                                        8;
                                                                                                                                    break;

                                                                                                                                case 8:
                                                                                                                                    fase = 'C';
                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                           fase,
                                                                                                                                           a);
                                                                                                                                    c = b +
                                                                                                                                        8;
                                                                                                                                    break;

                                                                                                                                case 13:
                                                                                                                                    fase = 'D';
                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                           fase,
                                                                                                                                           a);
                                                                                                                                    d = c +
                                                                                                                                        8;
                                                                                                                                    break;

                                                                                                                                case 18:
                                                                                                                                    fase = '$';
                                                                                                                                    S = (d +
                                                                                                                                         8) *
                                                                                                                                        10;
                                                                                                                                    break;

                                                                                                                                case 19:
                                                                                                                                    printf("\nVoce chegou na fase final esteira 8\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                                                                           a,
                                                                                                                                           b,
                                                                                                                                           c,
                                                                                                                                           d,
                                                                                                                                           S);
                                                                                                                                    fase = 'A';
                                                                                                                                    while (p <
                                                                                                                                           20) {
                                                                                                                                        scanf("%c",
                                                                                                                                              &key);
                                                                                                                                        if (key ==
                                                                                                                                            10) {
                                                                                                                                            esteira9[p] = fase;
                                                                                                                                            esteira9[
                                                                                                                                                    p -
                                                                                                                                                    1] = '_';
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira1);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira2);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira3);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira4);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira5);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira6);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira7);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira8);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira9);
                                                                                                                                            printf("%s\n",
                                                                                                                                                   esteira10);
                                                                                                                                            a = 9;
                                                                                                                                            switch (p) {
                                                                                                                                                case 3:
                                                                                                                                                    fase = 'B';
                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                           fase,
                                                                                                                                                           a);
                                                                                                                                                    b = a +
                                                                                                                                                        9;
                                                                                                                                                    break;

                                                                                                                                                case 8:
                                                                                                                                                    fase = 'C';
                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                           fase,
                                                                                                                                                           a);
                                                                                                                                                    c = b +
                                                                                                                                                        9;
                                                                                                                                                    break;

                                                                                                                                                case 13:
                                                                                                                                                    fase = 'D';
                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                           fase,
                                                                                                                                                           a);
                                                                                                                                                    d = c +
                                                                                                                                                        9;
                                                                                                                                                    break;

                                                                                                                                                case 18:
                                                                                                                                                    fase = '$';
                                                                                                                                                    S = (d +
                                                                                                                                                         9) *
                                                                                                                                                        10;
                                                                                                                                                    break;

                                                                                                                                                case 19:
                                                                                                                                                    printf("\nVoce chegou na fase final esteira 9\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                                                                                           a,
                                                                                                                                                           b,
                                                                                                                                                           c,
                                                                                                                                                           d,
                                                                                                                                                           S);
                                                                                                                                                    fase = 'A';
                                                                                                                                                    while (q <
                                                                                                                                                           20) {
                                                                                                                                                        scanf("%c",
                                                                                                                                                              &key);
                                                                                                                                                        if (key ==
                                                                                                                                                            10) {
                                                                                                                                                            esteira10[q] = fase;
                                                                                                                                                            esteira10[
                                                                                                                                                                    q -
                                                                                                                                                                    1] = '_';
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira1);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira2);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira3);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira4);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira5);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira6);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira7);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira8);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira9);
                                                                                                                                                            printf("%s\n",
                                                                                                                                                                   esteira10);
                                                                                                                                                            a = 10;
                                                                                                                                                            switch (q) {
                                                                                                                                                                case 3:
                                                                                                                                                                    fase = 'B';
                                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                                           fase,
                                                                                                                                                                           a);
                                                                                                                                                                    b = a +
                                                                                                                                                                        10;
                                                                                                                                                                    break;

                                                                                                                                                                case 8:
                                                                                                                                                                    fase = 'C';
                                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                                           fase,
                                                                                                                                                                           a);
                                                                                                                                                                    c = b +
                                                                                                                                                                        10;
                                                                                                                                                                    break;

                                                                                                                                                                case 13:
                                                                                                                                                                    fase = 'D';
                                                                                                                                                                    printf("\n\nVoce chegou na fase %c esteira %d\n",
                                                                                                                                                                           fase,
                                                                                                                                                                           a);
                                                                                                                                                                    d = c +
                                                                                                                                                                        10;
                                                                                                                                                                    break;

                                                                                                                                                                case 18:
                                                                                                                                                                    fase = '$';
                                                                                                                                                                    S = (d +
                                                                                                                                                                         10) *
                                                                                                                                                                        10;
                                                                                                                                                                    break;

                                                                                                                                                                case 19:
                                                                                                                                                                    printf("\nVoce chegou na fase final esteira 10\nA: %d\nB: %d\nC: %d\nD: %d\n$: %d",
                                                                                                                                                                           a,
                                                                                                                                                                           b,
                                                                                                                                                                           c,
                                                                                                                                                                           d,
                                                                                                                                                                           S);
                                                                                                                                                                    saldo = (2 *
                                                                                                                                                                             a) +
                                                                                                                                                                            (3 *
                                                                                                                                                                             b) +
                                                                                                                                                                            c +
                                                                                                                                                                            (d /
                                                                                                                                                                             2) +
                                                                                                                                                                            (S /
                                                                                                                                                                             10);
                                                                                                                                                                    printf("\n\nSaldo final: %d\n\n",
                                                                                                                                                                           saldo);
                                                                                                                                                                    printf("\n\nFim do processo\n\n");
                                                                                                                                                                    return 0;
                                                                                                                                                                    break;
                                                                                                                                                            }
                                                                                                                                                            q++;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                    break;
                                                                                                                                            }
                                                                                                                                            p++;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            o++;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                            n++;
                                                                                                        }
                                                                                                    }
                                                                                                    break;
                                                                                            }
                                                                                            m++;
                                                                                        }
                                                                                    }
                                                                                    break;
                                                                            }
                                                                            l++;
                                                                        }
                                                                    }
                                                                    break;

                                                            }
                                                            k++;
                                                        }
                                                    }
                                                    break;
                                            }
                                            j++;
                                        }
                                    }
                                    break;
                            }
                            i++;
                        }
                    }
                    break;
            }
            cont++;
        }
    }
    return 0;
}
