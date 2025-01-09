long long uu_dd::Output::new_file::open_dst::h968e64089c53b51a(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, char a4, char *a5)
{
    unsigned int v0;  // [bp-0x28], Other Possible Types: unsigned long, unsigned long long
    unsigned int v1;  // [bp-0x20]
    char v2;  // [sp-0x1e]
    char v3;  // [sp-0x1c]
    char v4;  // [sp-0x1b]
    unsigned int v6;  // edx

    v0 = 0x1b600000000;
    v1 = 0x100;
    v3 = a4 ^ 1;
    v4 = a3;
    v2 = *(a5);
    if ((int)uu_dd::make_linux_oflags::hc5c67f9cb15d8524(a5) == 1)
        v0 = v6;
    return std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(a0, &v0, a1, a2);
}
