long long fish::parse_util::apply_indents(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned int *a3, unsigned long long a4)
{
    void* v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    struct_0 *v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    void* v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned int v9;  // edx
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax
    unsigned long v12;  // rbx
    unsigned long long v13;  // rsi

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v4 = a1;
    v5 = a1 + a2 * 4;
    v6 = 0;
    while (true)
    {
        do
        {
            do
            {
                v8 = v4.next();
                if (v9 == 0x110000)
                {
                    v3->field_10 = 0;
                    v3->field_0 = *((int128_t *)&v0);
                    return v3;
                }
                v10 = v8;
                v0.push(v9);
            } while (v9 != 10);
            if ((char)_ccall(4, 24, v10 + 1, 0, (unsigned long long)(char)(v9 < 10)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14ddb88); /* do not return */
        } while (v11 + 1 == a2);
        if (v10 >= a4)
            break;
        v12 = a3[v10];
        (v12 & 4294967295) >> 31.unwrap(&g_14ddbb8);
        v13 = v12 * 4;
        if ((unsigned int)v12 < 0)
            v13 = 0;
        v0.extend(v13);
    }
    core::panicking::panic_bounds_check(v10, a4, &g_14ddba0); /* do not return */
}
