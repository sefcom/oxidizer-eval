long long fish::wchar_ext::to_wstring_impl(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    uint128_t v3;  // [bp-0x38]
    void* v4;  // [bp-0x28]
    unsigned long long v6;  // r12
    unsigned long long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long v10;  // r14
    unsigned long long v11;  // rdx
    unsigned long v12;  // r14
    unsigned long v13;  // r14
    unsigned long v14;  // r14
    void* v15;  // rax
    char v16;  // [bp-0x39]

    v3 = 0;
    v4 = 0;
    v6 = 1;
    if (a1)
    {
        while (true)
        {
            v7 = a1;
            if (v6 == 25)
                core::panicking::panic_bounds_check(24, 24, &g_14e4618); /* do not return */
            v8 = v7 / 10;
            (&v16)[v6] = (v7 & 4294967295) - (unsigned int)v8 * 10;
            if (v7 < 10)
                break;
            *((char *)&v3 + v6) = v8 - (unsigned int)(v8 / 10) * 10;
            v6 += 2;
            a1 = (v7 >> 2) / 25;
            if (v7 < 100)
            {
                v6 -= 1;
                break;
            }
        }
    }
    v10 = a2;
    v0 = v10 + v6.with_capacity_in(4, 4, &g_14bd1e0);
    v1 = v11;
    v2 = 0;
    if ((char)v10)
        v0.push(45);
    v12 = v6 - 1;
    while (true)
    {
        v13 = v12;
        if (v13 == -1)
        {
            v15 = v2;
            a0->field_10 = v15;
            a0->field_0 = *((int128_t *)&v0);
            return v15;
        }
        else if (v6 > 24)
        {
            core::panicking::panic_bounds_check(v13, 24, &g_14e45e8); /* do not return */
        }
        else if (!((char)__CFADD__(*((char *)&v3 + v13), 48)))
        {
            v14 = v13 - 1;
            v0.push(*((char *)&v3 + v13) + 48);
            v12 = v14;
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14e4600); /* do not return */
        }
    }
}
