long long fish::builtins::path::path_out(unsigned long long a0, char a1, unsigned int a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    void* v4;  // [bp-0x28]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long v8;  // cc_ndep

    v6 = a3.as_ref();
    if (((char)a2 & 1))
    {
        return v6;
    }
    else if (!(a1 & 1))
    {
        return a0.append_with_separation(v6, a2, 1, 1);
    }
    else if (!((char)_ccall(4, 24, v7 + 1, 0, _ccall(17, (unsigned long long)(a1 & 1), 0, v8))))
    {
        v0 = v7 + 1.with_capacity_in(4, 4, &g_14bd1e0);
        v1 = v7;
        v2 = 0;
        v0.spec_extend(v6, v6 + v7 * 4);
        v0.push(0);
        v4 = 0;
        memcpy(&v3, &v0, 16);
        return (unsigned long long)a0.append(&v3);
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14cae40); /* do not return */
    }
}
