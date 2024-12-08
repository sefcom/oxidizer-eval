long long uu_cp::uumain::uumain::hd574dddef84b12ff(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    unsigned long long v10;  // [sp-0x438]
    unsigned long long v11;  // [sp-0x430]
    void* v12;  // [sp-0x428]
    unsigned long v13;  // [sp-0x418], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x410]
    int v15;  // [sp-0x408]
    unsigned long long v16;  // [sp-0x3f8]
    int v17;  // [sp-0x3e8]
    unsigned long long v18;  // [sp-0x3d8]
    int v19;  // [bp-0x3c8], Other Possible Types: unsigned long long
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
    unsigned long v30;  // [sp-0x340], Other Possible Types: unsigned long long
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
    struct_0 *v50;  // r14
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // r8
    unsigned long long v56;  // r9
    unsigned int v57;  // eax
    unsigned long long v58;  // rcx
    unsigned long long v59;  // r8
    unsigned long long v60;  // r9
    unsigned long long v61;  // rax
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    void* v65;  // rax
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm2
    unsigned long long v69;  // rax
    int v70;  // xmm0
    int v71;  // xmm1
    unsigned long long v72;  // r14
    int v73;  // xmm1
    int v74;  // xmm2
    unsigned long long v75;  // rsi

    uu_cp::uu_app::hb9ec3c1c5c733117(&v37, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hc0aa2b49337e939c(&v32, &v37, a0, a1);
    if (*((long long *)&v32) != 0x8000000000000000)
    {
        v23 = *((long long *)&v36);
        *((int128_t *)&v22) = *((int128_t *)&v35);
        *((int128_t *)&v21) = *((int128_t *)&v34);
        *((int128_t *)&v19) = *((int128_t *)&v32);
        uu_cp::Options::from_matches::h207b2768addbc1df(&v37, &v19, v53, v54, v55, v56);
        *((int128_t *)&v0) = *((int128_t *)&v38);
        *((int128_t *)&v1) = *((int128_t *)&v40);
        *((int128_t *)&v3) = *((int128_t *)&v42);
        *((int128_t *)&v4) = *((int128_t *)&v44);
        if (v24 == 0x8000000000000000)
        {
            v62 = (int128_t)v0;
            v63 = (int128_t)v1;
            v64 = (int128_t)v3;
            v43 = v4;
            v41 = v64;
            v39 = v63;
            v37 = v62;
            v65 = alloc::boxed::Box$LT$T$GT$::new::ha33b15a3af0551bd(&v37);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h28b0eea68bd31033(&v19);
            return v65;
        }
        v28 = v4;
        *((int128_t *)&v25) = (int128_t)v0;
        *((int128_t *)&v26) = (int128_t)v1;
        *((int128_t *)&v27) = (int128_t)v3;
        v24 = v37;
        v29 = *((long long *)&v46);
        if (::0x4a6fb0::_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbf8e45010c0ba4e4((int)(&v28)[4]) && (v29 & 0xff00000000))
        {
            ::0x4a6320::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4092c3bea6b5021f(&v0);
            v39 = v1;
            *((int128_t *)&v37) = (int128_t)v0;
            v40 = 1;
            v65 = alloc::boxed::Box$LT$T$GT$::new::h8cf2a55cea8ea290(&v37);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h00e2f1f02564e6c3(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h28b0eea68bd31033(&v19);
            return v65;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many::h9a7c3393c018b8b6(&v37, &v19, "paths", 5);
        clap_builder::parser::error::MatchesError::unwrap::hcaf1cc8104b450e1(&v0, "paths", 5, &v37);
        if (!v0)
        {
            v69 = 0x8000000000000000;
        }
        else
        {
            *((int128_t *)&v48) = *((int128_t *)&v7);
            *((int128_t *)&v47) = *((int128_t *)&v6);
            *((int128_t *)&v45) = *((int128_t *)&v5);
            v66 = (int128_t)v0;
            v67 = (int128_t)v1;
            v68 = (int128_t)v3;
            v43 = v4;
            v41 = v68;
            v39 = v67;
            v37 = v66;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3830df0c287b6362(&v8, &v37);
        }
        if (v69 == 0x8000000000000000)
            v69 = 0;
        v8 = v69;
        v9 = 8;
        v10 = 0;
        uu_cp::parse_path_args::he8618905f8a43cbe(&v37, &v8, &v24);
        *((int128_t *)&v0) = (int128_t)(&v37)[8];
        *((int128_t *)&v1) = (int128_t)(&v38)[16];
        *((int128_t *)&v3) = (int128_t)(&v41)[8];
        if (v37 != 13)
        {
            v70 = (int128_t)v0;
            v71 = (int128_t)v1;
            *((int128_t *)&v42) = (int128_t)v3;
            v40 = v71;
            v38 = v70;
            v37 = v37;
            v44 = v44;
            v65 = alloc::boxed::Box$LT$T$GT$::new::ha33b15a3af0551bd(&v37);
            core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h00e2f1f02564e6c3(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h28b0eea68bd31033(&v19);
            return v65;
        }
        v16 = v1;
        *((int128_t *)&v15) = (int128_t)v0;
        v18 = (long long)(&v3)[8];
        *((int128_t *)&v17) = (int128_t)(&v1)[8];
        uu_cp::copy::h8367588ac9094380(&v0, (long long)(&v15)[8], v1, (long long)(&v17)[8], (long long)(&v3)[8], &v24);
        v72 = v0;
        if (v72 != 13)
        {
            v73 = (int128_t)v1;
            v74 = (int128_t)v3;
            *((int128_t *)&v37) = (int128_t)v0;
            v43 = v4;
            v41 = v74;
            v39 = v73;
            if ((int)v37 != 5)
            {
                v13 = uucore::util_name::h412db5e565a079f3();
                v14 = v53;
                v30 = &v13;
                v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h269ecdcdec3f1e36;
                v8 = &g_5b1b88;
                v9 = 2;
                v12 = 0;
                v10 = &v30;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v75, v53);
                v13 = &v37;
                v14 = _$LT$uu_cp..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f09c678ab52ab48;
                v8 = &g_5b1ba8;
                v9 = 2;
                v12 = 0;
                v10 = &v13;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v75, v53);
            }
            uucore::mods::error::set_exit_code::h6705c4226a43fa90();
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::hf27985b4c037fb35(&v37, v75, v53, v54, v55, v56, (long long)v0, (long long)(&v0)[8], (long long)v1);
        }
        ::0x4a57e0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h0096b584813963bd(&v17);
        ::0x4a5c80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::ha900f3f4446050ef(&v15);
        core::ptr::drop_in_place$LT$uu_cp..Options$GT$::h00e2f1f02564e6c3(&v24);
        if ((unsigned int)v72 == 13 && (unsigned int)v0 != 13)
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::hf27985b4c037fb35(&v0, v75, v53, v54, v55, v56, (long long)v0, (long long)(&v0)[8], (long long)v1);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h28b0eea68bd31033(&v19);
    }
    else
    {
        v50 = *((long long *)&v33);
        uu_cp::uu_app::hb9ec3c1c5c733117(&v37, v51, v52);
        switch (v57)
        {
        case 12:
            v61 = clap_builder::builder::command::Command::print_help::h312981effd3aecd5(&v37, v51, v52, v58, v59, v60);
            if (v61)
            {
                v65 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v61);
                ::0x4a5a20::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7632830702974b3b(&v37);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h26a2a9eeb1b35ff0(v50);
                return v65;
            }
        case 14:
            clap_builder::builder::command::Command::render_version::h713daecc456d7d5d(&v24, &v37);
            v19 = &v24;
            v20 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = 0;
            v2 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v51, v52);
            ::0x4a57f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h131240f6b9e36043(&v24);
            break;
        default:
            v65 = alloc::boxed::Box$LT$T$GT$::new::h688eb32c28a7fea6(v50);
            ::0x4a5a20::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7632830702974b3b(&v37);
            return v65;
        }
        ::0x4a5a20::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h7632830702974b3b(&v37);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h26a2a9eeb1b35ff0(v50);
    }
    return 0;
}
