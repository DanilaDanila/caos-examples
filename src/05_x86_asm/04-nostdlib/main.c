extern long my_write(char *, unsigned long);
extern long my_exit(long exit_code);

void _start()
{
    char my_string[] = "syscalls are amazing!\n";
    my_write(my_string, sizeof(my_string) - 1);
    my_exit();
}
