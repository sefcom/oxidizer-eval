long long uu_ptx::WordFilter::new::h1af8807b66bec64a(struct_6 *a0, struct_3 *a1, struct_2 *a2, unsigned long a3, unsigned int a4, unsigned int a5)
{
    int v0;  // [bp-0x218], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned int v1;  // [bp-0x210], Other Possible Types: char, unsigned long long
    unsigned short v2;  // [sp-0x20c]
    int v3;  // [sp-0x208], Other Possible Types: void*, unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x200]
    void* v5;  // [bp-0x1f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x1f0]
    unsigned long long v9;  // [sp-0x1d0]
    int v10;  // [sp-0x1c8], Other Possible Types: void*, unsigned long
    char v11;  // [bp-0x1c4]
    unsigned long long v12;  // [sp-0x1c0]
    int v13;  // [sp-0x1b8], Other Possible Types: void*
    unsigned long long v14;  // [sp-0x1b0]
    int v15;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x190]
    char v17;  // [bp-0x188], Other Possible Types: unsigned int
    char v18;  // [bp-0x180]
    char v19;  // [bp-0x178]
    char v20;  // [bp-0x168]
    unsigned long v21;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x158]
    unsigned long long v23;  // [sp-0x150]
    unsigned long long v24;  // [sp-0x148]
    int v25;  // [bp-0x138]
    unsigned long long v27;  // [sp-0x128]
    unsigned long long v28;  // [sp-0x120]
    unsigned long long v29;  // [sp-0x118]
    unsigned long long v30;  // [sp-0x110]
    int v31;  // [bp-0x108], Other Possible Types: void*
    int v32;  // [sp-0xf8]
    int v33;  // [sp-0xe8]
    unsigned long long v34;  // [sp-0xd0]
    unsigned long long v35;  // [sp-0xc8]
    unsigned long long v36;  // [sp-0xc0]
    unsigned long long v37;  // [sp-0xb8]
    int v38;  // [sp-0xb0]
    unsigned long v39;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v40;  // [sp-0x98]
    unsigned long long v41;  // [sp-0x90]
    unsigned long long v42;  // [sp-0x88]
    int v43;  // [sp-0x80]
    unsigned long v44;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v45;  // [sp-0x68]
    unsigned long v46;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v47;  // [sp-0x58]
    unsigned long long v48;  // [sp-0x50]
    int v49;  // [sp-0x48]
    unsigned long long v50;  // [sp-0x38]
    struct struct_1 **v52;  // r14
    unsigned long long v53;  // r13
    struct struct_1 **v54;  // rcx
    struct_1 *v55;  // rdx
    unsigned long long *v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rcx
    int v59;  // xmm0
    unsigned long v60;  // r12
    void* v61;  // r12
    uint128_t v62[2];  // rax
    int v65;  // xmm0
    struct struct_1 **v66;  // rcx
    struct_1 *v67;  // rdx
    unsigned int v68;  // r8
    unsigned int v69;  // r9
    unsigned long long *v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v72;  // rcx
    uint128_t v74[2];  // rax
    int v77;  // xmm0
    unsigned long long v78;  // rax
    struct struct_1 **v79;  // rcx
    struct_1 *v80;  // rdx
    struct struct_1 **v81;  // rcx
    struct_1 *v82;  // rdx
    unsigned long long v83[3];  // rax
    int v84;  // xmm0
    unsigned long long v85;  // rdx
    struct struct_0 **v86;  // fs
    unsigned long long v87[3];  // rax
    unsigned long long v88;  // rcx
    unsigned long long v89[3];  // rax
    unsigned long long v90;  // r12
    unsigned long long v91;  // rsi
    unsigned long long v92;  // r12
    uint128_t v93[2];  // rax
    unsigned long long *v94;  // rax
    int v95;  // xmm0
    unsigned long long v96[3];  // rax
    unsigned long long v97;  // r12
    int v98;  // xmm0
    unsigned long long v99[3];  // rax
    int v100;  // xmm0
    int v101;  // xmm1

    v52 = a1->field_8;
    v53 = a1->field_10;
    if (!v53)
    {
        v56 = _ZN4core3ops8function6FnOnce9call_once17hf6b9d66bd0d26b7bE.llvm.8033991318799290767(0);
        if (!v56)
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        *(v56) = *(v56) + 1;
        v57 = &anon.585b1728ec6435d03fbe081b5952853c.1.llvm.8033991318799290767;
        v61 = 0;
        v58 = 0;
        goto LABEL_537426;
        goto LABEL_537426;
    }
    v54 = 0;
    do
    {
        if (*((long long *)(v52 + v54 + 8)) == 9 && !((char)v55->field_3 ^ 101) && !(v55->field_0 ^ 7811887374147546735))
        {
            uu_ptx::read_word_filter_file::h75487275f18cb1fd(&v0, a1, "only-fil", 9, a4, a5);
            v57 = v0;
            v58 = *((long long *)&v1);
            if (v57)
            {
                v59 = *((int128_t *)&v5);
                v61 = v60 | -0x100 | 1;
                goto LABEL_537426;
            }
            else
            {
                v10 = 0;
                v12 = 1;
                v13 = 0;
                v14 = v58;
                v62 = __rust_alloc(32, 8);
                if (v62)
                {
                    v65 = *((int128_t *)&v10);
                    v62[1] = *((int128_t *)&v13);
                    *((void*)&v62[0]) = v65;
                    a0->field_8 = v62;
                    a0->field_10 = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
                    a0->field_0 = 0x8000000000000000;
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
    } while ((v54 += 16, v53 << 4 != v54));
LABEL_537426:
    v34 = v57;
    v35 = v58;
    v36 = 0;
    v37 = 0;
    v38 = v59;
    v30 = v61;
    if (v53)
    {
        v66 = 0;
    }
    else
    {
LABEL_5374dd:
        v70 = _ZN4core3ops8function6FnOnce9call_once17hf6b9d66bd0d26b7bE.llvm.8033991318799290767(0);
        if (!v70)
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        *(v70) = *(v70) + 1;
        v71 = &anon.585b1728ec6435d03fbe081b5952853c.1.llvm.8033991318799290767;
        v72 = 0;
        goto LABEL_537503;
        goto LABEL_537503;
    }
    while (!(*((long long *)(v52 + v66 + 8)) == 11) || !(!(*((long long *)((char *)&v67->field_0 + 3)) ^ 7308332182884676207)) || !(!(v67->field_0 ^ 7362652507990812521)))
    {
        v66 += 2;
        if (v53 << 4 == v66)
            goto LABEL_5374dd;
    }
    uu_ptx::read_word_filter_file::h75487275f18cb1fd(&v0, a1, "ignore-fileonly-fil", 11, v68, v69);
    v71 = v0;
    v72 = *((long long *)&v1);
    if (!v71)
    {
        v10 = 0;
        v12 = 1;
        v13 = 0;
        v14 = v72;
        v74 = __rust_alloc(32, 8);
        if (!v74)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v77 = *((int128_t *)&v10);
        v74[1] = *((int128_t *)&v13);
        *((void*)&v74[0]) = v77;
        a0->field_8 = v74;
        a0->field_10 = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
        a0->field_0 = 0x8000000000000000;
    }
LABEL_537503:
    v39 = v71;
    v40 = v72;
    v41 = 0;
    v42 = 0;
    *((int128_t *)&v43) = *((int128_t *)&v5);
    if (!v53)
    {
LABEL_5375b3:
        v31 = 0;
    }
    v78 = v53 * 16;
    v79 = 0;
    while (!(*((long long *)(v52 + v79 + 8)) == 10) || !(!((short)v80->field_3 ^ 25964)) || !(!(v80->field_0 ^ 7594807760825709154)))
    {
        v79 += 2;
        if (v78 == v79)
            goto LABEL_5375b3;
    }
    v81 = 0;
    while (!(*((long long *)(v52 + v81 + 8)) == 11) || !(!(*((long long *)((char *)&v82->field_0 + 3)) ^ 8104339024211225956)) || !(!(v82->field_0 ^ 7450486697838669687)))
    {
        v81 += 2;
        if (v78 == v81)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v17, a1, "break-fi", 10);
            v44 = "break-fi";
            v45 = 10;
            if (v17 != 2)
            {
                v15 = *((long long *)&v20);
                v84 = *((int128_t *)&v17);
                *((int128_t *)&v13) = *((int128_t *)&v19);
                v10 = v84;
                v21 = &v44;
                v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
                v23 = &v10;
                v24 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v0 = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
                v1 = 2;
                v5 = 0;
                v3 = &v21;
                v4 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
            }
            v83 = *((long long *)&v18);
            if (!v83)
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v0 = 0x1b600000000;
            v1 = 0;
            v2 = 0;
            v1 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v10, &v0, v83[1], v83[2]);
            if (!(int)v10)
            {
                v17 = *((int *)&v11);
                v10 = 0;
                v12 = 1;
                v13 = 0;
                if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_string::h16b54f4758140c12(&v17, &v10, v85))
                {
                    if (v10)
                        __rust_dealloc(v12);
                    close(v17);
                }
                else
                {
                    v29 = v13;
                    v28 = v12;
                    if (vvar_1339)
                    {
                        v87 = &*(v86)->padding_-38[56];
                        v88 = v87[1];
                        v16 = v87[2];
                    }
                    else
                    {
                        v9 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
                        v16 = v85;
                        v89 = &*(v86)->padding_-38[56];
                        v89[0] = 1;
                        v88 = v9;
                        v89[1] = v88;
                        v89[2] = v16;
                    }
                    v9 = v88;
                    *((unsigned long long *)&*(v86)->padding_-38[48]) = v9 + 1;
                    *((uint128_t *)&v0) = g_67b1d0;
                    *((uint128_t *)&v3) = g_67b1e0;
                    v5 = v9;
                    v6 = v16;
                    v90 = v29;
                    v91 = v90 + 3;
                    if (v91 >= 4)
                        _ZN9hashbrown3raw21RawTable$LT$T$C$A$GT$14reserve_rehash17h3126d0d8373c0194E.llvm.6877305194432607421(&v0, v91 >> 2, &v5);
                    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h7480913200c66966(v28, v90 + v28, &v0);
                    v9 = v0;
                    v92 = (long long)(&v0)[8];
                    v16 = v3;
                    *((int128_t *)&v25) = (int128_t)(&v3)[8];
                    v27 = v6;
                    if (v10)
                        __rust_dealloc(v12);
                    close(v17);
                    if (v46)
                    {
                        v50 = v27;
                        *((int128_t *)&v49) = (int128_t)v25;
                        v46 = v9;
                        v47 = v92;
                        v48 = v16;
                        if (!a2->field_58)
                        {
                            if (!*((long long *)&*(v86)->padding_-38[56]))
                            {
                                v9 = v85;
                                v97 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
                                v99 = &*(v86)->padding_-38[56];
                                v99[0] = 1;
                                v99[1] = v97;
                                v99[2] = v9;
                            }
                            else
                            {
                                v96 = &*(v86)->padding_-38[56];
                                v97 = v96[1];
                                v9 = v96[2];
                            }
                            v16 = v97 + 1;
                            *((unsigned long long *)&*(v86)->padding_-38[48]) = v16;
                            *((uint128_t *)&v0) = g_67b1d0;
                            *((uint128_t *)&v3) = g_67b1e0;
                            v5 = v97;
                            v6 = v9;
                            _ZN9hashbrown3raw21RawTable$LT$T$C$A$GT$14reserve_rehash17h3126d0d8373c0194E.llvm.6877305194432607421(&v0, 3, &v5);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h138daa6637ff9eb3(&v0, 32);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h138daa6637ff9eb3(&v0, 9);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h138daa6637ff9eb3(&v0, 10);
                            v100 = (int128_t)v0;
                            v101 = (int128_t)v3;
                            *((int128_t *)&v15) = *((int128_t *)&v5);
                            v13 = v101;
                            v10 = v100;
                        }
                        else
                        {
                            v94 = _ZN4core3ops8function6FnOnce9call_once17hf6b9d66bd0d26b7bE.llvm.8033991318799290767(0);
                            if (!v94)
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            v98 = *((int128_t *)&v94);
                            *(v94) = *(v94) + 1;
                            *((uint128_t *)&v13) = g_67bcb8;
                            *((uint128_t *)&v10) = anon.585b1728ec6435d03fbe081b5952853c.2.llvm.8033991318799290767;
                            v15 = v98;
                        }
                        _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hdde314d045048e4a(&v10, &v46);
                        *((int128_t *)&v33) = (int128_t)v15;
                        *((int128_t *)&v32) = (int128_t)v13;
                        *((int128_t *)&v31) = *((int128_t *)&v10);
                    }
                }
            }
            v0 = 0;
            v1 = 1;
            v3 = 0;
            v4 = v92;
            v93 = __rust_alloc(32, 8);
            if (!v93)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v95 = *((int128_t *)&v0);
            v93[1] = *((int128_t *)&v3);
            *((void*)&v93[0]) = v95;
            a0->field_8 = v93;
            a0->field_10 = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
            a0->field_0 = 0x8000000000000000;
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95eb934166068804(&v39);
        }
    }
    goto LABEL_5375b3;
}
