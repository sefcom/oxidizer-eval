long long uu_shuf::uumain::uumain::he0c9c6e9cffa8175(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 **v0;  // [bp-0x4d8]
    struct struct_0 **v1;  // [sp-0x4d0]
    unsigned long long v2;  // [sp-0x4c8]
    struct struct_0 **v3;  // [sp-0x4b8], Other Possible Types: unsigned long
    struct struct_0 **v4;  // [sp-0x4b8]
    struct struct_0 **v5;  // [sp-0x4b0], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [sp-0x4a8], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x498]
    char v8;  // [bp-0x480]
    struct struct_0 **v9;  // [bp-0x478]
    struct struct_0 **v10;  // [bp-0x478]
    unsigned long long v11;  // [sp-0x468]
    unsigned long long v12;  // [sp-0x458]
    struct struct_0 **v13;  // [sp-0x450]
    unsigned long long v14;  // [sp-0x440]
    struct struct_0 **v15;  // [bp-0x438]
    struct struct_0 **v16;  // [sp-0x430]
    struct struct_0 **v17;  // [sp-0x428], Other Possible Types: unsigned long
    void* v18;  // [bp-0x420], Other Possible Types: struct struct_0 **
    struct struct_0 **v19;  // [bp-0x418]
    void* v20;  // [sp-0x410], Other Possible Types: unsigned long long
    struct struct_0 **v21;  // [sp-0x408], Other Possible Types: unsigned long
    void* v22;  // [sp-0x400], Other Possible Types: char
    char v23;  // [sp-0x3ff]
    unsigned long long v24;  // [sp-0x3f0]
    unsigned long v25;  // [sp-0x3e8]
    unsigned long long v26;  // [sp-0x3e0]
    struct struct_0 **v27;  // [sp-0x3d8]
    struct struct_0 **v28;  // [sp-0x3c8]
    unsigned long long v29;  // [sp-0x3b8]
    char v30;  // [bp-0x3b0]
    char v31;  // [bp-0x3a0]
    struct struct_0 **v32;  // [sp-0x398]
    struct struct_0 **v33;  // [sp-0x390]
    struct struct_0 **v34;  // [sp-0x388]
    struct struct_0 **v35;  // [sp-0x378]
    unsigned long long v36;  // [sp-0x368]
    unsigned long long v37;  // [sp-0x360]
    struct struct_0 **v38;  // [sp-0x358]
    struct struct_0 **v39;  // [sp-0x350]
    struct struct_0 **v40;  // [sp-0x348]
    struct struct_0 **v41;  // [sp-0x338]
    unsigned long long v42;  // [sp-0x328]
    unsigned long long v43;  // [sp-0x320]
    struct struct_0 **v44;  // [bp-0x318]
    struct struct_0 **v45;  // [bp-0x318]
    struct struct_0 **v46;  // [sp-0x310], Other Possible Types: unsigned long long
    struct struct_0 **v47;  // [sp-0x308], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v48;  // [bp-0x300], Other Possible Types: unsigned int
    void* v49;  // [bp-0x2f8], Other Possible Types: struct struct_0 **
    struct struct_0 **v50;  // [sp-0x2e8]
    char v51;  // [bp-0x48]
    struct struct_0 **v53;  // r14
    unsigned long long v54[3];  // rax
    struct struct_0 **v55;  // rax
    struct struct_0 **v56;  // rcx
    unsigned long long v60;  // rdx
    struct struct_0 **v61;  // xmm0
    struct struct_0 **v62;  // xmm1
    struct struct_0 **v63;  // xmm2
    unsigned long long v64;  // rax
    struct struct_0 **v65;  // rax
    struct struct_0 **v66;  // rax
    struct struct_0 **v67;  // rcx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // r15
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    char v75;  // al
    unsigned long long v76;  // rax
    char v77;  // al
    struct struct_0 **v78;  // xmm0
    struct struct_0 **v79;  // xmm1
    uint128_t *v81;  // rax
    struct struct_0 **v82;  // xmm0
    struct struct_0 **v83;  // xmm1
    struct struct_0 **v84;  // xmm0
    struct struct_0 **v85;  // xmm1

    uu_shuf::uu_app::h710a705446bc3bb0(&v44);
    clap_builder::builder::command::Command::try_get_matches_from::hb99de62d0bac49c5(&v3, &v44, a0, a1);
    if (v25 == 0x8000000000000000)
    {
        v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v26);
        return v53;
    }
    v29 = *((long long *)&v8);
    *((int128_t *)&v28) = *((int128_t *)&v7);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    v25 = v3;
    v26 = v5;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v25, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E, g_537f88))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v44, &v25, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98);
        v54 = clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98, &v44);
        if (!v54)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v44, &v25, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v44);
            if (!v3)
            {
                v15 = &core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                v16 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
                v17 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
                v18 = 0;
                v20 = 0;
                v22 = 0;
            }
            else
            {
                v61 = *((int128_t *)&v3);
                v62 = *((int128_t *)&v6);
                v63 = *((int128_t *)&v7);
                *((int128_t *)&v21) = *((int128_t *)&v8);
                v19 = v63;
                v17 = v62;
                v15 = v61;
            }
            v64 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&v15);
            if (!v64)
            {
                v0 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v44, v64);
                v2 = v47;
                *((int128_t *)&v0) = *((int128_t *)&v44);
            }
            ::0x46ee40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(&v44, "-unexpected argument '' found", 1);
            v6 = v47;
            *((int128_t *)&v3) = *((int128_t *)&v44);
            if (v0 == 0x8000000000000000)
            {
                v11 = v6;
                *((int128_t *)&v10) = *((int128_t *)&v3);
            }
            else
            {
                v11 = v2;
                *((int128_t *)&v10) = *((int128_t *)&v0);
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v3);
            }
            v65 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&v15);
            if (!v65)
            {
                v14 = v11;
                *((int128_t *)&v13) = *((int128_t *)&v10);
                v12 = 0;
                goto LABEL_47015c;
            }
            else
            {
                v0 = v65;
                v3 = &v0;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb52ac8e4df106051;
                v45 = &g_534da0;
                v46 = 2;
                v49 = 0;
                v47 = &v3;
                v48 = 1;
                ::0x46edf0::core::option::Option$LT$T$GT$::map_or_else::h56059d1a533ad2f3(&v30, &v44);
                v48 = 1;
                *((int128_t *)&v45) = *((int128_t *)&v30);
                v47 = *((long long *)&v31);
                v53 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v44);
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v10);
            }
        }
        else
        {
            uu_shuf::parse_range::h895d1bf452e4062a(&v3, v54[1], v54[2]);
            if (!v3)
            {
                v14 = *((long long *)&(&v6)[8]);
                *((int128_t *)&v13) = *((int128_t *)&v5);
                v12 = 2;
                goto LABEL_47015c;
            }
            else
            {
                v47 = *((long long *)&(&v6)[8]);
                *((int128_t *)&v44) = *((int128_t *)&v5);
                v48 = 1;
                v53 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v44);
            }
        }
LABEL_470af6:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v25);
        return v53;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v44, &v25, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
    clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v44);
    v55 = v3;
    if (v55)
    {
        v56 = v5;
        v60 = *((long long *)&v8);
    }
    else
    {
        v56 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v55 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
        v60 = 0;
    }
    v32 = v55;
    v33 = v56;
    *((int128_t *)&v34) = *((int128_t *)&v6);
    *((int128_t *)&v35) = *((int128_t *)&v7);
    v36 = *((long long *)&v8);
    v37 = v60;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd3beca26ae3e93d6(&v44, &v32);
    v14 = v47;
    *((int128_t *)&v13) = *((int128_t *)&v44);
    v12 = 1;
LABEL_47015c:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v44, &v25, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8);
    clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8, &v44);
    v66 = v3;
    if (v66)
    {
        v67 = v4;
        v71 = *((long long *)&(&v8)[8]);
    }
    else
    {
        v67 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v66 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
        v71 = 0;
    }
    v38 = v66;
    v39 = v67;
    *((int128_t *)&v40) = *((int128_t *)&v6);
    *((int128_t *)&v41) = *((int128_t *)&v7);
    v42 = *((long long *)&v8);
    v43 = v71;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8ae58320f9a9f8d8(&v51, &v38);
    uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(&v10, &v51);
    if (v10 != 0x8000000000000000)
    {
        v47 = v11;
        *((int128_t *)&v45) = *((int128_t *)&v10);
        v48 = 1;
        v53 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v44);
        goto LABEL_470792;
    }
    v72 = (&v10)[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v44, &v25, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8);
    v73 = clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8, &v44);
    if (!v73)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&v44, v73);
        v2 = v47;
        *((int128_t *)&v0) = *((int128_t *)&v44);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v44, &v25, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8);
    v74 = clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8, &v44);
    if (!v74)
    {
        v4 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&v44, v74);
        v6 = v47;
        *((int128_t *)&v4) = *((int128_t *)&v44);
    }
    v75 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v25, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE, g_537fe8) ? 0 : 10);
    v21 = v72;
    *((int128_t *)&v15) = *((int128_t *)&v0);
    v17 = v2;
    *((int128_t *)&v18) = *((int128_t *)&v4);
    v20 = v6;
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v25, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E, g_537fd8);
    v23 = v75;
    if (v72)
    {
        v76 = v12;
        if (!v76)
        {
            v11 = v14;
            v9 = v13;
            uu_shuf::read_input_file::h39a00d9d5113d201(&v44, (&v9)[1], v14);
            v53 = v46;
            if (v0 == 0x8000000000000000)
            {
                v24 = _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE & 0xffffffffffffff00 | v0 != 0x8000000000000000;
            }
            else
            {
                v0 = v45;
                v1 = v53;
                v2 = v47;
                v81 = ::0x46ef40::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 16);
                if (!v81)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
                *(v81) = *((int128_t *)&v1);
                alloc::slice::hack::into_vec::hd1dfd8daa9e7ad57(&v3, v81, 1);
                uu_shuf::find_seps::h99b31571ceae9626(&v3, v23);
                v84 = *((int128_t *)&v15);
                v85 = *((int128_t *)&v17);
                *((int128_t *)&v50) = *((int128_t *)&v21);
                *((int128_t *)&v49) = *((int128_t *)&(&v18)[1]);
                v47 = v85;
                v45 = v84;
                v53 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&v3, &v44);
                if (!v53)
                {
                    ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                    ::0x46ea30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&v0);
                    ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v10);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v25);
                    return 0;
                }
                ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                ::0x46ea30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&v0);
                v24 = v24;
            }
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v10);
            v77 = v24;
LABEL_470a3a:
            if (!v77 && v15 != 0x8000000000000000)
            {
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v15);
            }
            else
            {
                if (!(!v77))
                    goto LABEL_470abd;
            }
        }
        else
        {
            if ((unsigned int)v76 == 1)
            {
                v2 = v14;
                v0 = v13;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0c1703a302f6baf2(&v3, v1, &v1[3 * v2]);
                uu_shuf::find_seps::h99b31571ceae9626(&v3, v23);
                v82 = *((int128_t *)&v15);
                v83 = *((int128_t *)&v17);
                *((int128_t *)&v50) = *((int128_t *)&v21);
                *((int128_t *)&v49) = *((int128_t *)&(&v18)[1]);
                v47 = v83;
                v45 = v82;
                v53 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&v3, &v44);
                if (!v53)
                {
                    ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                    ::0x46eb80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&v0);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v25);
                    return 0;
                }
                ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                ::0x46eb80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&v0);
            }
            else
            {
                v6 = v14;
                v3 = v13;
                v78 = *((int128_t *)&v15);
                v79 = *((int128_t *)&v17);
                *((int128_t *)&v50) = *((int128_t *)&v21);
                *((int128_t *)&v49) = *((int128_t *)&(&v18)[1]);
                v47 = v79;
                v45 = v78;
                v53 = uu_shuf::shuf_exec::h63b6b406387eb323(&v3, &v44);
                if (!v53)
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v25);
                    return 0;
                }
LABEL_470792:
LABEL_470abd:
            }
            if (v12)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v25);
                return v53;
            }
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v13);
            goto LABEL_470af6;
        }
    }
    else if (v15 == 0x8000000000000000)
    {
        v53 = 0;
        v77 = 0;
        goto LABEL_470a3a;
    }
    else
    {
        v47 = v17;
        *((int128_t *)&v45) = *((int128_t *)&v15);
        std::fs::File::create::hb8ccd5b0dd142e83(&v3, v46, v17);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h67140753012254c0(&v0, &v3, &v44);
        v53 = v0;
        if (v53)
        {
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v44);
        }
        else
        {
            *((int *)&v9) = (int)v1;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h7b66de550f035524(&v10);
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v44);
            v53 = 0;
        }
    }
    ::0x46ec50::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&v18);
    goto LABEL_470abd;
}
