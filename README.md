# buffer_overflow
bof1.c: 有buffer overflow漏洞的程式

exploit.py: 產生觸發bof1.c漏洞的輸入exploit，用來跳到未使用的hacker()函式

執行: ./bof1 < exploit

# shellcode

shell_hello.c: print"HELLO" 放在char[]內，function指標指向char[]執行print function

shellcode.c: shellcode 放在char[]內，function指標指向char[]執行，打開shell
