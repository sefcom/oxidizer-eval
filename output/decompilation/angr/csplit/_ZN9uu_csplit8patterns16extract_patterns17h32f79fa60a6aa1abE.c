long long uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(struct_0 *a0, unsigned long a1, unsigned long long a2)
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
    char *v39;  // rbp
    void* v40;  // rax
    char *v41;  // r13
    int v42;  // ymm0
    int v43;  // ymm1
    int v44;  // ymm2
    int v45;  // ymm3
    unsigned long long v46[3];  // rbx
    unsigned long long v47[3];  // rax
    unsigned long long v48;  // 4120
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm2
    int v52;  // xmm3
    unsigned long long v53;  // 4108
    unsigned long long v54;  // r15
    unsigned long long v55;  // r14
    unsigned long long v56;  // r12
    unsigned long long v57;  // r13
    unsigned long long v58;  // rax
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdx
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
    unsigned int v71;  // r12d
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    int v74;  // xmm0
    int v75;  // ymm0
    int v76;  // xmm1
    int v77;  // ymm1
    int v78;  // xmm0
    unsigned long long v79;  // rax
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm0
    int v85;  // ymm0
    int v86;  // xmm1
    int v87;  // ymm1
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm1
    int v91;  // xmm0
    int v92;  // xmm1
    struct_0 *v93;  // rcx
    struct_0 *v94;  // rcx
    unsigned long long v95;  // rax
    struct_0 *v96;  // rcx
    int v97;  // [sp-0x1f0]
    int v98;  // [sp-0x1e0]

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb046a74d6073176(&v7, a2, 0);
    if (*((long long *)&v7))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v16, v9); /* do not return */
    v16 = v8;
    v17 = v9;
    v18 = 0;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v7, "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 56);
    v2 = core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v36, &v7, &g_6e1b08) & 0xffffffffffffff00 | 1;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v7, "^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs: warning: line number '' is the same as preceding line number\n", 23);
    core::result::Result$LT$T$C$E$GT$::unwrap::hf27699ee494e2119(&v37, &v7, &g_6e1b20);
    v39 = &v21;
    v21 = a1;
    v22 = a1 + a2 * 24;
    v41 = &v27;
    while (true)
    {
        v46 = *((long long *)&v20);
        v40 = 0;
        if (!0)
            v46 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v39);
        if (!v46)
        {
            v93 = a0;
            *((void* *)((char *)&v93->field_8 + 8)) = v18;
            *((int128_t *)&(&v93->field_0)[1]) = *((int128_t *)&v16);
            v93->field_0 = 12;
            v2 = 0;
            ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
            v95 = ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v36);
            return v95;
        }
        v47 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hb73444b718c0212e(&v19, v39));
        if (!v47)
        {
            v1 = 1;
            v0 = 1;
        }
        else
        {
            regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v41, &v37, v47[1], v47[2]);
            v1 = 1;
            v48 = *((int *)&v27);
            v0 = 1;
            if ((unsigned int)v48 != 2)
            {
                v13 = *((long long *)&v31);
                v49 = *((int128_t *)&v27);
                v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v50 = *((int128_t *)&v28);
                v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v51 = *((int128_t *)&v29);
                v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                v52 = *((int128_t *)&v30);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                v12 = v52;
                v11 = v51;
                v9 = v50;
                v7 = v49;
                v53 = v40;
                v40 = 0;
                if (!v53)
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc8bea844643f0ff(v39);
                regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "TIMESOFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 5);
                if (!*((long long *)&v3))
                {
                    v59 = 0;
                }
                else
                {
                    v54 = (long long)(&v12)[8];
                    v55 = v13;
                    v56 = (long long)v97;
                    v57 = (long long)(&v97)[8];
                    v58 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v56, v57, v54, v55);
                    if (!v58)
                        core::str::slice_error_fail::h5dbb61534404fe7e(v54, v55, v56, v57, &g_6e1b38); /* do not return */
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v58, v60);
                    v41 = &v27;
                    v1 = core::result::Result$LT$T$C$E$GT$::unwrap::hb1af2e219d173322(&v3) + 1;
                    v59 = 1;
                }
                v0 = v59;
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
            }
        }
        v61 = v46[1];
        v62 = v46[2];
        regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(v41, &v36, v61, v62);
        if (*((int *)&v27) == 2)
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v61, v62);
            if (v3)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v46);
                v96 = a0;
                *((unsigned long long *)((char *)&v96->field_8 + 8)) = v9;
                *((int128_t *)&(&v96->field_0)[1]) = (int128_t)v7;
                v96->field_0 = 7;
                if (*((int *)&v27) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v27);
                    break;
                }
            }
            else
            {
                v8 = (long long)v97;
                v9 = v0;
                v10 = v1;
                v7 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v7);
                if (*((int *)&v27) != 2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(v41);
                    goto LABEL_5b47e8;
                }
            }
        }
        v13 = *((long long *)&v31);
        v63 = *((int128_t *)&v27);
        v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v28);
        v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v29);
        v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v66 = *((int128_t *)&v30);
        v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
        v12 = v66;
        v11 = v65;
        v9 = v64;
        v7 = v63;
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "OFFSETSKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
        if (!*((long long *)&v3))
        {
            v71 = 0;
        }
        else
        {
            v67 = (long long)(&v12)[8];
            v68 = v13;
            v69 = (long long)v97;
            v70 = (long long)(&v97)[8];
            if (!::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68))
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            v39 = &v21;
            v41 = &v27;
            v71 = core::result::Result$LT$T$C$E$GT$::unwrap::hc26668503662d753(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac());
        }
        regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "UPTOQ", 4);
        if (!*((long long *)&v3))
        {
            regex_automata::util::captures::Captures::get_group_by_name::hae7742685345d0b9(&v3, &v9, "SKIPTO^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 6);
            if (!*((long long *)&v3))
                goto LABEL_5b47de;
            v67 = (long long)(&v12)[8];
            v68 = v13;
            v69 = (long long)v97;
            v70 = (long long)(&v97)[8];
            v73 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68);
            if (!v73)
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v23, v73, v60);
            v39 = &v21;
            v41 = &v27;
            if (*((long long *)&v23))
            {
                v84 = *((int128_t *)&v23);
                v85 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                v86 = *((int128_t *)&v25);
                v87 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v15 = v86;
                v14 = v84;
            }
            else
            {
                v35 = *((long long *)&v26);
                v88 = *((int128_t *)&v24);
                v34 = v88;
                uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::h10799cc375fc8eea(&v3, v46, &v34);
                v79 = *((long long *)&v3);
                v89 = v97;
                v85 = (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                v90 = v98;
                v87 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                v14 = v89;
                v15 = v90;
                if (v79 != 12)
                {
LABEL_5b4ddc:
                    v33 = v15;
                    v32 = v14;
                    v94 = a0;
                    *((void*)((char *)&v94->field_8 + 8)) = v33;
                    *((void*)&(&v94->field_0)[1]) = v32;
                    v94->field_0 = v79;
                    core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
                    break;
                }
            }
            v91 = v14;
            v42 = v85 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
            v92 = v15;
            v43 = v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v33 = v92;
            v32 = v91;
            v98 = v92;
            v97 = v91;
            v4 = v71;
            v5 = v0;
            v6 = v1;
            v3 = 2;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v3);
        }
        else
        {
            v67 = (long long)(&v12)[8];
            v68 = v13;
            v69 = (long long)v97;
            v70 = (long long)(&v97)[8];
            v72 = ::0x5b3be0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v67, v68);
            if (!v72)
                core::str::slice_error_fail::h5dbb61534404fe7e(v67, v68, v69, v70, &g_6e1b38); /* do not return */
            regex::regex::string::Regex::new::h2b022f3b326b0361(&v23, v72, v60);
            v39 = &v21;
            v41 = &v27;
            if (*((long long *)&v23))
            {
                v74 = *((int128_t *)&v23);
                v75 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                v76 = *((int128_t *)&(&v24)[8]);
                v77 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v15 = v76;
                v14 = v74;
                goto LABEL_5b4782;
            }
            v35 = *((long long *)&v26);
            v78 = *((int128_t *)&v24);
            v34 = v78;
            uu_csplit::patterns::extract_patterns::_$u7b$$u7b$closure$u7d$$u7d$::he081b352c4f42a24(&v3, v46, &v34);
            v79 = *((long long *)&v3);
            v80 = v97;
            v75 = (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = v98;
            v77 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v14 = v80;
            v15 = v81;
            if (!(v79 == 12))
                goto LABEL_5b4ddc;
LABEL_5b4782:
            v82 = v14;
            v42 = v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v83 = v15;
            v43 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v33 = v83;
            v32 = v82;
            v98 = v83;
            v97 = v82;
            v4 = v71;
            v5 = v0;
            v6 = v1;
            v3 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5ddec6a458d87dc2(&v16, &v3);
        }
LABEL_5b47de:
        core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::h3fa27d75c57ab86d(&v7);
LABEL_5b47e8:
    }
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v37);
    ::0x5b33c0::core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h15992d649913b2e2(&v36);
    v95 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&v16);
    return v95;
}
