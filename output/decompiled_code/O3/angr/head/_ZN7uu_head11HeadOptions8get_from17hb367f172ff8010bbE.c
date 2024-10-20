long long uu_head::HeadOptions::get_from::hb367f172ff8010bb(struct_0 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x170]
    unsigned long v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x160], Other Possible Types: unsigned long long
    char v4;  // [sp-0x158], Other Possible Types: unsigned long long
    char v5;  // [bp-0x157]
    char v6;  // [bp-0x153]
    char v7;  // [bp-0x151]
    unsigned long long v8;  // [sp-0x150]
    int v9;  // [bp-0x148], Other Possible Types: char
    char v10;  // [bp-0x140]
    int v11;  // [bp-0x138], Other Possible Types: char
    unsigned long v12;  // [sp-0x128], Other Possible Types: unsigned long long
    int v13;  // [bp-0x118], Other Possible Types: unsigned long
    int v14;  // [sp-0x108]
    int v15;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v16;  // [sp-0xe8]
    unsigned long v17;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v18[3];  // [sp-0xd0]
    unsigned long v19;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long v20;  // [sp-0xc0], Other Possible Types: unsigned long long
    void* v21;  // [sp-0xb8]
    char v22;  // [bp-0xb0]
    char v23;  // [bp-0xa8]
    char v24;  // [bp-0x98]
    void* v25;  // [sp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v26;  // [sp-0x88]
    void* v27;  // [sp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v28[3];  // [sp-0x78], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x70], Other Possible Types: unsigned long, unsigned long long
    char v30;  // [bp-0x68], Other Possible Types: unsigned int
    char v31;  // [sp-0x67]
    char v32;  // [sp-0x66]
    char v33;  // [sp-0x65]
    unsigned long long v34[3];  // [sp-0x60]
    int v35;  // [sp-0x58]
    int v36;  // [sp-0x48]
    int v37;  // [sp-0x38]
    unsigned long long v38;  // [sp-0x28]
    unsigned long long v41[3];  // rax
    unsigned long long v42;  // rdx
    void* v43;  // rax
    unsigned long long v44[3];  // rax
    unsigned long long v45;  // rdi
    unsigned long long v46;  // rcx
    unsigned long long v47[3];  // rax
    unsigned long long v48[3];  // r14
    char *v49;  // rax
    int v50;  // xmm0
    int v51;  // xmm1

    v30 = 0xa000000;
    v25 = 0;
    v26 = 10;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "QUIETquietsilent", 5);
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "VERBOSEverbose", 7);
    *((int *)&v33) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "ZEROu128", 4) ? 10 : 0);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminated", 19);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h616ca7352cf6456c(&v9, a1, "BYTESbytes[-]NUM", 5);
    v0 = "BYTESbytes[-]NUM";
    v1 = 5;
    if (*((int *)&v9) != 2)
    {
        v15 = v12;
        v14 = v11;
        v13 = v9;
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5012527d5c30dc07;
        v4 = &v13;
        v8 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v17 = &anon.6f6f3e37f16b8954b77919bc67cb5a82.4.llvm.1431650823985739752;
        (&v17)[1] = 2;
        (&v17)[4] = 0;
        (&v17)[2] = &v2;
        (&v17)[3] = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v17); /* do not return */
    }
    v41 = *((long long *)&v10);
    if (!v41)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h616ca7352cf6456c(&v9, a1, "LINESlines", 5);
        v0 = "LINESlines";
        v1 = 5;
        if (*((int *)&v9) != 2)
        {
            v15 = v12;
            vvar_522{stack -264} = v11;
            v13 = v9;
            vvar_523{stack -360} = &v0;
            vvar_524{stack -352} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5012527d5c30dc07;
            vvar_525{stack -344} = &v13;
            vvar_526{stack -336} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            vvar_527{stack -216} = &anon.6f6f3e37f16b8954b77919bc67cb5a82.4.llvm.1431650823985739752;
            (&v17)[1] = 2;
            (&v17)[4] = 0;
            (&v17)[2] = &v2;
            (&v17)[3] = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v17); /* do not return */
        }
        v44 = *((long long *)&v10);
        if (!v44)
        {
            v42 = 10;
            v43 = 0;
            goto LABEL_4886d0;
        }
        uu_head::parse::parse_num::hdab79be3ceb563a8(&v9, v44[1], v44[2]);
        if (*((int *)&v9) == 3)
        {
            v42 = *((long long *)&v10);
            v43 = v11;
            goto LABEL_4886d0;
        }
        else
        {
            v14 = v11;
            v13 = v9;
            v0 = &v13;
            v1 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he20d89d0c7d20ec1;
            v17 = &g_4efd40;
            v18[0] = 1;
            v21 = 0;
            v19 = &v0;
            v20 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v2, &v17);
        }
    }
    else
    {
        uu_head::parse::parse_num::hdab79be3ceb563a8(&v9, v41[1], v41[2]);
        if (*((int *)&v9) == 3)
        {
            v42 = *((long long *)&v10);
            v43 = 3 - (v11 < 1);
            goto LABEL_4886d0;
        }
        else
        {
            v14 = v11;
            v13 = v9;
            v0 = &v13;
            v1 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he20d89d0c7d20ec1;
            v17 = &g_4efd30;
            v18[0] = 1;
            v21 = 0;
            v19 = &v0;
            v20 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v2, &v17);
        }
    }
    if ((long long)(&v13)[8])
        __rust_dealloc((long long)v14);
    v46 = v2;
    v43 = v3;
    v42 = v4 | (*((int *)&v5) | (*((short *)&v6) | v7 * 0x10000) * 0x100000000) * 0x100;
    if (v46 != 0x8000000000000000)
    {
        *((unsigned long long *)&a0->padding_8[0]) = v46;
        a0->field_10 = v43;
        *((unsigned long long *)&a0->padding_18[0]) = v42;
        a0->field_0 = 4;
        return a0;
    }
LABEL_4886d0:
    v25 = v43;
    v26 = v42;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc59d3d7163fbb7e5(&v17, a1, "FILE", 4);
    v0 = "FILE";
    v1 = 4;
    if (v17)
    {
        v12 = *((long long *)&v22);
        *((int128_t *)&v11) = *((int128_t *)&v20);
        *((int128_t *)&v9) = *((int128_t *)&v18);
        v2 = &v0;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5012527d5c30dc07;
        v4 = &v9;
        v8 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v13 = &anon.6f6f3e37f16b8954b77919bc67cb5a82.4.llvm.1431650823985739752;
        v45 = &v13;
        *((long long *)(v45 + 8)) = 2;
        *((long long *)(v45 + 32)) = 0;
        *((unsigned long **)(v45 + 16)) = &v2;
        *((long long *)(v45 + 24)) = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(v45); /* do not return */
    }
    *((int128_t *)&v13) = *((int128_t *)&v19);
    *((int128_t *)&v14) = *((int128_t *)&v21);
    *((int128_t *)&v15) = *((int128_t *)&v23);
    v16 = *((long long *)&v24);
    if (v34)
    {
        v34[0] = v18;
        *((int128_t *)&v35) = (int128_t)v13;
        v36 = v14;
        *((int128_t *)&v37) = (int128_t)v15;
        v38 = v16;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd40c1a15ba2cf17c(&v17, v34);
    }
    else
    {
        v47 = __rust_alloc(24, 8);
        if (!v47)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v48 = v47;
        v49 = __rust_alloc(1, 1);
        if (!v49)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *(v49) = 45;
        v48[0] = 1;
        v48[1] = v49;
        v48[2] = 1;
        v17 = 1;
        v18[0] = v48;
        v19 = 1;
    }
    v29 = v19;
    v27 = v17;
    v28[0] = v18;
    v50 = *((int128_t *)&v25);
    v51 = *((int128_t *)&v27);
    a0->field_20 = *((int128_t *)&v29);
    *((void*)&a0->field_10) = v51;
    *((void*)&a0->field_0) = v50;
    return a0;
}
