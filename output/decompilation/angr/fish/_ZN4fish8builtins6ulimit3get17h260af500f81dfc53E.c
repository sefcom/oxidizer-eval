long long fish::builtins::ulimit::get(unsigned int a0, unsigned long a1)
{
    char v0;  // [bp-0x20]

    fish::builtins::ulimit::getrlimit(&v0, a0);
    if (*((int *)&v0) != 1)
        return 0;
    return 1;
}
