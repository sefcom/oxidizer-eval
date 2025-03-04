long long uu_cp::platform::linux::clone::hdce2a0051aad38c1(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    unsigned long v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    unsigned long v2;  // [sp-0x38]
    unsigned long long v3;  // [sp-0x30]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x24]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v10;  // r14
    unsigned int v11;  // ebp

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    std::fs::File::open::h9d5fc688c698f3f4(&v4, &v0);
    if (*((int *)&v4))
    {
        v8 = *((long long *)&v6);
        return v8;
    }
    std::fs::File::create::h9e6a42a7892f8117(&v4, &v2);
    if (*((int *)&v4))
    {
        v10 = *((long long *)&v6);
    }
    else
    {
        v11 = *((int *)&v5);
        if (::libc.so.0::ioctl(v11, 1074041865))
        {
            goto *((int *)(4380876 + vvar_4 * 4)) + 4380876;
        }
        else
        {
            ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v11);
            v10 = 0;
        }
    }
    ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(*((int *)&v5));
    v8 = v10;
    return v8;
}
