long long uu_cp::symlink_file::h73880cbbf32f0256(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x1d8]
    char *v1;  // [sp-0x1d0]
    unsigned long long v2;  // [sp-0x1c8]
    char *v3;  // [sp-0x1c0]
    unsigned long long v4;  // [sp-0x1b8]
    void* v5;  // [sp-0x1b0]
    unsigned long long v6;  // [sp-0x1a8]
    unsigned long long v7;  // [sp-0x1a0]
    char v8;  // [sp-0x198]
    void* v9;  // [sp-0x190]
    unsigned long long v10;  // [sp-0x188]
    unsigned long long v11;  // [sp-0x180]
    char v12;  // [sp-0x178]
    char v13;  // [bp-0x170]
    char v14;  // [bp-0x160]
    int v15;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x150]
    struct struct_0 **v17;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x140]
    void* v19;  // [sp-0x138]
    char v20;  // [bp-0xc0]
    unsigned long long v22;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v29;  // rax

    v0 = std::os::unix::fs::symlink::h7d55b4689024f9f4(a1, a2, a3, a4);
    v22 = uucore::features::fs::get_filename::h4988c52a18f1d407(a3, a4);
    if (!v22)
        v22 = "invalid file namecannot create symlink  and  are the same filebacking up  might destroy source;   not copiedcannot stat cannot create hard link not replacing 'will not copy 'not writing through dangling symlink 'cannot change attribute : Source file is a non regular file";
    v5 = 0;
    v6 = v22;
    v7 = 17;
    v8 = 1;
    v24 = uucore::features::fs::get_filename::h4988c52a18f1d407(a1, a2);
    if (v24)
        v25 = v24;
    else
        v25 = "invalid file namecannot create symlink  and  are the same filebacking up  might destroy source;   not copiedcannot stat cannot create hard link not replacing 'will not copy 'not writing through dangling symlink 'cannot change attribute : Source file is a non regular file";
    v9 = 0;
    v10 = v25;
    v11 = 17;
    v12 = 1;
    v1 = &v5;
    v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v3 = &v9;
    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v15 = &g_5b5e88;
    v16 = 2;
    v19 = 0;
    v17 = &v1;
    v18 = 2;
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
    v17 = *((long long *)&v14);
    *((int128_t *)&v15) = *((int128_t *)&v13);
    if (v0)
    {
        v29 = v15;
        a0[2] = v16;
        a0[3] = v17;
        a0[0] = 3;
        a0[1] = v29;
        a0[4] = v0;
        return v29;
    }
    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c139c7d53bd4e4a();
    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a3, a4, 0);
    if (!v15)
    {
        memcpy(&v20, &v15, 144);
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h531130355967ce20(a5, &v20);
    }
    v29 = ::0x4fc070::core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hf438bf76be742e1b(&v15);
    a0[0] = 13;
    return v29;
}
