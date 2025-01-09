long long uu_uniq::Uniq::print_line::h32e5970fdc1721c7(char a0[55], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [bp-0xe8], Other Possible Types: char
    char v1;  // [bp-0xe0]
    void* v2;  // [sp-0xd8]
    unsigned long long v3;  // [sp-0xd0]
    void* v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xc0]
    char v6;  // [sp-0xb8]
    unsigned long v7;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    char *v11;  // [sp-0x90]
    unsigned long long v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    unsigned long long v14;  // [sp-0x78]
    struct struct_0 **v15;  // [sp-0x70]
    unsigned long long v16;  // [sp-0x68]
    char *v17;  // [sp-0x60]
    unsigned long long v18;  // [sp-0x58]
    char v19;  // [bp-0x50]
    unsigned long v20;  // [bp+0x8]
    char v21;  // bpl
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v7 = a5;
    v21 = (a0[53] ? 10 : 0);
    if (a5 == 1)
    {
        v22 = a0[54];
        if ((char)v22 != 4 && ((char)v20 || ((unsigned int)v22 | 2) == 3))
        {
            v0 = v21;
            v23 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfa9427f084ffcfe7(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(a1, a2, &v0, 1));
            if (v23)
                return v23;
        }
    }
    if (!a0[51])
    {
        v23 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(a1, a2, a3, a4));
        if (v23)
            return v23;
    }
    else
    {
        v11 = &v7;
        v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = 2;
        v2 = 0;
        v3 = 7;
        v4 = 0;
        v5 = 32;
        v6 = 3;
        v13 = &g_52d918;
        v14 = 2;
        v17 = &v0;
        v18 = 1;
        v15 = &v11;
        v16 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hf9a5e71691484ed0();
        core::iter::traits::iterator::Iterator::chain::hdcb7d762b52e317b(&v19, *((long long *)&v9), *((long long *)&v10) + *((long long *)&v9), a3, a4 + a3);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hac39029f6d8a5f03(&v0, &v19);
        ::0x46f220::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0b327608f4b568de(&v0);
        ::0x46f210::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79de3313e0d66245(&v8);
        v23 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4767a6aafdc81322(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(a1, a2, *((long long *)&v1), v2));
        if (v23)
            return v23;
    }
    v0 = v21;
    v23 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7b8303005c683fae(std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::ha26dee22509071d6(a1, a2, &v0, 1));
    return v23;
}
