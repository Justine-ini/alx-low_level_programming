global main
extern printf

section .data
    format db 'Hello, Holberton', 10, 0 ; string terminated with null

section .text
main:
    mov edi, format
    xor eax, eax
    call printf
    mov eax, 0
    ret
