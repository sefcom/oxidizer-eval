long long uu_unexpand::Options::new::hdff57e00de1903b4(struct_0 *a0, struct_2 *a1)
{
    char *v0;  // [bp-0x1e8], Other Possible Types: unsigned int
    unsigned long long v1;  // [sp-0x1e0]
    unsigned long long v2;  // [sp-0x1d8]
    char v4;  // [bp-0x1c8], Other Possible Types: unsigned long long, unsigned long
    char *v5;  // [bp-0x1c0], Other Possible Types: unsigned long long [3], char, unsigned long
    char *v6;  // [bp-0x1b8], Other Possible Types: unsigned long long [3], char
    char v7;  // [bp-0x1b0]
    char v8;  // [bp-0x1a8]
    char v9;  // [bp-0x1a0]
    char v10;  // [bp-0x198]
    char v11;  // [bp-0x188]
    unsigned long long v12;  // [sp-0x180]
    int v13;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x170]
    int v15;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x160]
    void* v17;  // [bp-0x158], Other Possible Types: int
    unsigned long long v18;  // [sp-0x148]
    int v19;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // [sp-0x130]
    int v21;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x120]
    void* v23;  // [sp-0x118], Other Possible Types: unsigned long long
    int v24;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x100]
    int v27;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0xf0]
    unsigned long long v29;  // [sp-0xe8]
    unsigned long v30;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0xd8]
    unsigned long long v32;  // [sp-0xd0]
    unsigned long long v33;  // [sp-0xc8]
    unsigned long v34;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0xb8]
    unsigned long v36;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v37;  // [sp-0xa8]
    int v38;  // [sp-0x98]
    int v39;  // [sp-0x88]
    unsigned long long v40;  // [sp-0x78]
    unsigned long long v41[3];  // [sp-0x70]
    int v42;  // [sp-0x68]
    int v43;  // [sp-0x58]
    int v44;  // [sp-0x48]
    unsigned long long v45;  // [sp-0x38]
    int v47;  // xmm0
    unsigned long long v48[3];  // rax
    char *v49;  // r15
    char *v50;  // rbp
    char *v51;  // r13
    struct_2 *v53;  // 4096
    struct_2 *v103;  // rbp
    unsigned long long v104;  // rax
    struct struct_1 **v105;  // rcx
    struct struct_1 **v106;  // rdx
    unsigned long long v107;  // rax
    int v109;  // xmm0
    unsigned long long v110[3];  // rax
    unsigned long long v111[3];  // r12
    char *v112;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8d5da561cd2f0b76(&v4, a1, "tabsAuto", 4);
    v34 = "tabsAuto";
    v35 = 4;
    if (v4)
    {
        v29 = *((long long *)&v9);
        v47 = *((int128_t *)&v5);
        *((int128_t *)&v27) = *((int128_t *)&v7);
        v24 = v47;
        v30 = &v34;
        v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
        v32 = &v24;
        v33 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v19 = &anon.04bdc9b40990b0650f2353b3ef88e365.4.llvm.8184296018641731324;
        v20 = 2;
        v23 = 0;
        v21 = &v30;
        v22 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v19); /* do not return */
    }
    *((int128_t *)&v13) = *((int128_t *)&v6);
    *((int128_t *)&v15) = *((int128_t *)&v8);
    *((int128_t *)&v17) = *((int128_t *)&v10);
    v18 = *((long long *)&v11);
    if (v36)
    {
        a0 = a0;
        v36 = v5;
        *((int128_t *)&v37) = (int128_t)v13;
        *((int128_t *)&v38) = (int128_t)v15;
        *((int128_t *)&v39) = (int128_t)v17;
        v40 = v18;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h40790bc5328d4cf7(&v19, &v36);
        v12 = v20;
        alloc::str::join_generic_copy::h0a53f1b7e394caa5(&v4, v20, v21, ",allfirst-onlyno-utf8src/uu/unexpand/src/unexpand.rs--tabs=", 1);
        v2 = v4;
        v0 = v5;
        v49 = v6;
        v4 = 0;
        v5[0] = 8;
        v6[0] = 0;
        v50 = 0;
        v51 = 0;
    }
    else
    {
        v48 = __rust_alloc(8, 8);
        if (!v48)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v48[0] = 8;
        v1 = 1;
        v103 = v53;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v103, "allfirst-onlyno-utf8src/uu/unexpand/src/unexpand.rs--tabs=", 3))
        {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(v103, "first-onlyno-utf8src/uu/unexpand/src/unexpand.rs--tabs=", 10);
            v107 = v0;
            v0 = v107 | -0x100 | (char)v107 ^ 1;
        }
        else
        {
            v104 = v103->field_10;
            if (!v104)
            {
LABEL_483ac2:
                v0 = 0;
            }
            else
            {
                v105 = v103->field_8;
                v106 = 0;
                while (!(*((long long *)(v105 + v106 + 8)) == 4) || !(*((int *)*((long long *)(v105 + v106))) == 1935827316))
                {
                    v106 += 2;
                    if (v104 << 4 == v106)
                        goto LABEL_483ac2;
                }
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8d5da561cd2f0b76(&v4, a1, "filei128", 4);
        v30 = "filei128";
        v31 = 4;
        if (v4)
        {
            v23 = *((long long *)&(&v8)[8]);
            v109 = *((int128_t *)&v5);
            *((int128_t *)&v21) = *((int128_t *)&(&v6)[8]);
            v19 = v109;
            v24 = &v30;
            v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
            v27 = &v19;
            v28 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v13 = &anon.04bdc9b40990b0650f2353b3ef88e365.4.llvm.8184296018641731324;
            v14 = 2;
            v17 = 0;
            v15 = &v24;
            v16 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v13); /* do not return */
        }
        *((int128_t *)&v13) = *((int128_t *)&v6);
        *((int128_t *)&v15) = *((int128_t *)&v8);
        *((int128_t *)&v17) = *((int128_t *)&v10);
        v18 = *((long long *)&v11);
        if (v41)
        {
            v41[0] = v5;
            *((int128_t *)&v42) = (int128_t)v13;
            *((int128_t *)&v43) = (int128_t)v15;
            *((int128_t *)&v44) = (int128_t)v17;
            v45 = v18;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h811b93e6c5878309(&v4, v41);
        }
        else
        {
            a0 = a0;
            v110 = __rust_alloc(24, 8);
            if (!v110)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v111 = v110;
            v112 = __rust_alloc(1, 1);
            if (!v112)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *(v112) = 45;
            v111[0] = 1;
            v111[1] = v112;
            v111[2] = 1;
            v4 = 1;
            v5[0] = v111;
            v6[0] = 1;
        }
        a0->field_10 = v6;
        a0->field_0 = v4;
        a0->field_8 = v5;
        a0->field_18 = v1;
        a0->field_20 = v48;
        a0->field_28 = 1;
        a0->field_30 = v0;
        a0->field_31 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "no-utf8src/uu/unexpand/src/unexpand.rs--tabs=", 7) ^ 1;
        return a0;
    }
}
