void fish::screen::truncate_run(unsigned long long a0[3], unsigned long a1, unsigned long long *a2, unsigned long long a3[3])
{
    unsigned int v0;  // [bp-0x188]
    unsigned int v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    unsigned long long v6;  // r13
    unsigned long long v7;  // r13
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // rbp
    unsigned int v10;  // edi
    unsigned long long v11;  // rax
    void* v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // r13

    v6 = *(a2);
    if (v6 < a1)
        return;
    v1 = fish::common::get_ellipsis_char();
    a0.insert_slice(0, &v1, 1);
    v7 = v6 + 1;
    if ((char)_ccall(4, 24, v6 + 1, 0, _ccall(19, 0, 0, v8)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e2000); /* do not return */
    if (v7 > a1)
    {
        v9 = 1;
        while (v9 < a0[2])
        {
            v10 = *((int *)(a0[1] + v9 * 4));
            if (v10 <= 27)
            {
                switch (v10)
                {
                case 27:
                    v11 = a3.escape_code_length(a0[1].index(a0[2], v9, &g_14e2030), a2).max(1);
                    v9 += v11;
                    if ((char)__CFADD__(v9, v11))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e2048); /* do not return */
                    break;
                case 9:
                    a0.remove(v9);
                    v7 = fish::screen::measure_run_from(a0[1], a0[2], NULL, NULL, a3);
                    v9 = 0;
                    break;
                default:
                    v0 = 13313;
                    if ((*((char *)&v0 + ((v10 & 31) >> 3)) >> ((char)v10 & 31 & 7) & 1))
                    {
                        v1 = &g_14e1ff0;
                        v2 = 1;
                        v3 = 8;
                        v4 = 0;
                        core::panicking::panic_fmt(&v1, &g_14e2018); /* do not return */
                    }
                }
            }
            v13 = fish::wcstringutil::fish_wcwidth_visible(v10);
            if (v13 <= 0)
                v13 = 0;
            v14 = v7.min(v13);
            v15 = v7 - v14;
            if (v7 < v14)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e2060); /* do not return */
            a0.remove(v9);
            v7 = v15;
            if (v7 <= a1)
                break;
        }
    }
    *(a2) = v7;
    return;
}
