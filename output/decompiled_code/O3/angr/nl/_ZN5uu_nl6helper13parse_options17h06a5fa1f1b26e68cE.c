double uu_nl::helper::parse_options::h06a5fa1f1b26e68c(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    struct struct_0 **v0;  // [bp-0x108], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x100]
    struct struct_1 **v2;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xf0]
    void* v4;  // [sp-0xe8]
    void* v5;  // [sp-0xd0]
    unsigned long long v6;  // [sp-0xc8]
    void* v7;  // [sp-0xc0]
    struct struct_0 **v8;  // [sp-0xb8]
    unsigned long long v9;  // [sp-0xb0]
    unsigned long long v10;  // [sp-0xa8]
    struct_0 *v11;  // [sp-0x98]
    unsigned long v12;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x88]
    unsigned long long v14;  // [sp-0x80]
    unsigned long v15;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x70]
    unsigned long long v17;  // [sp-0x68]
    unsigned long v18;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x58]
    unsigned long long v20;  // [sp-0x50]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    struct_0 *v24;  // rax
    struct struct_0 **v25;  // xmm0
    int v26;  // ymm0
    struct_3 *v28;  // r12
    struct struct_0 **v29;  // xmm0
    int v30;  // ymm0
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rdx
    unsigned long long v35[3];  // rax
    unsigned long long v36;  // rcx
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // rax
    unsigned long long v40[3];  // rax
    unsigned long long v41;  // rax
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // rax
    unsigned long long *v44;  // rax
    unsigned long long v45;  // rax
    struct struct_0 **v46;  // xmm0
    unsigned long long *v47;  // rax
    unsigned long long v48;  // rax
    struct struct_0 **v49;  // xmm0
    int v50;  // ymm0
    unsigned long long *v51;  // rax
    unsigned long long *v52;  // rax
    struct struct_0 **v53;  // xmm0

    v5 = 0;
    v6 = 8;
    v7 = 0;
    a1->field_80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a2, "no-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValidationTooManyValuesTooFewVa", 11);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, "section-delimiter:number-format", 17);
    v24 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0("section-delimiter:number-format", 17, &v0);
    if (v24)
    {
        v11 = v24;
        if (v24->field_10 != 1)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, v24);
        }
        else
        {
            v8 = &v11;
            v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc35cb14290081d65;
            v0 = &g_6d9f88;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            ::0x5b7c40::core::option::Option$LT$T$GT$::map_or_else::h0a2f0cb8f97eeebd(&v21, &v0);
            v25 = *((int128_t *)&v21);
            v0 = v25;
            v2 = *((long long *)&v22);
        }
        v28 = &a1->padding_30;
        ::0x5b73d0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4abdf3701c16e9bb(v28);
        v28->field_10 = v2;
        v29 = *((int128_t *)&v0);
        v30 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
        *((struct struct_0 ***)&v28->field_0) = v29;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, "number-separator", 16);
    v31 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0("number-separator", 16, &v0);
    if (v31)
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::h4a05e4567e966646(&a1->padding_30[24], v31);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, "number-format", 13);
    v32 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0("number-format", 13, &v0);
    if (v32)
        core::ops::function::FnOnce::call_once::h937765a0df65f30a(v32, v33, v34);
    a1->field_81 = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, "header-numbering", 16);
    v35 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0("header-numbering", 16, &v0);
    if (v35)
    {
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&v0, core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(v35[1], v35[2]), v34, v36, v37, v38);
        v39 = v0;
        if (v39 != 9223372036854775809)
        {
            if (v39 != 0x8000000000000000)
            {
                v12 = v39;
                v13 = v1;
                v14 = v2;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&v5, &v12, v34);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(a1->field_0, a1->field_8);
                a1->field_0 = v13;
                a1->field_8 = v14;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, "body-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValid", 14);
    v40 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0("body-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValid", 14, &v0);
    if (v40)
    {
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&v0, core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(v40[1], v40[2]), v34, v36, v37, v38);
        v41 = v0;
        if (v41 != 9223372036854775809)
        {
            if (v41 != 0x8000000000000000)
            {
                v15 = v41;
                v16 = v1;
                v17 = v2;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&v5, &v15, v34);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(a1->field_10, a1->field_18);
                a1->field_10 = v16;
                a1->field_18 = v17;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(&v0, a2, &g_460e70, 16);
    v42 = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(&g_460e70, 16, &v0);
    if (v42)
    {
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&v0, core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(v42[1], v42[2]), v34, v36, v37, v38);
        v43 = v0;
        if (v43 != 9223372036854775809)
        {
            if (v43 != 0x8000000000000000)
            {
                v18 = v43;
                v19 = v1;
                v20 = v2;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&v5, &v18, v34);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(a1->field_20, a1->field_28);
                a1->field_20 = v19;
                a1->field_28 = v20;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h317836ece4e1d627(&v0, a2, "number-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValidationTooManyVa", 12);
    v44 = clap_builder::parser::error::MatchesError::unwrap::h6a78314316764992("number-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValidationTooManyVa", 12, &v0);
    if (v44)
    {
        v45 = *(v44);
        if (v45)
        {
            a1->field_78 = v45;
        }
        else
        {
            ::0x5b7ce0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(&v0, &g_46feab, 71);
            v10 = v2;
            v46 = *((int128_t *)&v0);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            v8 = v46;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&v5, &v8, v34);
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fc9f16b33f0a403(&v0, a2, "join-blank-lines", 16);
    v47 = clap_builder::parser::error::MatchesError::unwrap::h5ce44c2cd6f84e85("join-blank-lines", 16, &v0);
    if (v47)
    {
        v48 = *(v47);
        if (v48)
        {
            a1->field_70 = v48;
        }
        else
        {
            ::0x5b7ce0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(&v0, &g_46fef2, 74);
            v10 = v2;
            v49 = *((int128_t *)&v0);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v8 = v49;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&v5, &v8, v34);
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(&v0, a2, "line-incrementstarting-line-numberbody-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownA", 14);
    v51 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d("line-incrementstarting-line-numberbody-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownA", 14, &v0);
    if (v51)
        a1->field_68 = *(v51);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(&v0, a2, "starting-line-numberbody-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalid", 20);
    v52 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d("starting-line-numberbody-numberingnumber-widthno-renumberdescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalid", 20, &v0);
    if (v52)
        a1->field_60 = *(v52);
    a0->field_10 = v7;
    v53 = *((int128_t *)&v5);
    *((struct struct_0 ***)&a0->field_0) = v53;
    return (unsigned long long)(v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53);
}
