long long uu_seq::uumain::uumain::h34e3a354243be336(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x578]
    char v1;  // [bp-0x550]
    char v2;  // [bp-0x548]
    char v3;  // [bp-0x540]
    int v4;  // [bp-0x538], Other Possible Types: char, unsigned long, unsigned long long
    int v5;  // [bp-0x530], Other Possible Types: char
    char v6;  // [bp-0x528], Other Possible Types: unsigned long long
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
    unsigned long v29;  // [sp-0x400], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x3f8]
    int v31;  // [sp-0x3f0]
    int v32;  // [sp-0x3e0]
    unsigned long long v33;  // [sp-0x3d0]
    int v34;  // [bp-0x3c8], Other Possible Types: char
    int v35;  // [sp-0x3b8]
    int v36;  // [sp-0x3a8]
    unsigned long long v37;  // [sp-0x398]
    char v38;  // [bp-0x388]
    char v39;  // [bp-0x378]
    char v40;  // [bp-0x368]
    char v41;  // [bp-0x358]
    int v42;  // [bp-0x348], Other Possible Types: char, unsigned long long, unsigned long
    int v43;  // [bp-0x340]
    int v44;  // [bp-0x338], Other Possible Types: char
    unsigned long long v45;  // [sp-0x330]
    char v46;  // [bp-0x328], Other Possible Types: unsigned long long
    int v47;  // [sp-0x320]
    char v48;  // [bp-0x318]
    int v49;  // [sp-0x310]
    unsigned long long v50;  // [sp-0x300]
    int v51;  // [sp-0x2f8]
    int v52;  // [sp-0x2e8]
    unsigned long long v53;  // [sp-0x2d8]
    int v54;  // [sp-0x78]
    int v55;  // [sp-0x68]
    int v56;  // [sp-0x58]
    int v57;  // [sp-0x48]
    unsigned long long v59;  // rdx
    void* v61;  // rax
    struct_0 *v62;  // rax
    void* v63;  // rsi
    unsigned long long v65;  // rsi
    struct_0 *v67;  // rax
    void* v68;  // rcx
    unsigned long long v69;  // rcx
    struct_0 *v73;  // rax
    void* v74;  // rcx
    unsigned long long v75[3];  // rax
    char v76;  // bl
    unsigned long long v77[3];  // rax
    char v78;  // bl
    void* v80;  // rcx
    unsigned long long v81;  // r14
    unsigned long long v82;  // r14
    unsigned long long v83[3];  // rax
    int v84;  // xmm0
    char v85;  // bl
    unsigned long long v86;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // rbx

    uu_seq::uu_app::h5bc20a713053c9e7(&v42, a1, v59);
    clap_builder::builder::command::Command::try_get_matches_from::h904220b4fd394a43(&v4, &v42, a0, a1);
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
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd3fd7c3ac8a6ae96(&v42, &v29, "numbersseparatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 7);
    clap_builder::parser::error::MatchesError::unwrap::hfd2b39f1bd657312(&v38, "numbersseparatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 7, &v42);
    if (!*((long long *)&v38))
    {
        v42 = 9223372036854775809;
        alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v42);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&v29);
        return v61;
    }
    *((int128_t *)&v54) = *((int128_t *)&v38);
    *((int128_t *)&v55) = *((int128_t *)&v39);
    *((int128_t *)&v56) = *((int128_t *)&v40);
    *((int128_t *)&v57) = *((int128_t *)&v41);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h60535e30314ff3d3(&v1, &v54, v59);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v42, &v29, "separatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 9);
    v62 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("separatorterminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 9, &v42);
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
    if (!v63)
        v62 = 1;
    ::0x478580::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(&v42, v65, v62);
    v13 = *((long long *)&v44);
    *((int128_t *)&v12) = *((int128_t *)&v42);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v42, &v29, "terminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 10);
    v67 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("terminatorformatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 10, &v42);
    if (v67)
    {
        v68 = v67->field_8;
        v67 = v67->field_10;
    }
    else
    {
        v68 = 0;
    }
    if (!v68)
        v69 = "\nTry ' --help' for more information.\n";
    if (!v68)
        v67 = 1;
    ::0x478580::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(&v42, v69, v67);
    v6 = *((long long *)&v44);
    *((int128_t *)&v4) = *((int128_t *)&v42);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(&v42, &v29, "formatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 6);
    v73 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5("formatequal-widthSpecErrorIoErrorNoMoreArgumentsInvalidArgumentTooManySpecsNeedAtLeastOneSpecWrongSpecType", 6, &v42);
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
        uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&v34);
        if (*((long long *)&v3) <= 2)
            goto LABEL_479a6d;
LABEL_479991:
        v77 = *((long long *)(*((long long *)&v2) + 8));
        uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v42, v77[1], v77[2]);
        if (v42 != 9223372036854775812)
        {
            v21 = *((long long *)&v48);
            *((int128_t *)&v20) = *((int128_t *)&v46);
            *((int128_t *)&v19) = *((int128_t *)&v44);
            *((int128_t *)&v18) = *((int128_t *)&v42);
            goto LABEL_479abd;
        }
        else
        {
            if (*((long long *)&v3) <= 1)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v78 = (&v42)[1];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, *((long long *)(*((long long *)&v2) + 8)));
            v6 = v13;
            v4 = v12;
            v7 = v78;
            v61 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v4);
            goto LABEL_479beb;
        }
    }
    else
    {
        v75 = *((long long *)*((long long *)&v2));
        uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v42, v75[1], v75[2]);
        if (v42 == 9223372036854775812)
        {
            if (!*((long long *)&v3))
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v76 = (&v42)[1];
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
        v37 = *((long long *)&v48);
        *((int128_t *)&v36) = *((int128_t *)&v46);
        *((int128_t *)&v35) = *((int128_t *)&v44);
        *((int128_t *)&v34) = *((int128_t *)&v42);
        if (!(*((long long *)&v3) <= 2))
            goto LABEL_479991;
LABEL_479a6d:
        uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&v18);
LABEL_479abd:
        switch (v80)
        {
        case 0:
            if ((char)(&v19)[8] == 1)
                goto LABEL_479ae2;
            goto LABEL_479b43;
        case 3:
LABEL_479ae2:
            if (*((long long *)&v3) < 2)
            {
                break;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, *((long long *)(*((long long *)&v2) + 8)));
                v45 = v6;
                *((int128_t *)&v43) = (int128_t)v4;
                v42 = 0x8000000000000000;
                v61 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v42);
                goto LABEL_479bd4;
            }
        default:
LABEL_479b43:
            v81 = *((long long *)&v3);
            v82 = v81 - 1;
            if (v81 < 1)
                break;
            v83 = *((long long *)(*((long long *)&v2) + v82 * 8));
            uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&v42, v83[1], v83[2]);
            if (v42 != 9223372036854775812)
            {
                v15 = *((long long *)&v48);
                v84 = *((int128_t *)&v42);
                *((int128_t *)&v14) = *((int128_t *)&v46);
                *((int128_t *)&v13) = *((int128_t *)&v44);
                v12 = v84;
                v86 = ::0x477f50::core::cmp::max_by::hebeedc2e52056a05(::0x477f50::core::cmp::max_by::hebeedc2e52056a05((long long)(&v36)[8], (long long)(&v20)[8]), (long long)(&v14)[8]);
                if (!v26)
                {
                    v88 = 0x8000000000000000;
                    goto LABEL_479d83;
                }
                else
                {
                    uucore::features::format::Format$LT$F$GT$::parse::h467dad2654ce72de(&v42, v26, v27);
                    v88 = v42;
                    *((int128_t *)&v16) = *((int128_t *)&(&v42)[1]);
                    *((int128_t *)&v17) = *((int128_t *)&(&v44)[8]);
                    if (v88 == 0x8000000000000000)
                    {
                        v44 = v17;
                        v42 = v16;
                        v61 = alloc::boxed::Box$LT$T$GT$::new::hdd8688a13c8ca3a3(&v42);
                        core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v12);
LABEL_479bde:
                        core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v18);
                    }
                    else
                    {
                        v11 = v49;
                        v9 = v47;
                        v5 = v16;
                        v7 = v17;
LABEL_479d83:
                        v4 = v88;
                        v46 = (long long)v36;
                        v44 = v35;
                        v42 = v34;
                        v47 = v18;
                        v49 = v19;
                        v50 = (long long)v20;
                        v51 = v12;
                        *((int128_t *)&v52) = (int128_t)v13;
                        v53 = (long long)v14;
                        v89 = uu_seq::print_seq::h76b7cc0ba327356f(&v42, ::0x477f50::core::cmp::max_by::hebeedc2e52056a05(v37, v21), (long long)(&v22)[8], v23, (long long)(&v24)[8], v25, v0, v86, &v4);
                        if (!v89)
                        {
LABEL_479e76:
                            v61 = 0;
                        }
                        else
                        {
                            if ((char)::0x477e50::std::io::error::Error::kind::hb2ff5fa058639b3d(v89) != 11)
                            {
                                v61 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbd0a62708def6320(v89);
                            }
                            else
                            {
                                ::0x478120::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6ee4f1458aa60c82(v89);
                                goto LABEL_479e76;
                            }
                        }
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..Float$GT$$GT$$GT$::h6b9419cbded52197(&v4);
                        core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h5bdf3a8a9e5f2cb2(&v22);
                        ::0x478360::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h5fadf40cd73923a0(&v1);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&v29);
                        return v61;
                    }
                }
LABEL_479beb:
                core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&v34);
                goto LABEL_479bf8;
            }
            else if (v82 < *((long long *)&v3))
            {
                v85 = (&v42)[1];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v16, *((long long *)(*((long long *)&v2) + v82 * 8)));
                v6 = *((long long *)&v17);
                v4 = v16;
                v7 = v85;
                v61 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&v4);
            }
            else
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        }
LABEL_479bd4:
        goto LABEL_479bde;
    }
}
