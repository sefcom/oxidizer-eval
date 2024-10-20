long long uu_wc::print_stats::h01fed84815f1decc(char a0[29], unsigned long long a1[5], unsigned long a2, unsigned long a3, unsigned long a4)
{
    struct_0 *v0;  // [sp-0x180]
    unsigned long long v1;  // [sp-0x178]
    void* v2;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x148]
    unsigned long long v6;  // [sp-0x140]
    unsigned long long v7;  // [sp-0x138]
    unsigned long long v8;  // [sp-0x130]
    void* v9;  // [sp-0x128]
    unsigned long v10;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x118]
    unsigned long long v12;  // [sp-0x110]
    int v13;  // [sp-0x108], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x100]
    unsigned long long v15;  // [sp-0xf8]
    char v16;  // [sp-0xf0]
    unsigned long long v17;  // [sp-0xe8]
    unsigned long long v18;  // [sp-0xd8]
    unsigned long long v19;  // [sp-0xd0]
    unsigned long long v20;  // [sp-0xc8]
    unsigned long long v21;  // [sp-0xc0]
    char v22;  // [sp-0xb8]
    unsigned long v23;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xa8]
    unsigned long long v25;  // [sp-0xa0]
    unsigned long long v26;  // [sp-0x98]
    unsigned long long v27;  // [sp-0x90]
    unsigned long long v28;  // [sp-0x88]
    char v29;  // [sp-0x80]
    unsigned long v30;  // [sp-0x78], Other Possible Types: unsigned long long
    char v31;  // [sp-0x70]
    unsigned long long v32;  // [sp-0x68]
    char v33;  // [sp-0x60]
    unsigned long long v34;  // [sp-0x58]
    char v35;  // [sp-0x50]
    unsigned long long v36;  // [sp-0x48]
    char v37;  // [sp-0x40]
    unsigned long long v38;  // [sp-0x38]
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdx
    void* v42;  // r14
    unsigned long long v43;  // rax
    struct_0 *v44;  // rdi

    v10 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v10, v40, v41);
    v29 = a0[26];
    v30 = a1[2];
    v31 = a0[27];
    v32 = a1[3];
    v33 = a0[25];
    v34 = a1[1];
    v35 = a0[24];
    v36 = a1[0];
    v37 = a0[28];
    v38 = a1[4];
    v1 = 1;
    v2 = 0;
    v42 = 0;
    while (true)
    {
        while (!*((char *)(&v29 + v42)))
        {
            v42 += 16;
            if (v42 == 80)
                goto LABEL_48b92d;
        }
        v3 = &v30 + v42;
        v4 = &v1;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd79818c3b7a55764;
        v6 = &v3;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h44c6f29317e3e449;
        v8 = a4;
        v9 = 0;
        v10 = 2;
        v12 = 2;
        v14 = 0;
        v15 = 32;
        v16 = 3;
        v17 = 2;
        v18 = 1;
        v19 = 2;
        v20 = 1;
        v21 = 32;
        v22 = 3;
        v23 = &g_4154a8;
        v24 = 2;
        v27 = &v10;
        v28 = 2;
        v25 = &v4;
        v26 = 3;
        v43 = std::io::Write::write_fmt::hbf0d1c4e886cc920(&v0, &v23);
        if (v43)
            break;
        v1 = " FilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxextra operand ''\nfile operands cannot be combined with --files0-from";
        v2 = 1;
        v42 += 16;
        if (v42 == 80)
            goto LABEL_48b92d;
    }
LABEL_48b92d:
    if (!v23)
    {
        v10 = &g_4f33b8;
        v11 = 1;
        v12 = 8;
        *((int128_t *)&v13) = 0;
        v43 = std::io::Write::write_fmt::hbf0d1c4e886cc920(&v0, &v10);
    }
    else
    {
        v23 = a2;
        v24 = a3;
        v4 = &v1;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd79818c3b7a55764;
        v6 = &v23;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd79818c3b7a55764;
        v10 = &g_4f3388;
        v11 = 3;
        v14 = 0;
        v12 = &v4;
        v13 = 2;
        v43 = std::io::Write::write_fmt::hbf0d1c4e886cc920(&v0, &v10);
    }
    v44 = v0;
    v44->field_c = v44->field_c - 1;
    if (vvar_323 != 1)
        return v43;
    v44->field_0 = 0;
    v44->field_8 = 0;
    if (CasCmpNE(v44->field_8, v44->field_8))
        goto LABEL_0x48ba0b;
    if (v44->field_8 == 2)
        goto LABEL_0x48ba25;
    goto LABEL_0x48ba13;
}
