long long uu_wc::print_stats::hd63ccbcd2e38aece(char a0[29], unsigned long long a1[5], unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x180], Other Possible Types: unsigned long long
    char *v3;  // [sp-0x168]
    unsigned long long v4;  // [sp-0x160]
    unsigned long v5;  // [sp-0x158], Other Possible Types: unsigned long long
    char *v6;  // [sp-0x150]
    unsigned long long v7;  // [sp-0x148]
    char *v8;  // [sp-0x140]
    unsigned long long v9;  // [sp-0x138]
    unsigned long long v10;  // [sp-0x130]
    void* v11;  // [sp-0x128]
    unsigned long v12;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x118]
    struct struct_0 **v14;  // [sp-0x110], Other Possible Types: unsigned long long
    int v15;  // [sp-0x108], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x100]
    unsigned long long v17;  // [sp-0xf8]
    char v18;  // [sp-0xf0]
    unsigned long long v19;  // [sp-0xe8]
    unsigned long long v20;  // [sp-0xd8]
    unsigned long long v21;  // [sp-0xd0]
    unsigned long long v22;  // [sp-0xc8]
    unsigned long long v23;  // [sp-0xc0]
    char v24;  // [sp-0xb8]
    unsigned long v25;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0xa8]
    struct struct_0 **v27;  // [sp-0xa0]
    unsigned long long v28;  // [sp-0x98]
    char *v29;  // [sp-0x90]
    unsigned long long v30;  // [sp-0x88]
    char v31;  // [sp-0x80]
    unsigned long long v32;  // [sp-0x78]
    char v33;  // [sp-0x70]
    unsigned long long v34;  // [sp-0x68]
    char v35;  // [sp-0x60]
    unsigned long long v36;  // [sp-0x58]
    char v37;  // [sp-0x50]
    unsigned long long v38;  // [sp-0x48]
    char v39;  // [sp-0x40]
    unsigned long long v40;  // [sp-0x38]
    char v41;  // [bp-0x30]
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax

    v12 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v12, v43, v44);
    v31 = a0[26];
    v32 = a1[2];
    v33 = a0[27];
    v34 = a1[3];
    v35 = a0[25];
    v36 = a1[1];
    v37 = a0[24];
    v38 = a1[0];
    v39 = a0[28];
    v40 = a1[4];
    v1 = 1;
    v2 = 0;
    v3 = &v31;
    v4 = &v41;
    v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&v3);
    if (!v45)
    {
LABEL_4bdf0f:
        if (!v25)
        {
            v12 = &g_5311f8;
            v13 = 1;
            v14 = 8;
            *((int128_t *)&v15) = 0;
            v46 = std::io::Write::write_fmt::h12d662560afab62b(&v0, &v12);
        }
        else
        {
            v25 = a2;
            v26 = a3;
            v6 = &v1;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
            v8 = &v25;
            v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
            v12 = &g_531208;
            v13 = 3;
            v16 = 0;
            v14 = &v6;
            v15 = 2;
            v46 = std::io::Write::write_fmt::h12d662560afab62b(&v0, &v12);
        }
    }
    else
    {
        while (true)
        {
            v5 = v45 + 8;
            v6 = &v1;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
            v8 = &v5;
            v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h401438c70327895c;
            v10 = a4;
            v11 = 0;
            v12 = 2;
            v14 = 2;
            v16 = 0;
            v17 = 32;
            v18 = 3;
            v19 = 2;
            v20 = 1;
            v21 = 2;
            v22 = 1;
            v23 = 32;
            v24 = 3;
            v25 = &g_419ac8;
            v26 = 2;
            v29 = &v12;
            v30 = 2;
            v27 = &v6;
            v28 = 3;
            v46 = std::io::Write::write_fmt::h12d662560afab62b(&v0, &v25);
            if (v46)
                break;
            v1 = " ";
            v2 = 1;
            v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::ha2c1cf205952523e(&v3);
            if (!v45)
                goto LABEL_4bdf0f;
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hf5250da0ddf6b680(v0);
    return v46;
}
