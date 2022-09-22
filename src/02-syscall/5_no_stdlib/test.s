.global _start

.text
_start:
  mov     $1, %rax         # system call 1 is write
  mov     $1, %rdi         # file handle 1 is stdout
  mov     $message, %rsi   # address of string to output
  mov     $13, %rdx        # number of bytes
  syscall                  # invoke operating system to do the write

  mov     $60, %rax        # system call 60 is exit
  xor     %rdi, %rdi       # we want return code 0
  syscall                  # invoke operating system to exit

message:
  .ascii  "Hello, world\n"
