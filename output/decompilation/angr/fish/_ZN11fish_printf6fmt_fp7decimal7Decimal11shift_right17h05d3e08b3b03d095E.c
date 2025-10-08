void fish_printf::fmt_fp::decimal::Decimal::shift_right(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // r15
    unsigned long long v7;  // cc_ndep
    unsigned long long v8;  // r15
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r8
    unsigned long v11;  // r9
    char v12;  // cl
    unsigned long long v13;  // r10
    unsigned int v14;  // eax
    unsigned long v15;  // rdx
    unsigned long v16;  // rax
    char v17;  // cl
    unsigned long long v18;  // rdi
    unsigned int v19;  // eax
    unsigned long v20;  // rdx
    unsigned long v21;  // rax
    unsigned int v22;  // r13d
    unsigned long long v23;  // r15
    void* v24;  // 4096
    unsigned long v25;  // r13
    unsigned int v26;  // cc_dep1
    unsigned int v27;  // cc_dep2
    unsigned int v28;  // edi
    unsigned long v29;  // rax
    void* v30;  // rax
    void* v31;  // r13

    v0 = a2;
    v6 = a1;
    while (true)
    {
        v8 = v6;
        v9 = v8.min(9);
        v1.slice_ranges(a0->field_0, a0->field_10, a0->field_18);
        v10 = *((long long *)&v4);
        v11 = a0->field_8;
        v22 = 0;
        if (v1 != v2)
        {
            v12 = v9;
            if (v9 > 31)
                core::panicking::panic_const::panic_const_shl_overflow(&g_1517f50); /* do not return */
            v13 = v1 * 4;
            v22 = 0;
            do
            {
                v14 = *((int *)(v11 + v13)) >> ((char)v9 & 31);
                if ((char)__CFADD__(v14, v22))
                    core::panicking::panic_const::panic_const_add_overflow(&g_1517f68); /* do not return */
                v15 = *((int *)(v11 + v13)) & ~(4294967295 << (v12 & 31));
                *((unsigned int *)(v11 + v13)) = v14 + v22;
                v16 = 0x3b9aca00 >> (v12 & 31);
                if ((char)_ccall(0, 47, v16 & 4294967295, v15 & 4294967295, v7))
                    core::panicking::panic_const::panic_const_mul_overflow(&g_1517f80); /* do not return */
                v22 = (unsigned int)v16 * (unsigned int)v15;
                v13 += 4;
            } while (v2 * 4 != v13);
        }
        if (v3 != v10)
        {
            v17 = v9;
            if (v9 > 31)
                core::panicking::panic_const::panic_const_shl_overflow(&g_1517f08); /* do not return */
            v18 = v3 * 4;
            do
            {
                v19 = *((int *)(v11 + v18)) >> ((char)v9 & 31);
                if ((char)__CFADD__(v19, v22))
                    core::panicking::panic_const::panic_const_add_overflow(&g_1517f20); /* do not return */
                v20 = *((int *)(v11 + v18)) & ~(4294967295 << (v17 & 31));
                *((unsigned int *)(v11 + v18)) = v19 + v22;
                v21 = 0x3b9aca00 >> (v17 & 31);
                if ((char)_ccall(0, 47, v21 & 4294967295, v20 & 4294967295, v7))
                    core::panicking::panic_const::panic_const_mul_overflow(&g_1517f38); /* do not return */
                v22 = (unsigned int)v21 * (unsigned int)v20;
                v18 += 4;
            } while (v10 * 4 != v18);
        }
        a0.trim_leading_zeros();
        if (v22)
            a0.push_back(v22);
        v23 = v8 - v9;
        if (v8 < v9)
            core::panicking::panic_const::panic_const_sub_overflow(&g_1517ec0); /* do not return */
        v24 = a3;
        if (((char)v0 & 1))
        {
            v25 = a0->field_18;
            v26 = v25;
            v27 = a0->field_20;
            v28 = v26 - v27;
            if (((v26 ^ v27) & (v26 ^ v26 - v27)) < 0)
                core::panicking::panic_const::panic_const_sub_overflow(&g_1517ed8); /* do not return */
            v7 = v26 < v27;
            if ((char)_ccall(0, 27, (unsigned long long)(v28 - 1), 0, (unsigned long long)(char)(v26 < v27)))
                core::panicking::panic_const::panic_const_sub_overflow(&g_1517ef0); /* do not return */
            v29 = (unsigned int)v28 - 1.max();
            v30 = v29 - a3;
            if (v29 < a3)
                v30 = 0;
            v31 = v25 - v30;
            if (v25 < v30)
                v31 = 0;
            v24 = v31;
        }
        a0.truncate(v24);
        v6 = v23;
        if (!v6)
            return;
    }
}
