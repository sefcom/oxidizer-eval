long long uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x210]
    unsigned long long v1;  // [sp-0x208]
    unsigned int v2;  // [sp-0x1fc]
    char v3;  // [bp-0x1f8], Other Possible Types: unsigned int
    unsigned int v4;  // [sp-0x1f4]
    unsigned long long v5;  // [sp-0x1d0]
    unsigned long long v6;  // [sp-0x1c8]
    int v7;  // [bp-0x1b8], Other Possible Types: char, unsigned int
    unsigned long v8;  // [sp-0x1b0], Other Possible Types: unsigned long long
    int v9;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v10;  // [sp-0x1a0]
    int v11;  // [sp-0x198]
    int v12;  // [sp-0x188]
    unsigned long long v13;  // [sp-0x178]
    int v14;  // [sp-0x168]
    int v15;  // [sp-0x158]
    unsigned long v16;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x140]
    void* v18;  // [sp-0x138]
    void* v19;  // [bp-0x130]
    char v20;  // [bp-0x128]
    char v21;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x118]
    char v23;  // [bp-0x110]
    char v24;  // [bp-0x108]
    char v25;  // [bp-0x100]
    char v26;  // [bp-0xf8]
    char v27;  // [bp-0xf0]
    char v28;  // [bp-0xe0]
    char v29;  // [bp-0xd0]
    char v30;  // [bp-0xc0]
    char v31;  // [bp-0xb0]
    int v32;  // [sp-0xa8]
    int v33;  // [sp-0x98]
    int v34;  // [sp-0x88]
    unsigned long long v35;  // [sp-0x78]
    char v36;  // [bp-0x70]
    char v37;  // [bp-0x50]
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r8
    unsigned long long v41;  // r9
    char *v42;  // rbp
    void* v43;  // rax
    char *v44;  // r13
    int v45;  // ymm0
    int v46;  // ymm1
    int v47;  // ymm2
    int v48;  // ymm3
    unsigned long long v49[3];  // rbx
    unsigned long long v50[3];  // rax
    unsigned long long v51;  // 4120
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm3
    unsigned long long v56;  // 4108
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // r14
    unsigned long long v61;  // r15
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    unsigned long long v66;  // rax
    unsigned int v67;  // r12d
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    int v70;  // xmm0
    int v71;  // ymm0
    int v72;  // xmm1
    int v73;  // ymm1
    int v74;  // xmm0
    unsigned long long v75;  // rax
    int v76;  // xmm0
    int v77;  // xmm1
    unsigned long long v78;  // rdx
    int v79;  // xmm0
    int v80;  // xmm1
    int v81;  // xmm0
    int v82;  // ymm0
    int v83;  // xmm1
    int v84;  // ymm1
    int v85;  // xmm0
    int v86;  // xmm0
    int v87;  // xmm1
    unsigned long long v88;  // rdx
    int v89;  // xmm0
    int v90;  // xmm1
    struct_0 *v91;  // rcx
    struct_0 *v92;  // rcx
    unsigned long long v93;  // rax
    struct_0 *v94;  // rcx
    int v95;  // [sp-0x1f0]
    int v96;  // [sp-0x1e0]

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb046a74d6073176(&v7, a2, 0);
    if (*((long long *)&v7))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v16 = v8;
    v17 = v9;
    v18 = 0;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v7, "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 56, v39, v40, v41);
    v2 = core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v36, &v7, &g_6e1b08) | -0x100 | 1;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v7, "^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs: warning: line number '' is the same as preceding line number\n", 23, v39, v40, v41);
    core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v37, &v7, &g_6e1b20);
    v42 = &v21;
    v21 = a1;
    v22 = a1 + a2 * 24;
    v44 = &v27;
    while (true)
    {
        v49 = *((long long *)&v20);
        v43 = 0;
        if (!0)
            v49 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v42);
        if (!v49)
        {
            v91 = a0;
            *((void* *)((char *)&v91->field_8 + 8)) = v18;
            *((int128_t *)&(&v91->field_0)[1]) = *((int128_t *)&v16);
            v91->field_0 = 12;
            v2 = 0;
            ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
            v93 = ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v36);
            return v93;
        }
        v50 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hb73444b718c0212e(&v19, v42));
        if (!v50)
        {
            v1 = 1;
            v0 = 1;
        }
        else
        {
            regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v44, &v37, v50[1], v50[2]);
            v1 = 1;
            v51 = *((int *)&v27);
            v0 = 1;
            if ((unsigned int)v51 != 2)
            {
                v13 = *((long long *)&v31);
                v52 = *((int128_t *)&v27);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                v53 = *((int128_t *)&v28);
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v54 = *((int128_t *)&v29);
                v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v55 = *((int128_t *)&v30);
                v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v12 = v55;
                v11 = v54;
                v9 = v53;
                v7 = v52;
                v56 = v43;
                v43 = 0;
                if (!v56)
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v42);
                regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "TIMESOFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 5);
                if (!*((long long *)&v3))
                {
                    v58 = 0;
                }
                else
                {
                    v57 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76((long long)v95, (long long)(&v95)[8], (long long)(&v12)[8], v13);
                    if (!v57)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v57, v59);
                    v44 = &v27;
                    v1 = core::result::Result$LT$T$C$E$GT$::unwrap::hb1af2e219d173322(&v3) + 1;
                    v58 = 1;
                }
                v0 = v58;
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
            }
        }
        v60 = v49[1];
        v61 = v49[2];
        regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v44, &v36, v60, v61);
        if (*((int *)&v27) == 2)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v60, v61);
            if (!v3)
            {
                v8 = (long long)v95;
                v9 = v0;
                v10 = v1;
                v7 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v7, v59);
                if (*((int *)&v27) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(v44);
                    goto LABEL_5b47e8;
                }
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v49);
                v94 = a0;
                *((unsigned long long *)((char *)&v94->field_8 + 8)) = v9;
                *((int128_t *)&(&v94->field_0)[1]) = (int128_t)v7;
                v94->field_0 = 7;
                if (*((int *)&v27) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v27);
                    break;
                }
            }
        }
        v13 = *((long long *)&v31);
        v62 = *((int128_t *)&v27);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v63 = *((int128_t *)&v28);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v29);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v30);
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v12 = v65;
        v11 = v64;
        v9 = v63;
        v7 = v62;
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "OFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
        if (!*((long long *)&v3))
        {
            v67 = 0;
        }
        else
        {
            v66 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76((long long)v95, (long long)(&v95)[8], (long long)(&v12)[8], v13);
            if (!v66)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v42 = &v21;
            v44 = &v27;
            v67 = core::result::Result$LT$T$C$E$GT$::unwrap::hc26668503662d753(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(v66, v59));
        }
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "UPTOQ", 4);
        if (!*((long long *)&v3))
        {
            regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "SKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
            if (!*((long long *)&v3))
                goto LABEL_5b47de;
            v69 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76((long long)v95, (long long)(&v95)[8], (long long)(&v12)[8], v13);
            if (!v69)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v23, v69, v59, v39, v40, v41);
            v42 = &v21;
            v44 = &v27;
            if (*((long long *)&v23))
            {
                v81 = *((int128_t *)&v23);
                v82 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                v83 = *((int128_t *)&v25);
                v84 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                v15 = v83;
                v14 = v81;
            }
            else
            {
                v35 = *((long long *)&v26);
                v85 = *((int128_t *)&v24);
                v34 = v85;
                uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h10799cc375fc8eea(&v3, v49, &v34);
                v75 = *((long long *)&v3);
                v86 = v95;
                v82 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v87 = v96;
                v84 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                v14 = v86;
                v15 = v87;
                if (v75 != 12)
                {
LABEL_5b4ddc:
                    v33 = v15;
                    v32 = v14;
                    v92 = a0;
                    *((void*)((char *)&v92->field_8 + 8)) = v33;
                    *((void*)&(&v92->field_0)[1]) = v32;
                    v92->field_0 = v75;
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
                    break;
                }
            }
            v89 = v14;
            v45 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v90 = v15;
            v46 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            v33 = v90;
            v32 = v89;
            v96 = v90;
            v95 = v89;
            v4 = v67;
            v5 = v0;
            v6 = v1;
            v3 = 2;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v3, v88);
        }
        else
        {
            v68 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76((long long)v95, (long long)(&v95)[8], (long long)(&v12)[8], v13);
            if (!v68)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v23, v68, v59, v39, v40, v41);
            v42 = &v21;
            v44 = &v27;
            if (*((long long *)&v23))
            {
                v70 = *((int128_t *)&v23);
                v71 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                v72 = *((int128_t *)&v25);
                v73 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                v15 = v72;
                v14 = v70;
                goto LABEL_5b4782;
            }
            v35 = *((long long *)&v26);
            v74 = *((int128_t *)&(&v23)[8]);
            v34 = v74;
            uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::he081b352c4f42a24(&v3, v49, &v34);
            v75 = *((long long *)&v3);
            v76 = v95;
            v71 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v77 = v96;
            v73 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            v14 = v76;
            v15 = v77;
            if (!(v75 == 12))
                goto LABEL_5b4ddc;
LABEL_5b4782:
            v79 = v14;
            v45 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = v15;
            v46 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v33 = v80;
            v32 = v79;
            v96 = v80;
            v95 = v79;
            v4 = v67;
            v5 = v0;
            v6 = v1;
            v3 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v3, v78);
        }
LABEL_5b47de:
        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
LABEL_5b47e8:
    }
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v36);
    v93 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&v16);
    return v93;
}
