long long uu_csplit::uumain::hd39412207ad2734e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long long v4;  // [sp-0x80]
    void* v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x68], Other Possible Types: unsigned long long
    struct_1 *v7;  // [sp-0x60], Other Possible Types: unsigned long long
    int v8;  // [sp-0x58], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    unsigned long v11;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x38]
    char v13;  // [bp-0x30]
    char v14;  // [bp-0x20]
    unsigned long long v16;  // rax
    struct_1 *v17;  // rdx
    unsigned long long v18;  // rsi
    unsigned long long v20;  // r14
    struct struct_0 **v21;  // rax

    v16 = uu_csplit::uumain::uumain::hcdcd4ef6381c87c0(a0, a1, a2, a3, a4, a5);
    if (!v16)
        return uucore::mods::error::get_exit_code::hf050de69600a682c();
    v0 = v16;
    v8 = &v0;
    v9 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc987da229422273c;
    v1 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v2 = 1;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v1);
    *((int128_t *)&v8) = *((int128_t *)&v13);
    v10 = *((long long *)&v14);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3dd4c4354fb77222(v9, *((long long *)&v14), 1, 0))
    {
        v6 = uucore::util_name::h359eff083fe53467();
        v7 = v17;
        v11 = &v6;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7df0ec47955cb4a6;
        v1 = &g_672a18;
        v2 = 2;
        v5 = 0;
        v3 = &v11;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
        v6 = &v8;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_672a38;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
    }
    if ((char)v17->field_68(v0))
    {
        v6 = uucore::execution_phrase::hded5ccd87df1fcab();
        v7 = v17;
        v11 = &v6;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7df0ec47955cb4a6;
        v1 = &g_672a58;
        v2 = 2;
        v5 = 0;
        v3 = &v11;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v18, v17);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb096fdcf880d8ab9();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h538d3703c8dfa87d(&v8);
    v20 = v0;
    if (v17->field_0)
        v21(v20);
    if (!v17->field_8)
        return v17->field_60(v0);
    __rust_dealloc(v20);
}
