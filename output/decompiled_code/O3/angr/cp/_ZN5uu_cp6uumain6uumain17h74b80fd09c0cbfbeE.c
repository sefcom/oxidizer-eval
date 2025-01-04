long long uu_cp::uumain::uumain::h74b80fd09c0cbfbe(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x4b8], Other Possible Types: unsigned long
    int v1;  // [bp-0x4a8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v2;  // [sp-0x4a0]
    void* v3;  // [bp-0x498], Other Possible Types: int
    int v4;  // [sp-0x488]
    char v5;  // [bp-0x478]
    char v6;  // [bp-0x468]
    char v7;  // [bp-0x458]
    char v8;  // [bp-0x448], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x440]
    struct struct_0 **v10;  // [sp-0x438], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v11;  // [sp-0x430]
    void* v12;  // [sp-0x428]
    char *v13;  // [sp-0x418]
    unsigned long long v14;  // [sp-0x410]
    int v15;  // [sp-0x408]
    unsigned long long v16;  // [sp-0x3f8]
    int v17;  // [sp-0x3e8]
    unsigned long long v18;  // [sp-0x3d8]
    int v19;  // [bp-0x3c8], Other Possible Types: char *
    unsigned long long v20;  // [sp-0x3c0]
    int v21;  // [sp-0x3b8]
    int v22;  // [sp-0x3a8]
    unsigned long long v23;  // [sp-0x398]
    unsigned long v24;  // [sp-0x390], Other Possible Types: unsigned long long
    int v25;  // [sp-0x388]
    int v26;  // [sp-0x378]
    int v27;  // [sp-0x368]
    int v28;  // [sp-0x358]
    unsigned long long v29;  // [sp-0x348]
    struct struct_0 **v30;  // [sp-0x340]
    unsigned long long v31;  // [sp-0x338]
    char v32;  // [bp-0x330]
    char v33;  // [bp-0x328]
    char v34;  // [bp-0x320]
    char v35;  // [bp-0x310]
    char v36;  // [bp-0x300]
    int v37;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    int v38;  // [bp-0x2f0], Other Possible Types: char
    int v39;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v40;  // [bp-0x2e0], Other Possible Types: char, unsigned int
    int v41;  // [bp-0x2d8]
    int v42;  // [bp-0x2d0], Other Possible Types: char
    int v43;  // [bp-0x2c8]
    char v44;  // [bp-0x2c0], Other Possible Types: unsigned long long
    int v45;  // [sp-0x2b8]
    char v46;  // [bp-0x2b0]
    int v47;  // [sp-0x2a8]
    int v48;  // [sp-0x298]
    unsigned long long v50;  // r8
    unsigned long long v51;  // r9
    struct_2 *v52;  // r14
    unsigned long long v53;  // rsi
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rcx
    unsigned int v57;  // eax
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rax
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm2
    void* v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    unsigned long long v67;  // rax
    unsigned long long v69;  // rax
    int v71;  // xmm0
    int v72;  // xmm1
    unsigned long long v73;  // r14
    int v74;  // xmm1
    int v75;  // xmm2
    unsigned long long v76;  // rsi

    uu_cp::uu_app::h07bd295c994b8bb6(&v37, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h651af958e68d2ef9(&v32, &v37, a0, a1, v50, v51);
    if (*((long long *)&v32) != 0x8000000000000000)
    {
        v23 = *((long long *)&v36);
        *((int128_t *)&v22) = *((int128_t *)&v35);
        *((int128_t *)&v21) = *((int128_t *)&v34);
        *((int128_t *)&v19) = *((int128_t *)&v32);
        uu_cp::Options::from_matches::h583c69bc9ce4dd71(&v37, &v19, v55, v56, v50, v51);
        *((int128_t *)&v0) = *((int128_t *)&v38);
        *((int128_t *)&v1) = *((int128_t *)&v40);
        *((int128_t *)&v3) = *((int128_t *)&v42);
        *((int128_t *)&v4) = *((int128_t *)&v44);
        if (v24 == 0x8000000000000000)
        {
            v60 = (int128_t)v0;
            v61 = (int128_t)v1;
            v62 = (int128_t)v3;
            v43 = v4;
            v41 = v62;
            v39 = v61;
            v37 = v60;
            v63 = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&v37);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v19);
            return v63;
        }
        v28 = v4;
        *((int128_t *)&v25) = (int128_t)v0;
        *((int128_t *)&v26) = (int128_t)v1;
        *((int128_t *)&v27) = (int128_t)v3;
        v24 = v37;
        v29 = *((long long *)&v46);
        if (::0x4a70b0::_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5((int)(&v28)[4]) && (v29 & 0xff00000000))
        {
            ::0x4a6400::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3b5d29524d766f5a(&v0);
            v39 = v1;
            *((int128_t *)&v37) = (int128_t)v0;
            v40 = 1;
            v63 = alloc::boxed::Box$LT$T$GT$::new::h755e6a8ebff87d1a(&v37);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v19);
            return v63;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::hf6069bd586c08c95(&v37, &v19, "paths", 5);
        clap_builder::parser::error::MatchesError::unwrap::hbf61384cbe11cbdd(&v0, "paths", 5, &v37);
        if (!v0)
        {
            v67 = 0x8000000000000000;
        }
        else
        {
            *((int128_t *)&v48) = *((int128_t *)&v7);
            *((int128_t *)&v47) = *((int128_t *)&v6);
            *((int128_t *)&v45) = *((int128_t *)&v5);
            v64 = (int128_t)v0;
            v65 = (int128_t)v1;
            v66 = (int128_t)v3;
            v43 = v4;
            v41 = v66;
            v39 = v65;
            v37 = v64;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9171c490969f9a3(&v8, &v37);
        }
        if (v67 == 0x8000000000000000)
            v69 = 0;
        v8 = v69;
        v9 = 8;
        v10 = 0;
        uu_cp::parse_path_args::h55a50a93a970390a(&v37, &v8, &v24);
        *((int128_t *)&v0) = (int128_t)(&v37)[8];
        *((int128_t *)&v1) = (int128_t)(&v38)[16];
        *((int128_t *)&v3) = (int128_t)(&v40)[16];
        if (v37 != 13)
        {
            v71 = (int128_t)v0;
            v72 = (int128_t)v1;
            *((int128_t *)&v42) = (int128_t)v3;
            v40 = v72;
            v38 = v71;
            v37 = v37;
            v44 = v44;
            v63 = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&v37);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v19);
            return v63;
        }
        v16 = v1;
        *((int128_t *)&v15) = (int128_t)v0;
        v18 = (long long)(&v3)[8];
        *((int128_t *)&v17) = (int128_t)(&v1)[8];
        uu_cp::copy::h5586f24b20d7299d(&v0, (long long)(&v15)[8], v1, (long long)(&v17)[8], (long long)(&v3)[8], &v24);
        v73 = v0;
        if (v73 != 13)
        {
            v74 = (int128_t)v1;
            v75 = (int128_t)v3;
            *((int128_t *)&v37) = (int128_t)v0;
            v43 = v4;
            v41 = v75;
            v39 = v74;
            if ((int)v37 != 5)
            {
                v13 = uucore::util_name::h60d842bf27b05e82();
                v14 = v55;
                v30 = &v13;
                v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9d827e717605a19;
                v8 = &g_5b2220;
                v9 = 2;
                v12 = 0;
                v10 = &v30;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v76, v55);
                v13 = &v37;
                v14 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb0ee62246d91c7b9;
                v8 = &g_5b2240;
                v9 = 2;
                v12 = 0;
                v10 = &v13;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v76, v55);
            }
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&v37, v76, v55, v56, v50, v51, (long long)v0, (long long)(&v0)[8], (long long)v1);
        }
        ::0x4a58c0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc6dd044fb69db49e(&v17);
        ::0x4a5d60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hefbacff032b8b327(&v15);
        core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v24);
        if ((unsigned int)v73 == 13 && (unsigned int)v0 != 13)
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&v0, v76, v55, v56, v50, v51, (long long)v0, (long long)(&v0)[8], (long long)v1);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v19);
    }
    else
    {
        v52 = *((long long *)&v33);
        uu_cp::uu_app::h07bd295c994b8bb6(&v37, v53, v54);
        switch (v57)
        {
        case 12:
            v59 = clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(&v37, v53, v54, v58, v50, v51);
            if (v59)
            {
                v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v59);
                ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v37);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(v52);
                return v63;
            }
        case 14:
            clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(&v24, &v37);
            v19 = &v24;
            v20 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = 0;
            v2 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v53, v54);
            ::0x4a58d0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8dfa2e974c7791a7(&v24);
            break;
        default:
            v63 = alloc::boxed::Box$LT$T$GT$::new::h7f9c3bcb3656a690(v52);
            ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v37);
            return v63;
        }
        ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v37);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(v52);
    }
    return 0;
}
