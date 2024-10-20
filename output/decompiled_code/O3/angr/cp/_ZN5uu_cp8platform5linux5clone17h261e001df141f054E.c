long long uu_cp::platform::linux::clone::h261e001df141f054(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long long v1;  // [sp-0x50]
    char v2;  // [bp-0x48], Other Possible Types: unsigned int
    char v3;  // [sp-0x47]
    char v4;  // [sp-0x45]
    char v5;  // [bp-0x44], Other Possible Types: unsigned short
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x3c]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // rax
    unsigned int v11;  // ebx

    v1 = 0x1b600000000;
    v2 = 0;
    v5 = 0;
    v2 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v6, &v1, a0, a1);
    if (*((int *)&v6))
    {
        v10 = *((long long *)&v8);
        return v10;
    }
    v0 = *((int *)&v7);
    v1 = 0x1b600000000;
    v2 = 0;
    v5 = 0;
    v3 = 1;
    v5 = 1;
    v4 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v6, &v1, a2, a3);
    v11 = *((int *)&v7);
    if (!::libc.so.0::ioctl(v11, 1074041865))
    {
        close(v11);
        v10 = 0;
        close(v0);
        return v10;
    }
    goto *((int *)(4355644 + vvar_4 * 4)) + 4355644;
}
