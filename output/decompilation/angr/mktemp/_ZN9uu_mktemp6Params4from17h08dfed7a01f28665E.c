long long uu_mktemp::Params::from::h08dfed7a01f28665(struct_2 *a0, struct_0 *a1)
{
    char v0;  // [sp-0x1a1]
    unsigned long long *v1;  // [sp-0x1a0]
    char *v2;  // [bp-0x198]
    char *v3;  // [bp-0x198]
    char *v4;  // [bp-0x198]
    unsigned long long v5;  // [sp-0x190]
    void* v6;  // [sp-0x188], Other Possible Types: char *, unsigned long long
    unsigned long long v7;  // [sp-0x180]
    char *v8;  // [bp-0x178]
    char *v9;  // [bp-0x178]
    char *v10;  // [bp-0x178]
    unsigned long v11;  // [sp-0x170], Other Possible Types: unsigned long long
    struct struct_1 **v12;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    char *v13;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x158]
    unsigned long long v15;  // [sp-0x150]
    char *v16;  // [sp-0x148]
    unsigned long long v17;  // [sp-0x138]
    char *v18;  // [bp-0x128], Other Possible Types: unsigned long long (64 bits)[3]
    char v19;  // [bp-0x120]
    unsigned long v20;  // [sp-0x118], Other Possible Types: unsigned long long
    void* v21;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x100]
    void* v23;  // [sp-0xf8], Other Possible Types: char *, unsigned long
    char *v24;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v25;  // [sp-0xe8]
    char v26;  // [bp-0xe0]
    char v27;  // [bp-0xd8]
    char v28;  // [bp-0xd0]
    int v29;  // [sp-0xc8]
    unsigned long long v30;  // [sp-0xb8]
    unsigned long v31;  // [sp-0xa8]
    int v32;  // [sp-0xa0], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x98]
    char *v34;  // [sp-0x90]
    unsigned long long v35;  // [sp-0x88]
    unsigned long long v36;  // [sp-0x80]
    char *v37;  // [sp-0x78]
    unsigned long long v38;  // [sp-0x68]
    unsigned long v39;  // [sp-0x58]
    unsigned long long v40;  // [sp-0x50]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x38]
    char *v44;  // r14
    unsigned long long v45;  // r12
    unsigned long long v46;  // rdx
    char *v47;  // r13
    char *v48;  // rax
    unsigned long long v49;  // rcx
    char *v50;  // rax
    char *v51;  // rbp
    unsigned long long v52;  // rsi
    unsigned long long v53;  // r12
    unsigned long long v54;  // rax
    unsigned long long v55;  // r14
    unsigned long long v56;  // rbp
    char v57;  // r12b
    unsigned long long v58;  // rax
    char *v59;  // rcx
    void* v60;  // rdx
    unsigned long long v61;  // r14
    unsigned long long v62;  // rbp
    char *v63;  // rax
    unsigned long long v64;  // rax
    void* v65;  // rax
    char *v66;  // rbp
    unsigned long long v67;  // r14
    unsigned long long v68;  // rax
    char *v69;  // xmm0

    v1 = &a1->field_28;
    if (a1->field_28 != 0x8000000000000000)
    {
        v44 = a1->padding_8;
        v45 = a1->field_10;
        *((unsigned int *)&v8) = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(v44, v45, ::0x4bde50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(88, &v8), v46))
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((unsigned long long *)&a0->field_10) = 9223372036854775809;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&(&a1->field_10)[1]);
            ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
            return a0;
        }
    }
    uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(v18, a1->padding_8, a1->field_10);
    if (v18[0])
    {
        v47 = *((long long *)&v19);
        v22 = v20;
        v30 = *((long long *)((char *)&a1->field_18 + 8));
        *((int128_t *)&v29) = *((int128_t *)&(&a1->field_10)[1]);
        if ((long long)v29 == 0x8000000000000000 || (v45 = v45 & 0xffffffffffffff00 | 1, _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e8a4977c3ae2c93(&v8, &v29), v50 = v8, *((int128_t *)&v2) = *((int128_t *)&v11), v23 == 0x8000000000000000))
        {
            v23 = 0;
            v24 = 1;
            v25 = 0;
        }
        else
        {
            *((int128_t *)&v24) = *((int128_t *)&v2);
            v23 = v50;
        }
        v51 = a1->padding_8;
        if (v47)
        {
            v52 = a1->field_10;
            if (v47 >= v52)
            {
                if (v47 != v52)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v51, v52, 0, v47, &g_536a40); /* do not return */
            }
            else
            {
                if (*((char *)(v51 + v47)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v51, v52, 0, v47, &g_536a40); /* do not return */
            }
        }
        std::path::Path::join::hac25b276bfec4f36(&v8, v24, v25, v51, v47);
        *((int128_t *)&v4) = *((int128_t *)&v11);
        v21 = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v26, &v4) & 0xffffffffffffff00 | 1;
        v53 = (v45 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
        ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v8);
        if (*((char *)&a1->field_38 + 11) && (v53 = v53 & 0xffffffffffffff00 | 1, ::0x4be120::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v51, v47)))
        {
            v54 = 9223372036854775811;
            goto LABEL_4bf341;
        }
        if ((long long)v29 != 0x8000000000000000 && (v53 = v53 & 0xffffffffffffff00 | 1, (char)std::path::Path::is_absolute::h3431a23d91045560(v51, v47)))
        {
            v54 = 9223372036854775813;
LABEL_4bf341:
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((unsigned long long *)&a0->field_10) = v54;
            a0->field_0 = 0x8000000000000000;
            v57 = v53 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v55 = *((long long *)&v27);
            v56 = *((long long *)&v28);
            *((unsigned int *)&v8) = 0;
            v0 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(v55, v56, ::0x4bde50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(47, &v8), v46);
            if (v0)
            {
                v12 = *((long long *)&v28);
                *((int128_t *)&v9) = *((int128_t *)&v26);
                v58 = 1;
                v21 = 0;
                v59 = 0;
                v60 = 0;
            }
            else
            {
                v61 = *((long long *)&v27);
                v62 = *((long long *)&v28);
                v63 = std::path::Path::parent::h65c9a340a6266f2d(v61, v62);
                if (!v63)
                {
                    v4 = 0;
                    v4 = 1;
                    v6 = 0;
                }
                else
                {
                    v8 = v63;
                    v11 = v46;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v4, &v8);
                }
                v64 = std::path::Path::file_name::h79ecbb7850a9c7f3(v61, v62);
                if (!v64)
                {
                    v58 = 1;
                    v59 = 0;
                    v60 = 0;
                }
                else
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v8, v64, v46);
                    if (v8)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_536a58); /* do not return */
                    ::0x4be0b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&v8, v11, v12);
                    v59 = v8;
                    v58 = v11;
                    v60 = v12;
                }
                v12 = v6;
                *((int128_t *)&v9) = *((int128_t *)&v4);
                v21 = v12 & 0xffffffffffffff00 | 1;
            }
            v38 = v12;
            *((int128_t *)&v37) = *((int128_t *)&v9);
            v34 = v59;
            v35 = v58;
            v36 = v60;
            v65 = *(v1);
            if (v65 == 0x8000000000000000)
            {
                v32 = 1;
                v33 = 0;
                v65 = 0;
            }
            else
            {
                *((int128_t *)&v32) = *((int128_t *)&a1->field_30);
            }
            v31 = v65;
            v66 = a1->padding_8;
            v67 = a1->field_10;
            v68 = ::0x4bd8f0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v22, v66, v67);
            if (!v68)
                core::str::slice_error_fail::h5dbb61534404fe7e(v66, v67, v22, v67, &g_536a70); /* do not return */
            v39 = v68;
            v40 = v46;
            v2 = &v39;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            v6 = &v31;
            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v10 = &g_41a7a8;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&v41, &v8);
            *((int128_t *)&v18) = *((int128_t *)&v41);
            v20 = *((long long *)&v42);
            if (!::0x4be120::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf((&v18)[1], *((long long *)&v42)))
            {
                v12 = v38;
                v69 = v37;
                v10 = v69;
                v15 = v36;
                *((int128_t *)&v13) = *((int128_t *)&v34);
                v17 = v20;
                v16 = v18;
                *((unsigned long long *)&a0->field_30) = v17;
                a0->field_20 = v16;
                a0->field_0 = v69;
                *((void* *)&a0->field_10) = v14;
                *((unsigned long long *)((char *)&a0->field_10 + 8)) = v15;
                a0->field_8 = *((int128_t *)&v12);
                *((char **)((char *)&a0->field_30 + 8)) = v22 - v47;
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v31);
                if (!v0)
                    ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v26);
                ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v23);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&v29);
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                return a0;
            }
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v20;
            (&a0->field_0)[1] = v18;
            *((unsigned long long *)&a0->field_10) = 9223372036854775812;
            a0->field_0 = 0x8000000000000000;
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v31);
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v34);
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v37);
            v57 = 0;
            if (v0)
            {
LABEL_4bf67c:
                ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v23);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&v29);
                if (!v57)
                {
                    ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                    return a0;
                }
                ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                return a0;
            }
        }
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v26);
        goto LABEL_4bf67c;
    }
    else
    {
        if (*(v1) == 0x8000000000000000)
        {
            v6 = a1->field_10;
            *((int128_t *)&v3) = *((int128_t *)&a1->field_0);
        }
        else
        {
            v48 = a1->padding_8;
            v49 = a1->field_10;
            v8 = v48;
            v11 = &v48[v49];
            v12 = v49;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h880836f94e14e84d(&v4, &v8);
        }
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v6;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
        *((unsigned long long *)&a0->field_10) = 9223372036854775810;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&(&a1->field_10)[1]);
        ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
        return a0;
    }
}
