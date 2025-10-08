long long fish::builtins::shared::HelpOnlyCmdOpts::parse(void* a0, unsigned long long a1[2305843009213693951], unsigned long long a2, unsigned long long a3, void* a4)
{
    unsigned long v0;  // [bp-0x100]
    void* v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    unsigned long long v4[2305843009213693951];  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    uint128_t v11;  // [bp-0x98]
    void* v12;  // [bp-0x80]
    uint128_t v13;  // [bp-0x78]
    unsigned int v14;  // [bp-0x68]
    unsigned short v15;  // [bp-0x64]
    char v16;  // [bp-0x62]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    uint128_t v20;  // [bp-0x48]
    unsigned long v22;  // r13
    unsigned int v23;  // eax
    char *v24;  // rdi
    char v25;  // al
    unsigned long v26;  // rdi

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_14c60c8); /* do not return */
    v22 = a1[0];
    v0 = a1[1];
    v4[0] = a1;
    v5 = a2;
    v6 = "+";
    v7 = 2;
    v8 = &g_14c60a0;
    v9 = 1;
    v10 = 4;
    v11 = 0;
    v12 = 0;
    v14 = 63;
    v16 = 1;
    v15 = 0;
    v1 = 0;
    v13 = 0;
    v2 = 8;
    v3 = 0;
    v23 = v1.next_opt();
    if (v23 <= 103)
    {
LABEL_13330ef:
        switch (v23)
        {
        case 58:
            v26 = v12 - 1;
            if (v12 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c60e0); /* do not return */
            }
            else if (v26 < a2)
            {
                fish::builtins::shared::builtin_missing_argument(a3, a4, v22, v0, a1[2 * v26], a1[1 + 2 * v26], 1);
                break;
            }
            else
            {
                core::panicking::panic_bounds_check(v26, a2, &g_14c60f8); /* do not return */
            }
        case 59:
            v26 = v12 - 1;
            if (v12 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c6110); /* do not return */
            }
            else if (v26 < a2)
            {
                fish::builtins::shared::builtin_unexpected_argument(a3, a4, v22, v0, a1[2 * v26], a1[1 + 2 * v26], 1);
            }
            else
            {
                core::panicking::panic_bounds_check(v26, a2, &g_14c6128); /* do not return */
            }
        case 63:
            v26 = v12 - 1;
            if (v12 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c6140); /* do not return */
            }
            else if (v26 < a2)
            {
                fish::builtins::shared::builtin_unknown_option(a3, a4, v22, v0, a1[2 * v26], a1[1 + 2 * v26], 1);
                break;
            }
            else
            {
                core::panicking::panic_bounds_check(v26, a2, &g_14c6158); /* do not return */
            }
        default:
            v17 = &g_14c60b8;
            v18 = 1;
            v19 = 8;
            v20 = 0;
            core::panicking::panic_fmt(&v17, &g_14c6170); /* do not return */
        }
        *((unsigned int *)a0) = 2;
        *((char *)&a0[8]) = 2;
        core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v1);
        return a0;
    }
    if (v23 != 0x110000)
    {
        if (v23 != 104)
        {
            v17 = &g_14c60b8;
            v18 = 1;
            v19 = 8;
            v20 = 0;
            core::panicking::panic_fmt(&v17, &g_14c6170); /* do not return */
        }
        v24 = &v1;
        do
        {
            if ((int)v24.next_opt() <= 103)
                goto LABEL_13330ef;
        } while (v23 == 104);
        if (v23 != 0x110000)
        {
            v17 = &g_14c60b8;
            v18 = 1;
            v19 = 8;
            v20 = 0;
            core::panicking::panic_fmt(&v17, &g_14c6170); /* do not return */
        }
        v25 = 1;
    }
    *((void* *)a0) = v12;
    *((char *)&a0[8]) = v25;
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v1);
    return a0;
}
