long long _ZN5uu_ls6colors12StyleManager14get_style_code17h2c1541457e7d94a4E.llvm.15944453427201852302(unsigned long long a0[3], struct_0 *a1, uint128_t *a2)
{
    char v0;  // [bp-0xc9]
    char v1;  // [sp-0xc1]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xbc]
    char v4;  // [bp-0xba]
    char v5;  // [bp-0xb9]
    void* v6;  // [sp-0xb8]
    struct_1 *v7;  // [sp-0xb0]
    void* v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0xa0]
    unsigned long long v10;  // [sp-0x98]
    void* v11;  // [sp-0x90]
    unsigned long long v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x70]
    char v14;  // [sp-0x68]
    unsigned int v15;  // [sp-0x67]
    unsigned short v16;  // [sp-0x63]
    char v17;  // [sp-0x61]
    char v18;  // [sp-0x60]
    void* v19;  // [sp-0x58]
    void* v20;  // [sp-0x48]
    unsigned long long v21;  // [sp-0x38]
    unsigned long long v22;  // [sp-0x30]
    unsigned long long v23;  // [sp-0x28]
    char v24;  // [sp-0x20]
    struct_1 *v26;  // r15
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx

    *((long long *)((char *)&a1->field_8 + 5)) = *((long long *)((char *)a2 + 13));
    *((uint128_t *)&(&a1->padding_0)[1]) = *(a2);
    lscolors::style::Style::to_nu_ansi_term_style::h70c0f17ea3432aec(&v0, a2);
    v1 = 0;
    v18 = v5;
    v13 = *((long long *)&v0);
    v14 = v1;
    v15 = *((int *)&v2);
    v16 = *((short *)&v3);
    v17 = v4;
    v9 = 0x8000000000000000;
    v10 = 1;
    v11 = 0;
    v12 = 9223372036854775810;
    v6 = 0;
    v7 = 1;
    v8 = 0;
    v23 = 32;
    v24 = 3;
    v19 = 0;
    v20 = 0;
    v21 = &v6;
    v22 = &g_5ad0c0;
    if ((char)_$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h61570ad5cd15735d(&v9, &v19))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v26 = v7;
    v27 = v8;
    v28 = v27 - 4;
    if (!(v27 >= 4 && v27 != 4 && v26->padding_0[v28] <= 191))
    {
        a0[0] = v6;
        a0[1] = v26;
        a0[2] = v29;
        return v29;
    }
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
