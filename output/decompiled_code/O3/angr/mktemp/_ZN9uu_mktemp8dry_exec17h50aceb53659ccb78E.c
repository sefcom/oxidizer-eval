long long uu_mktemp::dry_exec::h50aceb53659ccb78(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xb0]
    void* v2;  // [sp-0xa8]
    char v3;  // [bp-0xa0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x98], Other Possible Types: unsigned long long
    char v5;  // [bp-0x90]
    int v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v9;  // [bp+0x8]
    char v10;  // [bp+0x10]
    unsigned long long v11;  // rbp
    unsigned long long v12;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rdx
    char *v15;  // rax
    unsigned long long v16;  // rcx
    char v18;  // cl

    v11 = *((long long *)&v10);
    v12 = a5 + a4;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::haba9973a5a23a58c(&v3, v12 + v11, 0);
    if (v3)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v0 = v4;
    v1 = *((long long *)&v5);
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h98f1a2858b25435a(&v0, a3, a3 + a4);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6a47dad1a4508845(&v0, a5, 88);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h98f1a2858b25435a(&v0, v9, v11 + v9);
    v13 = ::0x4bb8e0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h57b3bdea36c08a33(a4, v12, v1, v2, &g_5362c8);
    v3 = rand::rngs::thread::thread_rng::h2343e3718037645d();
    rand::rng::Rng::fill::h68e25f82e5f979ac(&v3, v13, v14);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hbbb2c3463fee3390(&v3);
    v3 = v13;
    v4 = v13 + v14;
    v15 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3b3dd7e748ad1195(&v3);
    if (!v15)
    {
        v7 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
        alloc::string::String::from_utf8::hacb364918987915a(&v3, &v6);
        core::result::Result$LT$T$C$E$GT$::unwrap::h6bec605c3d8288b9(&v8, &v3);
        std::path::Path::join::h1ece53f15265a6ba(a0, a1, a2, &v8);
        return a0;
    }
    do
    {
        v16 = *(v15);
        v18 = v16 - ((unsigned int)((v16 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 62;
    } while ((*(v15) = v18 | 48, v15 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3b3dd7e748ad1195(&v3), v15));
}
