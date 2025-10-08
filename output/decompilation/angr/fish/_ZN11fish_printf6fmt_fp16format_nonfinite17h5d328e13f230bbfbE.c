long long fish_printf::fmt_fp::format_nonfinite(struct_1 *a0, struct_0 *a1)
{
    struct_1 *v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rcx
    unsigned long long v5;  // cc_ndep
    unsigned long long v6;  // r12
    unsigned long v7;  // xmm0lq
    unsigned long long v8;  // rcx
    unsigned long long v9;  // r14
    unsigned long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax

    v0 = v2;
    v3 = a1->field_8;
    if (a1->field_3f)
        v4 = "infNANnan";
    else
        v4 = "INFinfNANnan";
    v6 = (a1->field_3f ? "nan" : "NANnan");
    if ((char)_ccall(11, 0, (unsigned long long)(CmpF(v7, v7) & 69), 0, v5))
        v8 = v4;
    else
        v8 = v6;
    v9 = v3;
    v10 = v9 + 3;
    if ((char)__CFADD__(v9, 3))
        core::panicking::panic_const::panic_const_add_overflow(&g_149a218); /* do not return */
    v0 = a0;
    v11 = a1->field_20;
    v12 = a1->field_10;
    if (a1->field_3a)
    {
        v11.write_str(a1->field_0, v3);
        v11.write_str(v8, 3);
        fish_printf::printf_impl::pad(v11, 32, v12, v10);
    }
    else
    {
        fish_printf::printf_impl::pad(v11, 32, v12, v10);
        v11.write_str(a1->field_0, v3);
        v11.write_str(v8, 3);
    }
    v13 = v12.max(v10);
    v0->field_8 = v13;
    v0->field_0 = 0;
    return v13;
}
