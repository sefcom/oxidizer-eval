long long uu_mktemp::dry_exec::h0a7898737835babc(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long a7)
{
    unsigned long v0;  // [sp-0xb8]
    unsigned long long v1;  // [sp-0xb0]
    void* v2;  // [sp-0xa8]
    char v3;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long v4;  // [sp-0x98], Other Possible Types: unsigned long long
    char v5;  // [bp-0x90]
    int v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long long v11;  // rdx
    char *v12;  // rax
    unsigned long long v13;  // rcx
    char v15;  // cl

    v9 = a5 + a4;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he204a1af3f1eb867(&v3, v9 + a7, 0);
    if (v3)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v0, *((long long *)&v5)); /* do not return */
    v0 = v4;
    v1 = *((long long *)&v5);
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8d008c8d94641a94(&v0, a3, a3 + a4);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4c607371e1e29218(&v0, a5, 88);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8d008c8d94641a94(&v0, a6, a7 + a6);
    v10 = ::0x4bc300::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::ha3c98ad8690eec67(a4, v9, v1, v2, &g_536a88);
    v3 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
    rand::rng::Rng::fill::h79ce3d99f0d48795(&v3, v10, v11);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hd7d8697e44513e9b(&v3);
    v3 = v10;
    v4 = v10 + v11;
    v12 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c90eff0bcfd7e5b(&v3);
    if (!v12)
    {
        v7 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
        alloc::string::String::from_utf8::hacb364918987915a(&v3, &v6);
        core::result::Result$LT$T$C$E$GT$::unwrap::h66f1ec1b8c34f280(&v8, &v3);
        std::path::Path::join::h5103fbfd94f4eefa(a0, a1, a2, &v8);
        return a0;
    }
    do
    {
        v13 = *(v12);
        v15 = v13 - ((((unsigned int)((v13 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 64 & 4294967295) - (((unsigned int)((v13 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 2 & 4294967295) & 4294967295);
    } while ((*(v12) = v15 | 48, v12 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c90eff0bcfd7e5b(&v3), v12));
}
