long long uu_od::OdOptions::new::h0c238bf8480e2d7e(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x168]
    char *v1;  // [bp-0x168]
    unsigned long long v2;  // [sp-0x160]
    struct struct_3 **v3;  // [sp-0x158], Other Possible Types: char *, struct struct_4 **, unsigned long, unsigned long long
    unsigned long long v4;  // [bp-0x150], Other Possible Types: unsigned int
    void* v5;  // [sp-0x148], Other Possible Types: unsigned long
    char v6;  // [bp-0x140]
    char *v7;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    char *v9;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned int v10;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x110]
    struct struct_3 **v12;  // [sp-0x108]
    struct struct_3 **v13;  // [sp-0x108]
    struct_5 *v14;  // [sp-0x100], Other Possible Types: unsigned long long, unsigned long
    char v15;  // [bp-0xf8]
    unsigned int v16;  // [sp-0xe4]
    void* v17;  // [sp-0xe0]
    unsigned long v18;  // [sp-0xd8]
    unsigned long long v19;  // [sp-0xd0]
    unsigned long long v20;  // [sp-0xc8]
    unsigned long v21;  // [sp-0xc0]
    char *v22;  // [sp-0xb8]
    unsigned long long v23;  // [sp-0xa8]
    unsigned long long v24;  // [sp-0x98]
    unsigned long long v25[3];  // [sp-0x90]
    char *v26;  // [sp-0x88]
    char v27;  // [bp-0x78]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x60]
    char v30;  // [bp-0x50]
    char v31;  // [bp-0x48]
    char v32;  // [bp-0x38]
    unsigned long long v34[3];  // rax
    unsigned long long v35;  // r15
    unsigned long long v36;  // rbp
    unsigned long v37;  // rcx
    unsigned int v38;  // ecx
    unsigned long v39;  // rcx
    unsigned long long v40[3];  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // r15
    unsigned long long v43;  // rbp
    unsigned long long v44;  // r15
    char *v45;  // xmm1
    struct_6 *v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    struct_5 *v49;  // r13
    unsigned long long v50;  // r12
    unsigned long long v51;  // r12
    char *v52;  // xmm1
    unsigned long long v53;  // rdx
    unsigned long v54;  // rdx
    unsigned long long v56[3];  // rax
    unsigned long long v57;  // r13
    unsigned long long v58;  // r12
    unsigned long long v59;  // r12
    char *v60;  // xmm1
    struct_0 *v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "endian", 6);
    v34 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("endian", 6, &v0);
    if (!v34)
    {
        v38 = v37 & 0xffffffffffffff00 | 2;
        goto LABEL_4c60d0;
    }
    v25[0] = v34;
    v35 = v34[1];
    v36 = v34[2];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v35, v36, "little", 6))
    {
        v38 = 0;
        goto LABEL_4c60d0;
    }
    else
    {
        v38 = v39 & 0xffffffffffffff00 | 1;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v35, v36, "bigInvalid argument --endian=", 3))
        {
            v13 = &v25[0];
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4d73fd5ba0347a;
            v1 = &g_541640;
            v2 = 1;
            v5 = 0;
            v3 = &v13;
            v4 = 1;
            ::0x4c5c10::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(&v7, &v0);
            v10 = 1;
            v41 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v7);
        }
        else
        {
LABEL_4c60d0:
            v16 = v38;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "skip-bytes", 10);
            v40 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("skip-bytes", 10, &v0);
            if (!v40)
            {
                v44 = 0;
            }
            else
            {
                v42 = v40[1];
                v43 = v40[2];
                uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v13, v42, v43);
                if ((int)v13 != 3)
                {
                    v45 = *((int128_t *)&v15);
                    *((int128_t *)&v7) = *((int128_t *)&v13);
                    v9 = v45;
                    uu_od::format_error_message::h954b3c00e83b3e7f(&v27, v7, v42, v43, "skip-bytes", 10);
                    v4 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v27);
                    v3 = *((long long *)&v28);
                    *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                    a0->field_10 = &g_5416d8;
                    a0->field_0 = 2;
                    core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v7);
                    return a0;
                }
                v44 = v14;
            }
            uu_od::parse_inputs::parse_inputs::h38cbe1382e5c3650(&v0, a1, &g_541748);
            if (v17 == 3)
            {
                v9 = v3;
                *((int128_t *)&v7) = *((int128_t *)&v1);
                v41 = uu_od::OdOptions::new::_$u7b$$u7b$closure$u7d$$u7d$::ha7a222c74d8e7c97(&v7);
            }
            else
            {
                v24 = *((long long *)&v6);
                v17 = v5;
                if ((unsigned int)v17 == 2)
                {
                    v22 = v26;
                    v23 = v3;
                    v17 = 0;
                }
                else
                {
                    v44 = *((long long *)&v4);
                    v26 = v22;
                    v0 = v22;
                    v3 = v23;
                    v46 = ::0x4c5de0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
                    if (!v46)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
                    *((char **)&v46->field_0) = v26;
                    v46->field_10 = v23;
                    alloc::slice::hack::into_vec::h371cf1993c745829(&v22, v46, 1);
                }
                uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(&v7, a2, a3);
                if (v7)
                {
                    v3 = *((long long *)&v10);
                    *((int128_t *)&v1) = *((int128_t *)&v8);
                    v4 = 1;
                    v47 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                    v48 = &g_5416d8;
                }
                else
                {
                    v47 = v9;
                    v48 = *((long long *)&v10);
                    if (v18 != 0x8000000000000000)
                    {
                        v18 = v8;
                        v19 = v47;
                        v20 = v48;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "width: warning: invalid width  instead\n", 5);
                        v49 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("width: warning: invalid width  instead\n", 5, &v0);
                        if (!v49 || (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "width: warning: invalid width  instead\n", 5) != 2)
                        {
                            v11 = 16;
                            v51 = 16;
                        }
                        else
                        {
                            v50 = v49->field_8;
                            v49 = v49->field_10;
                            uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v13, v50, v49);
                            if ((int)v13 != 3)
                            {
                                v52 = *((int128_t *)&v15);
                                *((int128_t *)&v7) = *((int128_t *)&v13);
                                v9 = v52;
                                uu_od::format_error_message::h954b3c00e83b3e7f(&v29, v7, v50, v49, "width: warning: invalid width  instead\n", 5);
                                v4 = 1;
                                *((int128_t *)&v1) = *((int128_t *)&v29);
                                v3 = *((long long *)&v30);
                                *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                a0->field_10 = &g_5416d8;
                                a0->field_0 = 2;
                                core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v7);
                                ::0x4c59c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v18);
                                ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v22);
                                return a0;
                            }
                            v51 = v14;
                            v11 = v51;
                        }
                        v21 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h84b6b874ac42ad5b(v19, v19 + v20 * 40);
                        if (v51)
                        {
                            if (!v21)
                                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_541770); /* do not return */
                            v53 = (!(v21 | v51) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v51) % (v21 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v51) / (v21 & 4294967295))) >> 32 & 4294967295 : ((unsigned long long)((0 CONCAT v51) % v21) CONCAT (unsigned long long)((0 CONCAT v51) / v21)) >> 64);
                            if (!v53)
                            {
LABEL_4c656c:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "read-bytes", 10);
                                v56 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("read-bytes", 10, &v0);
                                if (!v56)
                                {
                                    v59 = 0;
                                    goto LABEL_4c65e2;
                                }
                                else
                                {
                                    v57 = v56[1];
                                    v58 = v56[2];
                                    uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v13, v57, v58);
                                    if ((int)v13 != 3)
                                    {
                                        v60 = *((int128_t *)&v15);
                                        *((int128_t *)&v7) = *((int128_t *)&v12);
                                        v9 = v60;
                                        uu_od::format_error_message::h954b3c00e83b3e7f(&v31, v7, v57, v58, "read-bytes", 10);
                                        v4 = 1;
                                        *((int128_t *)&v1) = *((int128_t *)&v31);
                                        v3 = *((long long *)&v32);
                                        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                        a0->field_10 = &g_5416d8;
                                        a0->field_0 = 2;
                                        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v7);
                                    }
                                    else
                                    {
                                        v49 = v14;
                                        v59 = 1;
LABEL_4c65e2:
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "address-radix", 13);
                                        v61 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("address-radix", 13, &v0);
                                        if (!v61)
                                            goto LABEL_4c679f;
                                        if (!v61->field_10)
                                        {
                                            ::0x4c5c50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v7, "Radix cannot be empty, and must be one of [o, d, x, n]src/uu/od/src/od.rs", 54);
                                            v3 = v9;
                                            *((int128_t *)&v1) = *((int128_t *)&v7);
                                            v4 = 1;
                                            v63 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
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
LABEL_4c679f:
                                                a0->field_30 = v23;
                                                *((char **)&a0->field_20) = v22;
                                                *((int128_t *)&(&a0->field_30)[1]) = *((int128_t *)&v18);
                                                *((unsigned long long *)((char *)&a0->field_38 + 8)) = v20;
                                                a0->field_0 = v59;
                                                a0->field_8 = v49;
                                                a0->field_10 = v17;
                                                a0->field_18 = v24;
                                                a0->field_48 = v44;
                                                a0->field_50 = v11;
                                                *((char *)&a0->field_58) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "output-duplicates", 17);
                                                *((char *)&a0->field_58 + 1) = v16;
                                                *((char *)&a0->field_58 + 2) = 2;
                                                return a0;
                                            default:
                                                ::0x4c5c50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v7, "Radix must be one of [o, d, x, n]", 33);
                                                v3 = v9;
                                                *((int128_t *)&v1) = *((int128_t *)&v7);
                                                v4 = 1;
                                                v63 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                            }
                                        }
                                        a0->field_8 = v63;
                                        a0->field_10 = &g_5416d8;
                                        a0->field_0 = 2;
                                    }
                                    ::0x4c59c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v18);
                                    ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v22);
                                    return a0;
                                }
                            }
                        }
                        v7 = uucore::util_name::h60d842bf27b05e82();
                        v8 = v54;
                        v12 = &v7;
                        v14 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                        v1 = &g_541650;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v13;
                        v4 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                        v7 = &v11;
                        v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v9 = &v21;
                        v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v0 = &g_541670;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v7;
                        v4 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                        v11 = v21;
                        goto LABEL_4c656c;
                    }
                }
                a0->field_8 = v47;
                a0->field_10 = v48;
                a0->field_0 = 2;
                ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v22);
                return a0;
            }
        }
        a0->field_8 = v41;
        a0->field_10 = &g_5416d8;
        a0->field_0 = 2;
        return a0;
    }
}
