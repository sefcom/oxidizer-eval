long long fish::wcstringutil::join_strings(void* a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1[2];  // [bp-0x50]
    void* v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    void* v5;  // [bp-0x30]
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    unsigned long v9;  // cc_ndep
    unsigned long long v10[2];  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // rax

    if (!a2)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        return v13;
    }
    v7 = a2 * 16 + a1;
    v8 = a1.fold(v7);
    if ((char)__CFADD__(v8, a2))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e4890); /* do not return */
    }
    else if (!((char)_ccall(4, 4, v8, a2, v9)))
    {
        v0 = v8 + a2 - 1.with_capacity_in(4, 4, &g_14bd1e0);
        v1[0] = v10;
        v2 = 0;
        v3 = a1;
        v4 = v7;
        v5 = 0;
        while (true)
        {
            v11 = v3.next();
            if (!v10)
                break;
            if (v11)
                v0.push(a3);
            v12 = v10[0].as_ref(v10[1]);
            v0.spec_extend(v12, v12 + v10 * 4);
        }
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v0);
        return 0;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e4890); /* do not return */
    }
}
