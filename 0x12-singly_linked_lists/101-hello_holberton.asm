section .data
    hello db "Hello, Holberton",0   ; Null-terminated string

section .text
global main

extern printf

main:
    sub rsp, 8                      ; Align the stack

    lea rdi, [hello]                ; Load the address of the string into rdi
    call printf                    ; Call printf

    add rsp, 8                      ; Restore the stack
    xor eax, eax                    ; Return 0
    ret

