long long uu_head::parse::parse_obsolete::hbf3035c8e19fcd3f(struct_0 *a0, char a1[4], unsigned long a2)
{
    void* v0;  // [sp-0xe0], Other Possible Types: unsigned long
    unsigned long long *v1;  // [sp-0xd8]
    unsigned long long *v2;  // [sp-0xd0]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v4;  // [sp-0xc0], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0xb0]
    void* v7;  // [sp-0xa8]
    unsigned long long v8;  // [sp-0x98]
    unsigned long long v9;  // [sp-0x90]
    void* v10;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x78]
    char v13;  // [bp-0x70]
    char v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    unsigned long long v16;  // [sp-0x58]
    unsigned long v17;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x48], Other Possible Types: unsigned long long
    char v19;  // [bp-0x40]
    char v20;  // [bp-0x38]
    char v22[4];  // rax
    unsigned long long v23;  // rcx
    char v24[4];  // rax
    unsigned int v25;  // edi
    unsigned int v26;  // r10d
    unsigned int v27;  // r9d
    char v31[4];  // r8
    char v32[4];  // r13
    unsigned long long v33;  // rdi
    char v34[4];  // rcx
    unsigned int v35;  // r9d
    unsigned int v36;  // r11d
    unsigned int v37;  // r10d
    unsigned long long v38;  // r8
    void* v39;  // r12
    unsigned long long v40;  // r9
    char v43[4];  // rcx
    unsigned long long v44;  // rdi
    unsigned long long v45;  // r9
    char v46[4];  // r15
    unsigned int v47;  // r10d
    unsigned int v48;  // ebp
    unsigned int v49;  // r11d
    char v50[4];  // r15
    char v51[4];  // rcx
    unsigned long long v52;  // cc_ndep
    unsigned long long v53;  // rbp
    void* v54;  // r14
    unsigned long long v55;  // rdx
    char v56[4];  // rcx
    unsigned int *v57;  // rsi
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rdi
    unsigned int v61;  // esi
    unsigned int v62;  // r9d
    unsigned int v63;  // esi
    unsigned int v64;  // r9d
    unsigned int v65;  // r8d
    unsigned long long v66;  // rdi
    unsigned int v67;  // r8d
    unsigned int v68;  // esi
    unsigned int v69;  // r9d
    unsigned int v70;  // r8d
    unsigned long long *v71;  // r13
    unsigned long long *v72;  // rax
    unsigned long long *v73;  // rcx
    unsigned long long *v74;  // rcx
    unsigned long long *v75;  // r14
    unsigned long long *v76;  // rax
    unsigned long long *v77;  // rcx
    unsigned long long *v78;  // r14
    unsigned long long *v79;  // rax
    unsigned long long *v80;  // rcx
    unsigned long long *v81;  // r14
    unsigned long long *v82;  // r12
    unsigned long long *v83;  // rax
    unsigned long long *v84;  // rcx
    unsigned long long *v85;  // r14
    unsigned long long v86;  // rax
    unsigned long long *v87;  // rax
    unsigned long long *v88;  // rcx
    unsigned long long v89;  // r14
    unsigned long long v90;  // r15
    unsigned long long v91;  // r13
    unsigned long long *v92;  // r12
    struct_1 *v93;  // r15
    unsigned long long *v94;  // r14
    unsigned long long *v96;  // rax
    unsigned long long *v97;  // rcx
    unsigned long long *v98;  // rcx

    if (a2)
    {
        v22 = &a1[1];
        v23 = a1[0];
        if ((char)v23 < 0)
        {
            v25 = (unsigned int)v23 & 31;
            v26 = a1[1] & 63;
            if ((v23 & 255) <= 223)
            {
                if ((v25 << 6 | v26) != 45)
                {
                    a0->field_0 = 0;
                    return a0;
                }
            }
            else
            {
                v27 = a1[2] & 63 | v26 * 64;
                if ((v23 & 255) < 240)
                {
                    if ((v27 | v25 << 12) != 45)
                    {
                        a0->field_0 = 0;
                        return a0;
                    }
                }
                else
                {
                    if ((a1[3] & 63 | v27 << 6 | (v25 & 7) << 18) != 45)
                    {
                        a0->field_0 = 0;
                        return a0;
                    }
                }
            }
        }
        else if ((unsigned int)v23 != 45)
        {
            a0->field_0 = 0;
            return a0;
        }
        v31 = v24;
        v32 = &a1[a2];
        if (v31 == v32)
        {
            a0->field_0 = 0;
            return a0;
        }
        v33 = v31[0];
        if ((char)v33 >= 0)
        {
            v34 = &v31[1];
        }
        else
        {
            v35 = (unsigned int)v33 & 31;
            v36 = v31[1] & 63;
            if ((v33 & 255) < 224)
            {
                v34 = &v31[2];
                v33 = v35 * 64 | v36;
            }
            else
            {
                v37 = v31[2] & 63 | v36 * 64;
                if ((v33 & 255) < 240)
                {
                    v34 = &v31[3];
                    v33 = v37 | v35 * 0x1000;
                }
                else
                {
                    v34 = v31 + 1;
                    v33 = v31[3] & 63 | v37 * 64 | (v35 & 7) * 0x40000;
                }
            }
        }
        if ((unsigned int)v33 - 48 <= 9)
        {
            v38 = v31 - a1;
            v39 = 0;
            if (v34 != v32)
            {
                v40 = v34 - a1;
                do
                {
                    v43 = v34;
                    v44 = v40;
                    v45 = v43[0];
                    if ((char)v45 >= 0)
                    {
                        v46 = &v43[1];
                    }
                    else
                    {
                        v47 = (unsigned int)v45 & 31;
                        v48 = v43[1] & 63;
                        if ((v45 & 255) <= 223)
                        {
                            v46 = &v43[2];
                            v45 = v47 * 64 | v48;
                        }
                        else
                        {
                            v49 = v43[2] & 63 | v48 * 64;
                            if ((v45 & 255) >= 240)
                            {
                                v46 = v43 + 1;
                                v45 = v43[3] & 63 | v49 * 64 | (v47 & 7) * 0x40000;
                            }
                            else
                            {
                                v46 = &v43[3];
                                v45 = v49 | v47 * 0x1000;
                            }
                        }
                    }
                    if ((unsigned int)(v45 - 48) >= 10)
                    {
                        v39 = v45 & 4294967295;
                        goto LABEL_48cc8e;
                    }
                } while ((v40 = v44 - v43 + v46, v46 != v32));
            }
LABEL_48cc8e:
            if (v38 == -1)
                core::str::traits::str_index_overflow_fail::h3050728227b3b0ab(); /* do not return */
            v51 = v38 + 1;
            if (a2 != 1 && v22[0] < 192)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            if (v51 >= a2)
            {
                if (v51 != a2)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(a1 + v51)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v19, v22, v38);
            if (v19)
            {
                a0->field_8 = 0;
                a0->field_10 = 1;
                a0->field_0 = 1;
                return a0;
            }
            v16 = *((long long *)&v20);
            v17 = v16;
            v53 = 0;
            v10 = 0;
            v54 = 0;
            v55 = 0;
            while (true)
            {
                v56 = v50;
                v57 = v39 - 98 & 4294967295;
                switch ((unsigned int)v57)
                {
                case 0:
                    v53 = 1;
                    v59 = 0x200;
LABEL_48ce2c:
                    v8 = v59;
LABEL_48ce31:
                    if (!(v56 == v32))
                        break;
LABEL_48cf79:
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    if (!(!((char)v55 & 1)))
                        goto LABEL_48cfcd;
                    goto LABEL_48d039;
                case 1:
                    v8 = 1;
                    v53 = 1;
                    if (v56 == v32)
                        goto LABEL_48cf79;
                    break;
                case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 12: case 13: case 14: case 16: case 17: case 18: case 19: case 21: case 22: case 23:
LABEL_48cf9e:
                    a0->field_8 = 0;
                    a0->field_10 = 0;
                    a0->field_0 = 1;
                    return a0;
                case 9:
                    v53 = 1;
                    v59 = 0x400;
                    goto LABEL_48ce2c;
                case 11:
                    v53 = 1;
                    v59 = 0x100000;
                    goto LABEL_48ce2c;
                case 15:
                    if (v56 != v32)
                    {
                        v60 = v56[0];
                        if ((char)v60 >= 0)
                        {
                            v52 = amd64g_calculate_rflags_c(17, v60 & 255, 0, v52);
                            v50 = &v56[1];
                            v55 = v55 | -0x100 | 1;
                            v54 = 0;
                            goto LABEL_48cd35;
                        }
                        else
                        {
                            v63 = (unsigned int)v60 & 31;
                            v50 = &v56[2];
                            v64 = v56[1] & 63;
                            v39 = v63 * 64 | v64;
                            v55 = v55 | -0x100 | 1;
                            v54 = 0;
                            if ((v60 & 255) > 223)
                            {
                                v50 = &v56[3];
                                v67 = v56[2] & 63 | v64 * 64;
                                v39 = v63 * 0x1000 | v67;
                                v54 = 0;
                                if ((v60 & 255) >= 240)
                                {
                                    v50 = v56 + 1;
                                    v39 = v56[3] & 63 | v67 * 64 | (v63 & 7) * 0x40000;
                                    v54 = 0;
                                }
                            }
                            continue;
                        }
                    }
                    else
                    {
                        v0 = 0;
                        v1 = 8;
                        v2 = 0;
                        v54 = 0;
LABEL_48cfcd:
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-q-v-z-c-nFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/head/src/take.rs", 2);
                        v9 = v3;
                        v71 = v2;
                        if (v71 == v0)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                        v72 = v1;
                        v73 = v71 * 2;
                        v74 = v73 + v71;
                        *((unsigned long long *)((char *)v72 + 0x8 * v74)) = v9;
                        *((unsigned long *)(8 + (char *)v72 + 0x8 * v74)) = v4;
                        *((unsigned long *)(16 + (char *)v72 + 0x8 * v74)) = v5;
                        v52 = (v73 + v71 <= v73 ? 1 : 0);
                        v2 = (char *)v71 + 1;
LABEL_48d039:
                        if (!((char)v54 & 1))
                            goto LABEL_48d0b7;
LABEL_48d05c:
                        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-v-z-c-nFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/head/src/take.rs", 2);
                        v75 = v2;
                        if (v75 == v0)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                        v76 = v1;
                        v77 = v75 * 3;
                        *((unsigned long *)((char *)v76 + 0x8 * v77)) = v3;
                        *((unsigned long *)(8 + (char *)v76 + 0x8 * v77)) = v4;
                        *((unsigned long *)(16 + (char *)v76 + 0x8 * v77)) = v5;
                        v52 = v75 < v0;
                        v2 = (char *)v75 + 1;
                        goto LABEL_48d0b7;
                    }
                case 20:
                    if (v56 == v32)
                    {
                        v0 = 0;
                        v1 = 8;
                        v2 = 0;
                        goto LABEL_48d05c;
                    }
                    else
                    {
                        v60 = v56[0];
                        if ((char)v60 >= 0)
                        {
                            v52 = amd64g_calculate_rflags_c(17, v60 & 255, 0, v52);
                            v50 = &v56[1];
                            v54 = v54 | -0x100 | 1;
                            v55 = 0;
                            goto LABEL_48cd35;
                        }
                        else
                        {
                            v61 = (unsigned int)v60 & 31;
                            v50 = &v56[2];
                            v62 = v56[1] & 63;
                            v39 = v61 * 64 | v62;
                            v54 = v54 | -0x100 | 1;
                            v55 = 0;
                            if ((v60 & 255) > 223)
                            {
                                v50 = &v56[3];
                                v65 = v56[2] & 63 | v62 * 64;
                                v39 = v61 * 0x1000 | v65;
                                v55 = 0;
                                if ((v60 & 255) >= 240)
                                {
                                    v50 = v56 + 1;
                                    v39 = v56[3] & 63 | v65 * 64 | (v61 & 7) * 0x40000;
                                    v55 = 0;
                                }
                            }
                            continue;
                        }
                    }
                case 24:
                    v10 = v58 + (char *)&g_419f84 | -0x100 | 1;
                    if (v56 == v32)
                        goto LABEL_48cf79;
                    v50 = &v56[1];
                    v66 = v56[0];
                    v39 = v66 & 4294967295;
                    if ((char)v66 < 0)
                    {
                        v68 = (unsigned int)v66 & 31;
                        v50 = &v56[2];
                        v69 = v56[1] & 63;
                        v39 = v68 * 64 | v69;
                        if ((v66 & 255) > 223)
                        {
                            v50 = &v56[3];
                            v70 = v56[2] & 63 | v69 * 64;
                            v39 = v68 * 0x1000 | v70;
                            if ((v66 & 255) >= 240)
                            {
                                v50 = v56 + 1;
                                v39 = v56[3] & 63 | v70 * 64 | (v68 & 7) * 0x40000;
                            }
                        }
                    }
                    continue;
                default:
                    if (!(unsigned int)v39)
                        goto LABEL_48ce31;
                    goto LABEL_48cf9e;
                }
LABEL_48cd35:
                v39 = v60 & 4294967295;
            }
LABEL_48d0b7:
            if (((char)v10 & 1))
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-z-c-nFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/head/src/take.rs", 2);
                v78 = v2;
                if (v78 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                v79 = v1;
                v80 = v78 * 3;
                *((unsigned long *)((char *)v79 + 0x8 * v80)) = v3;
                *((unsigned long *)(8 + (char *)v79 + 0x8 * v80)) = v4;
                *((unsigned long *)(16 + (char *)v79 + 0x8 * v80)) = v5;
                v52 = v78 < v0;
                v2 = (char *)v78 + 1;
            }
            if (v53 != 1)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-nFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/head/src/take.rs", 2);
                v82 = v2;
                if (v82 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                v87 = v1;
                v88 = v82 * 3;
                *((unsigned long *)((char *)v87 + 0x8 * v88)) = v3;
                *((unsigned long *)(8 + (char *)v87 + 0x8 * v88)) = v4;
                *((unsigned long *)(16 + (char *)v87 + 0x8 * v88)) = v5;
                v2 = (char *)v82 + 1;
                v11 = &v17;
                v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v3 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v4 = 1;
                v7 = 0;
                v5 = &v11;
                v6 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v3);
                v89 = *((long long *)&v13);
                v90 = *((long long *)&v14);
                v91 = *((long long *)&v15);
                v92 = v2;
                if (v92 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "-c-nFatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/matches/arg_matches.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/head/src/take.rs", 2);
                v81 = v2;
                if (v81 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                v83 = v1;
                v84 = v81 * 3;
                *((unsigned long *)((char *)v83 + 0x8 * v84)) = v3;
                *((unsigned long *)(8 + (char *)v83 + 0x8 * v84)) = v4;
                *((unsigned long *)(16 + (char *)v83 + 0x8 * v84)) = v5;
                v85 = (char *)v81 + 1;
                v2 = v85;
                v86 = v16;
                if ((char)amd64g_calculate_condition(0, 48, v86, vvar_1054, amd64g_calculate_rflags_c(8, v81, v0, v52)))
                {
                    a0->field_8 = 0;
                    a0->field_10 = 1;
                    a0->field_0 = 1;
                    if (v2)
                    {
                        v93 = v1 + 1;
                        do
                        {
                            v94 = v85;
                            if (v93->field_0)
                                __rust_dealloc(v93->field_-8);
                        } while ((v40 = v44 - v43 + v46, v46 != v32));
                    }
                    if (v0)
                    {
                        __rust_dealloc(v1);
                        return a0;
                    }
                    return a0;
                }
                else
                {
                    v18 = v86 * vvar_1054;
                    v11 = &v18;
                    v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v3 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                    v4 = 1;
                    v7 = 0;
                    v5 = &v11;
                    v6 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v3);
                    v89 = *((long long *)&v13);
                    v90 = *((long long *)&v14);
                    v91 = *((long long *)&v15);
                    v92 = v2;
                    if (v92 == v0)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h917c12ddecfa9b3f(&v0);
                }
            }
            v96 = v1;
            v97 = v92 * 3;
            *((unsigned long long *)((char *)v96 + 0x8 * v97)) = v89;
            *((unsigned long long *)(8 + (char *)v96 + 0x8 * v97)) = v90;
            *((unsigned long long *)(16 + (char *)v96 + 0x8 * v97)) = v91;
            v98 = v1;
            a0->field_8 = v98;
            *((unsigned long long **)&a0->field_10) = v98;
            a0->field_18 = v0;
            a0->field_20 = 24 + (char *)v98 + 0x18 * v92;
            a0->field_0 = 1;
            return a0;
        }
    }
    a0->field_0 = 0;
    return a0;
}
