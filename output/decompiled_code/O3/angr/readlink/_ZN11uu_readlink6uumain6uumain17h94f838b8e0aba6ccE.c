long long uu_readlink::uumain::uumain::h94f838b8e0aba6cc(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x3de]
    char v1;  // [sp-0x3dd]
    unsigned int v2;  // [sp-0x3dc]
    int v3;  // [bp-0x3d8], Other Possible Types: char, unsigned long
    char v4;  // [bp-0x3d0]
    unsigned long long v5;  // [sp-0x3c8]
    unsigned long v6;  // [sp-0x3b8], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [sp-0x3a8], Other Possible Types: unsigned long, unsigned long long
    void* v9;  // [sp-0x3a0], Other Possible Types: unsigned long
    int v10;  // [bp-0x398], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x390]
    char v12;  // [bp-0x388], Other Possible Types: unsigned long long, unsigned long
    unsigned long v13;  // [sp-0x380], Other Possible Types: unsigned long long
    char v14;  // [bp-0x378]
    char v15;  // [bp-0x368]
    char v16;  // [bp-0x358]
    unsigned long v17;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x340]
    int v19;  // [sp-0x338]
    int v20;  // [sp-0x328]
    unsigned long long v21;  // [sp-0x318]
    char v22;  // [bp-0x310]
    char v23;  // [bp-0x300]
    int v24;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v25;  // [sp-0x2f0]
    int v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x2e0]
    int v28;  // [bp-0x2d8]
    int v29;  // [sp-0x2c8]
    unsigned long long v31;  // rdx
    void* v32;  // rax
    int v33;  // xmm0
    unsigned long long v35;  // rax
    char v36;  // bpl
    int v37;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // ymm0
    unsigned long long v45[3];  // rax
    unsigned long long v46[3];  // r14
    unsigned int v47;  // r12d
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // xmm0
    int v51;  // xmm0
    unsigned long long v52;  // r12

    uu_readlink::uu_app::hb6a5369859cce90e(&v24, a1, v31);
    clap_builder::builder::command::Command::try_get_matches_from::hc4ec72c45c745bcd(&v12, &v24, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v18);
        return v32;
    }
    v21 = *((long long *)&v16);
    v33 = *((int128_t *)&v14);
    *((int128_t *)&v20) = *((int128_t *)&v15);
    v19 = v33;
    v17 = v12;
    v18 = v13;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "zero", 4);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "silentquietverbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 6))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "quietverbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 5);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "verbosecanonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 7);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalizecanonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 12);
    if ((char)v35)
    {
LABEL_4693a7:
        v2 = v35 | -0x100 | 2;
        v36 = 0;
    }
    else
    {
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 21);
        if (!(!(char)v35) || !((v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalize-missingfilesignoring --no-newline with multiple arguments\n", 20), !(char)v35)))
            goto LABEL_4693a7;
        v36 = vvar_207{reg 56} | -0x100 | 1;
        v2 = 0;
    }
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalize-existingcanonicalize-missingfilesignoring --no-newline with multiple arguments\n", 21))
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalize-missingfilesignoring --no-newline with multiple arguments\n", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4a477c94e835c57b(&v24, &v17, "filesignoring --no-newline with multiple arguments\n", 5);
    clap_builder::parser::error::MatchesError::unwrap::ha3c7814ddfc886d4(&v12, "filesignoring --no-newline with multiple arguments\n", 5, &v24);
    if (!v12 || (v37 = *((int128_t *)&v12), *((int128_t *)&v29) = *((int128_t *)&v16), *((int128_t *)&v28) = *((int128_t *)&v15), *((int128_t *)&v26) = *((int128_t *)&v14), v24 = v37, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc709b5504b58275c(&v3, &v24, v31), v39 = *((int128_t *)&v4), v10 = v39, v7 == 0x8000000000000000))
    {
        v7 = 0;
        v8 = 8;
        v9 = 0;
    }
    else
    {
        v40 = (int128_t)v10;
        v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v8 = v40;
        v7 = v3;
        if (v9)
        {
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "no-newline", 10))
            {
            }
            v10 = v8;
            v11 = v10 + (v9 + v9 * 2) * 8;
            v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h769580ba347b6159(&v10);
            if (v45)
            {
                v46 = v45;
                if (!v36)
                {
                    v47 = (char)v2;
                }
                else
                {
                    do
                    {
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v24, v46[1], v46[2]);
                        v48 = (int128_t)v24;
                        v3 = v48;
                        v5 = v26;
                        std::fs::read_link::h3222d730e5e25dcb(&v12, &v3, v31);
                        if (v12 == 0x8000000000000000)
                            goto LABEL_469850;
                        v49 = *((int128_t *)&v12);
                        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                        v24 = v49;
                        v26 = *((long long *)&v14);
                        v32 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3d969b891ed91d0b(uu_readlink::show::hd4a959746bf8b97f(v25, *((long long *)&v14), 11));
                        if (!(!(char)v35) || !((v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, "canonicalize-missingfilesignoring --no-newline with multiple arguments\n", 20), !(char)v35)))
                            goto LABEL_4698d0;
                        ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v24);
                        ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v3);
                        v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h769580ba347b6159(&v10);
                    } while (v46);
                    goto LABEL_469831;
                }
                do
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v24, v46[1], v46[2]);
                    v50 = (int128_t)v24;
                    v3 = v50;
                    v5 = v26;
                    uucore::features::fs::canonicalize::h0bf1015435303b30(&v12, &v3, 1, v47);
                    if (v12 == 0x8000000000000000)
                    {
LABEL_469850:
                        v52 = v13;
                        if (!v0)
                        {
                            v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
                            ::0x469bd0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9b599f984be26727(v52);
                        }
                        else
                        {
                            v6 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h558902219f68e8d6(v52, v46);
                            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6b3b08f616bb3370(&v22, &v6, v31);
                            v27 = 1;
                            *((int128_t *)&v24) = *((int128_t *)&v22);
                            v26 = *((long long *)&v23);
                            v32 = alloc::boxed::Box$LT$T$GT$::new::h0af7828731b317ab(&v24);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::he97f48995057d7b0(v6);
                            goto LABEL_4698fb;
                        }
                        goto LABEL_4698fb;
                    }
                    v51 = *((int128_t *)&v12);
                    v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                    v24 = v51;
                    v26 = *((long long *)&v14);
                    v32 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3d969b891ed91d0b(uu_readlink::show::hd4a959746bf8b97f(v25, *((long long *)&v14), 11));
                    if (v32)
                    {
LABEL_4698d0:
                        ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v24);
LABEL_4698fb:
                        ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v3);
                        ::0x469cc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h00d9d72c9911ea04(&v7);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6b2b09477d110f74(&v17);
                        return v32;
                    }
                    ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v24);
                    ::0x469bb0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfc642129f817c855(&v3);
                    v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h769580ba347b6159(&v10);
                } while (v46);
            }
LABEL_469831:
            ::0x469cc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h00d9d72c9911ea04(&v7);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6b2b09477d110f74(&v17);
            return 0;
        }
    }
    ::0x46a020::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h78add09093be5467(&v12);
    v26 = *((long long *)&v14);
    *((int128_t *)&v24) = *((int128_t *)&v12);
    v27 = 1;
    v32 = alloc::boxed::Box$LT$T$GT$::new::h0af7828731b317ab(&v24);
    ::0x469cc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h00d9d72c9911ea04(&v7);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6b2b09477d110f74(&v17);
    return v32;
}
