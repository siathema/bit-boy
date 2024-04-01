#include <stdio.h>
#include "SM83_core.h"

int main(int arc, char** argv) {
  FILE* fp = fopen("assets/DMG_ROM.bin", "r");
  char romBuffer[256];

  for(int i=0; i<256; i++) {
    int fileChar = fgetc(fp);
    if(fileChar == EOF) break;
    romBuffer[i] = (char)fileChar;
    printf("%x ", romBuffer[i] & 0xff);
  }
  printf("\n");
  fclose(fp);
  
  return 0;
}
