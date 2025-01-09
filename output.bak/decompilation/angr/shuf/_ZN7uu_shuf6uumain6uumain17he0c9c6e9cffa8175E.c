long long uu_shuf::uumain::uumain::he0c9c6e9cffa8175(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 **v0;  // [sp-0x4d8]
    struct struct_0 **v1;  // [sp-0x4d0]
    unsigned long long v2;  // [sp-0x4c8]
    struct struct_0 **v3;  // [bp-0x4b8], Other Possible Types: unsigned long long, unsigned long
    unsigned long v4;  // [sp-0x4b0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x4a8], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0x498]
    char v7;  // [bp-0x488]
    char v8;  // [bp-0x480]
    struct struct_0 **v9;  // [bp-0x478]
    unsigned long long v10;  // [sp-0x468]
    unsigned long long v11;  // [sp-0x458]
    struct struct_0 **v12;  // [sp-0x450]
    unsigned long long v13;  // [sp-0x440]
    struct struct_0 **v14;  // [bp-0x438]
    struct struct_0 **v15;  // [sp-0x430]
    struct struct_0 **v16;  // [bp-0x428], Other Possible Types: unsigned long, unsigned long long
    void* v17;  // [sp-0x420], Other Possible Types: struct struct_0 **
    struct struct_0 **v18;  // [bp-0x418]
    void* v19;  // [sp-0x410], Other Possible Types: unsigned long long
    struct struct_0 **v20;  // [bp-0x408], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x400], Other Possible Types: char
    char v22;  // [sp-0x3ff]
    unsigned long long v23;  // [sp-0x3f0]
    unsigned long v24;  // [sp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x3e0]
    struct struct_0 **v26;  // [sp-0x3d8]
    struct struct_0 **v27;  // [sp-0x3c8]
    unsigned long long v28;  // [sp-0x3b8]
    char v29;  // [bp-0x3b0]
    char v30;  // [bp-0x3a0]
    struct struct_0 **v31;  // [sp-0x398]
    struct struct_0 **v32;  // [sp-0x390]
    struct struct_0 **v33;  // [sp-0x388]
    struct struct_0 **v34;  // [sp-0x378]
    unsigned long long v35;  // [sp-0x368]
    unsigned long long v36;  // [sp-0x360]
    struct struct_0 **v37;  // [sp-0x358]
    struct struct_0 **v38;  // [sp-0x350]
    struct struct_0 **v39;  // [sp-0x348]
    struct struct_0 **v40;  // [sp-0x338]
    unsigned long long v41;  // [sp-0x328]
    unsigned long long v42;  // [sp-0x320]
    struct struct_0 **v43;  // [bp-0x318]
    struct struct_0 **v44;  // [sp-0x310], Other Possible Types: unsigned long long
    struct struct_0 **v45;  // [sp-0x308], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v46;  // [bp-0x300], Other Possible Types: unsigned int
    void* v47;  // [bp-0x2f8], Other Possible Types: struct struct_0 **
    struct struct_0 **v48;  // [sp-0x2e8]
    char v49;  // [bp-0x48]
    struct struct_0 **v51;  // rax
    unsigned long long v52[3];  // rax
    struct struct_0 **v53;  // rax
    unsigned long long v57;  // rdx
    struct struct_0 **v59;  // xmm0
    struct struct_0 **v60;  // xmm1
    struct struct_0 **v61;  // xmm2
    unsigned long long v62;  // rax
    struct struct_0 **v63;  // rax
    struct struct_0 **v64;  // rax
    unsigned long long v68;  // rdx
    unsigned long long v69;  // r15
    char v70;  // al
    unsigned long long v71;  // rax
    char v72;  // al
    struct struct_0 **v73;  // xmm0
    struct struct_0 **v74;  // xmm1
    uint128_t *v76;  // rax
    struct struct_0 **v77;  // xmm0
    struct struct_0 **v78;  // xmm1
    struct struct_0 **v79;  // xmm0
    struct struct_0 **v80;  // xmm1

    uu_shuf::uu_app::h710a705446bc3bb0(&v43);
    clap_builder::builder::command::Command::try_get_matches_from::hb99de62d0bac49c5(&v3, &v43, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v51 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v25);
        return v51;
    }
    v28 = *((long long *)&v7);
    *((int128_t *)&v27) = *((int128_t *)&v6);
    *((int128_t *)&v26) = *((int128_t *)&v5);
    v24 = v3;
    v25 = v4;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v24, _ZN7uu_shuf7options4ECHO17h4d6a54735092e1a8E, g_537f88))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v43, &v24, _ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98);
        v52 = clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options11INPUT_RANGE17ha18e79953fe11236E, g_537f98, &v43);
        if (!v52)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v43, &v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v43);
            if (!v3)
            {
                v14 = &core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                v15 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
                v16 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
                v17 = 0;
                v19 = 0;
                v21 = 0;
            }
            else
            {
                v59 = *((int128_t *)&v3);
                v60 = *((int128_t *)&v5);
                v61 = *((int128_t *)&v6);
                *((int128_t *)&v20) = *((int128_t *)&v7);
                v18 = v61;
                v16 = v60;
                v14 = v59;
            }
            v62 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&v14);
            if (!v62)
            {
                v0 = 0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v62);
                v2 = v45;
                *((int128_t *)&v0) = *((int128_t *)&v43);
            }
            ::0x46ee40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(&v43, "-unexpected argument '' found", 1);
            v5 = v45;
            *((int128_t *)&v3) = *((int128_t *)&v43);
            if (v0 == 0x8000000000000000)
            {
                v10 = v5;
                *((int128_t *)&v9) = *((int128_t *)&v3);
            }
            else
            {
                v10 = v2;
                *((int128_t *)&v9) = *((int128_t *)&v0);
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v3);
            }
            v63 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&v14);
            if (!v63)
            {
                v13 = v10;
                *((int128_t *)&v12) = *((int128_t *)&v9);
                v11 = 0;
                goto LABEL_47015c;
            }
            else
            {
                v0 = v63;
                v3 = &v0;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb52ac8e4df106051;
                v43 = &g_534da0;
                v44 = 2;
                v47 = 0;
                v45 = &v3;
                v46 = 1;
                ::0x46edf0::core::option::Option$LT$T$GT$::map_or_else::h56059d1a533ad2f3();
                v46 = 1;
                *((int128_t *)&v43) = *((int128_t *)&v29);
                v45 = *((long long *)&v30);
                v51 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v43);
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v9);
            }
        }
        else
        {
            uu_shuf::parse_range::h895d1bf452e4062a(&v3, v52[1], v52[2]);
            if (!v3)
            {
                v13 = *((long long *)&(&v5)[8]);
                *((int128_t *)&v12) = *((int128_t *)&v4);
                v11 = 2;
                goto LABEL_47015c;
            }
            else
            {
                v45 = *((long long *)&(&v5)[8]);
                *((int128_t *)&v43) = *((int128_t *)&v4);
                v46 = 1;
                v51 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v43);
            }
        }
LABEL_470af6:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v24);
        return v51;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v43, &v24, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8);
    clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options12FILE_OR_ARGS17h26f429c955b2c591E, g_537ff8, &v43);
    v53 = v3;
    if (!v53)
    {
        v53 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
        v57 = 0;
    }
    else
    {
        v57 = *((long long *)&v8);
    }
    v31 = v53;
    v32 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
    *((int128_t *)&v33) = *((int128_t *)&v5);
    *((int128_t *)&v34) = *((int128_t *)&v6);
    v35 = *((long long *)&v7);
    v36 = v57;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd3beca26ae3e93d6(&v43, &v31);
    v13 = v45;
    *((int128_t *)&v12) = *((int128_t *)&v43);
    v11 = 1;
LABEL_47015c:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&v43, &v24, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8);
    clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&v3, _ZN7uu_shuf7options10HEAD_COUNT17h84a4a88dc7c244fbE, g_537fa8, &v43);
    v64 = v3;
    if (!v64)
    {
        v64 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
        v68 = 0;
    }
    else
    {
        v68 = *((long long *)&v8);
    }
    v37 = v64;
    v38 = &"a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
    *((int128_t *)&v39) = *((int128_t *)&v5);
    *((int128_t *)&v40) = *((int128_t *)&v6);
    v41 = *((long long *)&v7);
    v42 = v68;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8ae58320f9a9f8d8(&v49, &v37);
    uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(&v9, &v49);
    if (v9 != 0x8000000000000000)
    {
        v45 = v10;
        *((int128_t *)&v43) = *((int128_t *)&v9);
        v46 = 1;
        v51 = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&v43);
        goto LABEL_470792;
    }
    v69 = (&v9)[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v43, &v24, _ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8);
    if (!clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options6OUTPUT17he214da8d3d01c4beE, g_537fb8, &v43))
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc();
        v2 = v45;
        *((int128_t *)&v0) = *((int128_t *)&v43);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&v43, &v24, _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8);
    if (!clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(_ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE, g_537fc8, &v43))
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc();
        v5 = v45;
        *((int128_t *)&v3) = *((int128_t *)&v43);
    }
    v70 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v24, _ZN7uu_shuf7options15ZERO_TERMINATED17haef6daedf12df78fE, g_537fe8) ? 0 : 10);
    v20 = v69;
    *((int128_t *)&v14) = *((int128_t *)&v0);
    v16 = v2;
    *((int128_t *)&v17) = *((int128_t *)&v3);
    v19 = v5;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v24, _ZN7uu_shuf7options6REPEAT17h860841fa9720eb58E, g_537fd8);
    v22 = v70;
    if (v69)
    {
        v71 = v11;
        if (!v71)
        {
            v10 = v13;
            v9 = v12;
            uu_shuf::read_input_file::h39a00d9d5113d201(&v43, (&v9)[1], v13);
            if (v0 == 0x8000000000000000)
            {
                v23 = _ZN7uu_shuf7options13RANDOM_SOURCE17hbe4709ac8bb54b6cE | -0x100 | v0 != 0x8000000000000000;
            }
            else
            {
                v0 = v43;
                v51 = v44;
                v2 = v45;
                v76 = ::0x46ef40::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 16);
                if (!v76)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
                *(v76) = *((int128_t *)&v1);
                alloc::slice::hack::into_vec::hd1dfd8daa9e7ad57(&v3, v76, 1);
                uu_shuf::find_seps::h99b31571ceae9626(&v3, v22);
                v79 = *((int128_t *)&v14);
                v80 = *((int128_t *)&v16);
                *((int128_t *)&v48) = *((int128_t *)&v20);
                *((int128_t *)&v47) = *((int128_t *)&(&v17)[1]);
                v45 = v80;
                v43 = v79;
                v51 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&v3, &v43);
                if (!v51)
                {
                    ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                    ::0x46ea30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&v0);
                    ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v9);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v24);
                    return 0;
                }
                ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                ::0x46ea30::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&v0);
                v23 = v23;
            }
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v9);
            v72 = v23;
LABEL_470a3a:
            if (!v72 && v14 != 0x8000000000000000)
            {
                ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v14);
            }
            else
            {
                if (!(!v72))
                    goto LABEL_470abd;
            }
        }
        else
        {
            if ((unsigned int)v71 == 1)
            {
                v2 = v13;
                v0 = v12;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0c1703a302f6baf2(&v3, v1, &v1[3 * v2]);
                uu_shuf::find_seps::h99b31571ceae9626(&v3, v22);
                v77 = *((int128_t *)&v14);
                v78 = *((int128_t *)&v16);
                *((int128_t *)&v48) = *((int128_t *)&v20);
                *((int128_t *)&v47) = *((int128_t *)&(&v17)[1]);
                v45 = v78;
                v43 = v77;
                v51 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&v3, &v43);
                if (!v51)
                {
                    ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                    ::0x46eb80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&v0);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v24);
                    return 0;
                }
                ::0x46eb40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&v3);
                ::0x46eb80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&v0);
            }
            else
            {
                v5 = v13;
                v3 = v12;
                v73 = *((int128_t *)&v14);
                v74 = *((int128_t *)&v16);
                *((int128_t *)&v48) = *((int128_t *)&v20);
                *((int128_t *)&v47) = *((int128_t *)&(&v17)[1]);
                v45 = v74;
                v43 = v73;
                v51 = uu_shuf::shuf_exec::h63b6b406387eb323(&v3, &v43);
                if (!v51)
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v24);
                    return 0;
                }
LABEL_470792:
LABEL_470abd:
            }
            if (v11)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&v24);
                return v51;
            }
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v12);
            goto LABEL_470af6;
        }
    }
    else if (v14 == 0x8000000000000000)
    {
        v51 = 0;
        v72 = 0;
        goto LABEL_470a3a;
    }
    else
    {
        v45 = v16;
        *((int128_t *)&v43) = *((int128_t *)&v14);
        std::fs::File::create::hb8ccd5b0dd142e83(&v3, v44, v16);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h67140753012254c0(&v0, &v3, &v43);
        v51 = v0;
        if (v51)
        {
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v43);
        }
        else
        {
            *((int *)&v9) = (int)v1;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h7b66de550f035524(&v9);
            ::0x46ea10::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&v43);
            v51 = 0;
        }
    }
    ::0x46ec50::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&v17);
    goto LABEL_470abd;
}
