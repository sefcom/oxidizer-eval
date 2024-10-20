long long uu_df::blocks::read_block_size::hdc7990cb41d7d534(struct_3 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x118]
    unsigned long long v3;  // [sp-0x110]
    void* v4;  // [sp-0x108]
    unsigned long long v5;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0xf0], Other Possible Types: unsigned long
    char v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0]
    unsigned long v9;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0xd0], Other Possible Types: unsigned long long
    char v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    int v13;  // [bp-0xb8], Other Possible Types: void*
    unsigned long long v14;  // [sp-0xb0]
    int v15;  // [bp-0xa8], Other Possible Types: void*, unsigned long long
    char v16;  // [sp-0xa0]
    unsigned long long v17;  // [bp-0x98], Other Possible Types: unsigned short
    char v18;  // [sp-0x96]
    void* v19;  // [bp-0x90], Other Possible Types: char, unsigned long long
    unsigned long long v20[3];  // [sp-0x88], Other Possible Types: unsigned long long
    char v21;  // [bp-0x80], Other Possible Types: unsigned long long
    char v22;  // [sp-0x78]
    char v23;  // [bp-0x70]
    int v24;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x60]
    unsigned long v26;  // [sp-0x50], Other Possible Types: unsigned long long
    char v27;  // [sp-0x48], Other Possible Types: unsigned long long, unsigned long
    unsigned long v28;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x38]
    unsigned long long v31;  // rax
    struct struct_0 **v32;  // rcx
    struct struct_0 **v33;  // rdx
    struct_0 *v34;  // rdi
    unsigned long long v35[3];  // rax
    int v36;  // xmm0
    unsigned long long v37;  // r12
    unsigned long long v38;  // r15
    unsigned long long v39;  // r14
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // r14
    unsigned long long v47;  // r15
    unsigned long long v48;  // r12
    unsigned long long v49;  // r12
    unsigned long long v51;  // r12
    unsigned long long v52;  // rsi

    v31 = a1->field_10;
    if (v31)
    {
        v32 = a1->field_8;
        v33 = 0;
        do
        {
            if (*((long long *)(v32 + v33 + 8)) == 9)
            {
                v34 = *((long long *)(v32 + v33));
                if (!(v34->field_8 ^ 101) && !(v34->field_0 ^ 8820708250248768610))
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2cd0b44349b872c4(&v19, a1, "blocksiz", 9);
                    v9 = "blocksiz";
                    v10 = 9;
                    if (*((int *)&v19) != 2)
                    {
                        v17 = *((long long *)&v23);
                        v36 = *((int128_t *)&v19);
                        *((int128_t *)&v15) = *((int128_t *)&v21);
                        v13 = v36;
                        v26 = &v9;
                        v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h426ccf1a1651f065;
                        v28 = &v13;
                        v29 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                        v0 = &anon.37e8404f29ea422d3c165b81a7597284.5.llvm.3498370989897006048;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v26;
                        v3 = 2;
                        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                    }
                    v35 = v20;
                    if (!v35)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v37 = v35[1];
                    v38 = v35[2];
                    v17 = 0;
                    v18 = 0;
                    v13 = 0;
                    v15 = 0;
                    uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v9, &v13, v37, v38);
                    v41 = v9;
                    if (v41 != 3)
                    {
                        *((int128_t *)&v24) = *((int128_t *)&v11);
                        v10 = v10;
                    }
                    else if (*((long long *)&v12))
                    {
                        v19 = 0;
                        v20 = v37;
                        v21 = v38;
                        v22 = 1;
                        v5 = &v19;
                        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v0 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                        v1 = 2;
                        v4 = 0;
                        v2 = &v5;
                        v3 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v0);
                        *((int128_t *)&v24) = *((int128_t *)&v28);
                        v41 = 2;
                        v10 = v27;
                    }
                    else
                    {
                        v43 = *((long long *)&v11);
                        if (!v43)
                        {
                            v13 = 0;
                            v14 = v37;
                            v15 = v38;
                            v16 = 1;
                            v19 = &v13;
                            v20 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v0 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                            v1 = 1;
                            v4 = 0;
                            v2 = &v19;
                            v3 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&a0->field_8, &v0);
                            a0->field_0 = 1;
                            return a0;
                        }
                        a0->field_8 = v43;
                        a0->field_0 = 3;
                        return a0;
                    }
                    a0->field_10 = (int128_t)v24;
                    a0->field_0 = v41;
                    a0->field_8 = v10;
                    return a0;
                }
            }
        } while ((v33 += 16, v31 << 4 != v33));
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttarget--block-size argument  too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both se", 11))
    {
        std::env::_var::h2f29fdf15fefb03a(&v0, "POSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE", 15);
        v39 = v0;
        v40 = v1;
        if ((!v39 || v40 != 0x8000000000000000) && v40)
            __rust_dealloc(v2);
        a0->field_8 = ((v39 & 4294967295) * 0x200 & 4294967295) + 0x200;
    }
    else
    {
        std::env::_var::h2f29fdf15fefb03a(&v5, "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE", 13);
        if (v5)
        {
            v42 = v6;
            if (v42 != 0x8000000000000000 && v42)
                __rust_dealloc(*((long long *)&v7));
            std::env::_var::h2f29fdf15fefb03a(&v5, "BLOCK_SIZEBLOCKSIZE", 10);
            if (v5)
            {
                v44 = v6;
                if (v44 != 0x8000000000000000 && v44)
                    __rust_dealloc(*((long long *)&v7));
                std::env::_var::h2f29fdf15fefb03a(&v5, "BLOCKSIZE", 9);
                if (v5)
                {
                    v45 = v6;
                    if (v45 != 0x8000000000000000 && v45)
                    {
                        __rust_dealloc(*((long long *)&v7));
                        goto LABEL_49e415;
                    }
                }
            }
        }
        v46 = v6;
        v47 = *((long long *)&v7);
        v48 = *((long long *)&v8);
        v17 = 0;
        v18 = 0;
        v13 = 0;
        v15 = 0;
        uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v9, &v13, v47, v48);
        if ((int)v9 != 3)
        {
            v49 = v10;
            if (!v49)
                goto LABEL_49e3cf;
LABEL_49e3ea:
            __rust_dealloc(*((long long *)&v11));
            if (!(!v46))
                goto LABEL_49e3ff;
        }
        else if (!*((long long *)&v12))
        {
            v49 = *((long long *)&v11);
            if (v46)
            {
LABEL_49e3ff:
                __rust_dealloc(v47);
            }
        }
        else
        {
            v19 = 0;
            v20 = v47;
            v21 = v48;
            v22 = 1;
            v24 = &v19;
            v25 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v0 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
            v1 = 2;
            v4 = 0;
            v2 = &v24;
            v3 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v0);
            v49 = v27;
            if (!(!v49))
                goto LABEL_49e3ea;
LABEL_49e3cf:
            v49 = 0;
            if (!(!v46))
                goto LABEL_49e3ff;
        }
        if (false)
        {
LABEL_49e415:
            std::env::_var::h2f29fdf15fefb03a(&v0, "POSIXLY_CORRECTDF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE", 15);
            v51 = v0;
            v52 = v1;
            if ((!v51 || v52 != 0x8000000000000000) && v52)
                __rust_dealloc(v2);
            v49 = ((v51 & 4294967295) * 0x200 & 4294967295) + 0x200;
        }
        a0->field_8 = v49;
    }
    a0->field_0 = 3;
    return a0;
}
