long long fish::parse_util::parse_util_get_offset_from_line(unsigned long long a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    unsigned int v4;  // ebx
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned int v7;  // ebx

    if (a2 < 0)
    {
        return 0;
    }
    else if (a2)
    {
        v0 = a0;
        v1 = a0 + a1 * 4;
        v2 = 0;
        do
        {
            v4 = a2;
            v5 = v0.try_fold(&v2);
            if (v6 == 0x110000)
                return 0;
            v7 = v4 - 1;
            a2 = v7;
        } while (v4 != 1);
        if ((char)_ccall(4, 24, v5 + 1, 0, (unsigned long long)(char)(v6 < 0x110000)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dd990); /* do not return */
        return 1;
    }
    else
    {
        return 1;
    }
}
