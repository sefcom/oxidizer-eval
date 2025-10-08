void fish::builtins::echo::parse_options(void* a0, unsigned long long a1[2], unsigned long long a2, unsigned long a3, void* a4)
{
    char v0;  // [bp-0x124]
    char v1;  // [bp-0x123]
    char v2;  // [bp-0x122]
    char v3;  // [bp-0x121]
    struct_0 *v4;  // [bp-0x120]
    unsigned long v5;  // [bp-0x110]
    unsigned long v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0xf8]
    void* v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    void* v10;  // [bp-0xd8]
    unsigned long long v11[2];  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    void* v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    uint128_t v18;  // [bp-0x98]
    void* v19;  // [bp-0x80]
    uint128_t v20;  // [bp-0x78]
    unsigned int v21;  // [bp-0x68]
    unsigned short v22;  // [bp-0x64]
    char v23;  // [bp-0x62]
    unsigned long long v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    unsigned long long v26;  // [bp-0x50]
    uint128_t v27;  // [bp-0x48]
    char *v30;  // rdi
    void* v31;  // rax
    char v32;  // r14b
    void* v33;  // rbx
    unsigned int v34;  // eax
    unsigned long long v38;  // rdx
    void* v40;  // rdi

    if (!a2)
    {
        *((unsigned int *)&a0[4]) = 2;
        *((char *)a0) = 2;
        return;
    }
    v6 = a1[0];
    v5 = a1[1];
    v11[0] = a1;
    v12 = a2;
    v13 = "+";
    v14 = 5;
    v15 = 8;
    v16 = 0;
    v17 = 4;
    v18 = 0;
    v19 = 0;
    v21 = 63;
    v23 = 1;
    v22 = 0;
    v8 = 0;
    v20 = 0;
    v9 = 8;
    v10 = 0;
    v30 = &v8;
    v31 = 0;
    while (true)
    {
        v33 = v31;
        v3 = __CFADD__(v33, 2);
        v0 = v32;
        v1 = 1;
        v2 = 1;
        v34 = v30.next_opt();
        if (v34 != 0x110000)
        {
            switch (v34)
            {
            case 58:
                v40 = v19 - 1;
                if (v19 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c8d40); /* do not return */
                }
                else if (v40 < a2)
                {
                    fish::builtins::shared::builtin_missing_argument(v7, a4, v6, v5, *((long long *)((char *)a1 + 0x10 * v40)), *((long long *)(8 + (char *)a1 + 0x10 * v40)), 1);
                    v4->field_4 = 2;
                    v4->field_0 = 2;
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v40, a2, &g_14c8d58); /* do not return */
                }
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v8);
                return;
            case 59:
                v24 = &g_14c8d18;
                v24 = &g_14c8d18;
                v25 = 1;
                v26 = 8;
                v27 = 0;
                core::panicking::panic_fmt(&v24, &g_14c8d70); /* do not return */
            case 63:
                if (!v19)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c8d88); /* do not return */
                v19 -= 1;
                v38 = 0x100 | v0 * 0x10000;
LABEL_13497db:
                *((unsigned long long *)a0) = 1 | v38;
                v4->field_8 = v19;
                break;
            case 69:
                continue;
            case 101:
                v32 = 1;
                continue;
            case 110:
                continue;
            case 115:
                if (v3)
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c8d28); /* do not return */
                v31 = v19;
                if (v31 != v33 + 2)
                    continue;
                break;
            default:
                v24 = &g_14c60b8;
                v25 = 1;
                v26 = 8;
                v27 = 0;
                core::panicking::panic_fmt(&v24, &g_14c8da0); /* do not return */
            }
        }
        else
        {
            v38 = 0x100 | v32 * 0x10000;
            goto LABEL_13497db;
        }
    }
}
