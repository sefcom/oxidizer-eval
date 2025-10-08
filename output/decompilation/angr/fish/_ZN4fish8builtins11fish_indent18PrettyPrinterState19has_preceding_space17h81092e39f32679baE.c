long long fish::builtins::fish_indent::PrettyPrinterState::has_preceding_space(unsigned long long a0[20])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // rsi
    unsigned long long v6;  // cc_ndep
    unsigned long long v7;  // cc_ndep
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rdi
    unsigned long long v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long long v13;  // cc_ndep
    unsigned long v14;  // rbp
    char v16;  // dil
    unsigned long long v17;  // rsi

    v0 = v2;
    v3 = a0[8];
    0.unwrap(&g_14c93c0);
    v4 = v3 - 1;
    while (true)
    {
        v7 = v6;
        v8 = v4;
        if (v8 >= 0)
        {
            0.unwrap(&g_14c93d8);
            if (v8 >= v3)
                core::panicking::panic_bounds_check(v8, v3, &g_14c93f0); /* do not return */
            if (*((int *)(a0[7] + v8 * 4)) == 10)
            {
                0.unwrap(&g_14c9408);
                v9 = fish::wcstringutil::count_preceding_backslashes(a0[18], a0[19], v8);
                if (!((char)v9 & 1))
                    return 0;
                v10 = v9;
                v11 = v10 >> 63;
                v12 = v10 >> 62;
                v10 >> 63.unwrap(&g_14c9420);
                v13 = _ccall(36, v11, v12, v7);
                v14 = v10 + 1;
                if ((char)_ccall(0, 24, v10 + 1, 0, _ccall(36, v11, v12, v7)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c9438); /* do not return */
                v4 = v8 - v14;
                v6 = v13;
                if ((char)(((v8 ^ v14) & (v8 ^ v8 - v14)) >> 63))
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c9450); /* do not return */
            }
            else
            {
                v16 = 0;
                v17 = v8;
                break;
            }
        }
        else
        {
            v16 = 1;
            v17 = v5;
            break;
        }
    }
    return v16.is_ok_and(v17, a0[7], v3);
}
