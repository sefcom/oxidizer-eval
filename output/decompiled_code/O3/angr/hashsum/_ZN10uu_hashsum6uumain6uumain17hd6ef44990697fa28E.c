long long uu_hashsum::uumain::uumain::hd6ef44990697fa28(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x72b]
    char v1;  // [sp-0x72a]
    char v2;  // [sp-0x729]
    unsigned long long v3;  // [sp-0x728]
    unsigned long v4;  // [sp-0x720], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x718]
    int v6;  // [sp-0x710]
    int v7;  // [sp-0x700]
    unsigned long long v8;  // [sp-0x6f0]
    int v9;  // [sp-0x6e8]
    unsigned long long v10;  // [sp-0x6d8]
    char v11;  // [bp-0x6c8]
    char v12;  // [bp-0x6c0]
    char v13;  // [bp-0x6b8]
    unsigned long long v14;  // [sp-0x6b0]
    unsigned long long v15;  // [sp-0x6a8]
    unsigned long v16;  // [sp-0x6a0], Other Possible Types: unsigned long long
    int v17;  // [sp-0x698]
    char v18;  // [bp-0x688]
    int v19;  // [bp-0x678], Other Possible Types: char
    int v20;  // [bp-0x668], Other Possible Types: char, unsigned long
    unsigned long long v21;  // [sp-0x658]
    char v22;  // [bp-0x630]
    char v23;  // [bp-0x620]
    char v24;  // [bp-0x610]
    char v25;  // [bp-0x608], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v26;  // [sp-0x600], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x5f8], Other Possible Types: unsigned long
    unsigned long long v28;  // [sp-0x5f0]
    char v29;  // [bp-0x5e8], Other Possible Types: unsigned long long
    char v30;  // [sp-0x5e0]
    char v31;  // [sp-0x5df]
    char v32;  // [sp-0x5de]
    char v33;  // [sp-0x5dd]
    char v34;  // [bp-0x5d8]
    char v35;  // [bp-0x340]
    char v36;  // [bp-0x338]
    char v37;  // [bp-0x2f8]
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rax
    char v44;  // bpl
    int v45;  // xmm0
    void* v46;  // rax
    unsigned long long *v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rcx
    unsigned long long v51;  // r14
    unsigned long long v52;  // r8
    unsigned long long v54;  // r12
    unsigned long long v55;  // rax
    char v56;  // r13b
    char v57;  // 4098
    char *v58;  // rax
    char v59;  // bpl
    unsigned long long v60;  // r15
    unsigned long long v61;  // r13
    char v62;  // r12b
    unsigned long long v63;  // r9
    unsigned long long v64;  // rsi
    unsigned long long v65;  // r9

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h07e6e9bdae3dbd1d(&v19, &v18);
    if (*((long long *)&v19) != 0x8000000000000000)
    {
        v10 = *((long long *)&v20);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v25, "hashsumb2sumlengthbinary", 7);
        v10 = v27;
    }
    v9 = v19;
    v42 = std::path::Path::file_stem::h441d431a81936839((long long)(&v9)[8], v10, v40, v41);
    if (!v42)
        v42 = "hashsumb2sumlengthbinary";
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v11, v42, 7);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5b0a8cae6ca9cd06(&v25, &v9);
    v20 = v27;
    *((int128_t *)&v19) = *((int128_t *)&v25);
    core::iter::traits::iterator::Iterator::chain::hf6692a72f7a25d4f(&v22, &v19, a0, a1);
    uu_hashsum::uu_app::h9b41803411f21899(&v25, *((long long *)&v12), *((long long *)&v13));
    memcpy(&v37, &v25, 712);
    v44 = v35;
    v21 = *((long long *)&v24);
    v45 = *((int128_t *)&v22);
    *((int128_t *)&v20) = *((int128_t *)&v23);
    v19 = v45;
    clap_builder::builder::command::Command::try_get_matches_from::he8f7f707ce5ec104(&v25, &v37, &v19, v41);
    if (v4 == 0x8000000000000000)
    {
        v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v5);
        goto LABEL_577880;
    }
    v8 = *((long long *)&v34);
    *((int128_t *)&v7) = *((int128_t *)&v29);
    *((int128_t *)&v6) = *((int128_t *)&v27);
    v4 = v25;
    v5 = v26;
    if (!(char)alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hbcba38ba17ba20b8(*((long long *)&v12), *((long long *)&v13)))
    {
LABEL_5775be:
        v46 = 0;
        if (!v44)
            goto LABEL_5775c5;
LABEL_5775a9:
        uu_hashsum::create_algorithm_from_flags::hceb19e1c407a2c12(&v25, &v4, v49, v50, v52);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h53094e1d11212d71(&v25, &v4, "lengthbinary", 6);
        v47 = clap_builder::parser::error::MatchesError::unwrap::h3876fad60d0e3379("lengthbinary", 6, &v25);
        if (!v47)
            goto LABEL_5775be;
        uucore::features::checksum::calculate_blake2b_length::h78298dc6c9f22978(&v25, *(v47), v48);
        v46 = v26;
        if (!(!v25))
            goto LABEL_577876;
        v51 = v27;
        if (!(!v25))
            goto LABEL_5775a9;
LABEL_5775c5:
        uucore::features::checksum::detect_algo::hd92a9c93b700a840(&v25, *((long long *)&v12), *((long long *)&v13), v46, v51);
    }
    v46 = v26;
    if (!v3)
        goto LABEL_577876;
    *((int128_t *)&v17) = *((int128_t *)&(&v27)[1]);
    v3 = v25;
    v14 = v3;
    v15 = v46;
    v16 = v27;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "binary", 6);
    if (!v1)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "textSomee", 4);
    v54 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "statusquietstrictignore-missing", 6);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "strictignore-missing", 6);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "warnZeroV", 4);
    v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "ignore-missing", 14);
    v56 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "quietstrictignore-missing", 5) | (char)v54;
    if (!(char)v55)
    {
        v57 = v0;
        v0 = v57 | v56;
        if (!(!v57) || !(!v56))
        {
            goto LABEL_577851;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb8d394df3b093794(&v25, &v4, "no-namescapacitys", 8);
            if (*((int *)&v25) != 2)
                v58 = 0;
            if (!v58)
                v58 = &g_469ad0;
            v0 = *(v58);
            v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "zeroAnsib", 4);
            v60 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::h11d744de7c34709b(&v16);
            v61 = (long long)(&v17)[8];
            v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "tag- *blake2b (BLAKE2b (", 3);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h79b59ebf97021955(&v25, &v4, "fileEDOMmode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::h78618d0258c5fdbb(&v36, "fileEDOMmode{", 4, &v25);
            if (!*((long long *)&v36))
            {
                v25 = v3;
                v26 = v46;
                v27 = v60;
                v28 = v48;
                v29 = v61;
                v30 = v1;
                v31 = v62;
                v32 = v0;
                v33 = v59;
                v46 = uu_hashsum::hashsum::h0021b154372b5252(&v25, v64, v48, v41, v52, v65);
            }
            else
            {
                v25 = v3;
                v26 = v46;
                v27 = v60;
                v28 = v48;
                v29 = v61;
                v30 = v1;
                v31 = v62;
                v32 = v0;
                v33 = v59;
                v46 = uu_hashsum::hashsum::hd6be983b50fc790c(&v25, &v36, v48, v41, v52, v63);
            }
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::hc6945d2d91d1fd5c(v16, (long long)v17);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5274c0ec765de72b(&v4);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h4f9615d0d3367fd7(&v11);
        }
    }
    else
    {
        if (!((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "checkstatusquietstrictignore-missing", 5)) || !(((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "textSomee", 4) | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v4, "binary", 6)) != 1))
        {
LABEL_577851:
            v46 = alloc::boxed::Box$LT$T$GT$::new::h4218a701e20788c8(1);
            goto LABEL_577863;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h79b59ebf97021955(&v25, &v4, "fileEDOMmode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::h78618d0258c5fdbb(&v19, "fileEDOMmode{", 4, &v25);
            core::option::Option$LT$T$GT$::map_or_else::h056dfda3120eb257(&v25, &v19, v48);
            v46 = uucore::features::checksum::perform_checksum_validation::ha07aad1eef8f9821(v26, v27 * 16 + v26, v3, v46, 1, (long long)(&v17)[8], (unsigned int)((v54 & 4294967295 & 4294967295) * 0x1000000) | v56 * 0x10000 | v0 * 0x100000000 | (v2 & ((char)(v54 & 4294967295) ^ 1)) * 0x10000000000 | (v55 & 4294967295 & 4294967295) * 0x100 & 4294967295);
            ::0x578b80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h2a12a21266cd7de4(&v25);
LABEL_577863:
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::hc6945d2d91d1fd5c(v16, (long long)v17);
        }
LABEL_577876:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5274c0ec765de72b(&v4);
LABEL_577880:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h4f9615d0d3367fd7(&v11);
    }
    ::0x578ac0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc2aa096e4b95e811(&v9);
    return v46;
}
