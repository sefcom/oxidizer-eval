long long fish::builtins::functions::parse_cmd_opts(struct_0 *a0, unsigned long long *a1, unsigned long long a2[2305843009213693952], unsigned long long a3, unsigned long long a4, void* a5)
{
    unsigned int v0;  // [bp-0x104]
    unsigned long long v1;  // [bp-0x100]
    void* v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    void* v4;  // [bp-0xe8]
    unsigned long long v5[2305843009213693952];  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    int v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x98]
    void* v15;  // [bp-0x90]
    uint128_t v16;  // [bp-0x88]
    unsigned int v17;  // [bp-0x78]
    unsigned short v18;  // [bp-0x74]
    char v19;  // [bp-0x72]
    char *v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    char *v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    void* v26;  // [bp-0x40]
    unsigned int v28;  // eax
    unsigned long v30;  // rdi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rdi

    v5[0] = a2;
    v6 = a3;
    v7 = "H";
    v8 = 13;
    v9 = &g_14ca0e0;
    v10 = 12;
    v11 = 4;
    *((uint128_t *)&v12) = 0;
    v15 = 0;
    v17 = 63;
    v19 = 1;
    v18 = 0;
    v2 = 0;
    v16 = 0;
    v3 = 8;
    v4 = 0;
    v1 = &g_14ca218;
    while (true)
    {
        v28 = v2.next_opt();
        if (v28 == 0x110000)
        {
            *(a1) = v15;
            break;
        }
        switch (v28)
        {
        case 2:
            a0->field_27 = 1;
            continue;
        case 58:
            v30 = v15 - 1;
            if (v15 < 1)
                core::panicking::panic_const::panic_const_sub_overflow(v32); /* do not return */
            if (v30 >= a3)
                core::panicking::panic_bounds_check(v30, a3, v31); /* do not return */
            fish::builtins::shared::builtin_missing_argument(a4, a5, "f", 9, a2[2 * v30], a2[1 + 2 * v30], 0);
LABEL_1354766:
            goto LABEL_1354659;
        case 59:
            v30 = v15 - 1;
            if (v15 < 1)
                goto LABEL_0x1354824;
            if (v30 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a4, a5, "f", 9, a2[2 * v30], a2[1 + 2 * v30], 0);
                goto LABEL_1354766;
            }
            else
            {
                goto LABEL_0x1354845;
            }
        case 63:
            v30 = v15 - 1;
            if (v15 < 1)
                goto LABEL_0x1354824;
            if (v30 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a4, a5, "f", 9, a2[2 * v30], a2[1 + 2 * v30], 0);
                goto LABEL_1354766;
            }
            else
            {
                goto LABEL_0x1354845;
            }
        case 68:
            a0->field_26 = 1;
            continue;
        case 72:
            a0->field_29 = 1;
            continue;
        case 97:
            a0->field_23 = 1;
            continue;
        case 99:
            a0->field_25 = 1;
            continue;
        case 100:
            if (v13)
            {
                a0->field_10 = v13;
                a0->field_18 = v14;
                break;
            }
            else
            {
                v1 = &g_14ca200;
LABEL_1354781:
                core::option::unwrap_failed(0x14ca200); /* do not return */
            }
        case 101:
            a0->field_21 = 1;
            continue;
        case 104:
            a0->field_20 = 1;
            continue;
        case 110:
            a0->field_22 = 1;
            continue;
        case 113:
            a0->field_24 = 1;
            continue;
        case 116:
            a0->field_29 = 1;
            if (v13)
            {
                a0->field_0 = v13;
                a0->field_8 = v14;
                continue;
            }
            goto LABEL_1354781;
        case 118:
            a0->field_28 = 1;
            continue;
        default:
            v0 = v28;
            v20 = &v0;
            v21 = <char as core::fmt::Display>::fmt;
            v22 = &g_14c9cb0;
            v23 = 1;
            v26 = 0;
            v24 = &v20;
            v25 = 1;
            core::panicking::panic_fmt(&v22, &g_14ca2c0); /* do not return */
        }
    }
LABEL_1354659:
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v2);
    return 0x200000000;
}
