long long uu_base32::base_common::Config::from::hf768c6aaaa870549(struct_1 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1a0]
    unsigned long long v2;  // [sp-0x198]
    unsigned long long v3;  // [sp-0x190]
    int v4;  // [bp-0x188], Other Possible Types: void*, unsigned long long
    int v5;  // [bp-0x180], Other Possible Types: char *, unsigned long long [3], unsigned long long
    int v6;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [sp-0x170]
    unsigned long v8;  // [sp-0x168], Other Possible Types: unsigned long long
    int v9;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [sp-0x150], Other Possible Types: unsigned long long
    int v11;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [bp-0x140], Other Possible Types: unsigned int
    void* v13;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x110]
    char v17;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0xf8]
    char v19;  // [bp-0xf0]
    unsigned long long v20;  // [sp-0xe8]
    char v21;  // [bp-0xe0], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v22;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v23[3];  // [sp-0xd0], Other Possible Types: unsigned long long
    char v24;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0xc0], Other Possible Types: unsigned long
    char v26;  // [bp-0xb8]
    char v27;  // [bp-0xb0]
    char v28;  // [bp-0xa8]
    struct struct_0 **v30;  // r12
    int v31;  // xmm0
    unsigned long long v32;  // r13
    unsigned long long v33;  // rax
    unsigned long long v34;  // r14
    unsigned long long v35;  // rdi
    unsigned long long v36[3];  // rcx
    unsigned long long v37;  // rdx
    void* v38;  // r15
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdi
    struct_2 *v42;  // rax
    unsigned long long v44[3];  // rbp
    unsigned long v45;  // rcx
    unsigned long long v46[3];  // rcx
    char *v47;  // r12
    unsigned long long v48;  // r15
    uint128_t v49[2];  // rax
    unsigned long long v50;  // rsi
    int v51;  // xmm0
    unsigned long long v54;  // r14
    int v55;  // xmm0
    unsigned long long v56[3];  // rax
    int v57;  // xmm0
    unsigned long long v58;  // r12
    unsigned long long v59;  // r13
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r12
    uint128_t v62[2];  // rax
    int v63;  // xmm0
    unsigned long long v64;  // rsi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5e75badc121cae83(&v21, a1, "filei128", 4);
    v14 = "filei128";
    v15 = 4;
    if (v21)
    {
        v8 = *((long long *)&v26);
        v31 = *((int128_t *)&v22);
        *((int128_t *)&v6) = *((int128_t *)&v24);
        v4 = v31;
        v0 = &v14;
        v1 = _ZN44_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$3fmt17hcad1ecd9785f1d45E.llvm.9973493521462227259;
        v2 = &v4;
        v3 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v9 = &anon.aee8d0926622a1c6e97588a73d77e694.4.llvm.9973493521462227259;
        v10 = 2;
        v13 = 0;
        v11 = &v0;
        v12 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v9); /* do not return */
    }
    if (!v22)
    {
        v17 = 0x8000000000000000;
        goto LABEL_48bbb4;
    }
    v32 = v24;
    v33 = v25;
    v34 = *((long long *)&v26);
    v35 = *((long long *)&v27);
    v20 = *((long long *)&v28);
    if (!(!v33) && !((v36 = v23, v33 == v34)))
    {
LABEL_48bb90:
        v38 = v33 + 32;
    }
    else
    {
        do
        {
            v36 = v36;
            if (!v36 || v36 == v32)
            {
                if (!(v35) || !(v35 != v20))
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v38 = 0;
                goto LABEL_48bd5c;
            }
        } while ((v36 += 24, v33 = v36[1], v37 = v36[2], v34 = v37 * 32 + v33, !v37));
        goto LABEL_48bb90;
    }
LABEL_48bd5c:
    v16 = &v10;
    v42 = v30(v39);
    if (!(v38) || !(v38 != v34))
    {
        do
        {
            if (!(v45) || !((v45 = v44, v45 != v32)))
            {
                if (!v40 || v40 == v20)
                {
                    v47 = v42->field_8;
                    v48 = v42->field_10;
                    if (v48 != 1 || *(v47) != 45)
                    {
                        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v21, v47, v48);
                        v50 = v22;
                        if (v21 != 2)
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbc3e2afe657fba13(v21, v50);
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v17, v47, v48);
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hbc3e2afe657fba13(2, v50);
                            v4 = 1;
                            v5 = v47;
                            v6 = v48;
                            v7 = 0;
                            v0 = &v4;
                            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v21 = &g_501a58;
                            v22 = 2;
                            v25 = 0;
                            v23 = &v0;
                            v24 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v21);
                            v12 = 1;
                            v49 = __rust_alloc(32, 8);
                            if (v49)
                            {
                                v55 = *((int128_t *)&v9);
                                v49[1] = *((int128_t *)&v11);
                                *((void*)&v49[0]) = v55;
                                a0->field_8 = v49;
                                a0->field_10 = &g_501ab0;
                                a0->field_0 = 2;
                                return a0;
                            }
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        }
                    }
                    else
                    {
                        v17 = 0x8000000000000000;
                    }
LABEL_48bbb4:
                    v54 = a1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hff2ae1c6747b5b6b(&v4, v54, &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259, 4);
                    v14 = &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259;
                    v15 = 4;
                    if ((int)v4 != 2)
                    {
                        v13 = v8;
                        v57 = *((int128_t *)&v4);
                        *((int128_t *)&v11) = *((int128_t *)&v6);
                        v9 = v57;
                        v0 = &v14;
                        v1 = _ZN44_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$3fmt17hcad1ecd9785f1d45E.llvm.9973493521462227259;
                        v2 = &v9;
                        v3 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                        v21 = &anon.aee8d0926622a1c6e97588a73d77e694.4.llvm.9973493521462227259;
                        v22 = 2;
                        v25 = 0;
                        v23 = &v0;
                        v24 = 2;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v21); /* do not return */
                    }
                    v56 = v5;
                    if (!v56)
                    {
                        v60 = 0;
                    }
                    else
                    {
                        v58 = v56[1];
                        v59 = v56[2];
                        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v14, v58, v59);
                        if (!(char)v14)
                        {
                            v60 = 1;
                            v61 = v15;
                        }
                        else
                        {
                            v4 = 0;
                            v5 = v58;
                            v6 = v59;
                            v7 = 1;
                            v0 = &v4;
                            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v21 = &g_501b20;
                            v22 = 1;
                            v25 = 0;
                            v23 = &v0;
                            v24 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v21);
                            v12 = 1;
                            v62 = __rust_alloc(32, 8);
                            if (!v62)
                                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                            v63 = (int128_t)v9;
                            v62[1] = (int128_t)v11;
                            *((void*)&v62[0]) = v63;
                            a0 = a0;
                            a0->field_8 = v62;
                            a0->field_10 = &g_501ab0;
                            a0->field_0 = 2;
                            v64 = v17;
                            if (v64 == 0x8000000000000000)
                            {
                                return a0;
                            }
                            else if (!v64)
                            {
                                return a0;
                            }
                            else
                            {
                                __rust_dealloc(*((long long *)&v18));
                                return a0;
                            }
                        }
                    }
                    a0 = a0;
                    a0->field_20 = *((long long *)&v19);
                    *((int128_t *)&a0->field_10) = *((int128_t *)&v17);
                    a0->field_0 = v60;
                    a0->field_8 = v61;
                    a0->field_28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v54, "decodeignore-garbagedescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValidationTooManyValue", 6);
                    a0->field_29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v54, "ignore-garbagedescription() is deprecated; use DisplayStylefgbgunderlineeffectsRawFormattedBacktracecontextmessagesourcehelp_flagstylescolor_whencolor_help_whenbacktraceErrorInnerInvalidValueUnknownArgumentInvalidSubcommandValueValidationTooManyValuesTooFe", 14);
                    return a0;
                }
                goto LABEL_48bdb8;
            }
        } while ((v36 += 24, v33 = v36[1], v37 = v36[2], v34 = v37 * 32 + v33, !v37));
    }
LABEL_48bdb8:
    v4 = 0;
    *((int128_t *)&v5) = *((int128_t *)(v30(v46[1]) + 8));
    v7 = 1;
    v0 = &v4;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v21 = &g_5019a0;
    v22 = 1;
    v25 = 0;
    v23 = &v0;
    v24 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v21);
    v12 = 1;
    v49 = __rust_alloc(32, 8);
    if (v49)
    {
        v51 = *((int128_t *)&v9);
        v49[1] = *((int128_t *)&v11);
        *((void*)&v49[0]) = v51;
        a0->field_8 = v49;
        a0->field_10 = &g_5019e8;
        a0->field_0 = 2;
        return a0;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
