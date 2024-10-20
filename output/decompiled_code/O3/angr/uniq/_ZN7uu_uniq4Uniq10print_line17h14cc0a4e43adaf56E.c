long long uu_uniq::Uniq::print_line::h14cc0a4e43adaf56(char a0[55], unsigned long long a1, struct_1 *a2, unsigned long a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0xe8], Other Possible Types: char
    char v1;  // [bp-0xe0]
    void* v2;  // [sp-0xd8]
    unsigned long long v3;  // [sp-0xd0]
    void* v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xc0]
    char v6;  // [sp-0xb8]
    char v7;  // [bp-0xb0]
    char v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0]
    unsigned long v10;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    unsigned long long v14;  // [sp-0x78]
    unsigned long long v15;  // [sp-0x70]
    unsigned long long v16;  // [sp-0x68]
    unsigned long v17;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x58]
    unsigned long long v19;  // [sp-0x50]
    unsigned long long v20;  // [sp-0x48]
    unsigned long long v21;  // [sp-0x40]
    unsigned long long v22;  // [sp-0x38]
    unsigned long v23;  // [bp+0x8]
    unsigned long long v24;  // rcx
    unsigned long long v25;  // r12
    char v26;  // bpl
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    struct struct_0 **v29;  // r13
    unsigned long long v30;  // rcx
    unsigned long long v32;  // rcx

    v24 = a3;
    v25 = a3;
    v10 = a5;
    v26 = (a0[53] ? 10 : 0);
    if (a5 == 1)
    {
        v27 = a0[54];
        if ((char)v27 != 4 && ((char)v23 || ((unsigned int)v27 | 2) == 3))
        {
            v0 = v26;
            v28 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h93e242398db0910b(a2->field_38(a1, &v0, 1, v24));
            if (v28)
                return v28;
        }
    }
    if (!a0[51])
    {
        v29 = a2->field_38;
        v28 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb8a61d08fcce3550(v29(a1, v25, a4, v24));
        if (v28)
            return v28;
    }
    else
    {
        v11 = &v10;
        v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = 2;
        v2 = 0;
        v3 = 7;
        v4 = 0;
        v5 = 32;
        v6 = 3;
        v17 = &g_4f01e8;
        v18 = 2;
        v21 = &v0;
        v22 = 1;
        v19 = &v11;
        v20 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v7, &v17);
        v13 = *((long long *)&v8);
        v14 = *((long long *)&v9) + v13;
        v15 = v25;
        v16 = a4 + v25;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h7dc4f611183914be(&v0, &v13);
        v29 = a2->field_38;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v0);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v7);
        v28 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb8a61d08fcce3550(v29(a1, *((long long *)&v1), v2, v30));
        if (v28)
            return v28;
    }
    v0 = v26;
    v28 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbe8daa8e6c1b3edf(v29(a1, &v0, 1, v32));
    return v28;
}
