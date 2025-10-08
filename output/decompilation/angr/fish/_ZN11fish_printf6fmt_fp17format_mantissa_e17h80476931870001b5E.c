char fish_printf::fmt_fp::format_mantissa_e(struct_0 *a0, void* a1, unsigned long long a2, unsigned int a3, unsigned long long a4, struct_1 *a5)
{
    unsigned int v0;  // [bp-0xac]
    unsigned int v1;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x98]
    char *v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    unsigned short v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    char *v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    void* v15;  // r14
    unsigned int v16;  // r13d
    unsigned long long v18;  // rbp
    void* v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbx
    unsigned long long v23;  // rdx
    unsigned long long v24;  // r13
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rax
    unsigned int v27;  // ecx
    unsigned int v28;  // r12d
    void* v29;  // r14
    unsigned int v30;  // eax
    unsigned long long v31;  // rax

    v16 = a0->field_18;
    v2 = v16.max(1);
    if (v2 <= 0)
    {
        fish_printf::printf_impl::pad(a4, 48, a1, 0);
        return 6;
    }
    v0 = (v16 <= 0 ? 0 : *((int *)a0.index(0, &g_149a230)));
    a5->field_10 = 0;
    v3 = &v0;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v5 = 0;
    v6 = 1;
    v7 = &g_549050;
    v8 = 1;
    v11 = &g_54b280;
    v12 = 1;
    v9 = &v3;
    v10 = 2;
    if ((char)a5.spec_write_fmt(&v7))
        return 5;
    v13 = a2;
    v18 = a5->field_8;
    v19 = a5->field_10;
    v20 = 1.get(v18, v19);
    if (!v20)
        core::str::slice_error_fail(v18, v19, 0, 1, &g_149a248); /* do not return */
    v1 = v16;
    a4.write_str(v20, a2);
    v21 = 1.get(v18, v19);
    if (!v21)
        core::str::slice_error_fail(v18, v19, 1, v19, &g_149a260); /* do not return */
    v22 = v21;
    if (((a1 | (char)v13) & 1))
        a4.write_char(a3);
    v25 = v23.min(a1);
    v26 = v25.get(v22, v23);
    if (!v26)
        core::str::slice_error_fail(v22, v24, 0, v25, &g_149a278); /* do not return */
    a4.write_str(v26, a2);
    v15 = a1 - v25;
    if (a1 < v25)
        core::panicking::panic_const::panic_const_sub_overflow(&g_149a290); /* do not return */
    v27 = v1;
    if (a1 != v25)
    {
        if (v2 != 1)
        {
            v28 = 1;
            while (true)
            {
                v29 = v15;
                v30 = 0;
                if (v28 < v27)
                    v30 = *((int *)a0.index(v28, &g_149a230));
                v0 = v30;
                a5->field_10 = 0;
                v3 = &v0;
                v4 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v5 = 0;
                v6 = 9;
                v7 = &g_549050;
                v8 = 1;
                v11 = &g_54b280;
                v12 = 1;
                v9 = &v3;
                v10 = 2;
                if ((char)a5.spec_write_fmt(&v7))
                    return 5;
                v24 = a5->field_10;
                v25 = v24.min(v29);
                v31 = v25.get(a5->field_8, v24);
                if (!v31)
                    core::str::slice_error_fail(a5->field_8, v24, 0, v25, &g_149a278); /* do not return */
                a4.write_str(v31, a2);
                v15 = v29 - v25;
                if (v29 < v25)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_149a290); /* do not return */
                v27 = v1;
                if (v29 == v25)
                    break;
                v28 += 1;
                if (v2 == v28)
                {
                    fish_printf::printf_impl::pad(a4, 48, v15, 0);
                    return 6;
                }
            }
        }
        else
        {
            fish_printf::printf_impl::pad(a4, 48, v15, 0);
            return 6;
        }
    }
    fish_printf::printf_impl::pad(a4, 48, 0, 0);
    return 6;
}
