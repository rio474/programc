#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
int i =0;
char *str;
char A[7][8] = {"C","C++","C#","Java","Perl","Python","Ruby"};
char *delimiter = ";";
/* menggabungkan elemen-elemen arry ke string*/
str = malloc((7*8) + 6 + 1); /* 6: jumlah delimiter, 1: karakkter NULL */
for (i=0; i<7; i++){
strcat(str, A[i]);
if (i < 7-1) {
}
}
printf("Array:\n");
for (i=0; i<7; i++) {
printf("%s\n", A[i]);
}
printf("\nString:\n\"%s\"\n", str);
free(str);
return 0;
}