long long uu_mktemp::Params::from::h08dfed7a01f28665(struct_1 *a0, struct_2 *a1)
{
    char v0;  // [sp-0x1a1]
    unsigned long long *v1;  // [sp-0x1a0]
    void* v2;  // [bp-0x198], Other Possible Types: char *
    unsigned long long v3;  // [sp-0x190]
    void* v4;  // [sp-0x188], Other Possible Types: char *, unsigned long long
    unsigned long long v5;  // [sp-0x180]
    char *v6;  // [bp-0x178]
    char v7;  // [sp-0x170], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v8;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    char *v9;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x158]
    unsigned long long v11;  // [sp-0x150]
    char *v12;  // [sp-0x148]
    unsigned long long v13;  // [sp-0x138]
    unsigned long long v14[3];  // [bp-0x128], Other Possible Types: char *
    char v15;  // [bp-0x120]
    unsigned long v16;  // [sp-0x118], Other Possible Types: unsigned long long
    void* v17;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x100]
    void* v19;  // [sp-0xf8], Other Possible Types: char *
    char *v20;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v21;  // [sp-0xe8]
    char v22;  // [bp-0xe0]
    char v23;  // [bp-0xd8]
    char v24;  // [bp-0xd0]
    char *v25;  // [sp-0xc8]
    unsigned long long v26;  // [sp-0xb8]
    unsigned long v27;  // [sp-0xa8], Other Possible Types: unsigned long long
    int v28;  // [sp-0xa0], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x98]
    char *v30;  // [sp-0x90]
    unsigned long long v31;  // [sp-0x88]
    unsigned long long v32;  // [sp-0x80]
    char *v33;  // [sp-0x78]
    unsigned long long v34;  // [sp-0x68]
    unsigned long v35;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x50]
    char v37;  // [bp-0x48]
    char v38;  // [bp-0x38]
    char *v40;  // r14
    unsigned long long v41;  // r12
    unsigned long long v42;  // rdx
    char *v43;  // r13
    char *v44;  // rax
    unsigned long long v45;  // rcx
    char *v46;  // rax
    char *v47;  // rbp
    unsigned long long v48;  // rsi
    unsigned long long v49;  // r12
    unsigned long long v50;  // rax
    unsigned long long v51;  // r14
    unsigned long long v52;  // rbp
    char v53;  // r12b
    unsigned long long v54;  // rax
    char *v55;  // rcx
    void* v56;  // rdx
    unsigned long long v57;  // r14
    unsigned long long v58;  // rbp
    char *v59;  // rax
    unsigned long long v60;  // rax
    void* v61;  // rax
    char *v62;  // rbp
    unsigned long long v63;  // r14
    unsigned long long v64;  // rax
    char *v65;  // xmm0

    v1 = &a1->field_30;
    if (a1->field_30 != 0x8000000000000000)
    {
        v40 = a1->padding_8;
        v41 = a1->field_10;
        *((unsigned int *)&v6) = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(v40, v41, ::0x4bde50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(88, &v6), v42))
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((unsigned long long *)&a0->field_10) = 9223372036854775809;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&a1->field_18);
            ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
            return a0;
        }
    }
    uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(v14, a1->padding_8, a1->field_10);
    if (v14[0])
    {
        v43 = *((long long *)&v15);
        v18 = v16;
        v26 = a1->field_28;
        *((int128_t *)&v25) = *((int128_t *)&a1->field_18);
        if (v25 == 0x8000000000000000 || (v41 = v41 & 0xffffffffffffff00 | 1, _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e8a4977c3ae2c93(&v6, &v25), v46 = v6, *((int128_t *)&v2) = *((int128_t *)&v7), v19 == 0x8000000000000000))
        {
            v19 = 0;
            v20 = 1;
            v21 = 0;
        }
        else
        {
            *((int128_t *)&v20) = *((int128_t *)&v2);
            v19 = v46;
        }
        v47 = a1->padding_8;
        if (v43)
        {
            v48 = a1->field_10;
            if (v43 >= v48)
            {
                if (v43 != v48)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v47, v48, 0, v43, &g_536a40); /* do not return */
            }
            else
            {
                if (*((char *)(v47 + v43)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v47, v48, 0, v43, &g_536a40); /* do not return */
            }
        }
        std::path::Path::join::hac25b276bfec4f36(&v6, v20, v21, v47, v43);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v17 = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v22, &v2) & 0xffffffffffffff00 | 1;
        v49 = (v41 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
        ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4();
        if (*((char *)&a1->field_38 + 11) && (v49 = v49 & 0xffffffffffffff00 | 1, ::0x4be120::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v47, v43)))
        {
            v50 = 9223372036854775811;
            goto LABEL_4bf341;
        }
        if (v25 != 0x8000000000000000 && (v49 = v49 & 0xffffffffffffff00 | 1, (char)std::path::Path::is_absolute::h3431a23d91045560(v47, v43)))
        {
            v50 = 9223372036854775813;
LABEL_4bf341:
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&a1->field_0);
            *((unsigned long long *)&a0->field_10) = v50;
            a0->field_0 = 0x8000000000000000;
            v53 = v49 & 0xffffffffffffff00 | 1;
        }
        else
        {
            v51 = *((long long *)&v23);
            v52 = *((long long *)&v24);
            *((unsigned int *)&v6) = 0;
            v0 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(v51, v52, ::0x4bde50::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(47, &v6), v42);
            if (v0)
            {
                v8 = *((long long *)&v24);
                *((int128_t *)&v6) = *((int128_t *)&v22);
                v54 = 1;
                v17 = 0;
                v55 = 0;
                v56 = 0;
            }
            else
            {
                v57 = *((long long *)&v23);
                v58 = *((long long *)&v24);
                v59 = std::path::Path::parent::h65c9a340a6266f2d(v57, v58);
                if (!v59)
                {
                    v2 = 0;
                    v3 = 1;
                    v4 = 0;
                }
                else
                {
                    v6 = v59;
                    v54 = v42;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&v2, &v6);
                }
                v60 = std::path::Path::file_name::h79ecbb7850a9c7f3(v57, v58);
                if (!v60)
                {
                    v54 = 1;
                    v55 = 0;
                    v56 = 0;
                }
                else
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v6, v60, v42);
                    if (v6)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_536a58); /* do not return */
                    ::0x4be0b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&v6, v54, v8);
                    v55 = v6;
                }
                v8 = v4;
                *((int128_t *)&v6) = *((int128_t *)&v2);
                v17 = v8 & 0xffffffffffffff00 | 1;
            }
            v34 = v8;
            *((int128_t *)&v33) = *((int128_t *)&v6);
            v30 = v55;
            v31 = v54;
            v32 = v56;
            v61 = *(v1);
            if (v61 == 0x8000000000000000)
            {
                v28 = 1;
                v29 = 0;
                v61 = 0;
            }
            else
            {
                *((int128_t *)&v28) = *((int128_t *)&(&a1->field_30)[1]);
            }
            v27 = v61;
            v62 = a1->padding_8;
            v63 = a1->field_10;
            v64 = ::0x4bd8f0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v18, v62, v63);
            if (!v64)
                core::str::slice_error_fail::h5dbb61534404fe7e(v62, v63, v18, v63, &g_536a70); /* do not return */
            v35 = v64;
            v36 = v42;
            v2 = &v35;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            v4 = &v27;
            v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v6 = &g_41a7a8;
            v7 = 2;
            v10 = 0;
            v8 = &v2;
            v9 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033();
            *((int128_t *)&v14) = *((int128_t *)&v37);
            v16 = *((long long *)&v38);
            if (!::0x4be120::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf((&v14)[1], *((long long *)&v38)))
            {
                v8 = v34;
                v65 = v33;
                v6 = v65;
                v11 = v32;
                *((int128_t *)&v9) = *((int128_t *)&v30);
                v13 = v16;
                v12 = v14;
                *((unsigned long long *)&a0->field_30) = v13;
                a0->field_20 = v12;
                a0->field_0 = v65;
                *((void* *)&a0->field_10) = v10;
                *((unsigned long long *)((char *)&a0->field_10 + 8)) = v11;
                a0->field_8 = *((int128_t *)&v8);
                *((char **)((char *)&a0->field_30 + 8)) = v18 - v43;
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v27);
                if (!v0)
                    ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v22);
                ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4();
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&v25);
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                return a0;
            }
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v16;
            (&a0->field_0)[1] = v14;
            *((unsigned long long *)&a0->field_10) = 9223372036854775812;
            a0->field_0 = 0x8000000000000000;
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v27);
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v30);
            ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v33);
            v53 = 0;
            if (v0)
            {
LABEL_4bf67c:
                ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4();
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&v25);
                if (!v53)
                {
                    ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                    return a0;
                }
                ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
                ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
                return a0;
            }
        }
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&v22);
        goto LABEL_4bf67c;
    }
    else
    {
        if (*(v1) == 0x8000000000000000)
        {
            v4 = a1->field_10;
            *((int128_t *)&v2) = *((int128_t *)&a1->field_0);
        }
        else
        {
            v44 = a1->padding_8;
            v45 = a1->field_10;
            v6 = v44;
            v7 = &v44[v45];
            v8 = v45;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h880836f94e14e84d(&v2, &v6);
        }
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        *((unsigned long long *)&a0->field_10) = 9223372036854775810;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&a1->field_18);
        ::0x4bd450::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(v1);
        ::0x4bcbe0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(a1);
        return a0;
    }
}
