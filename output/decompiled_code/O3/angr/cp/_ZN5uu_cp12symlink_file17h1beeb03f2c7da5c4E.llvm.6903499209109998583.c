long long _ZN5uu_cp12symlink_file17h1beeb03f2c7da5c4E.llvm.6903499209109998583(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x250]
    char v1;  // [bp-0x248]
    char v2;  // [bp-0x240]
    char v3;  // [bp-0x238]
    unsigned long v4;  // [sp-0x230], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x228]
    unsigned long long v6;  // [sp-0x220]
    unsigned long long v7;  // [sp-0x218]
    void* v8;  // [sp-0x210]
    unsigned long long v9;  // [sp-0x208]
    unsigned long long v10;  // [sp-0x200]
    char v11;  // [sp-0x1f8]
    char v12;  // [bp-0x1f0], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v13;  // [sp-0x1e8]
    unsigned long long v14;  // [sp-0x1e0]
    unsigned long long v15;  // [sp-0x1d8]
    void* v16;  // [sp-0x1d0]
    void* v17;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x148]
    char v20;  // [sp-0x140]
    char v21;  // [bp-0xc0]
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rax
    void* v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    void* v31;  // rax
    struct_0 *v32;  // rax
    struct_0 *v33;  // rcx

    v0 = std::sys::pal::unix::fs::symlink::h11d0a05d1a49fd8c(a1, a2, a3, a4);
    v25 = std::path::Path::file_name::h79ecbb7850a9c7f3(a3, a4, v23, v24);
    if (!v25)
    {
        v26 = 0;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v12, v25, v23);
        if (v12)
            v26 = 0;
    }
    v29 = v27;
    if (!v26)
        v26 = "invalid file namecannot create symlink backing up  might destroy source;   not copied and  are the same filecannot stat cannot create hard link not replacing 'will not copy '";
    v8 = 0;
    v9 = v26;
    v10 = v29;
    v11 = 1;
    v30 = std::path::Path::file_name::h79ecbb7850a9c7f3(a1, a2, v29, v14);
    if (!v30)
    {
        v31 = 0;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v12, v30, v23);
        if (v12)
            v31 = 0;
    }
    if (!v31)
        v14 = 17;
    if (!v31)
        v31 = "invalid file namecannot create symlink backing up  might destroy source;   not copied and  are the same filecannot stat cannot create hard link not replacing 'will not copy '";
    v17 = 0;
    v18 = v31;
    v19 = v14;
    v20 = 1;
    v4 = &v8;
    v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v6 = &v17;
    v7 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v12 = &g_5554b0;
    v13 = 2;
    v16 = 0;
    v14 = &v4;
    v15 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v12);
    if (v0)
    {
        v32 = *((long long *)&v3);
        v33 = a0;
        *((struct_0 **)((char *)&v33->field_8 + 8)) = v32;
        *((int128_t *)&(&v33->field_0)[1]) = *((int128_t *)&v1);
        v33->field_0 = 3;
        v33->field_18 = v0;
        return v32;
    }
    if (*((long long *)&v1))
        __rust_dealloc(*((long long *)&v2));
    nix::sys::stat::lstat::hd466a302c8631697(&v12, a3, a4);
    if ((int)v12)
    {
        v18 = *((int *)((char *)&v12 + 4)) * 0x100000000 | 2;
        v17 = 1;
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v18);
    }
    else
    {
        memcpy(&v18, &v13, 144);
        memcpy(&v21, &v18, 144);
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h3be67bc00dd01844(a5, &v21);
    }
    v32 = a0;
    v32->field_0 = 13;
    return v32;
}
