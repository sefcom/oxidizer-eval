long long uu_unexpand::unexpand_line::hfe287a3731b6a7af(struct_0 *a0, unsigned long long a1[3], unsigned int a2, unsigned int a3, unsigned long a4, unsigned long long *a5, unsigned int a6)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa0]
    char v2;  // [sp-0x91]
    unsigned int v3;  // [sp-0x90]
    char v4;  // [sp-0x89]
    void* v5;  // [sp-0x88]
    unsigned long long v6[3];  // [sp-0x80]
    unsigned int v7;  // [sp-0x6c]
    unsigned long long v8;  // [sp-0x60]
    unsigned int v9;  // [sp-0x54]
    unsigned long long v10;  // [sp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    unsigned long long v13;  // [sp-0x20]
    unsigned long v14;  // r13
    unsigned long long v15[3];  // r13
    unsigned long v17;  // rax
    unsigned long v18;  // rax
    unsigned long long v19[3];  // rbp
    unsigned long long v20;  // r15
    unsigned long v21;  // r15
    void* v22;  // r12
    unsigned long long v23;  // r13
    void* v24;  // rax
    unsigned long long v25[3];  // rbx

    v13 = v14;
    v9 = a3;
    v7 = a2;
    v15 = a0;
    if (!v8)
    {
        v3 = v18 & 0xffffffffffffff00 | 1;
        v5 = 0;
    }
    else
    {
        v3 = v17 & 0xffffffffffffff00 | 1;
        v5 = 0;
        v6[0] = a0;
        v8 = a0->field_10;
        v10 = a4 - 1;
        v2 = 3;
        if (v10 >= 0)
        {
            uu_unexpand::next_char_info::hda448420cf4eb947(&v11, (char)v9, a0->field_8, v8, NULL);
            v4 = v12;
            goto *((int *)(4313588 + vvar_270{stack -137} * 4)) + 4313588;
        }
        else
        {
            v19 = a1;
            uu_unexpand::write_tabs::h8e9e933eb88f89cf(v19, a5, a6, v5, 0, v2 == 2, v0, v1);
            v20 = v8;
            v21 = v20 - 0;
            if (v20 < 0)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(0, v8, &g_51d1b8); /* do not return */
            v22 = a0->field_8;
            v23 = v19[2];
            if (v21 < v19[0] - v23)
            {
                memcpy(v19[1] + v23, v22, v21);
                v19[2] = v23 + v21;
                v5 = 0;
                v15 = v6;
            }
            else
            {
                v24 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(v19, v22, v21);
                v5 = 0;
                v15 = v6;
                if (v24)
                    return v24;
            }
        }
    }
    v25 = a1;
    uu_unexpand::write_tabs::h8e9e933eb88f89cf(v25, a5, a6, v5, 0, 0, v0, v1);
    v24 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h0afaa565343b58bd(v25);
    if (!v24)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::h60643c48044eaa26(v15, 0);
        return 0;
    }
    return v24;
}
