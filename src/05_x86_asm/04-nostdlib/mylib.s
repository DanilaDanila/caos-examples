.intel_syntax noprefix

.global my_write
.global my_exit

.text
my_write:
  mov     rsi, rdi         # address of string to output
  mov     rdx, rsi         # number of bytes
  mov     rax, 1           # system call 1 is write
  mov     rdi, 1           # file handle 1 is stdout
  syscall                  # invoke operating system to do the write
  ret


my_exit:
  mov     rax, 60          # system call 60 is exit
  # exit success already in rdi
  syscall                  # invoke operating system to exit
