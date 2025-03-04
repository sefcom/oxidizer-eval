long long uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x210]
    unsigned long long v1;  // [sp-0x208]
    unsigned int v2;  // [sp-0x1fc]
    char v3;  // [bp-0x1f8], Other Possible Types: unsigned int
    int v4;  // [sp-0x1f0]
    int v5;  // [sp-0x1e0]
    unsigned long long v6;  // [sp-0x1d0]
    unsigned long long v7;  // [sp-0x1c8]
    int v8;  // [bp-0x1b8], Other Possible Types: char
    int v9;  // [bp-0x1b8], Other Possible Types: unsigned int
    unsigned long v10;  // [sp-0x1b0], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1a8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v12;  // [sp-0x1a0]
    int v13;  // [sp-0x198]
    int v14;  // [sp-0x188]
    unsigned long long v15;  // [sp-0x178]
    int v16;  // [sp-0x168]
    int v17;  // [sp-0x158]
    unsigned long v18;  // [sp-0x148]
    unsigned long long v19;  // [sp-0x140]
    void* v20;  // [sp-0x138]
    void* v21;  // [sp-0x130]
    char v22;  // [bp-0x128]
    char v23;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long long v24;  // [sp-0x118]
    char v25;  // [bp-0x110]
    char v26;  // [bp-0x110]
    char v28;  // [bp-0xf0]
    char v29;  // [bp-0xe0]
    char v30;  // [bp-0xd0]
    char v31;  // [bp-0xc0]
    char v32;  // [bp-0xb0]
    int v33;  // [sp-0xa8]
    int v34;  // [sp-0x98]
    int v35;  // [sp-0x88]
    unsigned long long v36;  // [sp-0x78]
    char v37;  // [bp-0x70]
    char v38;  // [bp-0x50]
    char *v40;  // rbp
    void* v41;  // rax
    char *v42;  // r13
    int v43;  // ymm0
    int v44;  // ymm1
    int v45;  // ymm2
    int v46;  // ymm3
    unsigned long long v47[3];  // rbx
    unsigned long long v48[3];  // rax
    unsigned long long v49;  // 4120
    int v50;  // xmm0
    int v51;  // xmm1
    int v52;  // xmm2
    int v53;  // xmm3
    unsigned long long v54;  // 4108
    unsigned long long v55;  // r15
    unsigned long long v56;  // r14
    unsigned long long v57;  // r12
    unsigned long long v58;  // r13
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r14
    unsigned long long v62;  // r15
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm2
    int v66;  // xmm3
    unsigned long long v67;  // r14
    unsigned long long v68;  // rbp
    unsigned long long v69;  // r15
    unsigned long long v70;  // r13
    unsigned long long v71;  // rax
    unsigned int v72;  // r12d
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    int v76;  // xmm0
    int v77;  // ymm0
    int v78;  // xmm1
    int v79;  // ymm1
    int v80;  // xmm0
    unsigned long long v81;  // rax
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm0
    int v85;  // xmm1
    int v86;  // xmm0
    int v87;  // ymm0
    int v88;  // xmm1
    int v89;  // ymm1
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm0
    int v94;  // xmm1
    struct_0 *v95;  // rcx
    struct_0 *v96;  // rcx
    unsigned long long v97;  // rax
    struct_0 *v98;  // rcx

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb046a74d6073176(&v8, a2, 0);
    if (*((long long *)&v8))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v18, v11); /* do not return */
    v18 = v10;
    v19 = v11;
    v20 = 0;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v8, "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 56);
    v2 = core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v37, &v8, &g_6e1b08) & 0xffffffffffffff00 | 1;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v8, "^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs: warning: line number '' is the same as preceding line number\n", 23);
    core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v38, &v8, &g_6e1b20);
    v40 = &v23;
    v23 = a1;
    v24 = a1 + a2 * 24;
    v41 = 0;
    v42 = &v28;
    while (true)
    {
        v47 = *((long long *)&v22);
        v21 = 0;
        if (!v41)
            v47 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v40);
        if (!v47)
        {
            v95 = a0;
            *((void* *)((char *)&v95->field_8 + 8)) = v20;
            *((int128_t *)&(&v95->field_0)[1]) = *((int128_t *)&v18);
            v95->field_0 = 12;
            v2 = 0;
            ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v38);
            v97 = ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
            return v97;
        }
        v48 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hb73444b718c0212e(&v21, v40));
        if (!v48)
        {
            v1 = 1;
            v0 = 1;
        }
        else
        {
            regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v42, &v38, v48[1], v48[2]);
            v1 = 1;
            v49 = *((int *)&v28);
            v0 = 1;
            if ((unsigned int)v49 != 2)
            {
                v15 = *((long long *)&v32);
                v50 = *((int128_t *)&v28);
                v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v51 = *((int128_t *)&v29);
                v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                v52 = *((int128_t *)&v30);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                v53 = *((int128_t *)&v31);
                v46 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v14 = v53;
                v13 = v52;
                v11 = v51;
                v8 = v50;
                v54 = v21;
                v21 = 0;
                if (!v54)
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v40);
                regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v11, "TIMESOFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 5);
                if (!*((long long *)&v3))
                {
                    v60 = 0;
                }
                else
                {
                    v55 = (long long)(&v14)[8];
                    v56 = v15;
                    v57 = (long long)v4;
                    v58 = (long long)(&v4)[8];
                    v59 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v57, v58, v55, v56);
                    if (!v59)
                        core::str::slice_error_fail::h5dbb61534404fe7e(v55, v56, v57, v58, &g_6e1b38); /* do not return */
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v59, a2);
                    v42 = &v28;
                    v1 = core::result::Result$LT$T$C$E$GT$::unwrap::hb1af2e219d173322(&v3) + 1;
                    v60 = 1;
                }
                v0 = v60;
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v8);
            }
        }
        v61 = v47[1];
        v62 = v47[2];
        regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v42, &v37, v61, v62);
        if (*((int *)&v28) == 2)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v61, v62);
            if (v3)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v47);
                v98 = a0;
                *((unsigned long *)((char *)&v98->field_8 + 8)) = v11;
                *((int128_t *)&(&v98->field_0)[1]) = (int128_t)v8;
                v98->field_0 = 7;
                if (*((int *)&v28) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v28);
                    break;
                }
            }
            else
            {
                v10 = (long long)v4;
                v11 = v0;
                v12 = v1;
                v9 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v18, &v8);
                if (*((int *)&v28) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(v42);
                    goto LABEL_5b47e8;
                }
            }
        }
        v15 = *((long long *)&v32);
        v63 = *((int128_t *)&v28);
        v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v29);
        v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v30);
        v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v66 = *((int128_t *)&v31);
        v46 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
        v14 = v66;
        v13 = v65;
        v11 = v64;
        v9 = v63;
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v11, "OFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
        if (!*((long long *)&v3))
        {
            v72 = 0;
        }
        else
        {
            v67 = (long long)(&v14)[8];
            v68 = v15;
            v69 = (long long)v4;
            v70 = (long long)(&v4)[8];
            v71 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68);
            if (!v71)
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            v40 = &v23;
            v42 = &v28;
            v72 = core::result::Result$LT$T$C$E$GT$::unwrap::hc26668503662d753(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(v71, v73));
        }
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v11, "UPTOQ", 4);
        if (!*((long long *)&v3))
        {
            regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v11, "SKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
            if (!*((long long *)&v3))
                goto LABEL_5b47de;
            v67 = (long long)(&v14)[8];
            v68 = v15;
            v69 = (long long)v4;
            v70 = (long long)(&v4)[8];
            v75 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68);
            if (!v75)
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v26, v75, a2);
            v40 = &v23;
            v42 = &v28;
            if (*((long long *)&v25))
            {
                v86 = *((int128_t *)&v25);
                v87 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v88 = *((int128_t *)&(&v25)[8]);
                v89 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                v17 = v88;
                v16 = v86;
            }
            else
            {
                v36 = *((long long *)&v25);
                v90 = *((int128_t *)&v25);
                v35 = v90;
                uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h10799cc375fc8eea(&v3, v47, &v35);
                v81 = *((long long *)&v3);
                v91 = v4;
                v87 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v92 = v5;
                v89 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                v16 = v91;
                v17 = v92;
                if (v81 != 12)
                {
LABEL_5b4ddc:
                    v34 = v17;
                    v33 = v16;
                    v96 = a0;
                    *((void*)((char *)&v96->field_8 + 8)) = v34;
                    *((void*)&(&v96->field_0)[1]) = v33;
                    v96->field_0 = v81;
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v8);
                    break;
                }
            }
            v93 = v16;
            v43 = v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
            v94 = v17;
            v44 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
            v34 = v94;
            v33 = v93;
            v5 = v94;
            v4 = v93;
            v3 = v72;
            v6 = v0;
            v7 = v1;
            v3 = 2;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v18, &v3);
        }
        else
        {
            v67 = (long long)(&v14)[8];
            v68 = v15;
            v69 = (long long)v4;
            v70 = (long long)(&v4)[8];
            v74 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68);
            if (!v74)
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v26, v74, a2);
            v40 = &v23;
            v42 = &v28;
            if (*((long long *)&v25))
            {
                v76 = *((int128_t *)&v25);
                v77 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v78 = *((int128_t *)&(&v25)[8]);
                v79 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                v17 = v78;
                v16 = v76;
                goto LABEL_5b4782;
            }
            v36 = *((long long *)&v25);
            v80 = *((int128_t *)&v25);
            v35 = v80;
            uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::he081b352c4f42a24(&v3, v47, &v35);
            v81 = *((long long *)&v3);
            v82 = v4;
            v77 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v83 = v5;
            v79 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v16 = v82;
            v17 = v83;
            if (!(v81 == 12))
                goto LABEL_5b4ddc;
LABEL_5b4782:
            v84 = v16;
            v43 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
            v85 = v17;
            v44 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
            v34 = v85;
            v33 = v84;
            v5 = v85;
            v4 = v84;
            v3 = v72;
            v6 = v0;
            v7 = v1;
            v3 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v18, &v3);
        }
LABEL_5b47de:
        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v8);
LABEL_5b47e8:
        v41 = v21;
    }
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v38);
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
    v97 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&v18);
    return v97;
}
