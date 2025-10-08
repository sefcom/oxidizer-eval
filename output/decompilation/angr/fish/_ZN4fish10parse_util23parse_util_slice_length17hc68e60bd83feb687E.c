long long fish::parse_util::parse_util_slice_length(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x80]
    unsigned int v2;  // [bp-0x7c]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned int v12;  // eax
    unsigned long long v13;  // cc_op
    void* v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    void* v16;  // r12
    unsigned long long v17;  // 4096
    unsigned int v18;  // r13d
    unsigned long long v19;  // cc_ndep
    char v20;  // r14b
    unsigned int v21;  // r13d
    unsigned long long v22;  // r15
    void* v23;  // r12
    unsigned int v24;  // r13d
    void* v25;  // r12
    unsigned int v26;  // r13d
    unsigned int v28;  // eax
    unsigned int v29;  // cc_dep1
    unsigned int v30;  // cc_dep1

    v3 = a0;
    v4 = a0 + a1 * 4;
    v10 = v3.next();
    if (v10 == 2)
        return 1;
    v10.unwrap(v11, &g_14bd1b0);
    if (v11 == 91)
    {
        if ((int)v3.next() == 2)
            return 0;
        v0 = 1;
        v13 = 19;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = a0;
        do
        {
            v21 = v18;
            v17 = v22;
            v12.unwrap(v21, &g_14bd1b0);
            v2 = v21;
            v19 = _ccall(v13, v14, v15, v19);
            v23 = v16 + 1;
            if ((char)_ccall(4, 24, v16 + 1, 0, _ccall(v13, v14, v15, v19)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dd5d0); /* do not return */
            v24 = v21;
            v25 = v23;
            if ((v20 & 1))
                continue;
            v26 = v2;
            if (v2.slice_contains("'", 2))
            {
                if (!((char)fish::tokenizer::quote_end(v17, a1, v23, v26) & 1))
                    return 0;
                if (v11 < v23)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dd630); /* do not return */
                if (v11 != v23 && !v3.advance_by(~(v23) + v11))
                {
                    v28 = v3.next();
                    if (v28 != 2)
                    {
                        v28.unwrap(v11, &g_14bd1b0);
                        v17 = a0;
                        v24 = v2;
                        v25 = v11;
                        continue;
                    }
                }
                return 0;
            }
            else
            {
                v29 = v26;
                if (v26 != 91)
                {
                    v30 = v26;
                    v24 = v26;
                    v25 = v23;
                    if (v24 == 93)
                    {
                        v19 = v30 < 93;
                        if ((char)_ccall(0, 27, (unsigned long long)(v0 - 1), 0, (unsigned long long)(char)(v30 < 93)))
                        {
                            core::panicking::panic_const::panic_const_sub_overflow(&g_14dd5e8); /* do not return */
                        }
                        else if (v0 != 1)
                        {
                            v0 -= 1;
                            v24 = 93;
                            v25 = v23;
                        }
                        else if (!((char)_ccall(4, 24, v23 + 1, 0, v19 & 1)))
                        {
                            return 1;
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd600); /* do not return */
                        }
                    }
                }
                else
                {
                    v1 = v0 + 1;
                    v19 = v29 < 91;
                    if ((char)_ccall(0, 23, (unsigned long long)(v0 + 1), 0, (unsigned long long)(char)(v29 < 91)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd618); /* do not return */
                    v24 = 91;
                    v0 = v1;
                    v25 = v23;
                }
            }
            v16 = v25;
            v17 = v22;
            v20 = (v20 ^ 1) & v24 == 92;
            v12 = v3.next();
            v13 = 7;
            v14 = v12;
            v15 = 2;
        } while (v12 != 2);
        if (v0 <= 0)
        {
            v5 = &g_14dd5a8;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            core::panicking::panic_fmt(&v5, &g_14dd5b8); /* do not return */
        }
        return 0;
    }
    return 1;
}
