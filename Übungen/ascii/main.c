#include <stdio.h>

int main()
{
    for(int i = 32;  i < 256; i++){
        printf("%3d / %02x = %c\n\r", i,i,i);
    }
    return 0;
}
