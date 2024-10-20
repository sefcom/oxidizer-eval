long long uu_csplit::patterns::get_patterns::h877fec3793d29d01(unsigned long long a0[4], unsigned long long a1[3], unsigned long long a2)
{
    unsigned int v0;  // [sp-0x24c]
    unsigned long v1;  // [bp-0x248]
    unsigned long v3;  // [bp-0x240]
    char v9;  // [bp-0x210]
    unsigned int *v10;  // [sp-0x208]
    unsigned int *v11;  // [sp-0x200]
    char v12;  // [bp-0x1f8], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0x1f0], Other Possible Types: unsigned long long
    char v14;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long v15;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0x1d8]
    int v19;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x1a0]
    unsigned long long v21;  // [sp-0x198]
    int v26;  // [sp-0x158]
    unsigned int *v27;  // [sp-0x148]
    void* v28;  // [sp-0x130]
    int v29;  // [sp-0x128]
    unsigned int *v30;  // [sp-0x118]
    unsigned long long v31[3];  // [sp-0x110]
    int v36;  // [bp-0xd8], Other Possible Types: unsigned long
    int v37;  // [sp-0xc8]
    unsigned long long v38[3];  // [sp-0xb0]
    int v39;  // [sp-0xa8]
    int v40;  // [sp-0x98]
    unsigned int *v44;  // [sp-0x58]
    unsigned int *v47;  // rax
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm0
    int v52;  // ymm0
    int v53;  // ymm0
    int v54;  // xmm1
    int v55;  // ymm1
    int v56;  // ymm1
    unsigned long long v57[3];  // rax
    int v58;  // ymm0
    unsigned long long v62;  // cc_ndep
    unsigned long long v64[3];  // rbx
    int v128;  // xmm0
    int v131;  // xmm0
    int v132;  // ymm0
    unsigned int *v134;  // r15
    unsigned int *v135;  // rbp
    void* v136;  // rax
    unsigned long long v137;  // rsi
    unsigned long long v138;  // rsi
    unsigned long long v139;  // rcx
    int v140;  // xmm0
    unsigned long long v141;  // rdx
    unsigned long long v143[4];  // rbp
    unsigned long long v144;  // rdx
    unsigned long long v145;  // rax
    unsigned int *v146;  // r14
    unsigned int *v147;  // rax
    unsigned long long v148;  // r12
    unsigned long long v149;  // r13
    unsigned int *v150;  // rbx

    if (!a2)
    {
        v47 = 8;
        goto LABEL_53bfc3;
    }
    if (a2 > 164703072086692425)
    {
        goto LABEL_53cc9c;
    }
    else
    {
        v47 = __rust_alloc(a2 * 56, 8);
        if (!v47)
        {
LABEL_53cc9c:
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
LABEL_53bfc3:
        v10 = v47;
        v11 = 0;
        if (!v12)
        {
            v21 = v15;
            *((int128_t *)&v19) = *((int128_t *)&v13);
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v49 = *((int128_t *)&v12);
        v50 = *((int128_t *)&v14);
        v40 = v50;
        v39 = v49;
        v0 = regex::regex::string::Regex::new::hbbaac77ef03d753b(&v12, "^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$src/uu/csplit/src/patterns.rs", 56) | -0x100 | 1;
        regex::regex::string::Regex::new::hbbaac77ef03d753b(&v12, "^\\{(?P<TIMES>\\d+)|\\*\\}$TIMES/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.0/src/regex/string.rs", 23);
        if (!v12)
        {
            v21 = v15;
            *((int128_t *)&v19) = *((int128_t *)&(&v12)[1]);
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v51 = *((int128_t *)&v12);
        v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
        v54 = *((int128_t *)&v14);
        v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
        v37 = v54;
        v36 = v51;
        v57 = &a1[a2];
        v28 = 0;
        v38[0] = v57;
        if (!v28)
            goto LABEL_0x53c240;
        v64 = a1;
        if (v31)
        {
            if (v64 == v57)
                goto LABEL_0x53c259;
            else
                goto LABEL_0x53c0b0;
        }
        else
        {
            v27 = v11;
            v128 = *((int128_t *)&v9);
            v26 = v128;
            v0 = 0;
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf7d60e7f4aa7458e(&v36);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf7d60e7f4aa7458e(&v39);
            v44 = v27;
            v131 = v26;
            v132 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v128 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
            v30 = v44;
            v29 = v131;
            if (v44)
            {
                v134 = (long long)(&v29)[8];
                v135 = 0;
                v136 = 0;
                do
                {
                    if (!*((int *)(v134 + v135)))
                    {
                        v139 = *((long long *)(v134 + v135 + 8));
                        if (!v139)
                        {
                            v144 = 5;
                            goto LABEL_53c97d;
                        }
                        else
                        {
                            if (v139 == v136)
                            {
                                v36 = v136;
                                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                                v140 = g_6b2c00;
                                v132 = v132 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v140;
                                v19 = v140;
                                v1 = &v19;
                                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h755d27ba57abf4e8;
                                v12 = &g_675800;
                                v13 = 2;
                                v16 = 0;
                                v14 = &v1;
                                v15 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v12, v138, v141);
                                v19 = &v36;
                                v20 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                                v12 = &g_675820;
                                v13 = 2;
                                v16 = 0;
                                v14 = &v19;
                                v15 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v12, v137, v141);
                                v136 = v36;
                                continue;
                            }
                            if ((char)amd64g_calculate_condition(2, 8, v139, v136, v62))
                            {
                                v144 = 6;
LABEL_53c97d:
                                v143 = a0;
                                v143[0] = v144;
                                v143[1] = v145;
                                v143[2] = v136;
                                v146 = (long long)(&v29)[8];
                                v147 = v30;
                                if (v147)
                                {
                                    v148 = 1 + -0x1 * v147;
                                    v149 = -64;
                                    v150 = 0;
                                    do
                                    {
                                        if (*((int *)(v146 + v150)))
                                            _ZN4core3ptr48drop_in_place$LT$regex..regex..string..Regex$GT$17hf7d60e7f4aa7458eE.llvm.4788963837232039043(v146 + v150 + 8);
                                    } while ((v135 += 56, v44 * 56 != v135));
                                }
                                if ((long long)v29)
                                {
                                    __rust_dealloc(v146);
                                    return v143;
                                }
                                return v143;
                            }
                        }
                    }
                } while ((v135 += 56, v44 * 56 != v135));
            }
            v143 = a0;
            v143[3] = v30;
            *((void*)&v143[1]) = v29;
            v143[0] = 12;
            return v143;
        }
    }
}
