long long uu_od::OdOptions::new::h0c238bf8480e2d7e(struct_3 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x160]
    struct struct_1 **v2;  // [sp-0x158], Other Possible Types: char *, struct struct_4 **, unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0x150], Other Possible Types: unsigned int
    void* v4;  // [sp-0x148], Other Possible Types: unsigned long
    char v5;  // [bp-0x140]
    char *v6;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    char *v8;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned int v9;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_1 **v11;  // [sp-0x108]
    struct_2 *v12;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0xf8]
    unsigned int v14;  // [sp-0xe4]
    void* v15;  // [sp-0xe0]
    unsigned long v16;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xd0]
    unsigned long long v18;  // [sp-0xc8]
    unsigned long v19;  // [sp-0xc0], Other Possible Types: unsigned long long
    char *v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xa8]
    unsigned long long v22;  // [sp-0x98]
    unsigned long long v23[3];  // [sp-0x90]
    char *v24;  // [sp-0x88]
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
    char *v43;  // xmm1
    struct_0 *v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rcx
    struct_2 *v47;  // r13
    unsigned long long v48;  // r12
    unsigned long long v49;  // r12
    char *v50;  // xmm1
    unsigned long long v51;  // rdx
    unsigned long v52;  // rdx
    unsigned long long v54[3];  // rax
    unsigned long long v55;  // r13
    unsigned long long v56;  // r12
    unsigned long long v57;  // r12
    struct_2 *v58;  // r13
    char *v59;  // xmm1
    struct_5 *v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "endian", 6);
    v32 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("endian", 6, &v0);
    if (!v32)
    {
        v36 = v35 & 0xffffffffffffff00 | 2;
        goto LABEL_4c60d0;
    }
    v23[0] = v32;
    v33 = v32[1];
    v34 = v32[2];
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v33, v34, "little", 6))
    {
        v36 = 0;
        goto LABEL_4c60d0;
    }
    else
    {
        v36 = v37 & 0xffffffffffffff00 | 1;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(v33, v34, "bigInvalid argument --endian=", 3))
        {
            v11 = &v23[0];
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4d73fd5ba0347a;
            v0 = &g_541640;
            v1 = 1;
            v4 = 0;
            v2 = &v11;
            v3 = 1;
            ::0x4c5c10::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf();
            v9 = 1;
            v39 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v6);
        }
        else
        {
LABEL_4c60d0:
            v14 = v36;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "skip-bytes", 10);
            v38 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("skip-bytes", 10, &v0);
            if (!v38)
            {
                v42 = 0;
            }
            else
            {
                v40 = v38[1];
                v41 = v38[2];
                uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v11, v40, v41);
                if ((int)v11 != 3)
                {
                    v43 = *((int128_t *)&v13);
                    *((int128_t *)&v6) = *((int128_t *)&v11);
                    v8 = v43;
                    uu_od::format_error_message::h954b3c00e83b3e7f(&v25, v6, v40, v41, "skip-bytes", 10);
                    v3 = 1;
                    *((int128_t *)&v0) = *((int128_t *)&v25);
                    v2 = *((long long *)&v26);
                    *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                    a0->field_10 = &g_5416d8;
                    a0->field_0 = 2;
                    core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v6);
                    return a0;
                }
            }
            uu_od::parse_inputs::parse_inputs::h38cbe1382e5c3650(&v0, a1, &g_541748);
            if (v15 == 3)
            {
                v8 = v2;
                *((int128_t *)&v6) = *((int128_t *)&v0);
                v39 = uu_od::OdOptions::new::_$u7b$$u7b$closure$u7d$$u7d$::ha7a222c74d8e7c97(&v6);
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
                    v44 = ::0x4c5de0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
                    if (!v44)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
                    *((char **)&v44->field_0) = v24;
                    v44->field_10 = v21;
                    alloc::slice::hack::into_vec::h371cf1993c745829(&v20, v44, 1);
                }
                uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(&v6, a2, a3);
                if (v6)
                {
                    v2 = *((long long *)&v9);
                    *((int128_t *)&v0) = *((int128_t *)&v7);
                    v3 = 1;
                    v45 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                    v46 = &g_5416d8;
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
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "width: warning: invalid width  instead\n", 5);
                        v47 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("width: warning: invalid width  instead\n", 5, &v0);
                        if (!v47 || (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "width: warning: invalid width  instead\n", 5) != 2)
                        {
                            v10 = 16;
                            v49 = 16;
                        }
                        else
                        {
                            v48 = v47->field_8;
                            v47 = v47->field_10;
                            uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v11, v48, v47);
                            if ((int)v11 != 3)
                            {
                                v50 = *((int128_t *)&v13);
                                *((int128_t *)&v6) = *((int128_t *)&v11);
                                v8 = v50;
                                uu_od::format_error_message::h954b3c00e83b3e7f(&v27, v6, v48, v47, "width: warning: invalid width  instead\n", 5);
                                v3 = 1;
                                *((int128_t *)&v0) = *((int128_t *)&v27);
                                v2 = *((long long *)&v28);
                                *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                a0->field_10 = &g_5416d8;
                                a0->field_0 = 2;
                                core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v6);
                                ::0x4c59c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v16);
                                ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v20);
                                return a0;
                            }
                            v49 = v12;
                            v10 = v49;
                        }
                        v19 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h84b6b874ac42ad5b(v17, v17 + v18 * 40);
                        if (v49)
                        {
                            if (!v19)
                                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_541770); /* do not return */
                            v51 = (!(v19 | v49) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v49) % (v19 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v49) / (v19 & 4294967295))) >> 32 & 4294967295 : ((unsigned long long)((0 CONCAT v49) % v19) CONCAT (unsigned long long)((0 CONCAT v49) / v19)) >> 64);
                            if (!v51)
                            {
LABEL_4c656c:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "read-bytes", 10);
                                v54 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("read-bytes", 10, &v0);
                                if (!v54)
                                {
                                    v57 = 0;
                                    goto LABEL_4c65e2;
                                }
                                else
                                {
                                    v55 = v54[1];
                                    v56 = v54[2];
                                    uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&v11, v55, v56);
                                    if ((int)v11 != 3)
                                    {
                                        v59 = *((int128_t *)&v13);
                                        *((int128_t *)&v6) = *((int128_t *)&v11);
                                        v8 = v59;
                                        uu_od::format_error_message::h954b3c00e83b3e7f(&v29, v6, v55, v56, "read-bytes", 10);
                                        v3 = 1;
                                        *((int128_t *)&v0) = *((int128_t *)&v29);
                                        v2 = *((long long *)&v30);
                                        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                        a0->field_10 = &g_5416d8;
                                        a0->field_0 = 2;
                                        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&v6);
                                    }
                                    else
                                    {
                                        v57 = 1;
                                        v58 = v12;
LABEL_4c65e2:
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&v0, a1, "address-radix", 13);
                                        v60 = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e("address-radix", 13, &v0);
                                        if (!v60)
                                            goto LABEL_4c679f;
                                        if (!v60->field_10)
                                        {
                                            ::0x4c5c50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v6, "Radix cannot be empty, and must be one of [o, d, x, n]src/uu/od/src/od.rs", 54);
                                            v2 = v8;
                                            *((int128_t *)&v0) = *((int128_t *)&v6);
                                            v3 = 1;
                                            v62 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                        }
                                        else
                                        {
                                            v61 = v60->field_8->field_0 - 100;
                                            switch ((unsigned int)v61)
                                            {
                                            case 10:
                                                break;
                                            case 20:
                                                break;
                                            case 11:
LABEL_4c679f:
                                                a0->field_30 = v21;
                                                *((char **)&a0->field_20) = v20;
                                                *((int128_t *)&(&a0->field_30)[1]) = *((int128_t *)&v16);
                                                *((unsigned long long *)((char *)&a0->field_38 + 8)) = v18;
                                                a0->field_0 = v57;
                                                a0->field_8 = v58;
                                                a0->field_10 = v15;
                                                a0->field_18 = v22;
                                                a0->field_48 = v42;
                                                a0->field_50 = v10;
                                                *((char *)&a0->field_58) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "output-duplicates", 17);
                                                *((char *)&a0->field_58 + 1) = v14;
                                                *((char *)&a0->field_58 + 2) = 2;
                                                return a0;
                                            default:
                                                ::0x4c5c50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&v6, "Radix must be one of [o, d, x, n]", 33);
                                                v2 = v8;
                                                *((int128_t *)&v0) = *((int128_t *)&v6);
                                                v3 = 1;
                                                v62 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&v0);
                                            }
                                        }
                                        a0->field_8 = v62;
                                        a0->field_10 = &g_5416d8;
                                        a0->field_0 = 2;
                                    }
                                    ::0x4c59c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&v16);
                                    ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v20);
                                    return a0;
                                }
                            }
                        }
                        v6 = uucore::util_name::h60d842bf27b05e82();
                        v7 = v52;
                        v11 = &v6;
                        v12 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                        v0 = &g_541650;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v11;
                        v3 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                        v6 = &v10;
                        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v8 = &v19;
                        v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v0 = &g_541670;
                        v1 = 3;
                        v4 = 0;
                        v2 = &v6;
                        v3 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                        v10 = v19;
                        goto LABEL_4c656c;
                    }
                }
                a0->field_8 = v45;
                a0->field_10 = v46;
                a0->field_0 = 2;
                ::0x4c55d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&v20);
                return a0;
            }
        }
        a0->field_8 = v39;
        a0->field_10 = &g_5416d8;
        a0->field_0 = 2;
        return a0;
    }
}
