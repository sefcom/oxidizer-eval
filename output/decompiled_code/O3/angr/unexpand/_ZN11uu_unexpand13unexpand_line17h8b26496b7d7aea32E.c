int uu_unexpand::unexpand_line::h8b26496b7d7aea32()
{
    unsigned long long v0;  // [sp-0xa8]
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
    unsigned int v15;  // ecx
    unsigned int v16;  // edx
    struct_0 *v17;  // rdi
    unsigned long v19;  // rax
    unsigned long v20;  // r8
    unsigned long v21;  // rax
    unsigned long long v22[3];  // rsi
    unsigned long long v23[3];  // rbp
    unsigned long long *v24;  // r9
    unsigned long long v25;  // r15
    unsigned long v26;  // r15
    void* v27;  // r12
    unsigned long long v28;  // r13
    unsigned long long v29[3];  // r13
    unsigned long long v30[3];  // rbx
    unsigned long long v31;  // rdx

    v12 = v14;
    v8 = v15;
    v6 = v16;
    if (!v7)
    {
        v3 = v21 | -0x100 | 1;
        v5 = 0;
        goto LABEL_4b3e10;
    }
    v3 = v19 | -0x100 | 1;
    v5 = 0;
    v7 = v17->field_10;
    v9 = v20 - 1;
    v2 = 3;
    if (v9 >= 0)
    {
        uu_unexpand::next_char_info::h8d6aba0b33a4871e(&v10, -0x100 | (char)v8, v17->field_8, v7, NULL);
        v4 = v11;
        goto *((int *)(4314348 + vvar_269{stack -137} * 4)) + 4314348;
    }
    v23 = v22;
    v1 = 1;
    v0 = (char)v3 & 1;
    uu_unexpand::write_tabs::h3f7a0ea0e99d2d4f(v23, v24, *((long long *)&v13), v5, 0, -0x100 | v2 == 2);
    v25 = v7;
    v26 = v25 - 0;
    if (v25 < 0)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v27 = v17->field_8;
    v28 = v23[2];
    if (v26 < v23[0] - v28)
    {
        memcpy(v23[1] + v28, v27, v26);
        v23[2] = v28 + v26;
        v5 = 0;
        goto LABEL_4b3e10;
    }
    else
    {
        v5 = 0;
        if (std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h9959613e3a6dd2be(v23, v27, v26))
            return;
LABEL_4b3e10:
        v30 = v22;
        v1 = 1;
        v0 = (char)v3 & 1;
        uu_unexpand::write_tabs::h3f7a0ea0e99d2d4f(v30, v24, *((long long *)&v13), v5, 0, 0xffffffffffffff00);
        if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h9f02c9aa39028621(v30, v22, v31))
            alloc::vec::Vec$LT$T$C$A$GT$::truncate::hf438e9ddb056cec0(v29, 0);
    }
}
