long long uu_df::uumain::uumain::h3e2d3a10a280da4e(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 **v0;  // [bp-0x450]
    unsigned int v1;  // [sp-0x448], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x440]
    struct struct_0 **v3;  // [bp-0x438]
    unsigned long long v4;  // [sp-0x430]
    struct struct_0 **v5;  // [bp-0x428], Other Possible Types: unsigned long
    struct struct_0 **v6;  // [sp-0x418]
    unsigned long long v7;  // [sp-0x410]
    unsigned long long v8;  // [sp-0x408]
    struct struct_0 **v9;  // [bp-0x3f8], Other Possible Types: unsigned long
    unsigned long long v10;  // [sp-0x3f0]
    struct struct_0 **v11;  // [bp-0x3e8], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [sp-0x3e0]
    void* v13;  // [bp-0x3d8], Other Possible Types: char
    char v14;  // [bp-0x3c8]
    char v15;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v16;  // [bp-0x3b0], Other Possible Types: char
    char v17;  // [bp-0x3a8]
    struct struct_0 **v18;  // [sp-0x3a0]
    char v19;  // [bp-0x398]
    struct struct_0 **v20;  // [sp-0x390]
    char v21;  // [bp-0x388]
    struct struct_0 **v22;  // [sp-0x380]
    struct struct_0 **v23;  // [sp-0x370]
    unsigned long v24;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x358]
    struct struct_0 **v26;  // [sp-0x350]
    struct struct_0 **v27;  // [sp-0x340]
    unsigned long long v28;  // [sp-0x330]
    struct struct_0 **v29;  // [sp-0x328]
    struct struct_0 **v30;  // [sp-0x318]
    struct struct_0 **v31;  // [sp-0x308]
    struct struct_0 **v32;  // [sp-0x2f8]
    struct struct_0 **v33;  // [bp-0x2e8]
    char v34;  // [bp-0x2e0]
    struct struct_0 **v35;  // [bp-0x2d8], Other Possible Types: unsigned long long, unsigned long
    char v36;  // [bp-0x2d0], Other Possible Types: unsigned int
    char v37;  // [bp-0x2c0]
    char v38;  // [bp-0x2b0]
    char v39;  // [bp-0x2a0]
    void* v42;  // rax
    unsigned long long v43;  // rax
    struct struct_0 **v44;  // xmm0
    struct struct_0 **v45;  // xmm1
    struct struct_0 **v46;  // xmm0
    struct struct_0 **v47;  // xmm1
    unsigned long long v52;  // rsi

    uu_df::uu_app::h9c55c0d492ce5ccf(&v33);
    clap_builder::builder::command::Command::try_get_matches_from::h7ec40c233007e04c(&v15, &v33, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v25);
        return v42;
    }
    v28 = *((long long *)&v21);
    *((int128_t *)&v27) = *((int128_t *)&v19);
    *((int128_t *)&v26) = *((int128_t *)&v17);
    v24 = v15;
    v25 = *((long long *)&v16);
    uu_df::Options::from::h9a68833b14202507(&v33, &v24);
    v43 = v33;
    if (v15 == 0x8000000000000000)
    {
        core::ops::function::FnOnce::call_once::h863533e3c19f7681(&v9, &v34);
        v46 = *((int128_t *)&v9);
        v47 = *((int128_t *)&v11);
        v3 = v46;
        v5 = v47;
        v35 = v47;
        v33 = v46;
        v42 = alloc::boxed::Box$LT$T$GT$::new::hf8971d9a7f69a8c7(&v33);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf2cbfd61c61225fd(&v24);
        return v42;
    }
    v44 = *((int128_t *)&v34);
    v45 = *((int128_t *)&v36);
    *((int128_t *)&v20) = *((int128_t *)&v37);
    *((int128_t *)&v22) = *((int128_t *)&v38);
    *((int128_t *)&v23) = *((int128_t *)&v39);
    v3 = v44;
    v16 = v44;
    v18 = v45;
    v15 = v43;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff4ab90c18903b33(&v33, &v24, _ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958);
    clap_builder::parser::error::MatchesError::unwrap::hc21f192ef43813f5(&v9, _ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958, &v33);
    if (!v9)
    {
        uu_df::get_all_filesystems::ha419c9a63b8c437a(&v33, &v15);
        if (v0 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h5335e9feeb0174e9(v1, v2);
        }
        else
        {
            v0 = v33;
            v1 = *((long long *)&v34);
            v2 = v35;
            if (v2)
            {
                v8 = v2;
                v6 = v0;
                v7 = v1;
LABEL_473d65:
                v11 = v8;
                v9 = v6;
                v10 = v7;
                uu_df::table::Table::new::h150da2e8fce38b34(&v33, &v15, &v9);
                v3 = &v33;
                v4 = _$LT$uu_df..table..Table$u20$as$u20$core..fmt..Display$GT$::fmt::h176e29e24006d431;
                v9 = &g_53eab0;
                v10 = 2;
                v13 = 0;
                v11 = &v3;
                v12 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v9);
                core::ptr::drop_in_place$LT$uu_df..table..Table$GT$::h912b6fdb4689292d(&v33);
                core::ptr::drop_in_place$LT$uu_df..Options$GT$::hac76dba687740dae(&v15);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf2cbfd61c61225fd(&v24);
                return 0;
            }
            ::0x472f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&v3);
            v35 = v5;
            *((int128_t *)&v33) = *((int128_t *)&v3);
            v36 = 1;
            v42 = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v33);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h10c83d45de38d664(&v0);
        }
    }
    else
    {
        *((int128_t *)&v32) = *((int128_t *)&v14);
        *((int128_t *)&v31) = *((int128_t *)&v13);
        *((int128_t *)&v30) = *((int128_t *)&v11);
        *((int128_t *)&v29) = *((int128_t *)&v9);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8a263af31a8d7fc8(&v0, &v29);
        uu_df::get_named_filesystems::hf6e388544e0196ff(&v33, v1);
        v52 = v35;
        if (v3 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h5335e9feeb0174e9(v4, v52);
            goto LABEL_473e2e;
        }
        v3 = v33;
        v4 = *((long long *)&v34);
        v5 = v52;
        if (v52)
        {
            v8 = v5;
            v6 = v3;
            v7 = v4;
            ::0x472bb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8f2c1f41fdac9f86(&v0);
            goto LABEL_473d65;
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h10c83d45de38d664(&v3);
            v42 = 0;
LABEL_473e2e:
            ::0x472bb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8f2c1f41fdac9f86(&v0);
        }
    }
    core::ptr::drop_in_place$LT$uu_df..Options$GT$::hac76dba687740dae(&v15);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf2cbfd61c61225fd(&v24);
    return v42;
}
