long long uu_pr::recreate_arguments::hbe43c308ac861d0c(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x180]
    char *v2;  // [sp-0x178], Other Possible Types: unsigned long long
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
    char *v21;  // [sp-0x38]
    unsigned long long v23;  // rax
    unsigned long v24;  // rdx
    unsigned long long v25;  // rbp

    regex::regex::string::Regex::new::h2b022f3b326b0361(&v0, "^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&v19, &v0, &g_7091a0);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v0, "^[^-]\\d*$^-n\\s*$\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 9);
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&v12, &v0, &g_7091b8);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v0, "^-n\\s*$\n argument -cannot specify number of columns when printing in parallelcannot specify both printing across and printing in parallel%b %d %H:%M %Yinvalid --pages argument ':'", 7);
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&v16, &v0, &g_7091d0);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1f2362dded9f9c75(&v5, a1, a2);
    v0 = a1;
    v1 = a1 + a2 * 24;
    v23 = itertools::Itertools::find_position::hd482090938159e21(&v0, &v16);
    if (!v24)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&v20, &v5);
        v21 = &v19;
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5ab0a96f081d00df(a0, &v20);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&v16);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&v12);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&v19);
        return a0;
    }
    v25 = v23 + 1;
    if (v25 < a2 && !(char)::0x5c2740::regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(*((long long *)&v12), *((long long *)&v13), *((long long *)(a1 + v25 * 24 + 8)), *((long long *)(a1 + v25 * 24 + 16))))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::remove::hcb952d79c903d6d5(&v8, &v5, v25, &g_7091e8);
        _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::h62d70fa0066756c7(&v17);
        v6 = &v18;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v0 = &g_466c10;
        v1 = 1;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd();
        core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h7b44dbe916af3d67();
        *((int128_t *)&v14) = *((int128_t *)&v10);
        v15 = *((long long *)&v11);
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&v5, v25, &v14);
        v2 = *((long long *)&v9);
        *((int128_t *)&v0) = *((int128_t *)&v8);
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&v5, v23 + 2, &v0);
    }
}
