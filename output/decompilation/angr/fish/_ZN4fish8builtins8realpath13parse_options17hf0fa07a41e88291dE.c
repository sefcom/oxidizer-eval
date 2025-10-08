void fish::builtins::realpath::parse_options(struct_0 *a0, unsigned long long a1[2305843009213693951], unsigned long long a2, unsigned long long a3, void* a4)
{
    unsigned long v0;  // [bp-0x100]
    unsigned long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    void* v4;  // [bp-0xd8]
    unsigned long long v5[2305843009213693951];  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    uint128_t v12;  // [bp-0x98]
    void* v13;  // [bp-0x80]
    uint128_t v14;  // [bp-0x78]
    unsigned int v15;  // [bp-0x68]
    unsigned short v16;  // [bp-0x64]
    char v17;  // [bp-0x62]
    unsigned long long v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x58]
    unsigned long long v20;  // [bp-0x50]
    uint128_t v21;  // [bp-0x48]
    char v23;  // cl
    char *v24;  // rdi
    char v25;  // r15b
    char *v27;  // r12
    unsigned int v28;  // eax
    unsigned long v30;  // rdi

    v0 = a1[0];
    v1 = a1[1];
    v5[0] = a1;
    v6 = a2;
    v7 = "+";
    v8 = 3;
    v9 = &g_14cc3a8;
    v10 = 2;
    v11 = 4;
    v12 = 0;
    v13 = 0;
    v15 = 63;
    v17 = 1;
    v16 = 0;
    v2 = 0;
    v14 = 0;
    v3 = 8;
    v4 = 0;
    v23 = 0;
    v24 = &v2;
    while (true)
    {
        v27 = v24;
        v28 = v24.next_opt();
        if (v28 <= 103)
        {
LABEL_136716a:
            switch (v28)
            {
            case 58:
                v30 = v13 - 1;
                if (v13 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14cc3d8); /* do not return */
                }
                else if (v30 < a2)
                {
                    fish::builtins::shared::builtin_missing_argument(a3, a4, v0, v1, a1[2 * v30], a1[1 + 2 * v30], 0);
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v30, a2, &g_14cc3f0); /* do not return */
                }
            case 59:
                v30 = v13 - 1;
                if (v13 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14cc408); /* do not return */
                }
                else if (v30 < a2)
                {
                    fish::builtins::shared::builtin_unexpected_argument(a3, a4, v0, v1, a1[2 * v30], a1[1 + 2 * v30], 0);
                }
                else
                {
                    core::panicking::panic_bounds_check(v30, a2, &g_14cc420); /* do not return */
                }
            case 63:
                v30 = v13 - 1;
                if (v13 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14cc438); /* do not return */
                }
                else if (v30 < a2)
                {
                    fish::builtins::shared::builtin_unknown_option(a3, a4, v0, v1, a1[2 * v30], a1[1 + 2 * v30], 0);
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v30, a2, &g_14cc450); /* do not return */
                }
            default:
                v18 = &g_14c60b8;
                v19 = 1;
                v20 = 8;
                v21 = 0;
                core::panicking::panic_fmt(&v18, &g_14cc468); /* do not return */
            }
            a0->field_4 = 2;
            a0->field_0 = 2;
            break;
        }
        if (v28 != 0x110000)
        {
            v24 = v27;
            v23 = 1;
            switch (v28)
            {
            case 115:
                break;
            case 104:
                do
                {
                    if ((int)v24.next_opt() <= 103)
                        goto LABEL_136716a;
                    v24 = v27;
                } while (v28 == 104);
                switch (v28)
                {
                case 1114112:
                    v25 = 1;
                    break;
                case 115:
                    v23 = 1;
                    v25 = 1;
                    break;
                default:
                    v18 = &g_14c60b8;
                    v19 = 1;
                    v20 = 8;
                    v21 = 0;
                    core::panicking::panic_fmt(&v18, &g_14cc468); /* do not return */
                }
            default:
                v18 = &g_14c60b8;
                v19 = 1;
                v20 = 8;
                v21 = 0;
                core::panicking::panic_fmt(&v18, &g_14cc468); /* do not return */
            }
        }
        else
        {
            a0->field_0 = v25;
            a0->field_1 = v23;
            a0->field_8 = v13;
            break;
        }
    }
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
    return;
}
