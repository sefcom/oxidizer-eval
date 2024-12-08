long long uu_mkdir::uumain::uumain::h4971e28631ac8fd4(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x680]
    unsigned long long v1;  // [sp-0x678]
    unsigned long v2;  // [sp-0x670], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x668]
    int v4;  // [sp-0x660]
    int v5;  // [sp-0x650]
    unsigned long long v6;  // [sp-0x640]
    int v7;  // [sp-0x638]
    int v8;  // [sp-0x628]
    char v9;  // [bp-0x618]
    char v10;  // [bp-0x608]
    char v11;  // [bp-0x600]
    char v12;  // [bp-0x5f8]
    char v13;  // [bp-0x5f0]
    char v14;  // [bp-0x5e0]
    char v15;  // [bp-0x5d0]
    int v16;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [sp-0x5c0]
    int v18;  // [sp-0x5b8], Other Possible Types: unsigned long long
    unsigned int v19;  // [sp-0x5b0]
    int v20;  // [sp-0x5a8]
    unsigned long long v21;  // [sp-0x598]
    unsigned long long v22;  // [sp-0x590]
    char v23;  // [bp-0x2f8]
    char v24;  // [bp-0x2f0]
    char v25;  // [bp-0x2e8]
    char v26;  // [bp-0x2d8]
    char v27;  // [bp-0x2c8]
    char v28;  // [bp-0x2c0]
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    int v33;  // xmm0
    unsigned long long v34;  // rcx
    unsigned long long v37;  // rax
    int v38;  // xmm0
    unsigned long long v39;  // r12
    unsigned long long v40;  // r13
    int v41;  // ymm0
    unsigned long long v44;  // rdx
    unsigned long long v45;  // r8
    unsigned long long v46;  // r9

    uucore::Args::collect_lossy::hd464188168df0964(&v9, a0, a1);
    uu_mkdir::uu_app::h51440c47b22f6ae2(&v16, v30, v31);
    clap_builder::builder::command::Command::after_help::he41cf10858db29ce(&v23, &v16, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.verboseparents", 73);
    v18 = *((long long *)&v10);
    v33 = *((int128_t *)&v9);
    v16 = v33;
    clap_builder::builder::command::Command::try_get_matches_from::h7da9a6f39f6d1ec8(&v11, &v23, &v16, v34);
    if (v2 == 0x8000000000000000)
    {
        v37 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v3);
        return v37;
    }
    v6 = *((long long *)&v15);
    v38 = *((int128_t *)&v13);
    *((int128_t *)&v5) = *((int128_t *)&v14);
    v4 = v38;
    v2 = *((long long *)&v11);
    v3 = *((long long *)&v12);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbd3c0e9780c5d0e0(&v16, &v2, &g_414530, 4);
    clap_builder::parser::error::MatchesError::unwrap::h6c382b70b8aff362(&v23, &g_414530, 4, &v16);
    v39 = *((long long *)&v23);
    if (!v39)
    {
        *((int128_t *)&v8) = 0;
        *((uint128_t *)&v7) = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
        v0 = "&";
        v39 = core::ops::function::FnOnce::call_once::hc752c436cb3846b3;
        v40 = 0;
    }
    else
    {
        v0 = *((long long *)&v24);
        *((int128_t *)&v7) = *((int128_t *)&v25);
        *((int128_t *)&v8) = *((int128_t *)&v26);
        v1 = *((long long *)&v27);
        v40 = *((long long *)&v28);
    }
    uu_mkdir::get_mode::h7b11d1c803beb9f1(&v23, &v2, (unsigned int)uu_mkdir::strip_minus_from_mode::h661d7249df5497d4(&v9, v30, v31));
    if (*((long long *)&v23) != 0x8000000000000000)
    {
        v18 = *((long long *)&v25);
        *((int128_t *)&v16) = *((int128_t *)&v23);
        v19 = 1;
        v37 = alloc::boxed::Box$LT$T$GT$::new::h88d8f82b0b60fa96(&v16);
    }
    else
    {
        v44 = *((int *)&v24);
        v16 = v39;
        v17 = v0;
        v18 = v7;
        v20 = v8;
        v21 = v1;
        v22 = v40;
        v37 = uu_mkdir::exec::h1d4d92fbeb21556b(&v16, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v2, "parents", 7), v44, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v2, "verboseparents", 7), v45, v46);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he09ca618d6edadcc(&v2);
    return v37;
}
