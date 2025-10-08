long long bat::get_languages(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x418]
    struct_0 *v1;  // [bp-0x418], Other Possible Types: unsigned int
    char *v2;  // [bp-0x410], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x408]
    char *v4;  // [bp-0x400]
    unsigned long long v5;  // [bp-0x3f8]
    void* v6;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x3e8], Other Possible Types: unsigned short
    unsigned long long v8;  // [bp-0x3e0]
    void* v9;  // [sp-0x3d8], Other Possible Types: char, unsigned long long
    unsigned long long v10;  // [bp-0x3d0]
    char *v11;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x3c0]
    unsigned long long v13;  // [bp-0x3b8]
    unsigned long long v14;  // [bp-0x3b0]
    char v15;  // [bp-0x3a8]
    unsigned long long v16[3];  // [bp-0x3a0]
    unsigned long long v17[3];  // [bp-0x3a0]
    void* v18;  // [bp-0x398]
    void* v19;  // [bp-0x398]
    unsigned long long v20;  // [bp-0x390]
    unsigned long v21;  // [bp-0x388], Other Possible Types: unsigned long long
    char *v22;  // [bp-0x380], Other Possible Types: unsigned long, unsigned long long
    int v23;  // [bp-0x378], Other Possible Types: unsigned long long
    void* v24;  // [sp-0x370]
    unsigned short v25;  // [bp-0x368]
    void* v26;  // [bp-0x360]
    char v27;  // [bp-0x358]
    unsigned int v28;  // [bp-0x357]
    unsigned int v29;  // [bp-0x353]
    void* v30;  // [bp-0x340]
    unsigned long long v31;  // [bp-0x338]
    void* v32;  // [bp-0x330]
    char v33;  // [bp-0x328]
    char *v34;  // [bp-0x318]
    unsigned long long v35;  // [bp-0x308]
    unsigned long long v36;  // [bp-0x300]
    unsigned long long v37;  // [bp-0x2f8]
    char *v38;  // [bp-0x2f0]
    unsigned long long v39;  // [bp-0x2e8]
    char *v40;  // [bp-0x2e0], Other Possible Types: char
    unsigned int v41;  // [bp-0x2dc]
    struct_0 *v42;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    char *v43;  // [bp-0x2d0], Other Possible Types: unsigned long
    char v44;  // [bp-0x2c8]
    unsigned long long v45;  // [sp-0x2c0]
    int v46;  // [bp-0x2b8], Other Possible Types: char
    int v47;  // [bp-0x2a8]
    char v48;  // [bp-0x298]
    int v49;  // [bp-0x288]
    int v50;  // [bp-0x278]
    int v51;  // [bp-0x268]
    char v52;  // [bp-0x258]
    int v53;  // [bp-0x1e8], Other Possible Types: char
    int v54;  // [bp-0x1d8], Other Possible Types: char
    int v55;  // [bp-0x1c8], Other Possible Types: char
    int v56;  // [bp-0x1b8]
    char v57;  // [bp-0x1a8]
    char v58;  // [bp-0xf0]
    unsigned long long v59;  // [bp-0xc0]
    int v60;  // [bp-0xb8]
    int v61;  // [bp-0xa8]
    int v62;  // [bp-0x98]
    int v63;  // [bp-0x88]
    char v64;  // [bp-0x78]
    int v65;  // [bp-0x68]
    int v66;  // [bp-0x58]
    int v67;  // [bp-0x48]
    unsigned long long v68;  // [bp-0x38]
    char v70;  // al
    unsigned long long v71[3];  // rbx
    unsigned long long v72;  // rbp
    unsigned long long v73;  // rbp
    unsigned long v74;  // rbx
    unsigned long v75;  // rbp
    unsigned long long v77[3];  // rbx
    void* v78;  // r14
    char *v79;  // r15
    unsigned long v80;  // rbx
    unsigned long long v81;  // r12
    unsigned long long v82;  // r12
    unsigned long long v83[5];  // rax
    unsigned long v84;  // r12
    unsigned long v85;  // rdx
    unsigned long long v87;  // rcx
    char *v88;  // r14
    char v89;  // al
    void* v90;  // r14
    unsigned long long v91;  // r12
    unsigned long v92;  // r15
    unsigned long v93;  // r15
    unsigned int v95;  // ecx
    int v96;  // xmm0

    v30 = 0;
    v31 = 1;
    v32 = 0;
    bat::assets::assets_from_cache_or_binary(&v40, a1->field_127, a2, a3);
    memcpy(&v53, &v42, 16);
    memcpy(&v54, &v44, 16);
    memcpy(&v55, &v46, 16);
    v56 = v47;
    memcpy(&v57, &v48, 16);
    if (*((long long *)&v40) == 9223372036854775809)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v57);
        a0[48] = v56;
        a0[32] = v55;
        a0[16] = v54;
        *(a0) = v53;
    }
    else
    {
        v1 = a1;
        v68 = *((long long *)&v52);
        v67 = v51;
        v66 = v50;
        v65 = v49;
        v60 = v53;
        v61 = v54;
        v62 = v55;
        v63 = v56;
        memcpy(&v64, &v57, 16);
        v59 = *((long long *)&v40);
        v40.get_syntaxes(&v59);
        v70 = v40;
        if (v70 == 13)
        {
            v15.collect(v42, v43 * 248 + v42);
            v71 = v16;
            if (v18)
            {
                v72 = v18 * 248;
                do
                {
                    v73 = v72;
                    v53.clone(v71);
                    v40 = &v59;
                    v42 = v1;
                    v43 = &v53;
                    v74 = v71 + 1;
                    v74.retain(&v40);
                    core::ptr::drop_in_place<alloc::string::String>(&v53);
                    v71 = v74 + 224;
                    v75 = v73 - 248;
                    v72 = v75;
                } while (v73 != 248);
                v19 = v18;
                v17[0] = v16;
            }
            else
            {
                v19 = 0;
                v17 = v71;
            }
            v77 = v17;
            v78 = v19;
            alloc::slice::<impl [T]>::sort_by_key(v77, v78);
            v40.all_mappings(&v1->padding_0[40]);
            v79 = &v40;
            bat::get_syntax_mapping_to_paths(&v58, &v40);
            if (v78)
            {
                v80 = v77 + 1;
                v81 = v78 * 248;
                do
                {
                    v82 = v81;
                    v83 = v58.get_inner(*((long long *)(v80 - 16)), *((long long *)(v80 - 8)));
                    if (v83)
                        v80.extend_trusted(v83[3], v83[3] + v83[4] * 24);
                    v80 += 248;
                    v84 = v82 - 248;
                    v81 = v84;
                } while (v82 != 248);
            }
            if (v1->field_123)
            {
                v9.into_iter(&v15);
                v53.next(&v9);
                if ((long long)v53 != 0x8000000000000000)
                {
                    do
                    {
                        ::libc.so.0::memcpy(&v40, &v53, 248);
                        alloc::str::join_generic_copy(&v20, v45, (long long)v46, ",: ");
                        v34 = v22;
                        memcpy(&v33, &v20, 16);
                        v2 = &v40;
                        v3 = <alloc::string::String as core::fmt::Display>::fmt;
                        v4 = &v33;
                        v5 = <alloc::string::String as core::fmt::Display>::fmt;
                        v20 = &g_ac8760;
                        v21 = 3;
                        v24 = 0;
                        v22 = &v2;
                        v23 = 2;
                        v30.spec_write_fmt(&v20);
                        core::ptr::drop_in_place<alloc::string::String>(&v33);
                        core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxReference>(&v40);
                        v53.next(&v9);
                    } while ((long long)v53 != 0x8000000000000000);
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<syntect::parsing::syntax_set::SyntaxReference>>(&v9);
            }
            else
            {
                v87 = (((char)v16.reduce(0xf8 * v18 + (char *)v16) & 1) ? v85 : 32);
                v36 = " ";
                v37 = 1;
                *((int *)&v8) = (((char)v16.reduce(0xf8 * v18 + (char *)v16) & 1) ? v85 : 32);
                v35 = ~(v8) + v1->field_100;
                v1 = (v1->field_124 ? 4 : 21);
                v33.into_iter(&v15);
                v53.next(&v33);
                if ((long long)v53 != 0x8000000000000000)
                {
                    if (v8 <= 65535)
                    {
                        v88 = &v53;
                        do
                        {
                            ::libc.so.0::memcpy(v79, v88, 248);
                            v2 = v79;
                            v3 = <alloc::string::String as core::fmt::Display>::fmt;
                            v4 = &v36;
                            v5 = <&T as core::fmt::Display>::fmt;
                            v6 = 0;
                            v7 = v8;
                            v9 = &g_485820;
                            v10 = 2;
                            v13 = &g_488e50;
                            v14 = 2;
                            v11 = &v2;
                            v12 = 3;
                            v30.spec_write_fmt(&v9);
                            v11 = v45;
                            v12 = v45 + (long long)v46 * 24;
                            v89 = 0;
                            v90 = 0;
                            while (true)
                            {
                                v91 = 2;
                                v9 = 0;
                                if (!(v89 & 1))
                                {
                                    v91 = v11;
                                    if (v91 == v12)
                                        break;
                                    v11 = v91 + 24;
                                }
                                else if (false)
                                {
                                    break;
                                }
                                v92 = *((long long *)(v91 + 16));
                                v93 = v92;
                                if (v93 + v90 + 2 >= v35)
                                {
                                    v20 = &g_47f780;
                                    v21 = <&T as core::fmt::Display>::fmt;
                                    v22 = &v36;
                                    v23 = <&T as core::fmt::Display>::fmt;
                                    v24 = 0;
                                    v25 = v8;
                                    v2 = &g_ac87a0;
                                    v3 = 2;
                                    v6 = &g_488e50;
                                    v7 = 2;
                                    v4 = &v20;
                                    v5 = 3;
                                    v30.spec_write_fmt(&v2);
                                    v90 = 0;
                                    v93 = *((long long *)(v91 + 16));
                                }
                                v27 = 0;
                                v26 = 0;
                                v28 = v0;
                                v29 = 21;
                                v20 = 0x8000000000000000;
                                v21 = *((long long *)(v91 + 8));
                                v22 = v93;
                                v23 = 9223372036854775810;
                                v38 = &v20;
                                v39 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
                                v2 = &g_47f780;
                                v3 = 1;
                                v6 = 0;
                                v4 = &v38;
                                v5 = 1;
                                v30.spec_write_fmt(&v2);
                                core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v20);
                                if (*((long long *)v9.get_or_insert_with(&v11)))
                                    v30.spec_extend(", ,: ", ",: ");
                                v90 += v92 + 2;
                                v89 = (char)v9;
                            }
                            v30.spec_extend("\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bugreport-0.5.1/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bugreport-0.5.1/src/collector.rsLazy instance has previously been poisoned/home/34r7hm4n/.car", "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bugreport-0.5.1/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bugreport-0.5.1/src/collector.rsLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs");
                            v88 = &v53;
                            v79 = &v40;
                            core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxReference>(&v40);
                            v53.next(&v33);
                        } while ((long long)v53 != 0x8000000000000000);
                    }
                    else
                    {
                        ::libc.so.0::memcpy(&v40, &v53, 248);
                        v20 = &g_ac8790;
                        v21 = 1;
                        v22 = 8;
                        *((uint128_t *)&v23) = 0;
                        core::panicking::panic_fmt(&v20, &g_ac87c0); /* do not return */
                    }
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<syntect::parsing::syntax_set::SyntaxReference>>(&v33);
            }
            *((unsigned long long *)&a0[24]) = 0;
            *((int128_t *)&a0[8]) = *((int128_t *)&v30);
            *((char *)a0) = 13;
            core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(&v58);
            return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v59);
        }
        v95 = *((int *)&(&v40)[1]);
        *((unsigned int *)&a0[4]) = v41;
        *((unsigned int *)&a0[1]) = v95;
        v96 = *((int128_t *)&v42);
        *((int128_t *)&a0[24]) = *((int128_t *)&v44);
        a0[40] = v46;
        a0[56] = v47;
        *((long long *)&a0[72]) = *((long long *)&v48);
        *((char *)a0) = v70;
        a0[8] = v96;
        core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v59);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v30);
}
