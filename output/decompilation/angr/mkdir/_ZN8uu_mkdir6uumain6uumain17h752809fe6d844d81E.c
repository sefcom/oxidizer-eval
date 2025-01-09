long long uu_mkdir::uumain::uumain::h752809fe6d844d81(unsigned long long a0, unsigned long long a1)
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
    int v31;  // xmm0
    unsigned long long v34;  // rax
    int v35;  // xmm0
    unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    int v38;  // ymm0
    unsigned long long v41;  // rdx

    uucore::Args::collect_lossy::h59e9a190abdbe1bb(&v9, a0, a1);
    uu_mkdir::uu_app::h2281d15957ce8683(&v16);
    clap_builder::builder::command::Command::after_help::h8527034bc7b55f42(&v23, &v16, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.verboseparents", 73);
    v18 = *((long long *)&v10);
    v31 = *((int128_t *)&v9);
    v16 = v31;
    clap_builder::builder::command::Command::try_get_matches_from::ha02fa6c35a434280(&v11, &v23, &v16);
    if (v2 == 0x8000000000000000)
    {
        v34 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v3);
        return v34;
    }
    v6 = *((long long *)&v15);
    v35 = *((int128_t *)&v13);
    *((int128_t *)&v5) = *((int128_t *)&v14);
    v4 = v35;
    v2 = *((long long *)&v11);
    v3 = *((long long *)&v12);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfdb84b2eea3c8209(&v16, &v2, &g_4142bc, 4);
    clap_builder::parser::error::MatchesError::unwrap::h41e90282d6a9dead(&v23, &g_4142bc, 4, &v16);
    v36 = *((long long *)&v23);
    if (!v36)
    {
        *((uint128_t *)&v8) = 0;
        *((uint128_t *)&v7) = ((v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v0 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v36 = core::ops::function::FnOnce::call_once::hd083c6ae921629bb;
        v37 = 0;
    }
    else
    {
        v0 = *((long long *)&v24);
        *((int128_t *)&v7) = *((int128_t *)&v25);
        *((int128_t *)&v8) = *((int128_t *)&v26);
        v1 = *((long long *)&v27);
        v37 = *((long long *)&v28);
    }
    uu_mkdir::get_mode::hcf7d630052cc85d4(&v23, &v2, (unsigned int)uu_mkdir::strip_minus_from_mode::h24f9592b17407d7a());
    if (*((long long *)&v23) != 0x8000000000000000)
    {
        v18 = *((long long *)&v25);
        *((int128_t *)&v16) = *((int128_t *)&v23);
        v19 = 1;
        v34 = alloc::boxed::Box$LT$T$GT$::new::h6d97907b3bba40e6(&v16);
    }
    else
    {
        v41 = *((int *)&v24);
        v16 = v36;
        v17 = v0;
        v18 = v7;
        v20 = v8;
        v21 = v1;
        v22 = v37;
        v34 = uu_mkdir::exec::h97ad3c032066465d(&v16, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v2, "parents", 7), v41, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v2, "verboseparents", 7));
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hec88a58d850bf936(&v2);
    return v34;
}
