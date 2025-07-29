long long uu_fmt::parasplit::FileLines::match_prefix_generic(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned int v7;  // ebp
    unsigned int v8;  // ebp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax

    v4 = core::slice::<impl [T]>::starts_with(a2, a3, a0, a1);
    if (a4 || (char)v4)
        return v4;
    v0 = a2;
    v1 = a2 + a3;
    v2 = 0;
    v5 = v0.next();
    if (v6 == 0x110000)
        return 0;
    while (true)
    {
        v8 = v7;
        v9 = v5.get(a2, a3);
        if (!v9)
            core::str::slice_error_fail(a2, a3, v5, a3, &g_583bf8); /* do not return */
        v11 = core::slice::<impl [T]>::starts_with(v9, v10, a0, a1);
        if ((char)v11)
            return v11 & 0xffffffffffffff00 | 1;
        if (v8 - 9 >= 5 && v8 != 32)
            break;
        v5 = v0.next();
        v7 = v10;
        if (v6 == 0x110000)
            break;
    }
    return 0;
}
