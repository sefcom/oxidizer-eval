long long uu_mkdir::get_mode::h658ab6c2b70dc631(struct_2 *a0, unsigned long long a1, unsigned int a2)
{
    char *v0;  // [sp-0x140]
    char *v1;  // [sp-0x138]
    unsigned int v2;  // [sp-0x124]
    unsigned int v3;  // [sp-0x120]
    unsigned int v4;  // [sp-0x11c]
    unsigned long v5;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x110]
    char v7;  // [bp-0x10c]
    struct struct_1 **v8;  // [sp-0x108], Other Possible Types: unsigned long long
    char v9;  // [bp-0x104]
    unsigned long long v10;  // [sp-0x100]
    void* v11;  // [sp-0xf8]
    char *v12;  // [sp-0xe8], Other Possible Types: void*
    char *v13;  // [sp-0xe0]
    char *v14;  // [sp-0xd8]
    char v15[4];  // [bp-0xd0], Other Possible Types: char
    char *v16;  // [sp-0xc8], Other Possible Types: struct struct_3 *[3]
    char v17;  // [bp-0xc0]
    char v18;  // [bp-0xb0]
    unsigned long v19;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0xa0]
    int v21;  // [bp-0x98], Other Possible Types: struct struct_0 **
    unsigned long long v22;  // [sp-0x90]
    int v23;  // [sp-0x88]
    unsigned long long v24;  // [sp-0x78]
    char v25;  // [bp-0x68]
    char v27;  // [bp-0x58]
    unsigned long v28;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x48]
    unsigned long long v30;  // [sp-0x40]
    unsigned long long v31;  // [sp-0x38]
    unsigned long long v33;  // r15
    struct struct_3 *v34[3];  // rax
    char *v35;  // r9
    char *v36;  // r12
    unsigned int v37;  // ebx
    char *v38;  // rbp
    char *v39;  // r14
    char *v40;  // r9
    unsigned int v41;  // eax
    char *v42;  // r9
    char *v43;  // r13
    unsigned long long v44;  // rdx
    unsigned int v45;  // ecx
    unsigned long long v47;  // rax
    char *v48;  // rcx
    char *v49;  // rcx
    char *v50;  // r9
    unsigned long v52;  // rcx
    char *v54;  // r13
    char *v55;  // rcx
    char *v57;  // r13
    char v58[4];  // rcx
    unsigned long long v59;  // rdx
    char v60[4];  // rcx
    unsigned int v61;  // esi
    unsigned int v62;  // r8d
    unsigned int v63;  // edi
    unsigned long long v64;  // rax
    char *v65;  // r12
    unsigned long long v67;  // rbp
    unsigned long long v68;  // r12
    unsigned long long v69;  // rbp
    unsigned int v70;  // eax
    unsigned long long v71;  // rax
    struct_2 *v72;  // rdx

    v2 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h82e3c0c74b1cdc79(&v15, a1, "modei128", 4);
    v19 = "modei128";
    v20 = 4;
    if (*((int *)&v15) != 2)
    {
        v24 = *((long long *)&v18);
        *((int128_t *)&v23) = *((int128_t *)&v17);
        *((int128_t *)&v21) = *((int128_t *)&v15);
        v28 = &v19;
        v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd506080ec407e424;
        v30 = &v21;
        v31 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v5 = &anon.68f81dc5e29cafb7991e15110736eb51.4.llvm.9775616657504764871;
        v6 = 2;
        v11 = 0;
        v8 = &v28;
        v10 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v5); /* do not return */
    }
    v33 = 0x8000000000000000;
    v34 = v16;
    if (!v34)
    {
        v41 = 5242912(0);
        5242912(v41);
        v37 = ~(v41) & 511;
    }
    else
    {
        v35 = v34[1];
        v36 = v34[2];
        v37 = 511;
        v38 = 0;
        v39 = 0;
        v1 = v35;
        v14 = v36;
        while (true)
        {
            v42 = v40;
            v38 = v38;
            v0 = v0;
            if (v36 < v39)
            {
                v45 = 0;
                v0 = v38;
                goto LABEL_481217;
            }
            v44 = v36 - v39;
            if (v44 <= 15)
            {
                if (v36 == v39)
                    goto LABEL_4811be;
                v48 = 0;
                while (*(v42 + v39 + v48) != 44)
                {
                    v48 += 1;
                    if (v44 == v48)
                        goto LABEL_4811be;
                }
            }
            else
            {
                v47 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(44, v42 + v39);
                if (v47 != 1)
                {
                    v45 = v52 | -0x100 | 1;
                    v42 = v1;
                    v0 = v0;
                    if (!v47)
                    {
LABEL_4811be:
                        v45 = 0;
                        v0 = v38;
LABEL_481217:
                    }
                }
                else
                {
                    v50 = v1;
                    v42 = v50;
                    v55 = v49;
                    v43 = v55 + v39;
                    v39 = v39 + v55 + 1;
                    if (!(v43 < v36) || !(*((char *)(v42 + v43)) == 44))
                        continue;
                    v45 = v55 | -0x100 | 1;
                    v0 = v39;
                }
                v57 = v54;
                v38 = v0;
                v4 = v45;
                v43 = v57 - v38;
                *((unsigned long *)&v15) = v38 + v42;
                v16 = v43;
                *(&v15) = v15;
                while (true)
                {
                    v58 = v15;
                    if (v58 == v42 + v57)
                        break;
                    v59 = v58[0];
                    if ((char)v59 >= 0)
                    {
                        v60 = &v58[1];
                        goto LABEL_481243;
                    }
                    v61 = (unsigned int)v59 & 31;
                    v62 = v58[1] & 63;
                    if ((v59 & 255) <= 223)
                    {
                        v60 = &v58[2];
                        v59 = v61 * 64 | v62;
                        goto LABEL_481243;
                    }
                    v63 = v58[2] & 63 | v62 * 64;
                    if ((v59 & 255) >= 240)
                    {
                        v59 = v58[3] & 63 | v63 * 64 | (v61 & 7) * 0x40000;
                        if ((unsigned int)v59 != 0x110000)
                        {
                            v60 = v58 + 1;
                            goto LABEL_481243;
                        }
                    }
                    v60 = &v58[3];
                    v59 = v63 | v61 * 0x1000;
LABEL_481243:
                    if ((unsigned int)v59 - 58 >= -10)
                    {
                        uucore::features::mode::parse_numeric::h99dbc2a02535262c(&v5, v37, v42, v36, 1);
                        v64 = v5;
                        v37 = v6;
                        if (v64 != v33)
                        {
                            v72 = a0;
                            *((int *)((char *)&v72->field_c + 4)) = *((int *)&v9);
                            *((long long *)&(&v72->field_8)[1]) = *((long long *)&v7);
                            v72->field_0 = v64;
                            v72->field_8 = v37;
                            return v72;
                        }
                        goto LABEL_48117b;
                    }
                }
                v3 = v37;
                if ((char)vvar_626)
                {
                    v21 = &v15;
                    v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd506080ec407e424;
                    v5 = &g_4e50d8;
                    v6 = 1;
                    v11 = 0;
                    v8 = &v21;
                    v10 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v5);
                    v43 = *((long long *)&v25);
                    v13 = *((long long *)&v27);
                }
                else
                {
                    if (!v43)
                    {
                        v68 = 1;
                    }
                    else if (v43 < 0)
                    {
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    else
                    {
                        v68 = __rust_alloc(v43, 1);
                        if (!v68)
                        {
                            v12 = v43;
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        }
                    }
                    memcpy(v12, v15, v43);
                    v12 = v68;
                    v13 = v43;
                    v67 = v12;
                }
                v69 = v67;
                v70 = 5242912(0);
                5242912(v70);
                uucore::features::mode::parse_symbolic::h67684b022a43a223(&v5, v3, v69, v13, v70, 1);
                v71 = v5;
                v37 = v6;
                v33 = 0x8000000000000000;
                if (v71 == 0x8000000000000000)
                {
                    v65 = v14;
                    if (v43)
                    {
                        __rust_dealloc(v69);
                        v14 = v14;
                    }
                }
                else
                {
                    v72 = a0;
                    *((int *)((char *)&v72->field_c + 4)) = *((int *)((char *)&v8 + 4));
                    *((long long *)&(&v72->field_8)[1]) = *((long long *)((char *)&v6 + 4));
                    v72->field_0 = v71;
                    v72->field_8 = v37;
                    if (v43)
                    {
                        __rust_dealloc(v69);
                        return v72;
                    }
                    return v72;
                }
LABEL_48117b:
                v0 = v38;
                v50 = v1;
                if (!(char)v4)
                    break;
            }
        }
    }
    v72 = a0;
    v72->field_8 = v37;
    v72->field_0 = v33;
    return v72;
}
