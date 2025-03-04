long long uu_cp::uumain::uumain::h74b80fd09c0cbfbe(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [sp-0x4b8], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x4b0]
    struct struct_1 **v2;  // [bp-0x4a8], Other Possible Types: char *, unsigned long long, unsigned long
    unsigned long long v3;  // [sp-0x4a0]
    void* v4;  // [bp-0x498], Other Possible Types: char *
    char *v5;  // [sp-0x488]
    char v6;  // [bp-0x478]
    char v7;  // [bp-0x468]
    char v8;  // [bp-0x458]
    char v9;  // [sp-0x448], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x440], Other Possible Types: unsigned long long
    struct struct_2 **v11;  // [sp-0x438], Other Possible Types: struct struct_3 **, unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x430]
    void* v13;  // [sp-0x428]
    struct struct_1 **v14;  // [sp-0x418]
    unsigned long long v15;  // [sp-0x410]
    char *v16;  // [sp-0x408]
    unsigned long long v17;  // [sp-0x3f8]
    char *v18;  // [sp-0x3e8]
    unsigned long long v19;  // [sp-0x3d8]
    char *v20;  // [bp-0x3c8]
    unsigned long long v21;  // [sp-0x3c0]
    char *v22;  // [sp-0x3b8]
    char *v23;  // [sp-0x3a8]
    unsigned long long v24;  // [sp-0x398]
    unsigned long v25;  // [sp-0x390]
    char *v26;  // [sp-0x388]
    char *v27;  // [sp-0x378]
    char *v28;  // [sp-0x368]
    char *v29;  // [sp-0x358]
    unsigned long long v30;  // [sp-0x348]
    struct struct_2 **v31;  // [sp-0x340]
    unsigned long long v32;  // [sp-0x338]
    char v33;  // [bp-0x330]
    char v34;  // [bp-0x328]
    char v35;  // [bp-0x320]
    char v36;  // [bp-0x310]
    char v37;  // [bp-0x300]
    char *v38;  // [bp-0x2f8], Other Possible Types: char
    char *v39;  // [bp-0x2f8], Other Possible Types: unsigned long
    char *v40;  // [bp-0x2f0]
    char *v41;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char *v42;  // [sp-0x2e0], Other Possible Types: unsigned int
    char *v43;  // [bp-0x2d8]
    char *v44;  // [bp-0x2d0]
    char *v45;  // [bp-0x2c8]
    char v46;  // [bp-0x2c0], Other Possible Types: unsigned long long
    char *v47;  // [sp-0x2b8]
    char v48;  // [bp-0x2b0]
    char *v49;  // [sp-0x2a8]
    char *v50;  // [sp-0x298]
    struct_0 *v52;  // r14
    unsigned int v53;  // eax
    unsigned long long v54;  // rax
    char *v55;  // xmm0
    char *v56;  // xmm1
    char *v57;  // xmm2
    void* v58;  // rbx
    char *v59;  // xmm0
    char *v60;  // xmm1
    char *v61;  // xmm2
    unsigned long long v62;  // rax
    void* v64;  // rcx
    unsigned long long v66;  // rax
    unsigned long long v68;  // rdi
    char *v69;  // xmm0
    char *v70;  // xmm1
    unsigned long long v71;  // r14
    char *v72;  // xmm1
    char *v73;  // xmm2
    unsigned long v74;  // rdx

    uu_cp::uu_app::h07bd295c994b8bb6(&v38);
    clap_builder::builder::command::Command::try_get_matches_from::h651af958e68d2ef9(&v33, &v38, a0, a1);
    if (*((long long *)&v33) != 0x8000000000000000)
    {
        v24 = *((long long *)&v37);
        *((int128_t *)&v23) = *((int128_t *)&v36);
        *((int128_t *)&v22) = *((int128_t *)&v35);
        *((int128_t *)&v20) = *((int128_t *)&v33);
        uu_cp::Options::from_matches::h583c69bc9ce4dd71(&v38, &v20);
        *((int128_t *)&v0) = *((int128_t *)&v38);
        *((int128_t *)&v2) = *((int128_t *)&v38);
        *((int128_t *)&v4) = *((int128_t *)&v38);
        *((int128_t *)&v5) = *((int128_t *)&v46);
        if (v25 == 0x8000000000000000)
        {
            v55 = *((int128_t *)&v0);
            v56 = *((int128_t *)&v2);
            v57 = *((int128_t *)&v4);
            v45 = v5;
            v43 = v57;
            v41 = v56;
            v39 = v55;
            v58 = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&v38);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v20);
            return v58;
        }
        v29 = v5;
        *((int128_t *)&v26) = *((int128_t *)&v0);
        *((int128_t *)&v27) = *((int128_t *)&v2);
        *((int128_t *)&v28) = *((int128_t *)&v4);
        v25 = v39;
        v30 = *((long long *)&v48);
        if (::0x4a70b0::_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*((int *)((char *)&v29 + 4))) && (v30 & 0xff00000000))
        {
            ::0x4a6400::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3b5d29524d766f5a(&v0);
            v41 = v2;
            *((int128_t *)&v39) = *((int128_t *)&v0);
            v42 = 1;
            v58 = alloc::boxed::Box$LT$T$GT$::new::h755e6a8ebff87d1a(&v38);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v25);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v20);
            return v58;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::hf6069bd586c08c95(&v38, &v20, "paths", 5);
        clap_builder::parser::error::MatchesError::unwrap::hbf61384cbe11cbdd(&v0, "paths", 5, &v38);
        if (!v0)
        {
            v62 = 0x8000000000000000;
        }
        else
        {
            *((int128_t *)&v50) = *((int128_t *)&v8);
            *((int128_t *)&v49) = *((int128_t *)&v7);
            *((int128_t *)&v47) = *((int128_t *)&v6);
            v59 = *((int128_t *)&v0);
            v60 = *((int128_t *)&v2);
            v61 = *((int128_t *)&v4);
            v45 = v5;
            v38 = v61;
            v38 = v60;
            v38 = v59;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9171c490969f9a3(&v9, &v38);
            v62 = v9;
            v64 = v11;
        }
        if (v62 == 0x8000000000000000)
            v66 = 0;
        v68 = (v62 != 0x8000000000000000 ? 8 : v10);
        if (v62 == 0x8000000000000000)
            v64 = 0;
        v9 = v66;
        v10 = v68;
        v11 = v64;
        uu_cp::parse_path_args::h55a50a93a970390a(&v38, &v9, &v25);
        *((int128_t *)&v0) = *((int128_t *)&(&v38)[1]);
        *((int128_t *)&v2) = *((int128_t *)&(&v38)[2]);
        *((int128_t *)&v4) = *((int128_t *)&(&v38)[2]);
        if (v39 != 13)
        {
            v69 = *((int128_t *)&v0);
            v70 = *((int128_t *)&v2);
            *((int128_t *)&v44) = *((int128_t *)&v4);
            v42 = v70;
            v40 = v69;
            v39 = v39;
            v46 = v46;
            v58 = alloc::boxed::Box$LT$T$GT$::new::h112e90f6cf14cc0a(&v38);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v25);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v20);
            return v58;
        }
        v17 = v2;
        *((int128_t *)&v16) = *((int128_t *)&v0);
        v19 = (&v4)[1];
        *((int128_t *)&v18) = *((int128_t *)&(&v2)[1]);
        uu_cp::copy::h5586f24b20d7299d(&v0, (&v16)[1], v2, (&v18)[1], (&v4)[1], &v25);
        v71 = v0;
        if (v71 != 13)
        {
            v72 = *((int128_t *)&v2);
            v73 = *((int128_t *)&v4);
            *((int128_t *)&v39) = *((int128_t *)&v0);
            v45 = v5;
            v43 = v73;
            v41 = v72;
            if ((int)v39 != 5)
            {
                v14 = uucore::util_name::h60d842bf27b05e82();
                v15 = v74;
                v31 = &v14;
                v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb9d827e717605a19;
                v9 = &g_5b2220;
                v10 = 2;
                v13 = 0;
                v11 = &v31;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                v14 = &v38;
                v15 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb0ee62246d91c7b9;
                v9 = &g_5b2240;
                v10 = 2;
                v13 = 0;
                v11 = &v14;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
            }
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&v38);
        }
        ::0x4a58c0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc6dd044fb69db49e(&v18);
        ::0x4a5d60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hefbacff032b8b327(&v16);
        core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h09fe722a3f614d90(&v25);
        if ((unsigned int)v71 == 13 && (unsigned int)v0 != 13)
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h7e81e8370de57ef1(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h67c8a88181f3246d(&v20);
    }
    else
    {
        v52 = *((long long *)&v34);
        uu_cp::uu_app::h07bd295c994b8bb6(&v38);
        switch (v53)
        {
        case 12:
            v54 = clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(&v38);
            if (v54)
            {
                v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v54);
                ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v38);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(v52);
                return v58;
            }
        case 14:
            clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(&v25, &v38);
            v20 = &v25;
            v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v0 = &g_41e7f0;
            v1 = 1;
            v4 = 0;
            v2 = &v20;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0);
            ::0x4a58d0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8dfa2e974c7791a7(&v25);
            break;
        default:
            v58 = alloc::boxed::Box$LT$T$GT$::new::h7f9c3bcb3656a690(v52);
            ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v38);
            return v58;
        }
        ::0x4a5b00::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha30265b204388bf3(&v38);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h738614231796cf96(v52);
    }
    return 0;
}
