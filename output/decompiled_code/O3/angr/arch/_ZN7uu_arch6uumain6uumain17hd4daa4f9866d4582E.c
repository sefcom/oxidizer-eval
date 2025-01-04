long long uu_arch::uumain::uumain::hd4daa4f9866d4582(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x558], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x550]
    int v2;  // [sp-0x548]
    int v3;  // [sp-0x538]
    unsigned long long v4;  // [sp-0x528]
    char *v5;  // [sp-0x520]
    unsigned long long v6;  // [sp-0x518]
    unsigned long v7;  // [sp-0x510], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x508]
    char v9;  // [bp-0x500], Other Possible Types: unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x4f8], Other Possible Types: unsigned long long
    char v11;  // [bp-0x4f0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x4e0]
    char v13;  // [bp-0x4d0]
    char v14;  // [bp-0x498]
    char v15;  // [bp-0x490]
    char v16;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v17;  // [sp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [sp-0x2d8], Other Possible Types: unsigned long
    char v19;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x2c8]
    void* v22;  // rax
    unsigned long long v23;  // r15
    unsigned long long v24;  // rbx
    unsigned long long v25;  // r14
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rsi

    uu_arch::uu_app::h8f2567686988086a(&v16, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h1685219cca491285(&v9, &v16, a0, a1);
    if (v0 == 0x8000000000000000)
    {
        v22 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v1);
        return v22;
    }
    v4 = *((long long *)&v13);
    *((int128_t *)&v3) = *((int128_t *)&v12);
    *((int128_t *)&v2) = *((int128_t *)&v11);
    v0 = v9;
    v1 = v10;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h09a2e4ae76fe94e9(&v0);
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&v16);
    v23 = v16;
    v24 = v17;
    v25 = v18;
    if (v23 == 0x8000000000000000)
    {
        v22 = uu_arch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hfa7d8d33c6f73432(v24, v25);
        return v22;
    }
    memcpy(&v11, &v19, 0x200);
    v9 = v23;
    v10 = v24;
    v11 = v25;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, *((long long *)&v14), *((long long *)&v15));
    v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hcfa4d6c8abc28637(v1, (long long)v2);
    v8 = v26;
    v5 = &v7;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1daa6270d834d97f;
    v16 = &g_502d30;
    v17 = 2;
    v20 = 0;
    v18 = &v5;
    v19 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v16, v27, v26);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h2f20969a414777e7(&v0);
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h0caea20308fb7da4(&v9);
    return 0;
}
