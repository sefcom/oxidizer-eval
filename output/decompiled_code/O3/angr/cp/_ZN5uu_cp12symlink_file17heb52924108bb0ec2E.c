long long uu_cp::symlink_file::heb52924108bb0ec2(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x1d8]
    char v1;  // [bp-0x1d0]
    char v2;  // [bp-0x1c0]
    unsigned long v3;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x1b0]
    unsigned long long v5;  // [sp-0x1a8]
    unsigned long long v6;  // [sp-0x1a0]
    void* v7;  // [sp-0x198]
    unsigned long long v8;  // [sp-0x190]
    unsigned long long v9;  // [sp-0x188]
    char v10;  // [sp-0x180]
    void* v11;  // [sp-0x178]
    unsigned long long v12;  // [sp-0x170]
    unsigned long long v13;  // [sp-0x168]
    char v14;  // [sp-0x160]
    int v15;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [sp-0x150]
    unsigned long long v17;  // [sp-0x148]
    unsigned long long v18;  // [sp-0x140]
    void* v19;  // [sp-0x138]
    char v20;  // [bp-0xc0]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    struct_0 *v28;  // rax
    struct_0 *v29;  // rcx

    v0 = std::os::unix::fs::symlink::h02d31ac6dfefc5e3(a1, a2, a3, a4);
    v24 = uucore::features::fs::get_filename::hfa4e47d5372f4611(a3, a4, v22, v23);
    if (!v24)
        v25 = 17;
    if (!v24)
        v24 = "invalid file namecannot create symlink backing up  might destroy source;   not copied and  are the same filecannot stat cannot create hard link not replacing 'will not copy '";
    v7 = 0;
    v8 = v24;
    v9 = v25;
    v10 = 1;
    v26 = uucore::features::fs::get_filename::hfa4e47d5372f4611(a1, a2, v25, v23);
    if (!v26)
        v26 = "invalid file namecannot create symlink backing up  might destroy source;   not copied and  are the same filecannot stat cannot create hard link not replacing 'will not copy '";
    v11 = 0;
    v12 = v26;
    v13 = 17;
    v14 = 1;
    v3 = &v7;
    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v5 = &v11;
    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v15 = &g_5b57b8;
    v16 = 2;
    v19 = 0;
    v17 = &v3;
    v18 = 2;
    ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v1, &v15);
    v17 = *((long long *)&v2);
    *((int128_t *)&v15) = *((int128_t *)&v1);
    if (v0)
    {
        v28 = *((long long *)&v2);
        v29 = a0;
        *((struct_0 **)((char *)&v29->field_8 + 8)) = v28;
        *((int128_t *)&(&v29->field_0)[1]) = *((int128_t *)&v1);
        v29->field_0 = 3;
        v29->field_18 = v0;
        return v28;
    }
    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::he8590b5e59583897(&v15);
    uucore::features::fs::FileInformation::from_path::hc095ee89fe83797a(&v15, a3, a4, 0);
    if (!v15)
    {
        memcpy(&v20, &v15, 144);
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hda1be8d571203446(a5, &v20);
    }
    ::0x4fb740::core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h422631d142425792(&v15);
    v28 = a0;
    v28->field_0 = 13;
    return v28;
}
