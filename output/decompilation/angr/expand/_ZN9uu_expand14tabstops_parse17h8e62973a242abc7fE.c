long long uu_expand::tabstops_parse::h8e62973a242abc7f(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [sp-0x130]
    unsigned long long v1;  // [sp-0x128]
    void* v2;  // [sp-0x118]
    int v3;  // [bp-0x108], Other Possible Types: char
    unsigned int v4;  // [bp-0x108]
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
    char *v28;  // rax
    char *v29;  // rbp
    unsigned long long v30;  // r13
    void* v31;  // rbx
    char *v32;  // r12
    char *v33;  // rax
    unsigned int v34;  // edx
    unsigned long v35;  // rcx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rbp
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long *v42;  // rax
    struct_0 *v43;  // rcx
    struct_0 *v44;  // rbx
    unsigned long long v45;  // r15
    unsigned long long v46;  // r15
    char v47;  // al
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    int v50;  // xmm0

    v24 = a0;
    if (!v26)
    {
        v27 = ::0x4b0f60::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        if (!v27)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 8); /* do not return */
        *(v27) = 8;
        alloc::slice::hack::into_vec::hc80358b1381473c5(&v3, v27, 1);
        v12 = v5;
        *((int128_t *)&v9) = *((int128_t *)&v3);
        a0->field_8 = 0;
    }
    else
    {
        v1 = 0;
        v1 = 8;
        v2 = 0;
        ::0x4b1480::_$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h40e4370e140be348(&v11, core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h1edad313e4e2a03a(a1, a2), a2);
        v8 = 0;
        v10 = v26;
        v13 = 1;
        v28 = core::str::iter::SplitInternal$LT$P$GT$::next::h09541ba4b5d07887(&v8);
        if (!v28)
        {
            v46 = 0;
            goto LABEL_4b1969;
        }
        else
        {
            v29 = v28;
            v30 = v26;
            v0 = a0;
            v31 = 0;
            v46 = 0;
            do
            {
                if (v30)
                {
                    v32 = 0;
                    v33 = ::0x4af930::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v32);
                    v36 = v35 & 0xffffffffffffff00 | 2;
                    switch (v34)
                    {
                    case 43:
                        v32 = v33;
                        v46 = v36 & 4294967295;
                        if (v33 >= v30)
                        {
                            v46 = v36 & 4294967295;
                            continue;
                        }
                    case 47:
                        v36 = v36 & 0xffffffffffffff00 | 1;
                    default:
                        core::str::converts::from_utf8::ha1effb4cca6d9901(&v3, v29 + v32, v30 - v32);
                        v37 = core::result::Result$LT$T$C$E$GT$::unwrap::h6029b96464d79daa(&v3);
                        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v16, v37, a2);
                        if (!v16)
                        {
                            v38 = *((long long *)&v18);
                            if (!v38)
                            {
                                v41 = 9223372036854775811;
                                goto LABEL_4b1aa0;
                            }
                            else
                            {
                                v39 = v2;
                                if (!(!(v39) || !(*((long long *)(v1 + v39 * 8 - 8)) >= v38)))
                                {
                                    v41 = 9223372036854775813;
LABEL_4b1aa0:
                                    v43 = v0;
                                    goto LABEL_4b1c33;
                                }
                                else if (((char)v31 & 1))
                                {
                                    if ((char)v46 == 1)
                                    {
                                        ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v3, "/", 1);
                                        v43 = v0;
                                    }
                                    else
                                    {
                                        ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v3, "+src/uu/expand/src/expand.rs", 1);
                                        v43 = v0;
                                    }
                                    v15 = v5;
                                    *((int128_t *)&v14) = *((int128_t *)&v4);
                                    *((unsigned long long *)((char *)&v43->field_9 + 8)) = v15;
                                    *((void*)&v43->field_8) = v14;
                                    v41 = 9223372036854775810;
                                    goto LABEL_4b1c33;
                                }
                                else
                                {
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc00765dc6d21f5c0(&v1, v38);
                                    v31 = ((v46 & 255 & 255) ? v31 & 4294967295 & 4294967295 : 1);
                                    continue;
                                }
                            }
                        }
                        if (v17 == 2)
                        {
                            ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v3, v37, v26);
                            v43 = v0;
                            *((unsigned long *)((char *)&v43->field_9 + 8)) = v5;
                            *((int128_t *)&v43->field_8) = *((int128_t *)&v3);
                            v41 = 9223372036854775812;
LABEL_4b1c33:
                            *((unsigned long long *)&v43->padding_19) = v41;
                            v43->field_0 = 1;
                            break;
                        }
                        v44 = v0;
                        v45 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h87967b6d9b6e9ec0(v37, v26);
                        v4 = 0;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(v45, v26, ::0x4b0af0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(47, &v3), 1))
                        {
LABEL_4b1b20:
                            v49 = ::0x4b0a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v45, v26);
                            if (!v49)
                                core::str::slice_error_fail::h5dbb61534404fe7e(v45, v26, 0, 1, &g_51cd68); /* do not return */
                            ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v3, v49, 1);
                            v20 = v5;
                            *((int128_t *)&v19) = *((int128_t *)&v4);
                            ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v21, v45, v26);
                            v7 = *((long long *)&v22);
                            *((int128_t *)&v6) = *((int128_t *)&v21);
                            v5 = v20;
                            v50 = v19;
                            v3 = v50;
                            v44->field_20 = (long long)(&v6)[8];
                            v44->field_28 = v7;
                            *((unsigned long long *)((char *)&v44->field_9 + 8)) = v5;
                            *((long long *)&v44->padding_19) = (long long)v6;
                            *((void*)&v44->field_8) = v50;
                            v44->field_0 = 1;
                            break;
                        }
                        else
                        {
                            v4 = 0;
                            if (!(!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha65bc1b4c59a7c83(v45, v26, ::0x4b0af0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v3), 1)))
                                goto LABEL_4b1b20;
                            ::0x4b0d60::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(&v3, v45, v26);
                            *((unsigned long *)((char *)&v44->field_9 + 8)) = v5;
                            *((int128_t *)&v44->field_8) = *((int128_t *)&v4);
                            *((unsigned long long *)&v44->padding_19) = 0x8000000000000000;
                            v44->field_0 = 1;
                            break;
                        }
                        v48 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h9cac72b98b8e7a45(&v1);
                        return v48;
                    }
                }
            } while ((v29 = core::str::iter::SplitInternal$LT$P$GT$::next::h09541ba4b5d07887(&v8), v30 = v26, v29));
            v40 = v2;
            v24 = v0;
            if (!v40)
            {
LABEL_4b1969:
                v42 = ::0x4b0f60::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
                if (!v42)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 8); /* do not return */
                *(v42) = 8;
                alloc::slice::hack::into_vec::hc80358b1381473c5(&v8, v42, 1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h9cac72b98b8e7a45(&v1);
                v40 = *((long long *)&v11);
                v2 = v40;
                *((int128_t *)&v1) = *((int128_t *)&v8);
            }
            v47 = (v40 < 2 ? (char)(v46 & 4294967295 & 4294967295) : 0);
            v12 = v2;
            *((int128_t *)&v9) = *((int128_t *)&v1);
            v24->field_8 = v47;
        }
    }
    v48 = (long long)(&v9)[8];
    *((int128_t *)&(&v24->field_8)[1]) = *((int128_t *)&v8);
    *((unsigned long long *)((char *)&v24->field_9 + 8)) = v48;
    *((unsigned long long *)&v24->padding_19) = v12;
    v24->field_0 = 0;
    return v48;
}
