long long uu_sort::Line::print_debug::h658b27ffee38ef6c(char *a0, unsigned long long a1, struct_2 *a2, unsigned long long a3)
{
    char *v0;  // [sp-0x108]
    unsigned long long v1;  // [sp-0x100]
    unsigned long long v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0], Other Possible Types: struct struct_0 **, unsigned long long
    int v6;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    void* v7;  // [sp-0xd0]
    char *v8;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xb8], Other Possible Types: unsigned long
    struct struct_0 **v10;  // [sp-0xa0]
    unsigned long long v11;  // [sp-0x98]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x88]
    char v14;  // [bp-0x80]
    void* v15;  // [sp-0x70]
    unsigned long long v16;  // [sp-0x68]
    void* v17;  // [sp-0x60]
    unsigned long long v18;  // [sp-0x58]
    unsigned long long v19;  // [sp-0x50]
    unsigned long v20;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x38]
    unsigned long long v23;  // r14
    void* v24;  // rax
    unsigned long long v25;  // rcx
    struct_1 *v26;  // rax
    int v28;  // ymm0
    char *v29;  // r12
    unsigned long long v30;  // r15
    char *v31;  // rdx
    char *v32;  // rdx
    char *v33;  // rax
    char *v34;  // rbp
    unsigned long long v35;  // rax
    char *v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    struct struct_0 **v40;  // r13
    unsigned long long v41;  // rbx
    unsigned long long v42;  // rax
    char *v43;  // r14
    unsigned long long v44;  // r13
    char *v45;  // rax
    char *v46;  // rdx
    unsigned long long v47;  // rax
    char *v48;  // r15
    unsigned long long v49;  // rbx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rsi
    char *v54;  // rax
    char *v55;  // rax
    unsigned long long v56;  // rax
    char *v59;  // r14
    char *v60;  // rdi
    unsigned long long v61;  // rax
    char *v62;  // rbx
    unsigned long long v63;  // r13
    unsigned long long v64;  // rax
    char v65;  // al
    char *v67;  // rdx
    unsigned long long v70;  // rdx
    void* v71;  // rcx

    v23 = a1;
    v0 = a0;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hdab5ed66c8794b78(&v12, a0, a1);
    v8 = &v12;
    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v3 = &g_5ff8f0;
    v4 = 2;
    v7 = 0;
    v5 = &v8;
    v6 = 1;
    v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
    if (!v24)
    {
        v15 = 0;
        v16 = 8;
        v17 = 0;
        uu_sort::tokenize::hb47c688654b41b2e(v0, a1, a2->field_78, &v15);
        v25 = a2->field_8;
        v18 = a2->field_10;
        v19 = v25;
        v20 = v25;
        v21 = v18 * 56 + v25;
        v26 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v20);
        if (v26)
        {
            v2 = &g_5ff980;
            v1 = a1;
            v0 = v0;
            do
            {
                v29 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(v26, v0, v23, v16, v17);
                v30 = v26->field_35;
                if ((unsigned int)v30 < 2)
                {
                    v34 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v29, v32);
                    v35 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v32, v0, v1);
                    if (!v35)
                    {
                        vvar_1148{stack -248} = &g_5ff9e0;
                        core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                    }
                    v9 = (char)v30 == 1;
                    v8 = 0x2e00110000;
                    uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&v3, v35, v32, &v8);
                    v40 = v5;
                    v41 = v6;
                    v29 += v40;
                    v43 = &v29[core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v40, v41)];
                    if (v40 || !::0x51a870::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v41))
                    {
                        if ((char)v30 != 1)
                        {
                            v0 = v0;
                            v1 = v1;
                        }
                        else
                        {
                            v48 = v0;
                            v49 = v1;
                            v50 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v43, v32, v48, v49);
                            if (!v50)
                            {
                                vvar_1161{stack -248} = &g_5ff9e0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                            }
                            v43 = &v43[(int)core::str::pattern::Pattern::is_prefix_of::h07a07aaeb752853c(v50, v32)];
                        }
                        while (true)
                        {
                            v56 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v29, v0, v1);
                            if (!v56)
                            {
                                vvar_1109{stack -248} = &g_5ff9e0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                            }
                            if (!core::str::pattern::Pattern::is_suffix_of::h00ec699f5ef7cba4(v56, v32))
                                break;
                            v29 += 1;
                        }
                    }
                    else
                    {
                        v45 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v29, v43);
                        v47 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v45, v32, v0, v1);
                        if (!v47)
                        {
                            vvar_1135{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        }
                        v29 += v55;
                        v31 = v43 + v55;
                    }
                }
                else
                {
                    if ((unsigned int)v30 == 2)
                    {
                        v33 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v29, v32);
                        v37 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v33, v32, v0, v1);
                        if (!v37)
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        v39 = uu_sort::get_leading_gen::h381fabafeef8de83(v37, v32);
                        v42 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v39, v32);
                        v29 = &v29[v39];
                    }
                    else
                    {
                        if ((v26 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v20), v23 = v1, v0 = v0, v26))
                            goto LABEL_51fbc5;
                        v36 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v29, v32);
                        v38 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v36, v32, v0, v1);
                        if (!v38)
                        {
                            vvar_1122{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        }
                        v3 = v38;
                        v4 = &v32[v38];
                        v5 = 0;
                        v6 = 0;
                        v44 = core::iter::traits::iterator::Iterator::try_fold::h22a6146051e18bcf(&v3, &v6);
                        if (!(char)uu_sort::month_parse::h15c772d462e6ea25(v38, v32))
                        {
                            v44 = core::option::Option$LT$T$GT$::map_or::he0fae1d9c9f30da5(v44, (unsigned int)v32, v32, v32);
                        }
                        else
                        {
                            if ((unsigned int)v32 == 0x110000)
                                core::option::unwrap_failed::h0e11329e76906eaa(&g_5ff9b0); /* do not return */
                            v51 = 0x110000;
                            if (!core::iter::traits::iterator::Iterator::advance_by::hce0700bae222d35a(&v3))
                                v51 = (unsigned int)v32;
                            v54 = core::option::Option$LT$T$GT$::map_or::h7817db1010bdcba6(core::iter::traits::iterator::Iterator::try_fold::h22a6146051e18bcf(&v3, &v6), v51, v32);
                        }
                        v42 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v44, v46);
                        v29 = &v29[v44];
                    }
                    v31 = &v29[v42];
                }
LABEL_51fbc5:
                v59 = v31;
                v60 = *((long long *)&v13);
                if (v29)
                {
                    v61 = *((long long *)&v14);
                    if (v29 >= v61)
                    {
                        if (v29 != v61)
                        {
                            v0 = v60;
                            v1 = v61;
                            vvar_1174{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        }
                    }
                    else
                    {
                        if (*((char *)(v60 + v29)) <= 191)
                        {
                            vvar_1182{stack -264} = v60;
                            vvar_1183{stack -256} = v61;
                            vvar_1193{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        }
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " ", 1, unicode_width::str_width::hf245007b39258182(v60, v29, 0));
                v10 = &v8;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_424b80;
                v4 = 1;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                if (v24)
                {
                    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
                    goto LABEL_51ff0f;
                }
                else
                {
                    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
                    if (v29 >= v59)
                    {
                        v3 = &g_5ff910;
                        v4 = 1;
                        v5 = 8;
                        v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v6) = 0;
                        v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                        if (!v24)
                            continue;
                    }
                    else
                    {
                        v62 = *((long long *)&v13);
                        v63 = *((long long *)&v14);
                        v64 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v29, v59, v62, v63);
                        if (!v64)
                        {
                            v0 = v62;
                            v1 = v63;
                            v2 = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v33, v67, v2); /* do not return */
                        }
                        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "_", 1, unicode_width::str_width::hf245007b39258182(v64, v32, 0));
                        v10 = &v8;
                        v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_5ff8f0;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v10;
                        v6 = 1;
                        v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                        if (v24)
                        {
                            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
                            goto LABEL_51ff0f;
                        }
                        else
                        {
                            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
                        }
                    }
                }
            } while ((v26 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v20), v23 = v1, v0 = v0, v26));
        }
        v65 = a2->padding_85[16];
        if (!(v65 != 5) || !(!*((char *)&a2->field_7d + 3)) || !(!a2->padding_81[0]))
        {
            ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v15);
            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v12);
            return 0;
        }
        if (!*((int *)&(&a2->padding_7c)[1]) && v65 == 6)
        {
            v70 = v18;
            v71 = v19 + (v70 - 1) * 56;
            if (1 > v70)
                v71 = 0;
            if (!core::option::Option$LT$T$GT$::map_or::hb4899b82452b9ea1(v71))
            {
                ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v15);
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v12);
                return 0;
            }
        }
        if (!v23)
        {
            v3 = &g_5ff910;
            v4 = 1;
            v5 = 8;
            *((int128_t *)&v6) = 0;
            v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
            if (!v24)
            {
                ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v15);
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v12);
                return 0;
            }
        }
        else
        {
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "_", 1, unicode_width::str_width::hf245007b39258182(*((long long *)&v13), *((long long *)&v14), 0));
            v10 = &v8;
            v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_5ff8f0;
            v4 = 2;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            v24 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
            if (!v24)
            {
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
                ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v15);
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v12);
                return 0;
            }
            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v8);
        }
LABEL_51ff0f:
        ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v15);
    }
    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v12);
    return v24;
}
