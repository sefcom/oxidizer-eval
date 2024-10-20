long long uu_env::apply_unset_env_vars::ha506e2177f4f4ef5(struct_3 *a0)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    unsigned long long v5;  // [sp-0x80]
    char *v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    char v8;  // [sp-0x68]
    unsigned long v9;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    void* v13;  // [sp-0x40]
    unsigned long long v15;  // r13
    struct_0 *v16;  // r14
    struct_2 *v17;  // rbx
    struct_0 *v18;  // r14
    struct_0 *v19;  // r14
    char *v22;  // rax
    char *v23;  // rax
    struct_0 *v24;  // r15
    unsigned long long v26;  // r15
    unsigned long long v27;  // r12

    v15 = a0->field_28;
    if (!v15)
        return 0;
    v16 = a0->field_20;
    while (true)
    {
        v19 = v18;
        if (!v7)
            break;
        if (v7 <= 15)
        {
            v22 = 0;
            if (!*((char *)(v6 + v22)))
                break;
            v22 += 1;
            if (!(v7 == v22))
                continue;
            v23 = 0;
            while (*((char *)(v6 + v23)) != 61)
            {
                v23 += 1;
                if (v7 == v23)
                    goto LABEL_49da03;
            }
        }
        else if (!(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(0, v6) != 1) || !(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(61, v6) != 1))
        {
            break;
        }
LABEL_49da03:
        v24 = v19 + 1;
        std::env::remove_var::h1568074ceeed6f27(v19);
        if (v24 == &v16[v15])
            return 0;
    }
    v5 = 1;
    v6 = &v19->field_0->field_0;
    v7 = v19->field_8;
    v8 = 1;
    v0 = &v5;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v9 = &g_50c860;
    v10 = 2;
    v13 = 0;
    v11 = &v0;
    v12 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v2, &v9);
    v26 = *((long long *)&v3);
    v27 = *((long long *)&v4);
    v17 = __rust_alloc(32, 8);
    if (v17)
    {
        v17->field_0 = *((long long *)&v2);
        v17->field_8 = v26;
        v17->field_10 = v27;
        v17->field_18 = 125;
        return v17;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
