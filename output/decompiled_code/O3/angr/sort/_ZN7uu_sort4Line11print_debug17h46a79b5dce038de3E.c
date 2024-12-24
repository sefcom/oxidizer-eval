long long uu_sort::Line::print_debug::h46a79b5dce038de3(unsigned long long a0, unsigned long long a1, struct_1 *a2, unsigned long long a3)
{
    char *v0;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x100]
    unsigned long long v2;  // [sp-0xf8]
    unsigned long v3;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0], Other Possible Types: unsigned long long
    int v6;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    void* v7;  // [sp-0xd0]
    unsigned long v8;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xb8], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0xa0], Other Possible Types: unsigned long long
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
    struct_0 *v26;  // rax
    int v28;  // ymm0
    char *v29;  // r12
    unsigned long long v30;  // r15
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // r13
    unsigned long long v39;  // rbx
    unsigned long long v40;  // rax
    unsigned long long v41;  // r14
    unsigned long long v42;  // r13
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // r15
    unsigned long long v46;  // rbx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rsi
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // r14
    unsigned long long v56;  // r14
    unsigned long long v57;  // r14
    char *v58;  // rdi
    unsigned long long v59;  // rax
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r13
    unsigned long long v62;  // rax
    char v63;  // al
    unsigned long long v65;  // rdx
    void* v66;  // rcx

    v23 = a1;
    v0 = a0;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hb437b1af0fc8be19(&v12, a0, a1);
    v8 = &v12;
    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v3 = &g_5fedc8;
    v4 = 2;
    v7 = 0;
    v5 = &v8;
    v6 = 1;
    v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
    if (!v24)
    {
        v15 = 0;
        v16 = 8;
        v17 = 0;
        uu_sort::tokenize::hacd0390b76f8fb9b(v0, a1, a2->field_78, &v15);
        v25 = a2->field_8;
        v18 = a2->field_10;
        v19 = v25;
        v20 = v25;
        v21 = v18 * 56 + v25;
        v26 = ::0x51c960::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b5284f2e41ec843(&v20);
        if (v26)
        {
            v2 = &g_5fee58;
            v1 = a1;
            v0 = v0;
            do
            {
                v29 = uu_sort::FieldSelector::get_range::h6d211dcbb3d8608c(v26, v0, v23, v16, v17);
                v30 = v26->field_35;
                if ((unsigned int)v30 < 2)
                {
                    v33 = _$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hcae9a1a738fc081f(v29, v32);
                    v34 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v33, v32, v0, v1);
                    if (!v34)
                    {
                        vvar_1111{stack -248} = &g_5feeb8;
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    v9 = (char)v30 == 1;
                    v8 = 0x2e00110000;
                    uu_sort::numeric_str_cmp::NumInfo::parse::h34610ddd6bec0012(&v3, v34, v32, &v8);
                    v38 = v5;
                    v39 = v6;
                    v29 = &v29[v38];
                    v41 = &v29[core::iter::traits::exact_size::ExactSizeIterator::len::ha01aa26fc6223953(v38, v39)];
                    if (v38 || !::0x5198b0::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v39))
                    {
                        if ((char)v30 != 1)
                        {
                            v0 = v0;
                            v1 = v1;
                        }
                        else
                        {
                            v45 = v0;
                            v46 = v1;
                            v47 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v41, v32, v45, v46);
                            if (!v47)
                            {
                                vvar_1103{stack -248} = &g_5feeb8;
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            v41 += (unsigned int)core::str::pattern::Pattern::is_prefix_of::h73a0d59f8af78f41(v47, v32);
                        }
                        while (true)
                        {
                            v54 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v33, v29, v0, v1);
                            if (!v54)
                            {
                                vvar_1095{stack -248} = &g_5feeb8;
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            if (!(char)core::str::pattern::Pattern::is_suffix_of::h67d46701de588541(v54, v32))
                                break;
                            v29 += 1;
                        }
                    }
                    else
                    {
                        v44 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(_$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hcae9a1a738fc081f(v29, v41), v32, v0, v1);
                        if (!v44)
                        {
                            vvar_1107{stack -248} = &g_5feeb8;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                        v29 = &v29[v53];
                        v55 = v41 + v53;
                    }
                }
                else
                {
                    if ((unsigned int)v30 == 2)
                    {
                        v35 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(_$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hcae9a1a738fc081f(v29, v32), v32, v0, v1);
                        if (!v35)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        v37 = uu_sort::get_leading_gen::hc7849177e58f119c(v35, v32, v32);
                        v40 = core::iter::traits::exact_size::ExactSizeIterator::len::ha01aa26fc6223953(v37, v32);
                        v29 = &v29[v37];
                    }
                    else
                    {
                        if ((v26 = ::0x51c960::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b5284f2e41ec843(&v20), v23 = v1, v0 = v0, v26))
                            goto LABEL_51e335;
                        v36 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(_$LT$core..ops..range..Range$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hcae9a1a738fc081f(v29, v32), v32, v0, v1);
                        if (!v36)
                        {
                            vvar_1099{stack -248} = &g_5feeb8;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                        v3 = v36;
                        v4 = v36 + v32;
                        v5 = 0;
                        v6 = 0;
                        v42 = core::iter::traits::iterator::Iterator::try_fold::hc0e6e57b2992381f(&v3, &v6, v32);
                        if (!(char)uu_sort::month_parse::h1bc0fc1ced9b74fe(v36, v32, v32))
                        {
                            v42 = core::option::Option$LT$T$GT$::map_or::h56a4b147a459c9c0(v42, (unsigned int)v32, v32);
                        }
                        else
                        {
                            if ((unsigned int)v32 == 0x110000)
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            v48 = 0x110000;
                            if (!core::iter::traits::iterator::Iterator::advance_by::hc88e735e3e1657bd(&v3, v49, v32))
                                v48 = (unsigned int)v32;
                            v52 = core::option::Option$LT$T$GT$::map_or::h65033097be33c386(core::iter::traits::iterator::Iterator::try_fold::hc0e6e57b2992381f(&v3, &v6, v32), v48, v32);
                        }
                        v40 = core::iter::traits::exact_size::ExactSizeIterator::len::ha01aa26fc6223953(v42, v43);
                        v29 = &v29[v42];
                    }
                    v56 = &v29[v40];
                }
LABEL_51e335:
                v57 = v31;
                v58 = *((long long *)&v13);
                if (v29)
                {
                    v59 = *((long long *)&v14);
                    if (v29 >= v59)
                    {
                        if (v29 != v59)
                        {
                            v0 = v58;
                            v1 = v59;
                            vvar_1115{stack -248} = &g_5feeb8;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                    }
                    else
                    {
                        if (*((char *)(v58 + v29)) <= 191)
                        {
                            vvar_1118{stack -264} = v58;
                            vvar_1119{stack -256} = v59;
                            vvar_1123{stack -248} = &g_5feeb8;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                    }
                }
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " ", 1, unicode_width::str_width::h790f4f44c65722ae(v58, v29, 0));
                v10 = &v8;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_424b00;
                v4 = 1;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
                if (v24)
                {
                    ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
                    goto LABEL_51e694;
                }
                else
                {
                    ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
                    if (v29 >= v57)
                    {
                        v3 = &g_5fede8;
                        v4 = 1;
                        v5 = 8;
                        v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v6) = 0;
                        v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
                        if (!v24)
                            continue;
                    }
                    else
                    {
                        v60 = *((long long *)&v13);
                        v61 = *((long long *)&v14);
                        v62 = ::0x51ad00::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v29, v57, v60, v61);
                        if (!v62)
                        {
                            v0 = v60;
                            v1 = v61;
                            v2 = &g_5feeb8;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "_", 1, unicode_width::str_width::h790f4f44c65722ae(v62, v32, 0));
                        v10 = &v8;
                        v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = &g_5fedc8;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v10;
                        v6 = 1;
                        v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
                        if (!v24)
                        {
                            ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
                        }
                        else
                        {
                            ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
                            goto LABEL_51e694;
                        }
                    }
                }
            } while ((v26 = ::0x51c960::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b5284f2e41ec843(&v20), v23 = v1, v0 = v0, v26));
        }
        v63 = a2->field_98;
        if (!(v63 != 5) || !(!a2->field_83) || !(!a2->field_84))
        {
            ::0x51a750::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::he531bf58d34912f1(&v15);
            ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v12);
            return 0;
        }
        if (!a2->field_7f && !a2->field_7d && !a2->field_7e && v63 == 6 && !a2->field_80)
        {
            v65 = v18;
            v66 = v19 + (v65 - 1) * 56;
            if (1 > v65)
                v66 = 0;
            if (!core::option::Option$LT$T$GT$::map_or::h93ac63b445f3de24(v66))
            {
                ::0x51a750::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::he531bf58d34912f1(&v15);
                ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v12);
                return 0;
            }
        }
        if (!v23)
        {
            v3 = &g_5fede8;
            v4 = 1;
            v5 = 8;
            *((int128_t *)&v6) = 0;
            v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
            if (!v24)
            {
                ::0x51a750::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::he531bf58d34912f1(&v15);
                ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v12);
                return 0;
            }
        }
        else
        {
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, "_", 1, unicode_width::str_width::h790f4f44c65722ae(*((long long *)&v13), *((long long *)&v14), 0));
            v10 = &v8;
            v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_5fedc8;
            v4 = 2;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            v24 = std::io::Write::write_fmt::h74771b03fd1e5938(a3, &v3);
            if (!v24)
            {
                ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
                ::0x51a750::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::he531bf58d34912f1(&v15);
                ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v12);
                return 0;
            }
            ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v8);
        }
LABEL_51e694:
        ::0x51a750::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::he531bf58d34912f1(&v15);
    }
    ::0x519d60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb12604c1fcb6be4(&v12);
    return v24;
}
