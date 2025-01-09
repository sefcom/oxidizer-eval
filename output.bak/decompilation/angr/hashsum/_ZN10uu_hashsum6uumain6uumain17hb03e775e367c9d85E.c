long long uu_hashsum::uumain::uumain::hb03e775e367c9d85(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    char v45;  // bpl
    int v46;  // xmm0
    void* v47;  // rax
    unsigned long long *v48;  // rax
    unsigned long long v49;  // r14
    unsigned long long v51;  // r12
    unsigned long long v52;  // rax
    char v53;  // r13b
    char v54;  // 4098
    char *v55;  // rax
    char v56;  // bpl
    unsigned long long v57;  // r15
    unsigned long long v58;  // r13
    char v59;  // r12b
    unsigned long v61;  // rdx

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h096e5dfd273c576c(&v19, &v18);
    if (*((long long *)&v19) != 0x8000000000000000)
    {
        v10 = *((long long *)&v20);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v25, "hashsumlength", 7);
        v10 = v27;
    }
    v9 = v19;
    v40 = std::path::Path::file_stem::h441d431a81936839((long long)(&v9)[8], v10);
    if (!v40)
        v41 = "hashsumlength";
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v11, v41, 7);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h137756251426bd57(&v25, &v9);
    v20 = v27;
    *((int128_t *)&v19) = *((int128_t *)&v25);
    core::iter::traits::iterator::Iterator::chain::h97a8a1bc38742947(&v22, &v19, a0, a1);
    uu_hashsum::uu_app::hc311ff14781827c9(&v25, *((long long *)&v12), *((long long *)&v13));
    memcpy(&v37, &v25, 712);
    v45 = v35;
    v21 = *((long long *)&v24);
    v46 = *((int128_t *)&v22);
    *((int128_t *)&v20) = *((int128_t *)&v23);
    v19 = v46;
    clap_builder::builder::command::Command::try_get_matches_from::h6accf9addc69a3f7(&v25, &v37, &v19);
    if (v4 == 0x8000000000000000)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v5);
        goto LABEL_577780;
    }
    v8 = *((long long *)&v34);
    *((int128_t *)&v7) = *((int128_t *)&v29);
    *((int128_t *)&v6) = *((int128_t *)&v27);
    v4 = v25;
    v5 = v26;
    if (!(char)alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hbcba38ba17ba20b8(*((long long *)&v12), *((long long *)&v13)))
    {
LABEL_5774be:
        v47 = 0;
        v49 = 0x8000000000000000;
        if (!v45)
            goto LABEL_5774c5;
LABEL_5774a9:
        uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(&v25, &v4);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb563847c130c951d(&v25, &v4, "length", 6);
        v48 = clap_builder::parser::error::MatchesError::unwrap::hf231815055423523("length", 6, &v25);
        if (!v48)
            goto LABEL_5774be;
        uucore::features::checksum::calculate_blake2b_length::h2a821e36733dba3a(&v25, *(v48));
        v47 = v26;
        if (!(!v25))
            goto LABEL_577776;
        v49 = v27;
        if (!(!v25))
            goto LABEL_5774a9;
LABEL_5774c5:
        uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&v25, *((long long *)&v12), *((long long *)&v13), v47, v49);
    }
    v47 = v26;
    if (!v3)
        goto LABEL_577776;
    *((int128_t *)&v17) = *((int128_t *)&(&v27)[1]);
    v3 = v25;
    v14 = v3;
    v15 = v47;
    v16 = v27;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "binarycheckstatusquietstrictignore-missing", 6);
    if (!v1)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "textSomee", 4);
    v51 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "statusquietstrictignore-missing", 6);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "strictignore-missing", 6);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "warnZeroV", 4);
    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "ignore-missing", 14);
    v53 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "quietstrictignore-missing", 5) | (char)v51;
    if (!(char)v52)
    {
        v54 = v0;
        v0 = v54 | v53;
        if (!(!v54) || !(!v53))
        {
            goto LABEL_577751;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf2b443d784377908(&v25, &v4, "no-namescapacitys", 8);
            if (*((int *)&v25) != 2)
                v55 = 0;
            if (!v55)
                v55 = &g_469030;
            v0 = *(v55);
            v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "zeroAnsib", 4);
            v57 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::hdd8219fcd907cd8a(&v16);
            v58 = (long long)(&v17)[8];
            v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "tagBLAKE2b ( (", 3);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3c3cf47d3b80e519(&v25, &v4, "fileEDOMmode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::h656dce67331d5fa4(&v36, "fileEDOMmode{", 4, &v25);
            if (!*((long long *)&v36))
            {
                v25 = v3;
                v26 = v47;
                v27 = v57;
                v28 = v61;
                v29 = v58;
                v30 = v1;
                v31 = v59;
                v32 = v0;
                v33 = v56;
                v47 = uu_hashsum::hashsum::h6a37e88fa19edadd(&v25);
            }
            else
            {
                v25 = v3;
                v26 = v47;
                v27 = v57;
                v28 = v61;
                v29 = v58;
                v30 = v1;
                v31 = v59;
                v32 = v0;
                v33 = v56;
                v47 = uu_hashsum::hashsum::h440870b73b1317fa(&v25, &v36);
            }
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(v16, (long long)v17);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&v4);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(&v11);
        }
    }
    else
    {
        if (!((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "checkstatusquietstrictignore-missing", 5)) || !(((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "textSomee", 4) | (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v4, "binarycheckstatusquietstrictignore-missing", 6)) != 1))
        {
LABEL_577751:
            v47 = alloc::boxed::Box$LT$T$GT$::new::hdfd64d504f612c9e(1);
            goto LABEL_577763;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3c3cf47d3b80e519(&v25, &v4, "fileEDOMmode{", 4);
            clap_builder::parser::error::MatchesError::unwrap::h656dce67331d5fa4(&v19, "fileEDOMmode{", 4, &v25);
            core::option::Option$LT$T$GT$::map_or_else::he38e8e5edddfdc58(&v25, &v19);
            v47 = uucore::features::checksum::perform_checksum_validation::h2e1552b39f9ed5c0(v26, v27 * 16 + v26, v3, v47, 1, (long long)(&v17)[8], (unsigned int)((v51 & 4294967295 & 4294967295) * 0x1000000) | (unsigned int)(v53 * 0x10000) | v0 * 0x100000000 | (v2 & ((char)(v51 & 4294967295) ^ 1)) * 0x10000000000 | (v52 & 4294967295 & 4294967295) * 0x100 & 4294967295);
            ::0x578a90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h293673efeeb2dedb(&v25);
LABEL_577763:
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(v16, (long long)v17);
        }
LABEL_577776:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&v4);
LABEL_577780:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(&v11);
    }
    ::0x5789d0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3260fd7b72cdc76();
    return v47;
}
