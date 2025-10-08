long long fish::history::file::read_line(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // cc_ndep
    void* v6;  // rdx

    v0 = a1;
    v1 = a1 + a2;
    if (((char)v0.position() & 1))
    {
        v4 = 0.index(v3, a1, a2, &g_14d9b30);
        if ((char)_ccall(4, 24, v3 + 1, 0, _ccall(19, 0, 0, v5)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d9b48); /* do not return */
        a2 = v3 + 1;
    }
    else
    {
        v4 = 1;
        v6 = 0;
    }
    a0[0] = a2;
    a0[1] = v4;
    a0[2] = v6;
    return v4;
}
