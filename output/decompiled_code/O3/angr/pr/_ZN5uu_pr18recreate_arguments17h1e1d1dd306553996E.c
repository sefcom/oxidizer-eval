long long uu_pr::recreate_arguments::h1e1d1dd306553996(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x180]
    unsigned long long v2;  // [sp-0x178]
    unsigned long long v3;  // [sp-0x170]
    void* v4;  // [sp-0x168]
    char v5;  // [bp-0x150]
    unsigned long v6;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x130]
    char v8;  // [bp-0x128]
    char v9;  // [bp-0x118]
    char v10;  // [bp-0x110]
    char v11;  // [bp-0x100]
    char v12;  // [bp-0xf8]
    char v13;  // [bp-0xf0]
    int v14;  // [sp-0xd8]
    unsigned long long v15;  // [sp-0xc8]
    char v16;  // [bp-0xc0]
    char v17;  // [bp-0xa0]
    char v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    char v20;  // [bp-0x58]
    unsigned long long v21;  // [sp-0x38]
    unsigned long long v23;  // rcx
    unsigned long long v24;  // r8
    unsigned long long v25;  // r9
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rsi

    regex::regex::string::Regex::new::h45561b8e7c134f32(&v0, "^[-+]\\d+.*src/uu/pr/src/pr.rs", 10, a3, a4, a5);
    core::result::Result$LT$T$C$E$GT$::unwrap::h13ffac836642d3e9(&v19, &v0, &g_7087e0);
    regex::regex::string::Regex::new::h45561b8e7c134f32(&v0, "^[^-]\\d*$^-n\\s*$\n argument -%b %d %H:%M %Y\\s*\\+(\\d+:*\\d*)\\s*invalid --pages argument ':'", 9, v23, v24, v25);
    core::result::Result$LT$T$C$E$GT$::unwrap::h13ffac836642d3e9(&v12, &v0, &g_7087f8);
    regex::regex::string::Regex::new::h45561b8e7c134f32(&v0, "^-n\\s*$\n argument -%b %d %H:%M %Y\\s*\\+(\\d+:*\\d*)\\s*invalid --pages argument ':'", 7, v23, v24, v25);
    core::result::Result$LT$T$C$E$GT$::unwrap::h13ffac836642d3e9(&v16, &v0, &g_708810);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h445853a2df07b584(&v5, a1, a2);
    v0 = a1;
    v1 = a1 + a2 * 24;
    v26 = itertools::Itertools::find_position::h0be959d111fed4f2(&v0, &v16);
    if (!v27)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha5e4a16ee8de8de4(&v20, &v5);
        v21 = &v19;
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::ha3d25fcbe92b3753(a0, &v20);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h48957bbe876ddcaf(&v16);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h48957bbe876ddcaf(&v12);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h48957bbe876ddcaf(&v19);
        return a0;
    }
    v28 = v26 + 1;
    if (v28 < a2 && !(char)::0x5c1bc0::regex::regex::string::Regex::is_match_at::h1634d7bccd3023fd(*((long long *)&v12), *((long long *)&v13), *((long long *)(a1 + ((v28 << 1) + v28 << 3) + 8)), *((long long *)(a1 + ((v28 << 1) + v28 << 3) + 16))))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::remove::h227002e479977a5d(&v8, &v5, v28, &g_708828);
        _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::ha983a8446f40556a(&v17, v29, v27);
        v6 = &v18;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = &g_466d90;
        v1 = 1;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h1b0ef2f624a6aa37(&v10, &v0);
        core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::hdeeda5af6824ab5b(&v17);
        *((int128_t *)&v14) = *((int128_t *)&v10);
        v15 = *((long long *)&v11);
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h7716c82851ab0dcb(&v5, v28, &v14);
        v2 = *((long long *)&v9);
        *((int128_t *)&v0) = *((int128_t *)&v8);
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h7716c82851ab0dcb(&v5, v26 + 2, &v0);
    }
}
