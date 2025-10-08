long long fish::wcstringutil::split_string_tok(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned long a6)
{
    unsigned long long v0;  // [bp-0xa0]
    void* v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    void* v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    unsigned long long v9;  // cc_ndep
    unsigned long long v10;  // r12
    void* v11;  // r14
    unsigned long long v12;  // cc_ndep
    unsigned long long v13;  // rdx
    void* v14;  // rbx
    char v15;  // al
    unsigned long long v16;  // cc_op
    unsigned long long v19;  // 4096
    unsigned long long v20;  // cc_dep1
    void* v21;  // cc_dep2
    void* v23;  // cc_dep2
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // r14

    v1 = 0;
    v2 = 8;
    v3 = 0;
    v9 = (a5 & 1) < 1;
    v10 = -((a5 & 1) < 1) | a6;
    v11 = 0;
    if (a2)
    {
        v4 = a1 + a2 * 4;
        v11 = 0;
        v0 = &g_14e4800;
        while (true)
        {
            v12 = v9;
            if (1 >= v10)
                break;
            v5 = a1 + v11 * 4;
            v6 = v4;
            if (((char)v5.position(a3, a4) & 1))
            {
                v14 = v11 + v13;
                if ((char)__CFADD__(v11, v13))
                    core::panicking::panic_const::panic_const_add_overflow(0x14e4800); /* do not return */
                if (v14 > a2)
                    core::slice::index::slice_start_index_len_fail(v14, a2, &g_14e4878); /* do not return */
                v5 = a1 + v14 * 4;
                v6 = v4;
                v15 = v5.position(a3, a4);
                v16 = 17;
                v19 = a2;
                v20 = v15 & 1;
                v21 = 0;
                if ((v15 & 1))
                {
                    v16 = 4;
                    if ((char)__CFADD__(v13, v14))
                    {
                        v0 = &g_14e4818;
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e4818); /* do not return */
                    }
                    v19 = v13 + v14;
                    v20 = v13;
                    v21 = v14;
                }
                v23 = v21;
                v24 = v20;
                v25 = v19;
                v1.push(v14.index(v25, a1, a2, &g_14e4830), a2, &g_14e4848);
                v11 = v25 + 1;
                if ((char)_ccall(4, 24, v25 + 1, 0, _ccall(v16, v24, v23, v12)))
                {
                    v0 = &g_14e4860;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e4860); /* do not return */
                }
                v9 = _ccall(v16, v24, v23, v12);
                if (v11 >= a2)
                    break;
            }
            else
            {
                if (0 <= v10)
                {
                    a0->field_10 = 0;
                    a0->field_0 = *((int128_t *)&v1);
                    return a0;
                }
LABEL_14240c4:
                v5 = &g_14e47a8;
                v5 = &g_14e47a8;
                v6 = 1;
                v7 = 8;
                v8 = 0;
                core::panicking::panic_fmt(&v5, &g_14e47e8); /* do not return */
            }
        }
    }
    if ((v10 & (a2 <= v11 ^ 1)))
    {
        if (v10 == 1)
        {
            v1.push(a1 + v11 * 4, a2 - v11, &g_14e47d0);
        }
        else
        {
            v5 = &g_14e4798;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            core::panicking::panic_fmt(&v5, &g_14e47b8); /* do not return */
        }
    }
    if (0 <= v10)
    {
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v1);
        return a0;
    }
    goto LABEL_14240c4;
}
