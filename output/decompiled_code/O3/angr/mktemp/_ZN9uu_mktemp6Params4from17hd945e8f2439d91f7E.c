long long uu_mktemp::Params::from::hd945e8f2439d91f7(struct_2 *a0, struct_0 *a1, unsigned long a2)
{
    char v0;  // [sp-0x1a5]
    unsigned int v1;  // [sp-0x1a4]
    unsigned long long *v2;  // [sp-0x1a0]
    void* v3;  // [bp-0x198], Other Possible Types: int, unsigned long long
    unsigned long long v4;  // [sp-0x190]
    void* v5;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x180]
    int v7;  // [bp-0x178], Other Possible Types: char *, unsigned int, unsigned long
    unsigned long v8;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x168], Other Possible Types: unsigned long long
    int v10;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x158]
    unsigned long long v12;  // [sp-0x150]
    int v13;  // [sp-0x148]
    unsigned long long v14;  // [sp-0x138]
    unsigned long long v15[3];  // [bp-0x128], Other Possible Types: int
    char v16;  // [bp-0x120]
    unsigned long v17;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x108]
    unsigned long long v19;  // [sp-0x100]
    void* v20;  // [sp-0xf8], Other Possible Types: char *, unsigned long
    int v21;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v22;  // [sp-0xe8]
    char v23;  // [bp-0xe0]
    char v24;  // [bp-0xd8]
    char v25;  // [bp-0xd0]
    int v26;  // [sp-0xc8]
    unsigned long long v27;  // [sp-0xb8]
    unsigned long v28;  // [sp-0xa8], Other Possible Types: unsigned long long
    int v29;  // [sp-0xa0], Other Possible Types: unsigned long long
    void* v30;  // [sp-0x98]
    char *v31;  // [sp-0x90]
    unsigned long long v32;  // [sp-0x88]
    unsigned long long v33;  // [sp-0x80]
    int v34;  // [sp-0x78]
    unsigned long long v35;  // [sp-0x68]
    unsigned long v36;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x50]
    char v38;  // [bp-0x48]
    char v39;  // [bp-0x38]
    unsigned long long v41;  // r13
    char *v42;  // r14
    unsigned long long v43;  // r12
    unsigned long long v44;  // rdx
    char *v45;  // r12
    char *v46;  // rax
    unsigned long long v47;  // rcx
    char *v48;  // rax
    char *v49;  // rbp
    unsigned long long v50;  // rsi
    unsigned long long v51;  // r13
    unsigned long long v52;  // rax
    unsigned long long v53;  // r14
    unsigned long long v54;  // rbp
    char v55;  // r13b
    unsigned long long v56;  // rax
    void* v57;  // rdi
    char *v58;  // rcx
    void* v59;  // rdx
    unsigned long long v60;  // r14
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rcx
    char *v63;  // rax
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rdi
    void* v67;  // rax
    unsigned long long v68;  // rax
    int v69;  // xmm0

    v41 = 0x8000000000000000;
    v2 = &a1->field_28;
    if (a1->field_28 != 0x8000000000000000)
    {
        v42 = a1->padding_8;
        v43 = a1->field_10;
        v7 = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hef24bb98bfbdf34a(v42, v43, ::0x4bd420::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(88, &v7), v44))
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((long long *)&a0->field_10) = 9223372036854775809;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8ea3241ac42aff28(&(&a1->field_10)[1]);
            ::0x4bca30::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9c170891045b4434(v2);
            return a0;
        }
    }
    uu_mktemp::find_last_contiguous_block_of_xs::hecdc602d4c34cf21(v15, a1->padding_8, a1->field_10);
    if (v15[0])
    {
        v45 = *((long long *)&v16);
        v19 = v17;
        v27 = *((long long *)((char *)&a1->field_18 + 8));
        *((int128_t *)&v26) = *((int128_t *)&(&a1->field_10)[1]);
        if ((long long)v26 == 0x8000000000000000 || (v41 = -255, _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h365189d532bd25e3(&v7, &v26), v48 = v7, *((int128_t *)&v3) = *((int128_t *)&v8), v20 == 0x8000000000000000))
        {
            v20 = 0;
            v21 = 1;
            v22 = 0;
        }
        else
        {
            *((int128_t *)&v21) = (int128_t)v3;
            v20 = v48;
        }
        v49 = a1->padding_8;
        if (v45)
        {
            v50 = a1->field_10;
            if (v45 >= v50)
            {
                if (v45 != v50)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v49 + v45)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        std::path::Path::join::h48b55c370229b4ed(&v7, v21, v22, v49, v45);
        *((int128_t *)&v3) = *((int128_t *)&v8);
        v1 = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h75aa138661dfc8f3(&v23, &v3) | -0x100 | 1;
        v51 = v41 | -0x100 | 1 | -0x100 | 1;
        ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v7);
        if (*((char *)&a1->field_38 + 11) && (v51 = v51 | -0x100 | 1, (char)::0x4bd6f0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v49, v45)))
        {
            v52 = 9223372036854775811;
            goto LABEL_4be90d;
        }
        if ((long long)v26 != 0x8000000000000000 && (v51 = v51 | -0x100 | 1, (char)std::path::Path::is_absolute::h3431a23d91045560(v49, v45)))
        {
            v52 = 9223372036854775813;
LABEL_4be90d:
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((unsigned long long *)&a0->field_10) = v52;
            a0->field_0 = 0x8000000000000000;
            v55 = v51 | -0x100 | 1;
        }
        else
        {
            v53 = *((long long *)&v24);
            v54 = *((long long *)&v25);
            *((int *)&v7) = 0;
            v0 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hef24bb98bfbdf34a(v53, v54, ::0x4bd420::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(47, &v7), v44);
            if (v0)
            {
                v9 = *((long long *)&v25);
                *((int128_t *)&v7) = *((int128_t *)&v23);
                v56 = 1;
                v57 = 0;
                v58 = 0;
                v59 = 0;
            }
            else
            {
                v60 = *((long long *)&v24);
                v61 = *((long long *)&v25);
                v63 = std::path::Path::parent::h65c9a340a6266f2d(v60, v61, v44, v62);
                if (!v63)
                {
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                }
                else
                {
                    v7 = v63;
                    v56 = v44;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h75aa138661dfc8f3(&v3, &v7);
                }
                v65 = std::path::Path::file_name::h79ecbb7850a9c7f3(v60, v61, v64, v62);
                if (!v65)
                {
                    v56 = 1;
                    v58 = 0;
                    v59 = 0;
                }
                else
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v7, v65, v44);
                    if (v7)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    ::0x4bd680::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha829c9a0da0479c0(&v7, v56, v9);
                    v58 = v7;
                }
                v9 = v5;
                *((int128_t *)&v7) = *((int128_t *)&v3);
                v57 = v66 | -0x100 | 1;
            }
            v35 = v9;
            *((int128_t *)&v34) = (int128_t)v7;
            v31 = v58;
            v32 = v56;
            v33 = v59;
            v67 = *(v2);
            v18 = v57;
            if (v67 == 0x8000000000000000)
            {
                v29 = 1;
                v30 = 0;
                v67 = 0;
            }
            else
            {
                *((int128_t *)&v29) = *((int128_t *)&a1->field_30);
            }
            v28 = v67;
            v68 = ::0x4bcec0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v19, a1->padding_8, a1->field_10);
            if (!v68)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v36 = v68;
            v37 = v44;
            v3 = &v36;
            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc07670575eb29e7c;
            v5 = &v28;
            v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v7 = &g_41a730;
            v8 = 2;
            v11 = 0;
            v9 = &v3;
            v10 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hdb0749e3a6471f8c(&v38, &v7);
            *((int128_t *)&v15) = *((int128_t *)&v38);
            v17 = *((long long *)&v39);
            if (!(char)::0x4bd6f0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf((long long)(&v15)[8], *((long long *)&v39)))
            {
                v9 = v35;
                v69 = v34;
                v7 = v69;
                v12 = v33;
                *((int128_t *)&v10) = *((int128_t *)&v31);
                v14 = v17;
                v13 = v15;
                *((unsigned long long *)&a0->field_30) = v14;
                *((void*)&a0->field_20) = v13;
                *((void*)&a0->field_0) = v69;
                *((void* *)&a0->field_10) = v11;
                *((unsigned long long *)((char *)&a0->field_10 + 8)) = v12;
                a0->field_8 = *((int128_t *)&v9);
                *((char **)((char *)&a0->field_30 + 8)) = v19 - v45;
                ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v28);
                if (!v0)
                    ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v23);
                ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v20);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8ea3241ac42aff28(&v26);
                ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(a1);
                return a0;
            }
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v17;
            *((void*)&(&a0->field_0)[1]) = v15;
            *((long long *)&a0->field_10) = 9223372036854775812;
            a0->field_0 = 0x8000000000000000;
            ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v28);
            ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v31);
            v1 = 0;
            ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v34);
            v55 = 0;
            if (v0)
            {
LABEL_4bec4d:
                ::0x4bc1b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc121595709527856(&v20);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8ea3241ac42aff28(&v26);
                if (!v55)
                {
                    ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(a1);
                    return a0;
                }
                ::0x4bca30::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9c170891045b4434(v2);
                ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(a1);
                return a0;
            }
        }
        ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(&v23);
        goto LABEL_4bec4d;
    }
    else
    {
        if (*(v2) == 0x8000000000000000)
        {
            v5 = a1->field_10;
            *((int128_t *)&v3) = *((int128_t *)&a1->field_0);
        }
        else
        {
            v46 = a1->padding_8;
            v47 = a1->field_10;
            v7 = v46;
            v8 = &v46[v47];
            v9 = v47;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hf60523068e8fda20(&v3, &v7);
        }
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v5;
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v3;
        *((long long *)&a0->field_10) = 9223372036854775810;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8ea3241ac42aff28(&(&a1->field_10)[1]);
        ::0x4bca30::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9c170891045b4434(v2);
        ::0x4bc1c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0896263e8ba4858e(a1);
        return a0;
    }
}
