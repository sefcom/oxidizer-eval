void fish::builtins::block::parse_options(unsigned long long *a0, unsigned long long a1[2305843009213693951], unsigned long long a2, unsigned long long a3, void* a4)
{
    unsigned long v0;  // [bp-0x108]
    unsigned long v1;  // [bp-0xf8]
    struct_0 *v2;  // [bp-0xf0]
    void* v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8]
    unsigned long long v6[2305843009213693951];  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    uint128_t v13;  // [bp-0x98]
    void* v14;  // [bp-0x80]
    uint128_t v15;  // [bp-0x78]
    unsigned int v16;  // [bp-0x68]
    unsigned short v17;  // [bp-0x64]
    char v18;  // [bp-0x62]
    unsigned long long v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    uint128_t v22;  // [bp-0x48]
    unsigned int v24;  // r12d
    char *v25;  // rdi
    unsigned long long v26;  // rdx
    unsigned int v27;  // ecx
    char v28;  // r15b
    unsigned int v29;  // r13d
    char *v30;  // rbx
    unsigned long long v31;  // rbp
    unsigned int v32;  // eax
    unsigned int v35;  // eax
    unsigned long v36;  // rcx
    unsigned long v38;  // rdi

    v0 = a1[0];
    v1 = a1[1];
    v6[0] = a1;
    v7 = a2;
    v8 = "e";
    v9 = 4;
    v10 = &g_14c7aa0;
    v11 = 4;
    v12 = 4;
    v13 = 0;
    v14 = 0;
    v16 = 63;
    v18 = 1;
    v17 = 0;
    v3 = 0;
    v15 = 0;
    v4 = 8;
    v5 = 0;
    v24 = 0;
    v25 = &v3;
    v26 = fish::wgetopt::WGetopter::next_opt;
    v27 = 0;
    while (true)
    {
        v29 = v27;
        v30 = v25;
        v31 = v26;
        v32 = v25.next_opt();
        if (v32 == 0x110000)
        {
            *(a0) = v29 * 0x100 | v24 & &g_ff0000 | v28;
            v2->field_8 = v14;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v3);
            return;
        }
        switch (v32)
        {
        case 58:
LABEL_133f5f5:
            v38 = v14 - 1;
            if (v14 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7b00); /* do not return */
            }
            else if (v38 < a2)
            {
                fish::builtins::shared::builtin_missing_argument(a3, a4, v0, v1, a1[2 * v38], a1[1 + 2 * v38], 0);
                v2->field_4 = 2;
                v2->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v3);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v38, a2, &g_14c7b18); /* do not return */
            }
        case 59:
LABEL_133f645:
            v38 = v14 - 1;
            if (v14 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7b30); /* do not return */
            }
            else if (v38 < a2)
            {
                fish::builtins::shared::builtin_unexpected_argument(a3, a4, v0, v1, a1[2 * v38], a1[1 + 2 * v38], 0);
                v2->field_4 = 2;
                v2->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v3);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v38, a2, &g_14c7b48); /* do not return */
            }
        case 63:
LABEL_133f692:
            v38 = v14 - 1;
            if (v14 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7b60); /* do not return */
            }
            else if (v38 < a2)
            {
                fish::builtins::shared::builtin_unknown_option(a3, a4, v0, v1, a1[2 * v38], a1[1 + 2 * v38], 0);
                v2->field_4 = 2;
                v2->field_0 = 2;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v3);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v38, a2, &g_14c7b78); /* do not return */
            }
        case 101:
LABEL_133f57d:
            v35 = v25.next_opt();
            v36 = v35 - 58;
            switch ((unsigned int)v36)
            {
            case 45:
                v28 = 1;
                goto LABEL_133f5a4;
            case 46:
                v27 = (unsigned int)v36 & 0xffffff00 | 1;
                v28 = 1;
                continue;
            case 50:
                v28 = 1;
                goto LABEL_133f5b2;
            case 0:
                goto LABEL_133f5f5;
            case 1:
                goto LABEL_133f645;
            case 2: case 3: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 44: case 47: case 48: case 49:
                break;
            case 5:
                goto LABEL_133f692;
            case 43:
                goto LABEL_133f57d;
            default:
                if (v35 == 0x110000)
                {
                    *(a0) = v29 * 0x100 | v24 & &g_ff0000 | 1;
                    v2->field_8 = v14;
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v3);
                    return;
                }
                break;
            }
        case 103:
LABEL_133f5a4:
            v24 = 0x10000;
            v27 = v29;
            continue;
        case 104:
            break;
        case 108:
LABEL_133f5b2:
            v24 = 0x20000;
            v27 = v29;
            break;
        default:
            v19 = &g_14c60b8;
            v20 = 1;
            v21 = 8;
            v22 = 0;
            core::panicking::panic_fmt(&v19, &g_14c7b90); /* do not return */
        }
    }
}
