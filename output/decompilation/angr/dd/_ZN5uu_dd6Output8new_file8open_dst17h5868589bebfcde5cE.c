long long uu_dd::Output::new_file::open_dst(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, char a4, char *a5)
{
    unsigned int v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x20]
    char v3;  // [bp-0x1f]
    char v4;  // [bp-0x1e]
    char v5;  // [bp-0x1c]
    char v6;  // [bp-0x1b]
    unsigned int v8;  // edx

    v0 = 0x1b600000000;
    v2 = 0;
    v3 = 1;
    v5 = a4 ^ 1;
    v6 = a3;
    v4 = *(a5);
    v0 = v0;
    if (((char)uu_dd::make_linux_oflags(a5) & 1))
    {
        v0 = v8;
        v0 = v1;
    }
    return a0.open(&v0, a1, a2);
}
