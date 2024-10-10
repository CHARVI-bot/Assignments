#include <studio.h>;

void printBinary(int n) {

         int binary[32];
         int index = 0;

         while (n > 0) {
                 binary[index] = n%2;
                 n = n/2;
                 index++;   
         }
         printf("\n");
}

int main() {
      int decimalValue;

      printf("Enter a decimal value:  ");
      scanf("%d", &decimalValue);

      printf(" Decimal: %d\n", decimalValue);

      printf("Octal: %o\n", decimalValue);

      printf(" Hexadecimal: %X\n", decimalValue);

      printBinary(decimal Value);

      return 0;
