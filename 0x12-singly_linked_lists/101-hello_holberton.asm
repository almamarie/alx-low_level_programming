section .data
    msg: db 'Hello, Holberton\n', 10, 0

section .text
    extern printf

global main

main:
    ; Clear the RAX register to prepare for calling printf
    xor rax, rax

    ; Pass the message address as argument to printf
    lea rdi, [msg]

    ; Call printf to print the message
    call printf

    ; Set RAX to 0 (the exit status) to prepare for returning from main
    xor rax, rax

    ; Return from main
    ret
