long long uu_seq::uumain::uumain::h34e3a354243be336(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x578]
    char v1;  // [bp-0x550]
    char v2;  // [bp-0x548]
    char v3;  // [bp-0x540]
    int v4;  // [sp-0x538], Other Possible Types: char, unsigned long
    int v5;  // [bp-0x530], Other Possible Types: char
    char v6;  // [sp-0x528], Other Possible Types: unsigned long long
    int v7;  // [bp-0x520], Other Possible Types: char
    char v8;  // [bp-0x518]
    int v9;  // [sp-0x510]
    char v10;  // [bp-0x508]
    int v11;  // [sp-0x500]
    int v12;  // [sp-0x4e8]
    int v13;  // [bp-0x4d8], Other Possible Types: unsigned long long
    int v14;  // [sp-0x4c8]
    unsigned long long v15;  // [sp-0x4b8]
    int v16;  // [bp-0x4a8], Other Possible Types: char
    int v17;  // [bp-0x498], Other Possible Types: char
    int v18;  // [bp-0x488], Other Possible Types: char
    int v19;  // [sp-0x478]
    int v20;  // [sp-0x468]
    unsigned long long v21;  // [sp-0x458]
    int v22;  // [sp-0x448]
    unsigned long long v23;  // [sp-0x438]
    int v24;  // [sp-0x430]
    unsigned long long v25;  // [sp-0x420]
    unsigned long long v26;  // [sp-0x418]
    struct_0 *v27;  // [sp-0x410]
    char v28;  // [sp-0x408]
    unsigned long v29;  // [sp-0x400]
    unsigned long long v30;  // [sp-0x3f8]
    int v31;  // [sp-0x3f0]
    int v32;  // [sp-0x3e0]
    unsigned long long v33;  // [sp-0x3d0]
    int v34;  // [sp-0x3c8]
    char v35;  // [bp-0x3c8]
    int v36;  // [sp-0x3b8]
    int v37;  // [sp-0x3a8]
    unsigned long long v38;  // [sp-0x398]
    char v39;  // [bp-0x388]
    char v40;  // [bp-0x378]
    char v41;  // [bp-0x368]
    char v42;  // [bp-0x358]
    int v43;  // [bp-0x348], Other Possible Types: char, unsigned long long, unsigned long
    int v44;  // [bp-0x340]
    int v45;  // [bp-0x338], Other Possible Types: char
    unsigned long long v46;  // [sp-0x330]
    char v47;  // [bp-0x328], Other Possible Types: unsigned long long
    int v48;  // [sp-0x320]
    char v49;  // [bp-0x318]
    int v50;  // [sp-0x310]
    unsigned long long v51;  // [sp-0x300]
    int v52;  // [sp-0x2f8]
    int v53;  // [sp-0x2e8]
    unsigned long long v54;  // [sp-0x2d8]
    int v55;  // [sp-0x78]
    int v56;  // [sp-0x68]
    int v57;  // [sp-0x58]
    int v58;  // [sp-0x48]
    void* v61;  // rbx
    struct_0 *v62;  // rax
    void* v63;  // rsi
    unsigned long long v65;  // rsi
    unsigned long long v67;  // rdx
    struct_0 *v68;  // rax
    void* v69;  // rcx
    unsigned long long v70;  // r14
    unsigned long long v71;  // rdx
    struct_0 *v73;  // rax
    void* v74;  // rcx
    unsigned long long v75[3];  // rax
    char v76;  // bl
    unsigned long long v77[3];  // rax
    char v79;  // bl
    unsigned long long v81;  // rax
    unsigned long long v82;  // rsi
    unsigned long long v83;  // r14
    unsigned long long v84;  // r14
    unsigned long long v85;  // rdx
    unsigned long long v86[3];  // rax
    unsigned long long v87;  // rax
    int v88;  // xmm0
    char v89;  // bl
    unsigned long long v90;  // rax
    unsigned long long v92;  // rax
    unsigned long long v93;  // rbx

    uu_seq::uu_app::h5bc20a713053c9e7(&v43);
    clap_builder::builder::command::Command::try_get_matches_from::h904220b4fd394a43(&v4, &v43, a0, a1);
    if (v29 == 0x8000000000000000)
    {
        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v30);
        return v61;
    }
    v33 = *((long long *)&v10);
    *((int128_t *)&v32) = *((int128_t *)&v8);
    *((int128_t *)&v31) = *((int128_t *)&v6);
    v29 = v4;
    v30 = *((long long *)&v5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd3fd7c3ac8a6ae96(&v43, &v29, "numbersseparatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 7);
    clap_builder::parser::error::MatchesError::unwrap::hfd2b39f1bd657312(&v39, "numbersseparatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 7, &v43);
    if (!*((long long *)&v39))
    {
        v43 = 9223372036854775809;
        alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v43);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&v29);
        return v61;
    }
    *((int128_t *)&v55) = *((int128_t *)&v39);
    *((int128_t *)&v56) = *((int128_t *)&v40);
    *((int128_t *)&v57) = *((int128_t *)&v41);
    *((int128_t *)&v58) = *((int128_t *)&v42);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h60535e30314ff3d3(&v1, &v55);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v43, &v29, "separatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 9);
    v62 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("separatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 9, &v43);
    if (v62)
    {
        v63 = v62->field_8;
        v62 = v62->field_10;
    }
    else
    {
        v63 = 0;
    }
    if (!v63)
        v65 = "\nTry ' --help' for more information.\n";
    v67 = (v63 ? 1 : v62);
    ::0x478580::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(&v43, v65, v67);
    v13 = *((long long *)&v45);
    *((int128_t *)&v12) = *((int128_t *)&v43);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v43, &v29, "terminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 10);
    v68 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("terminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 10, &v43);
    if (v68)
    {
        v69 = v68->field_8;
        v68 = v68->field_10;
    }
    else
    {
        v69 = 0;
    }
    if (v69)
        v70 = v69;
    else
        v70 = "\nTry ' --help' for more information.\n";
    v71 = (v69 ? v68 : 1);
    ::0x478580::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(&v43, v70, v71);
    v6 = *((long long *)&v45);
    *((int128_t *)&v4) = *((int128_t *)&v43);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v43, &v29, "formatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 6);
    v73 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("formatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 6, &v43);
    if (v73)
    {
        v74 = v73->field_8;
        v73 = v73->field_10;
    }
    else
    {
        v74 = 0;
    }
    v23 = v13;
    v22 = v12;
    *((int128_t *)&v24) = (int128_t)v4;
    v25 = v6;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v29, "equal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 11);
    v26 = v74;
    v27 = v73;
    if (*((long long *)&v3) <= 1)
    {
        uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&v35);
        if (*((long long *)&v3) <= 2)
            goto LABEL_479a6d;
LABEL_479991:
        v77 = *((long long *)(*((long long *)&v2) + 8));
        uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v43, v77[1], v77[2]);
        if (v43 != 9223372036854775812)
        {
            v21 = *((long long *)&v49);
            *((int128_t *)&v20) = *((int128_t *)&v47);
            *((int128_t *)&v19) = *((int128_t *)&v45);
            *((int128_t *)&v18) = *((int128_t *)&v43);
            goto LABEL_479abd;
        }
        else
        {
            if (*((long long *)&v3) <= 1)
                core::panicking::panic_bounds_check::h25a5330941572dd1(1, *((long long *)&v3), &g_541000); /* do not return */
            v79 = (&v43)[8];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, *((long long *)(*((long long *)&v2) + 8)));
            v6 = v13;
            v4 = v12;
            v7 = v79;
            v61 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v4);
            goto LABEL_479beb;
        }
    }
    else
    {
        v75 = *((long long *)*((long long *)&v2));
        uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v43, v75[1], v75[2]);
        if (v43 == 9223372036854775812)
        {
            if (!*((long long *)&v3))
                core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_541018); /* do not return */
            v76 = (&v43)[8];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, *((long long *)*((long long *)&v2)));
            v6 = v13;
            v4 = v12;
            v7 = v76;
            v61 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v4);
LABEL_479bf8:
            core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h5bdf3a8a9e5f2cb2(&v22);
            ::0x478360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h5fadf40cd73923a0(&v1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&v29);
            return v61;
        }
        v38 = *((long long *)&v49);
        *((int128_t *)&v37) = *((int128_t *)&v47);
        *((int128_t *)&v36) = *((int128_t *)&v45);
        *((int128_t *)&v34) = *((int128_t *)&v43);
        if (!(*((long long *)&v3) <= 2))
            goto LABEL_479991;
LABEL_479a6d:
        uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&v18);
LABEL_479abd:
        switch (v81)
        {
        case 0:
            if ((char)(&v19)[8] == 1)
                goto LABEL_479ae2;
            goto LABEL_479b43;
        case 3:
LABEL_479ae2:
            v82 = *((long long *)&v3);
            if (v82 < 2)
            {
                v85 = &g_540dc0;
                v84 = 1;
                break;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, *((long long *)(*((long long *)&v2) + 8)));
                v46 = v6;
                *((int128_t *)&v44) = (int128_t)v4;
                v43 = 0x8000000000000000;
                v87 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v43);
                goto LABEL_479bd4;
            }
        default:
LABEL_479b43:
            v83 = *((long long *)&v3);
            v84 = v83 - 1;
            if (v83 < 1)
            {
                v82 = 0;
                v85 = &g_540e80;
                break;
            }
            v86 = *((long long *)(*((long long *)&v2) + v84 * 8));
            uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v43, v86[1], v86[2]);
            if (v43 == 9223372036854775812)
            {
                v82 = *((long long *)&v3);
                if (v84 >= v82)
                {
                    v85 = &g_540fe8;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(v84, v82, v85); /* do not return */
                }
                v89 = (&v43)[8];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v16, *((long long *)(*((long long *)&v2) + v84 * 8)));
                v6 = *((long long *)&v17);
                v4 = v16;
                v7 = v89;
                v87 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v4);
            }
            else
            {
                v15 = *((long long *)&v49);
                v88 = *((int128_t *)&v43);
                *((int128_t *)&v14) = *((int128_t *)&v47);
                *((int128_t *)&v13) = *((int128_t *)&v45);
                v12 = v88;
                v90 = ::0x477f50::core::cmp::max_by::hebeedc2e52056a05(::0x477f50::core::cmp::max_by::hebeedc2e52056a05((long long)(&v37)[8], (long long)(&v20)[8]), (long long)(&v14)[8]);
                if (!v26)
                {
                    v92 = 0x8000000000000000;
                    goto LABEL_479d83;
                }
                else
                {
                    uucore::features::format::Format$LT$F$GT$::parse::h467dad2654ce72de(&v43, v26, v27);
                    v92 = v43;
                    *((int128_t *)&v16) = *((int128_t *)&(&v43)[8]);
                    *((int128_t *)&v17) = *((int128_t *)&(&v45)[8]);
                    if (v92 == 0x8000000000000000)
                    {
                        v45 = v17;
                        v43 = v16;
                        v61 = alloc::boxed::Box$LT$T$GT$::new::hdd8688a13c8ca3a3(&v43);
                        core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v12);
LABEL_479bde:
                        core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v18);
                    }
                    else
                    {
                        v11 = v50;
                        v9 = v48;
                        v5 = v16;
                        v7 = v17;
LABEL_479d83:
                        v4 = v92;
                        v47 = (long long)v37;
                        v45 = v36;
                        v43 = v34;
                        v48 = v18;
                        v50 = v19;
                        v51 = (long long)v20;
                        v52 = v12;
                        *((int128_t *)&v53) = (int128_t)v13;
                        v54 = (long long)v14;
                        v93 = uu_seq::print_seq::h76b7cc0ba327356f(&v43, ::0x477f50::core::cmp::max_by::hebeedc2e52056a05(v38, v21), (long long)(&v22)[8], v23, (long long)(&v24)[8], v25, v0, v90, &v4);
                        if (!v93)
                        {
LABEL_479e76:
                            v61 = 0;
                        }
                        else if ((char)::0x477e50::std::io::error::Error::kind::hb2ff5fa058639b3d(v93) != 11)
                        {
                            v61 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbd0a62708def6320(v93);
                        }
                        else
                        {
                            ::0x478120::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6ee4f1458aa60c82(v93);
                            goto LABEL_479e76;
                        }
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..Float$GT$$GT$$GT$::h6b9419cbded52197(&v4);
                        core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h5bdf3a8a9e5f2cb2(&v22);
                        ::0x478360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h5fadf40cd73923a0(&v1);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&v29);
                        return v61;
                    }
                }
LABEL_479beb:
                core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v35);
                goto LABEL_479bf8;
            }
        }
LABEL_479bd4:
        v61 = v87;
        goto LABEL_479bde;
    }
}
