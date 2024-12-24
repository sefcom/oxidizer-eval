long long uu_od::OdOptions::new::h252002cce2abf956(struct_5 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x160]
    struct struct_4 **v2;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0x150], Other Possible Types: unsigned int
    void* v4;  // [sp-0x148], Other Possible Types: unsigned long
    char v5;  // [bp-0x140]
    int v6;  // [bp-0x138], Other Possible Types: char, unsigned long, unsigned long long
    char v7;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned int v9;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v12;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0xf8]
    unsigned int v14;  // [sp-0xe4]
    void* v15;  // [sp-0xe0]
    unsigned long v16;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xd0]
    unsigned long long v18;  // [sp-0xc8]
    unsigned long v19;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v20;  // [sp-0xb8], Other Possible Types: char
    unsigned long long v21;  // [sp-0xa8]
    unsigned long long v22;  // [sp-0x98]
    unsigned long long v23[3];  // [sp-0x90]
    int v24;  // [sp-0x88]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x60]
    char v28;  // [bp-0x50]
    char v29;  // [bp-0x48]
    char v30;  // [bp-0x38]
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // r15
    unsigned long long v34;  // rbp
    unsigned long v35;  // rcx
    unsigned int v36;  // ecx
    unsigned long v37;  // rcx
    unsigned long long v38[3];  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // r15
    unsigned long long v41;  // rbp
    unsigned long long v42;  // r15
    int v43;  // xmm1
    struct_6 *v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rcx
    struct_1 *v47;  // r13
    unsigned long long v48;  // r12
    unsigned long long v49;  // r12
    int v50;  // xmm1
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rsi
    unsigned long long v55[3];  // rax
    unsigned long long v56;  // r13
    unsigned long long v57;  // r12
    unsigned long long v58;  // r12
    struct_1 *v59;  // r13
    int v60;  // xmm1
    struct_2 *v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h04bf81dab325422f(&v0, a1, "endian", 6);
    v32 = clap_builder::parser::error::MatchesError::unwrap::h9395445cef7f64af("endian", 6, &v0);
    if (!v32)
    {
        v36 = v35 | -0x100 | 2;
        goto LABEL_4c5b50;
    }
    v23[0] = v32;
    v33 = v32[1];
    v34 = v32[2];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9f8f68267d7ab137(v33, v34, "little", 6))
    {
        v36 = 0;
        goto LABEL_4c5b50;
    }
    else
    {
        v36 = v37 | -0x100 | 1;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9f8f68267d7ab137(v33, v34, "bigInvalid argument --endian=", 3))
        {
            v11 = &v23[0];
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3cc94bdd7e0c6da6;
            v0 = &g_540f40;
            v1 = 1;
            v4 = 0;
            v2 = &v11;
            v3 = 1;
            ::0x4c5690::core::option::Option$LT$T$GT$::map_or_else::hac0fe46cff11dd89(&v6, &v0);
            v9 = 1;
            v39 = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v6);
        }
        else
        {
LABEL_4c5b50:
            v14 = v36;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h04bf81dab325422f(&v0, a1, "skip-bytes", 10);
            v38 = clap_builder::parser::error::MatchesError::unwrap::h9395445cef7f64af("skip-bytes", 10, &v0);
            if (!v38)
            {
                v42 = 0;
            }
            else
            {
                v40 = v38[1];
                v41 = v38[2];
                uu_od::parse_nrofbytes::parse_number_of_bytes::he6f7e7e693c5ce8e(&v11, v40, v41);
                if ((int)v11 != 3)
                {
                    v43 = *((int128_t *)&v13);
                    *((int128_t *)&v6) = *((int128_t *)&v11);
                    v8 = v43;
                    uu_od::format_error_message::h365d137da44637eb(&v25, v6, v40, v41, "skip-bytes", 10);
                    v3 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v25);
                    v2 = *((long long *)&v26);
                    *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                    a0->field_10 = &g_540f88;
                    a0->field_0 = 2;
                    core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hcc76d1ae1e4fa75e(&v6);
                    return a0;
                }
            }
            uu_od::parse_inputs::parse_inputs::ha2509ff94bf0be8d(&v0, a1, &g_540ff8);
            if (v15 == 3)
            {
                v8 = v2;
                *((int128_t *)&v6) = (int128_t)v0;
                v39 = uu_od::OdOptions::new::_$u7b$$u7b$closure$u7d$$u7d$::h806f5429e590e329(&v6);
            }
            else
            {
                v22 = *((long long *)&v5);
                v15 = v4;
                if ((unsigned int)v15 == 2)
                {
                    v20 = v24;
                    v21 = v2;
                    v15 = 0;
                }
                else
                {
                    v42 = *((long long *)&v3);
                    v24 = v20;
                    v0 = v20;
                    v2 = v21;
                    v44 = ::0x4c5860::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
                    if (!v44)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *((void*)&v44->field_0) = v24;
                    v44->field_10 = v21;
                    alloc::slice::hack::into_vec::h3557ca0fb5f2c114(&v20, v44, 1);
                }
                uu_od::parse_formats::parse_format_flags::h8589d6f49b6e96ef(&v6, a2, a3);
                if (v6)
                {
                    v2 = *((long long *)&v9);
                    *((int128_t *)&v0) = *((int128_t *)&v7);
                    v3 = 1;
                    v45 = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                    v46 = &g_540f88;
                }
                else
                {
                    v45 = v8;
                    v46 = *((long long *)&v9);
                    if (v16 != 0x8000000000000000)
                    {
                        v16 = v7;
                        v17 = v45;
                        v18 = v46;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h04bf81dab325422f(&v0, a1, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
                        v47 = clap_builder::parser::error::MatchesError::unwrap::h9395445cef7f64af("widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5, &v0);
                        if (!v47 || (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::he19a64bd7fd01b64(a1, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5) != 2)
                        {
                            v10 = 16;
                            v49 = 16;
                        }
                        else
                        {
                            v48 = v47->field_8;
                            v47 = v47->field_10;
                            uu_od::parse_nrofbytes::parse_number_of_bytes::he6f7e7e693c5ce8e(&v11, v48, v47);
                            if ((int)v11 != 3)
                            {
                                v50 = *((int128_t *)&v13);
                                *((int128_t *)&v6) = *((int128_t *)&v11);
                                v8 = v50;
                                uu_od::format_error_message::h365d137da44637eb(&v27, v6, v48, v47, "widthsrc/uu/od/src/od.rs: warning: invalid width  instead\n", 5);
                                v3 = 1;
                                *((int128_t *)&v0) = *((int128_t *)&v27);
                                v2 = *((long long *)&v28);
                                *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                                a0->field_10 = &g_540f88;
                                a0->field_0 = 2;
                                core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hcc76d1ae1e4fa75e(&v6);
                                ::0x4c5440::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v16);
                                ::0x4c5050::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h78fdbbf11c230f7e(&v20);
                                return a0;
                            }
                            v49 = v12;
                            v10 = v49;
                        }
                        v19 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfad0c35a8d5d5efd(v17, v17 + v18 * 40);
                        if (v49)
                        {
                            if (!v19)
                                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
                            v51 = (!(v19 | v49) >> 32 ? (0 CONCAT (unsigned int)v49) /m (unsigned int)v19 >> 32 & 4294967295 : (0 CONCAT v49) /m v19 >> 64);
                            if (!v51)
                            {
LABEL_4c5fec:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h04bf81dab325422f(&v0, a1, "read-bytes", 10);
                                v55 = clap_builder::parser::error::MatchesError::unwrap::h9395445cef7f64af("read-bytes", 10, &v0);
                                if (!v55)
                                {
                                    v58 = 0;
                                    goto LABEL_4c6062;
                                }
                                else
                                {
                                    v56 = v55[1];
                                    v57 = v55[2];
                                    uu_od::parse_nrofbytes::parse_number_of_bytes::he6f7e7e693c5ce8e(&v11, v56, v57);
                                    if ((int)v11 != 3)
                                    {
                                        v60 = *((int128_t *)&v13);
                                        *((int128_t *)&v6) = *((int128_t *)&v11);
                                        v8 = v60;
                                        uu_od::format_error_message::h365d137da44637eb(&v29, v6, v56, v57, "read-bytes", 10);
                                        v3 = 1;
                                        *((int128_t *)&v0) = *((int128_t *)&v29);
                                        v2 = *((long long *)&v30);
                                        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                                        a0->field_10 = &g_540f88;
                                        a0->field_0 = 2;
                                        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hcc76d1ae1e4fa75e(&v6);
                                    }
                                    else
                                    {
                                        v58 = 1;
                                        v59 = v12;
LABEL_4c6062:
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h04bf81dab325422f(&v0, a1, "address-radix", 13);
                                        v61 = clap_builder::parser::error::MatchesError::unwrap::h9395445cef7f64af("address-radix", 13, &v0);
                                        if (!v61)
                                            goto LABEL_4c621f;
                                        if (!v61->field_10)
                                        {
                                            ::0x4c56d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7e478e2c923a4c0(&v6, "Radix cannot be empty, and must be one of [o, d, x, n]", 54);
                                            v2 = v8;
                                            *((int128_t *)&v0) = *((int128_t *)&v6);
                                            v3 = 1;
                                            v63 = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                                        }
                                        else
                                        {
                                            v62 = v61->field_8->field_0 - 100;
                                            switch ((unsigned int)v62)
                                            {
                                            case 10:
                                                break;
                                            case 20:
                                                break;
                                            case 11:
LABEL_4c621f:
                                                a0->field_30 = v21;
                                                *((void*)&a0->field_20) = v20;
                                                *((int128_t *)&(&a0->field_30)[1]) = *((int128_t *)&v16);
                                                *((unsigned long long *)((char *)&a0->field_38 + 8)) = v18;
                                                a0->field_0 = v58;
                                                a0->field_8 = v59;
                                                a0->field_10 = v15;
                                                a0->field_18 = v22;
                                                a0->field_48 = v42;
                                                a0->field_50 = v10;
                                                *((char *)&a0->field_58) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "output-duplicates", 17);
                                                *((char *)&a0->field_58 + 1) = v14;
                                                *((char *)&a0->field_58 + 2) = 2;
                                                return a0;
                                            default:
                                                ::0x4c56d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7e478e2c923a4c0(&v6, "Radix must be one of [o, d, x, n]", 33);
                                                v2 = v8;
                                                *((int128_t *)&v0) = *((int128_t *)&v6);
                                                v3 = 1;
                                                v63 = alloc::boxed::Box$LT$T$GT$::new::hecd74b9d1d3858b8(&v0);
                                            }
                                        }
                                        a0->field_8 = v63;
                                        a0->field_10 = &g_540f88;
                                        a0->field_0 = 2;
                                    }
                                    ::0x4c5440::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h5cf18ed9c85e52c0(&v16);
                                    ::0x4c5050::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h78fdbbf11c230f7e(&v20);
                                    return a0;
                                }
                            }
                        }
                        v6 = uucore::util_name::h412db5e565a079f3();
                        v7 = v52;
                        v11 = &v6;
                        v12 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5410c232de497cd3;
                        v0 = &g_541038;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v11;
                        v3 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v53, v52);
                        v6 = &v10;
                        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v8 = &v19;
                        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v0 = &g_541058;
                        v1 = 3;
                        v4 = 0;
                        v2 = &v6;
                        v3 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v53, v52);
                        v10 = v19;
                        goto LABEL_4c5fec;
                    }
                }
                a0->field_8 = v45;
                a0->field_10 = v46;
                a0->field_0 = 2;
                ::0x4c5050::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h78fdbbf11c230f7e(&v20);
                return a0;
            }
        }
        a0->field_8 = v39;
        a0->field_10 = &g_540f88;
        a0->field_0 = 2;
        return a0;
    }
}
