long long uu_yes::uumain::uumain::h81f3ff3afc6babad(unsigned long long a0, unsigned long long a1, unsigned long long a2)
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
    unsigned long v9;  // [bp-0x340], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x338], Other Possible Types: unsigned long long
    char v11;  // [bp-0x330]
    char v12;  // [bp-0x320]
    char v13;  // [bp-0x310]
    char v14;  // [bp-0x300]
    char v15;  // [bp-0x2f0]
    int v16;  // [bp-0x2e8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v17;  // [sp-0x2e0], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x2c8]
    void* v22;  // rax
    unsigned long v23;  // rdx
    unsigned long long v24;  // rbx

    uu_yes::uu_app::h12eef1d96a91dfec(&v16, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h26e35259fd035ea4(&v9, &v16, a0, a1);
    if (v4 == 0x8000000000000000)
    {
        v22 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v5);
        return v22;
    }
    v8 = *((long long *)&v13);
    *((int128_t *)&v7) = *((int128_t *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    v4 = v9;
    v5 = v10;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbc93a2e9df7679ed(&v16, 0x4000, 0);
    if (v16)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v1 = v17;
    v2 = v18;
    v3 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4a63b7034a264d0f(&v16, &v4, "STRINGstandard output: ", 6);
    clap_builder::parser::error::MatchesError::unwrap::had19bd9602d4c6e5(&v9, "STRINGstandard output: ", 6, &v16);
    uu_yes::args_into_buffer::h50bbea3b2abf9f1f(&v1, &v9, v23);
    uu_yes::prepare_buffer::h1c99911308073ad4(&v1);
    v24 = uu_yes::exec::h2ebd275dc3206219(v2, v3, v23);
    if (!v24)
    {
        v22 = 0;
    }
    else if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v24) == 11)
    {
        ::0x45fe00::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf183cb1e01745faa(v24);
        v22 = 0;
    }
    else
    {
        v0 = v24;
        v9 = &v0;
        v10 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v16 = &g_5078f8;
        v17 = 1;
        v20 = 0;
        v18 = &v9;
        v19 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hece8396bff3c41d0(&v14, &v16);
        v19 = 1;
        *((int128_t *)&v16) = *((int128_t *)&v14);
        v18 = *((long long *)&v15);
        v22 = alloc::boxed::Box$LT$T$GT$::new::h393bea50b9f0078d(&v16);
        ::0x45fe00::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf183cb1e01745faa(v0);
    }
    ::0x45fe20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hec98539d84da6f4f(&v1);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hae6acf9be103f121(&v4);
    return v22;
}
