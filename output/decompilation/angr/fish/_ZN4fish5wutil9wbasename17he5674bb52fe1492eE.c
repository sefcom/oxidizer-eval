long long fish::wutil::wbasename(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    unsigned long long v3;  // rbx
    void* v4;  // r15
    void* v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long v7;  // rcx
    char v8;  // al
    unsigned long v9;  // cc_ndep

    if (!a1)
        return ".";
    v3 = a1;
    v4 = a0 + a1 * 4;
    v0 = a0;
    v1 = v4;
    if (v0.try_fold().eq(0))
        return "/";
    v5 = v4;
    if (v5 != 4)
    {
        a0 = a0;
        if ((int)v5[4] == 47)
        {
            while (true)
            {
                a0 = a0.slice_to(v3, v3 - 1);
                v3 = v6;
                v4 = a0 + v6 * 4;
                if (!v6)
                    break;
                v7 = a0 + v6 * 4 - 4;
                if (!v7 || *((int *)v7) != 47)
                    break;
            }
        }
    }
    v0 = a0;
    v1 = v4;
    v8 = v0.rposition();
    if (!(v8 & 1))
    {
        return a0;
    }
    else if (!((char)_ccall(4, 24, v6 + 1, 0, _ccall(17, (unsigned long long)(v8 & 1), 0, v9))))
    {
        return a0.slice_from(v3, v6 + 1);
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14c16d8); /* do not return */
    }
}
