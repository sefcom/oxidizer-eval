long long uu_cp::platform::linux::clone(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char v4;  // [bp-0x28], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x24]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // r14

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    v4.open(&v0);
    if (v4 == 1)
        return *((long long *)&v6);
    v4.create(&v2);
    if (v4 == 1)
    {
        v8 = *((long long *)&v6);
    }
    else if (::libc.so.0::ioctl(v5, 1074041865))
    {
        goto (long long)(g_4226c4[a4] + (char *)&g_4226c4[0]);
    }
    else
    {
        core::ptr::drop_in_place<std::fs::File>(v5);
        v8 = 0;
    }
    core::ptr::drop_in_place<std::fs::File>(v5);
    return v8;
}
