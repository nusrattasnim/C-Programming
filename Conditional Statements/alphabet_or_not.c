#include <stdio.h>
int main() {
   char ch;
   printf("Enter a character: ");
   scanf("%c", &ch);

   if ((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
      printf("%c is a character.",ch);
   }

   else {
      printf("%c is not a character.",ch);
   }

   return 0;
}
