long long uu_yes::uumain::uumain::he4deec29abaffafa(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x388]
    void* v3;  // [sp-0x380]
    unsigned long v4;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x370]
    int v6;  // [sp-0x368]
    int v7;  // [sp-0x358]
    unsigned long long v8;  // [sp-0x348]
    char *v9;  // [bp-0x340], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x338], Other Possible Types: unsigned long long
    char v11;  // [bp-0x330]
    char v12;  // [bp-0x320]
    char v13;  // [bp-0x310]
    char v14;  // [bp-0x300]
    char v15;  // [bp-0x2f0]
    int v16;  // [bp-0x2e8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v17;  // [sp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [sp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v19;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x2c8]
    unsigned long long v22;  // r8
    unsigned long long v23;  // r9
    void* v24;  // rax
    unsigned long v25;  // rdx
    unsigned long long v26;  // rbx

    uu_yes::uu_app::he708a882494a8d90(&v16, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h51599a0d987ab008(&v9, &v16, a0, a1, v22, v23);
    if (v4 == 0x8000000000000000)
    {
        v24 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v5);
        return v24;
    }
    v8 = *((long long *)&v13);
    *((int128_t *)&v7) = *((int128_t *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    v4 = v9;
    v5 = v10;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3a638e61ba07e311(&v16, 0x4000, 0);
    if (v16)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v1 = v17;
    v2 = v18;
    v3 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc595b2c710ec455b(&v16, &v4, "STRING", 6);
    clap_builder::parser::error::MatchesError::unwrap::hba7e4e218909a01c(&v9, "STRING", 6, &v16);
    uu_yes::args_into_buffer::h5651e8584f7e9c37(&v1, &v9, v25);
    uu_yes::prepare_buffer::h0a69ad01ffb7db57(&v1);
    v26 = uu_yes::exec::h637ae1cf8fadb89a(v2, v3, v25);
    if (!v26)
    {
        v24 = 0;
    }
    else
    {
        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v26) == 11)
        {
            ::0x45dee0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h780ea2ea521668c8(v26);
            v24 = 0;
        }
        else
        {
            v0 = v26;
            v9 = &v0;
            v10 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v16 = &g_507298;
            v17 = 1;
            v20 = 0;
            v18 = &v9;
            v19 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h7da0a100012a1276(&v14, &v16);
            v19 = 1;
            *((int128_t *)&v16) = *((int128_t *)&v14);
            v18 = *((long long *)&v15);
            v24 = alloc::boxed::Box$LT$T$GT$::new::h870e02c9a3198622(&v16);
            ::0x45dee0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h780ea2ea521668c8(v0);
        }
    }
    ::0x45df00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd7cda70099a3c641(&v1);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b51fc743cc5a57f(&v4);
    return v24;
}
