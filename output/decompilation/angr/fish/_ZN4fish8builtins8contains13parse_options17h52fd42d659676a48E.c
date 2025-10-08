void fish::builtins::contains::parse_options(struct_0 *a0, unsigned long long a1[2305843009213693951], unsigned long long a2, unsigned long long a3, void* a4)
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
    char v26;  // cl
    unsigned long v27;  // r13
    unsigned int v28;  // eax
    char *v29;  // rdi
    unsigned int v31;  // eax
    unsigned long v32;  // rdi

    v0 = a1[0];
    v1 = a1[1];
    v5[0] = a1;
    v6 = a2;
    v7 = "+";
    v8 = 3;
    v9 = &g_14c8b68;
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
        v26 = v23;
        v27 = v24;
        v28 = v24.next_opt();
        if (v28 == 0x110000)
        {
            a0->field_0 = v25;
            a0->field_1 = v26;
            a0->field_8 = v13;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
            return;
        }
        switch (v28)
        {
        case 58:
            v32 = v13 - 1;
            if (v13 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c8b98); /* do not return */
            }
            else if (v32 < a2)
            {
                fish::builtins::shared::builtin_missing_argument(a3, a4, v0, v1, a1[2 * v32], a1[1 + 2 * v32], 0);
                a0->field_4 = 2;
                a0->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v32, a2, &g_14c8bb0); /* do not return */
            }
        case 59:
            v32 = v13 - 1;
            if (v13 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c8bc8); /* do not return */
            }
            else if (v32 < a2)
            {
                fish::builtins::shared::builtin_unexpected_argument(a3, a4, v0, v1, a1[2 * v32], a1[1 + 2 * v32], 0);
                a0->field_4 = 2;
                a0->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v32, a2, &g_14c8be0); /* do not return */
            }
        case 63:
LABEL_1348791:
            v32 = v13 - 1;
            if (v13 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c8bf8); /* do not return */
            }
            else if (v32 < a2)
            {
                fish::builtins::shared::builtin_unknown_option(a3, a4, v0, v1, a1[2 * v32], a1[1 + 2 * v32], 0);
                a0->field_4 = 2;
                a0->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v32, a2, &g_14c8c10); /* do not return */
            }
        case 104:
LABEL_1348766:
            v31 = v29.next_opt();
            switch (v31)
            {
            case 105:
                v23 = 1;
                v25 = 1;
                v24 = v27;
                continue;
            case 58:
                break;
            case 59:
                break;
            case 60: case 61: case 62: case 64: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100: case 101: case 102: case 103:
                goto LABEL_13488be;
            case 63:
                goto LABEL_1348791;
            case 104:
                goto LABEL_1348766;
            default:
                if (v31 == 0x110000)
                {
                    a0->field_0 = 1;
                    a0->field_1 = v26;
                    a0->field_8 = v13;
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
                    return;
                }
            }
        case 105:
            continue;
        default:
LABEL_13488be:
            v18 = &g_14c60b8;
            v19 = 1;
            v20 = 8;
            v21 = 0;
            core::panicking::panic_fmt(&v18, &g_14c8c28); /* do not return */
        }
    }
}
