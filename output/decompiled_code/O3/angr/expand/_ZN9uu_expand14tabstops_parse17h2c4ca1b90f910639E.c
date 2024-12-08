long long uu_expand::tabstops_parse::h2c4ca1b90f910639(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    struct_0 *v0;  // [sp-0x130]
    void* v1;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x120]
    void* v3;  // [sp-0x118]
    int v4;  // [bp-0x108], Other Possible Types: char, unsigned int
    unsigned long long v5;  // [sp-0xf8], Other Possible Types: unsigned long
    int v6;  // [sp-0xf0]
    unsigned long long v7;  // [sp-0xe0]
    void* v8;  // [bp-0xd8]
    int v9;  // [bp-0xd1]
    unsigned long long v10;  // [sp-0xd0]
    char v11;  // [bp-0xc8]
    unsigned long long v12;  // [sp-0xc1]
    unsigned short v13;  // [sp-0xa0]
    int v14;  // [sp-0x98]
    unsigned long long v15;  // [sp-0x88]
    char v16;  // [bp-0x78]
    char v17;  // [bp-0x77]
    char v18;  // [bp-0x70]
    int v19;  // [sp-0x68]
    unsigned long long v20;  // [sp-0x58]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    struct_0 *v24;  // rbx
    unsigned long long v26;  // rdx
    unsigned long long *v27;  // rax
    unsigned long long v28;  // rsi
    char *v29;  // rax
    void* v30;  // r15
    void* v31;  // rbx
    unsigned long long v34;  // r13
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rsi
    unsigned long long v37;  // r13
    char *v39;  // r12
    char *v40;  // rax
    unsigned long v41;  // rcx
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long *v48;  // rax
    struct_0 *v49;  // rbx
    unsigned long long v50;  // r15
    unsigned long long v51;  // r15
    char v52;  // al
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    int v55;  // xmm0

    v24 = a0;
    if (!v26)
    {
        v27 = ::0x4b1a70::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        if (!v27)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v27) = 8;
        alloc::slice::hack::into_vec::hae62398eb5874c4a(&v4, v27, 1);
        v12 = v5;
        *((int128_t *)&v9) = *((int128_t *)&v4);
        a0->field_8 = 0;
    }
    else
    {
        v1 = 0;
        v2 = 8;
        v3 = 0;
        ::0x4b1f90::_$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h13ec31786ed16cb1(&v11, core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hdeba4c3128d19806(a1, a2), v26);
        v8 = 0;
        v10 = v26;
        v13 = 1;
        v29 = core::str::iter::SplitInternal$LT$P$GT$::next::h4cce6b6652776730(&v8, v28, v26);
        if (!v29)
        {
            v30 = 0;
            goto LABEL_4b2479;
        }
        else
        {
            v0 = a0;
            v30 = 0;
            v31 = 0;
            do
            {
                v34 = v37;
                if (v34)
                {
                    v39 = 0;
                    v40 = ::0x4b0440::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v39);
                    v35 = *((char *)(v29 + v39));
                    v42 = v41 | -0x100 | 2;
                    switch ((unsigned int)v35)
                    {
                    case 43:
                        v30 = v42 & 4294967295;
                        if (v40 >= v34)
                        {
                            v30 = v42 & 4294967295;
                            continue;
                        }
                    case 47:
                        v42 = v42 | -0x100 | 1;
                    default:
                        core::str::converts::from_utf8::ha1effb4cca6d9901(&v4, v29 + v39, v34 - v39);
                        v43 = core::result::Result$LT$T$C$E$GT$::unwrap::h283d17e278c6f1d9(&v4);
                        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v16, v43, v26);
                        if (!v16)
                        {
                            v44 = *((long long *)&v18);
                            if (!v44)
                            {
                                v47 = 9223372036854775811;
                                goto LABEL_4b25b0;
                            }
                            else
                            {
                                v45 = v3;
                                if (!(!(v45) || !(*((long long *)(v2 + (v45 << 3) - 8)) >= v44)))
                                {
                                    v47 = 9223372036854775813;
LABEL_4b25b0:
                                    goto LABEL_4b2743;
                                }
                                else if (((char)v31 & 1))
                                {
                                    if ((char)v30 != 1)
                                        ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v4, "+", 1);
                                    else
                                        ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v4, "/", 1);
                                    v15 = v5;
                                    *((int128_t *)&v14) = *((int128_t *)&v4);
                                    *((unsigned long long *)((char *)&v0->field_9 + 8)) = v15;
                                    *((void*)&v0->field_8) = v14;
                                    v47 = 9223372036854775810;
                                    goto LABEL_4b2743;
                                }
                                else
                                {
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h359623b4f7db9bb9(&v1, v44, v26);
                                    v31 = ((v30 & 255 & 255) ? 1 : v31 & 4294967295 & 4294967295);
                                    continue;
                                }
                            }
                        }
                        if (v17 == 2)
                        {
                            ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v4, v43, v26);
                            v0 = v0;
                            *((unsigned long *)((char *)&v0->field_9 + 8)) = v5;
                            *((int128_t *)&v0->field_8) = *((int128_t *)&v4);
                            v47 = 9223372036854775812;
LABEL_4b2743:
                            *((unsigned long long *)&v0->padding_19) = v47;
                            v0->field_0 = 1;
                            break;
                        }
                        v49 = v0;
                        v50 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hc1c86cb40e9c5b7c(v43, v26);
                        v4 = 0;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdf3b467a6fe135d2(v50, v26, ::0x4b1600::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(47, &v4), 1))
                        {
LABEL_4b2630:
                            v54 = ::0x4b1550::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v50, v26);
                            if (!v54)
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v4, v54, 1);
                            v20 = v5;
                            *((int128_t *)&v19) = *((int128_t *)&v4);
                            ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v21, v50, v26);
                            v7 = *((long long *)&v22);
                            *((int128_t *)&v6) = *((int128_t *)&v21);
                            v5 = v20;
                            v55 = v19;
                            v4 = v55;
                            v49->field_20 = (long long)(&v6)[8];
                            v49->field_28 = v7;
                            *((unsigned long long *)((char *)&v49->field_9 + 8)) = v5;
                            *((long long *)&v49->padding_19) = (long long)v6;
                            *((void*)&v49->field_8) = v55;
                            v49->field_0 = 1;
                            break;
                        }
                        else
                        {
                            v4 = 0;
                            if ((v29 = core::str::iter::SplitInternal$LT$P$GT$::next::h4cce6b6652776730(&v8, v36, v35), v29))
                                goto LABEL_4b2630;
                            ::0x4b1870::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4c78985cf14690a7(&v4, v50, v26);
                            *((unsigned long *)((char *)&v49->field_9 + 8)) = v5;
                            *((int128_t *)&v49->field_8) = *((int128_t *)&v4);
                            *((long long *)&v49->padding_19) = 0x8000000000000000;
                            v49->field_0 = 1;
                            break;
                        }
                        v53 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he9482ca8909490c8(&v1);
                        return v53;
                    }
                }
            } while ((v29 = core::str::iter::SplitInternal$LT$P$GT$::next::h4cce6b6652776730(&v8, v36, v35), v29));
            v46 = v3;
            v24 = v0;
            if (!v46)
            {
LABEL_4b2479:
                v48 = ::0x4b1a70::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
                if (!v48)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *(v48) = 8;
                alloc::slice::hack::into_vec::hae62398eb5874c4a(&v8, v48, 1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he9482ca8909490c8(&v1);
                v46 = *((long long *)&v11);
                v3 = v46;
                *((int128_t *)&v1) = *((int128_t *)&v8);
            }
            v52 = (v46 < 2 ? 0 : (char)(v51 & 4294967295 & 4294967295));
            v12 = v3;
            *((int128_t *)&v9) = *((int128_t *)&v1);
            v24->field_8 = v52;
        }
    }
    v53 = (long long)(&v9)[8];
    *((int128_t *)&(&v24->field_8)[1]) = *((int128_t *)&v8);
    *((unsigned long long *)((char *)&v24->field_9 + 8)) = v53;
    *((unsigned long long *)&v24->padding_19) = v12;
    v24->field_0 = 0;
    return v53;
}
