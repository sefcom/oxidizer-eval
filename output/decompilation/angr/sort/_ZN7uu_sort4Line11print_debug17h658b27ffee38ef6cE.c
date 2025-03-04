long long uu_sort::Line::print_debug::h658b27ffee38ef6c(char *a0, unsigned long long a1, struct_2 *a2, unsigned long long a3)
{
    char *v0;  // [sp-0x108]
    unsigned long long v1;  // [sp-0x100]
    unsigned long long v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xf0]
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0], Other Possible Types: struct struct_0 **, unsigned long long
    int v6;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0xd8], Other Possible Types: void*, unsigned long long
    void* v8;  // [sp-0xd0]
    char *v9;  // [sp-0xc0]
    char v10;  // [bp-0xb8], Other Possible Types: unsigned long
    struct struct_0 **v11;  // [sp-0xa0]
    unsigned long long v12;  // [sp-0x98]
    char v13;  // [bp-0x90]
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x80]
    void* v16;  // [sp-0x70]
    unsigned long long v17;  // [sp-0x68]
    void* v18;  // [sp-0x60]
    unsigned long long v19;  // [sp-0x58]
    unsigned long long v20;  // [sp-0x50]
    unsigned long v21;  // [sp-0x40]
    unsigned long long v22;  // [sp-0x38]
    unsigned long long v24;  // r14
    void* v25;  // rbp
    unsigned long long v26;  // rcx
    struct_1 *v27;  // rax
    struct_1 *v28;  // r13
    char *v29;  // rsi
    int v30;  // ymm0
    char *v31;  // rdx
    char *v32;  // r14
    unsigned long long v33;  // r15
    char *v34;  // rbp
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    struct struct_0 **v39;  // r13
    unsigned long long v40;  // rbx
    unsigned long long v41;  // r14
    unsigned long long v42;  // r13
    char *v43;  // rsi
    unsigned long long v44;  // rax
    char *v46;  // r15
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rsi
    char *v50;  // rax
    char *v53;  // rdx
    unsigned long long v54;  // rax
    char *v55;  // rdi
    unsigned long long v56;  // rax
    char *v57;  // rbx
    unsigned long long v58;  // r13
    unsigned long long v59;  // rax
    char *v62;  // r12

    v24 = a1;
    v0 = a0;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hdab5ed66c8794b78(&v13, a0, a1);
    v9 = &v13;
    v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v3 = &g_5ff8f0;
    v4 = 2;
    v7 = 0;
    v5 = &v9;
    v7 = 1;
    v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
    if (!v25)
    {
        v16 = 0;
        v17 = 8;
        v18 = 0;
        uu_sort::tokenize::hb47c688654b41b2e(v0, a1, a2->field_78, &v16);
        v26 = a2->field_8;
        v19 = a2->field_10;
        v20 = v26;
        v21 = v26;
        v22 = v19 * 56 + v26;
        v27 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v21);
        if (v27)
        {
            v28 = v27;
            v29 = v0;
            v2 = &g_5ff980;
            v1 = a1;
            do
            {
                v62 = uu_sort::FieldSelector::get_range::h94d5816cf09723a2(v28, v29, v24, v17, v18);
                v32 = v31;
                v33 = v28->field_35;
                if ((unsigned int)v33 < 2)
                {
                    v34 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v62, v31);
                    v35 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v31, v0, v1);
                    if (!v35)
                    {
                        vvar_1139{stack -248} = &g_5ff9e0;
                        core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                    }
                    v10 = (char)v33 == 1;
                    v9 = 0x2e00110000;
                    uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(&v3, v35, a2, &v9);
                    v39 = v5;
                    v40 = (long long)v7;
                    v62 += v39;
                    v32 = &v62[core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v39, v40)];
                    if (v39 || !::0x51a870::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v40))
                    {
                        if ((char)v33 != 1)
                        {
                            v47 = v1;
                            v46 = v0;
                        }
                        else
                        {
                            v46 = v0;
                            v47 = v1;
                            v48 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v32, v31, v46, v47);
                            if (!v48)
                            {
                                vvar_1087{stack -248} = &g_5ff9e0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                            }
                            v32 = &v32[(int)core::str::pattern::Pattern::is_prefix_of::h07a07aaeb752853c(v48, v31)];
                        }
                        while (true)
                        {
                            v54 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v62, v46, v47);
                            if (!v54)
                            {
                                vvar_1074{stack -248} = &g_5ff9e0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                            }
                            if (!core::str::pattern::Pattern::is_suffix_of::h00ec699f5ef7cba4(v54, v31))
                                break;
                            v62 += 1;
                        }
                    }
                    else
                    {
                        v34 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v62, v32);
                        v44 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v31, v0, v1);
                        if (!v44)
                        {
                            vvar_1126{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                        v50 = core::str::_$LT$impl$u20$str$GT$::find::h5e4f1f7620fc8f63(v44, v31);
                        if (!v50)
                            v53 = v50;
                        v62 += v53;
                        v32 += v53;
                    }
                }
                else
                {
                    if ((unsigned int)v33 == 2)
                    {
                        v34 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v62, v31);
                        v36 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v31, v0, v1);
                        if (!v36)
                        {
                            v62 = v31;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                        v38 = uu_sort::get_leading_gen::h381fabafeef8de83(v36, v31);
                        v41 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v38, v31);
                        v62 = &v62[v38];
                    }
                    else
                    {
                        if (!((unsigned int)v33 == 3))
                            goto LABEL_51fbc5;
                        v34 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha702be9191d1b330(v62, v31);
                        v37 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v34, v31, v0, v1);
                        if (!v37)
                        {
                            vvar_1100{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                        v3 = v37;
                        v4 = &v31[v37];
                        v5 = 0;
                        v6 = 0;
                        v42 = core::iter::traits::iterator::Iterator::try_fold::h22a6146051e18bcf(&v3, &v6);
                        if (!(char)uu_sort::month_parse::h15c772d462e6ea25(v37, v31))
                        {
                            v42 = core::option::Option$LT$T$GT$::map_or::he0fae1d9c9f30da5(v42, (unsigned int)v31, v31, v31);
                            v43 = v31;
                        }
                        else
                        {
                            if ((unsigned int)v31 == 0x110000)
                                core::option::unwrap_failed::h0e11329e76906eaa(&g_5ff9b0); /* do not return */
                            v49 = 0x110000;
                            if (!core::iter::traits::iterator::Iterator::advance_by::hce0700bae222d35a(&v3))
                                v49 = (unsigned int)v31;
                            v43 = core::option::Option$LT$T$GT$::map_or::h7817db1010bdcba6(core::iter::traits::iterator::Iterator::try_fold::h22a6146051e18bcf(&v3, &v6), v49, v31);
                        }
                        v41 = core::iter::traits::exact_size::ExactSizeIterator::len::h5069d6744b989186(v42, v43);
                        v62 = &v62[v42];
                    }
                    v32 = &v62[v41];
                }
LABEL_51fbc5:
                v55 = *((long long *)&v14);
                if (v62)
                {
                    v56 = *((long long *)&v15);
                    if (v62 >= v56)
                    {
                        if (v62 != v56)
                        {
                            v0 = v55;
                            v1 = v56;
                            vvar_1113{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                    }
                    else
                    {
                        if (*((char *)(v55 + v62)) <= 191)
                        {
                            vvar_1147{stack -264} = v55;
                            vvar_1148{stack -256} = v56;
                            vvar_1157{stack -248} = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v9, " ", 1, unicode_width::str_width::hf245007b39258182(v55, v62, 0));
                v11 = &v9;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_424b80;
                v4 = 1;
                v8 = 0;
                v5 = &v11;
                v6 = 1;
                v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                if (v25)
                {
                    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
                    goto LABEL_51ff0f;
                }
                else
                {
                    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
                    if (v62 >= v32)
                    {
                        v3 = &g_5ff910;
                        v4 = 1;
                        v5 = 8;
                        v30 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v7) = 0;
                        v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                        if (!v25)
                            continue;
                    }
                    else
                    {
                        v57 = *((long long *)&v14);
                        v58 = *((long long *)&v15);
                        v59 = ::0x51bcc0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v62, v32, v57, v58);
                        if (!v59)
                        {
                            v0 = v57;
                            v1 = v58;
                            v34 = v62;
                            v62 = v32;
                            v2 = &g_5ff9e0;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v0, v1, v34, v62, v2); /* do not return */
                        }
                        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v9, "_", 1, unicode_width::str_width::hf245007b39258182(v59, v31, 0));
                        v11 = &v9;
                        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_5ff8f0;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v11;
                        v7 = 1;
                        v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
                        if (v25)
                        {
                            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
                            goto LABEL_51ff0f;
                        }
                        else
                        {
                            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
                        }
                    }
                }
            } while ((v28 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v21), v24 = v1, v29 = v0, v28));
        }
        if (!(a2->padding_85[16] != 5) || !(!*((char *)&a2->field_7d + 3)) || !(!a2->padding_81[0]) || !(*((int *)&(&a2->padding_7c)[1])) && !(a2->padding_85[16] != 6) && !(!(!core::option::Option$LT$T$GT$::map_or::hb4899b82452b9ea1((1 <= v19 ? v20 + (v19 - 1) * 56 : 0)))))
        {
            ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v16);
            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v13);
            return 0;
        }
        if (!v24)
        {
            v3 = &g_5ff910;
            v4 = 1;
            v5 = 8;
            *((uint128_t *)&v6) = 0;
            v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
            if (!v25)
            {
                ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v16);
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v13);
                return 0;
            }
        }
        else
        {
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v9, "_", 1, unicode_width::str_width::hf245007b39258182(*((long long *)&v14), *((long long *)&v15), 0));
            v11 = &v9;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_5ff8f0;
            v4 = 2;
            v8 = 0;
            v5 = &v11;
            v6 = 1;
            v25 = std::io::Write::write_fmt::h6c646b9ff4d94841(a3, &v3);
            if (!v25)
            {
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
                ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v16);
                ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v13);
                return 0;
            }
            ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v9);
        }
LABEL_51ff0f:
        ::0x51b710::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v16);
    }
    ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v13);
    return v25;
}
