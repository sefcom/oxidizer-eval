long long uu_cp::platform::linux::clone::h376a29d6dd4c16a4(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long a3, unsigned int a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    unsigned long v2;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x30]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x24]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v10;  // rdx
    unsigned int v11;  // ebp

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    std::fs::File::open::h426830292ba192ff(&v4, &v0, a2);
    if (*((int *)&v4))
    {
        v8 = *((long long *)&v6);
        return v8;
    }
    std::fs::File::create::he8a4837ded69b06a(&v4, &v2, v10);
    if (*((int *)&v4))
    {
        v8 = *((long long *)&v6);
    }
    else
    {
        v11 = *((int *)&v5);
        if (::libc.so.0::ioctl(v11, 1074041865))
        {
            goto *((int *)(4380364 + vvar_4 * 4)) + 4380364;
        }
        else
        {
            ::0x511f00::core::ptr::drop_in_place$LT$std..fs..File$GT$::h41fb0b354a80bd06(v11);
            v8 = 0;
        }
    }
    ::0x511f00::core::ptr::drop_in_place$LT$std..fs..File$GT$::h41fb0b354a80bd06(*((int *)&v5));
    return v8;
}
