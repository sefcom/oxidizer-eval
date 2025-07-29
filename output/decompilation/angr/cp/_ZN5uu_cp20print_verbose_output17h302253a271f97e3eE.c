long long uu_cp::print_verbose_output(char a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x29]
    char *v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]

    v0 = a0;
    if (!a1)
        return (unsigned long long)uu_cp::print_paths(a0, a2, a3, a4, a5);
    v1 = &v0;
    v2 = a2;
    v3 = a3;
    v4 = a4;
    v5 = a5;
    return a1.suspend(&v1);
}
