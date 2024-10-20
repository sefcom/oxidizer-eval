long long uu_env::print_env::h6c9d86176dbb52b2(char a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [sp-0x151]
    struct_0 *v1;  // [sp-0x150]
    int v2;  // [sp-0x148]
    unsigned long long v3;  // [sp-0x138]
    int v4;  // [sp-0x128]
    unsigned long long v5;  // [sp-0x118]
    int v6;  // [sp-0x108]
    int v7;  // [sp-0xf8]
    unsigned long v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xd0]
    unsigned long long v12;  // [sp-0xc8]
    void* v13;  // [sp-0xc0]
    unsigned long v14;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xa8]
    unsigned long long v16;  // [sp-0xa0]
    unsigned long long v17;  // [sp-0x98]
    unsigned long long v18;  // [sp-0x90]
    unsigned long long v19;  // [sp-0x88]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    char v24;  // [bp-0x50]
    char v25;  // [bp-0x40]
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    int v29;  // xmm0
    int v30;  // ymm0
    int v31;  // ymm0
    int v32;  // xmm0
    int v33;  // xmm0
    unsigned long long v34;  // rax
    unsigned long long v35;  // r14
    unsigned long long v36;  // rcx
    struct_1 *v38;  // r14
    unsigned long long v39;  // rbx
    unsigned long long v41;  // rax
    struct_0 *v42;  // rdi

    v0 = a0;
    v8 = std::io::stdio::stdout::h077da66234850927();
    v1 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v8, v27, v28);
    std::env::vars::h104f59bf3851ffdb(&v24);
    v29 = *((int128_t *)&v24);
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
    *((int128_t *)&v7) = *((int128_t *)&v25);
    v6 = v29;
    while (true)
    {
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&v20, &v6);
        if (*((long long *)&v20) == 0x8000000000000000)
            break;
        v3 = *((long long *)&v21);
        v32 = *((int128_t *)&v20);
        v2 = v32;
        v5 = *((long long *)&v23);
        v33 = *((int128_t *)&v22);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
        v4 = v33;
        v14 = &v2;
        v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v16 = &v4;
        v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v18 = &v0;
        v19 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hfc6ce48d626fd89a;
        v9 = &g_50c478;
        v10 = 3;
        v13 = 0;
        v11 = &v14;
        v12 = 3;
        v34 = std::io::Write::write_fmt::h8a8b7244da5961de(&v1, &v9);
        if (v34)
        {
            v9 = v34;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        if ((long long)v4)
            __rust_dealloc((long long)(&v4)[8]);
        if ((long long)v2)
            __rust_dealloc((long long)(&v2)[8]);
    }
    v35 = (long long)(&v6)[8];
    v36 = (long long)(&v7)[8];
    if (v36 != v35)
    {
        v38 = v35 + 32;
        do
        {
            v39 = (v36 - v35) / 48;
            if (v38->field_0)
                __rust_dealloc(v38->field_-8);
            if (v38->field_-18)
                __rust_dealloc(v38->field_-20);
            v38 = &v38[1].field_-18;
        } while (v39 != 1);
    }
    v41 = (long long)v7;
    if (v41)
        v41 = __rust_dealloc((long long)v6);
    v42 = v1;
    v42->field_c = v42->field_c - 1;
    if (vvar_294 != 1)
        return v41;
    v42->field_0 = 0;
    v42->field_8 = 0;
    if (CasCmpNE(v42->field_8, v42->field_8))
        goto LABEL_0x497459;
    v41 = v42->field_8;
    if ((unsigned int)v41 == 2)
        goto LABEL_0x497473;
    goto LABEL_0x497461;
}
