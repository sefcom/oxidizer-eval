long long uu_unexpand::unexpand_line::hfe287a3731b6a7af(struct_0 *a0, unsigned long long a1[3], unsigned int a2, unsigned int a3, unsigned long a4, unsigned long long *a5)
{
    unsigned long v0;  // [sp-0xa8]
    unsigned long long v1;  // [sp-0xa0]
    char v2;  // [sp-0x91]
    unsigned int v3;  // [sp-0x90]
    char v4;  // [sp-0x89]
    void* v5;  // [sp-0x88]
    unsigned int v6;  // [sp-0x6c]
    unsigned long long v7;  // [sp-0x60]
    unsigned int v8;  // [sp-0x54]
    unsigned long long v9;  // [sp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long long v12;  // [sp-0x20]
    unsigned int v13;  // [bp+0x8]
    unsigned long v14;  // r13
    unsigned long v16;  // rax
    unsigned long v17;  // rax
    unsigned long long v18[3];  // rbp
    unsigned long long v19;  // r15
    unsigned long v20;  // r15
    void* v21;  // r12
    unsigned long long v22;  // r13
    void* v23;  // rax
    unsigned long long v24[3];  // rbx

    v12 = v14;
    v8 = a3;
    v6 = a2;
    if (!v7)
    {
        v3 = v17 | -0x100 | 1;
        v5 = 0;
    }
    else
    {
        v3 = v16 | -0x100 | 1;
        v5 = 0;
        v7 = a0->field_10;
        v9 = a4 - 1;
        v2 = 3;
        if (v9 >= 0)
        {
            uu_unexpand::next_char_info::hda448420cf4eb947(&v10, -0x100 | (char)v8, a0->field_8, v7, NULL);
            v4 = v11;
            goto *((int *)(4313588 + vvar_275{stack -137} * 4)) + 4313588;
        }
        else
        {
            v18 = a1;
            v1 = 1;
            v0 = (char)v3 & 1;
            uu_unexpand::write_tabs::h8e9e933eb88f89cf(v18, a5, *((long long *)&v13), v5, 0, -0x100 | v2 == 2);
            v19 = v7;
            v20 = v19 - 0;
            if (v19 < 0)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(0, v7, &g_51d1b8); /* do not return */
            v21 = a0->field_8;
            v22 = v18[2];
            if (v20 < v18[0] - v22)
            {
                memcpy(v18[1] + v22, v21, v20);
                v18[2] = v22 + v20;
                v5 = 0;
            }
            else
            {
                v23 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37baa5ae29b8f289(v18, v21, v20);
                v5 = 0;
                if (v23)
                    return v23;
            }
        }
    }
    v24 = a1;
    v1 = 1;
    v0 = (char)v3 & 1;
    uu_unexpand::write_tabs::h8e9e933eb88f89cf(v24, a5, *((long long *)&v13), v5, 0, 0xffffffffffffff00);
    v23 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h0afaa565343b58bd(v24);
    if (!v23)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::h60643c48044eaa26(a0, 0);
        return 0;
    }
    return v23;
}
