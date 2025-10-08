char fish_printf::fmt_fp::format_mantissa_f(unsigned int a0[9], void* a1, unsigned long long a2, unsigned int a3[2], unsigned long long a4, struct_0 *a5)
{
    char v0;  // [bp-0xb4], Other Possible Types: unsigned int
    char v1;  // [bp-0xb4]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    char *v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    struct_0 *v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x6c]
    unsigned int v10;  // [bp-0x68]
    char v11;  // [bp-0x64]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    void* v14;  // [bp-0x50]
    unsigned short v15;  // [bp-0x48]
    void* v17;  // r14
    unsigned int v18;  // eax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // cc_ndep
    unsigned long long v21;  // rdx
    unsigned long long v22;  // cc_op
    char v23;  // al
    unsigned int v24;  // ebp
    void* v25;  // r14
    struct_0 *v26;  // r15
    unsigned long long v27;  // r13
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdi
    void* v30;  // rdx

    v17 = a1;
    v18 = a0[8];
    if (a0[8] < 0)
    {
        do
        {
            a0.push_front(0);
            v18 = a0[8];
        } while (a0[8] < 0);
    }
    if (v18 >= a0[6])
    {
        do
        {
            a0.push_back(0);
            v18 = a0[8];
        } while (a0[8] >= a0[6]);
    }
    v0 = a3[1] != 0x110000 & (char)(a2 >> 40);
    v9 = 0;
    v10 = v18;
    v11 = 0;
    if (((char)v9.spec_next() & 1))
    {
        if (v1)
        {
            while (true)
            {
                v12 = a0.index(v19 & 4294967295, &g_149a320);
                v13 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v14 = 0;
                v15 = ((unsigned int)v19 > 0) * 8 + 1;
                v2 = &g_549050;
                v3 = 1;
                v6 = &g_54b280;
                v7 = 1;
                v4 = &v12;
                v5 = 2;
                if ((char)a5.spec_write_fmt(&v2))
                    break;
                if (!((char)v9.spec_next() & 1))
                    goto LABEL_125a6cc;
            }
        }
        else
        {
            while (true)
            {
                v12 = a0.index(v21 & 4294967295, &g_149a308);
                v13 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v14 = 0;
                v15 = ((unsigned int)v21 > 0) * 8 + 1;
                v2 = &g_549050;
                v3 = 1;
                v6 = &g_54b280;
                v7 = 1;
                v4 = &v12;
                v5 = 2;
                if ((char)a4.write_fmt(&v2))
                    break;
                if (!((char)v9.spec_next() & 1))
                    goto LABEL_125a6cc;
            }
        }
    }
LABEL_125a6cc:
    if (v1)
    {
        v2.apply_grouping(a3, v8->field_8, v8->field_10);
        a4.write_str(v3, v4);
        core::ptr::drop_in_place<alloc::string::String>(&v2);
    }
    v22 = 20;
    v23 = a2;
    if (!a1)
    {
        v22 = 17;
        a1 = v23 & 1;
        if (!(v23 & 1))
            goto LABEL_125a72e;
    }
    a4.write_char(a3[0]);
LABEL_125a72e:
    v24 = a0[8] + 1;
    if ((char)_ccall(0, 23, (unsigned long long)(a0[8] + 1), 0, _ccall(v22, a1, 0, v20)))
        core::panicking::panic_const::panic_const_add_overflow(&g_149a2a8); /* do not return */
    v0 = a0[6];
    if (v24 >= a0[6])
    {
        v29 = a4;
        v30 = v17;
        fish_printf::printf_impl::pad(v29, 48, v30, 0);
        return 6;
    }
    while (true)
    {
        v25 = v17;
        v26 = v8;
        if (!v25)
        {
            fish_printf::printf_impl::pad(a4, 48, 0, 0);
            return 6;
        }
        v27 = 9.min(v25);
        v26->field_10 = 0;
        v12 = a0.index(v24, &g_149a2c0);
        v13 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v14 = 0;
        v15 = 9;
        v2 = &g_549050;
        v3 = 1;
        v6 = &g_54b280;
        v7 = 1;
        v4 = &v12;
        v5 = 2;
        if ((char)v26.spec_write_fmt(&v2))
            break;
        v28 = v27.get(v26->field_8, v26->field_10);
        if (!v28)
            core::str::slice_error_fail(v26->field_8, v26->field_10, 0, v27, &g_149a2d8); /* do not return */
        a4.write_str(v28, a2);
        if (v25 < v27)
            core::panicking::panic_const::panic_const_sub_overflow(&g_149a2f0); /* do not return */
        v24 += 1;
        v8 = a5;
        v17 = v25 - v27;
        if (v0 == v24)
        {
            fish_printf::printf_impl::pad(v29, 48, v30, 0);
            return 6;
        }
    }
    return 5;
}
