long long uu_du::read_block_size::h0d5c545b36ae6c58(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[2];  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v1[2];  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0x180]
    unsigned long long v3;  // [sp-0x178]
    unsigned long long v4;  // [sp-0x170]
    void* v5;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x160]
    void* v7;  // [sp-0x158]
    unsigned long long v8;  // [sp-0x150]
    void* v9;  // [bp-0x148], Other Possible Types: char
    unsigned long long v10;  // [sp-0x140]
    unsigned long long v11;  // [sp-0x138], Other Possible Types: unsigned long
    char v12;  // [sp-0x130]
    int v13;  // [bp-0x128], Other Possible Types: unsigned long long
    char v14;  // [bp-0x120], Other Possible Types: unsigned long long
    int v15;  // [sp-0x118]
    void* v16;  // [sp-0x100]
    unsigned long long v17;  // [sp-0xf8]
    void* v18;  // [sp-0xf0], Other Possible Types: unsigned long long
    char v19;  // [sp-0xe8]
    unsigned short v20;  // [sp-0xe0]
    char v21;  // [sp-0xde]
    void* v22;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0xd0]
    void* v24;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0xc0]
    void* v26;  // [sp-0xb8], Other Possible Types: unsigned short
    char v27;  // [sp-0xb6]
    char v28;  // [bp-0xa8]
    char v29;  // [bp-0xa0]
    char v30;  // [bp-0x98]
    char v31;  // [bp-0x90]
    char v32;  // [bp-0x80]
    char v33;  // [bp-0x78]
    char v34;  // [bp-0x70]
    char v35;  // [bp-0x68]
    unsigned long v36;  // [sp-0x60], Other Possible Types: unsigned long long
    char v37;  // [bp-0x58], Other Possible Types: unsigned long, unsigned long long
    char v38;  // [bp-0x50]
    unsigned long v39;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v40;  // [sp-0x38]
    struct struct_0 **v42;  // r12
    unsigned long long v43;  // r14
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rdi
    unsigned long long v47[2];  // rbx
    unsigned long long v48;  // rsi
    unsigned long long v49;  // r14
    struct_1 *v50;  // rax

    if (a1)
    {
        v26 = 0;
        v27 = 0;
        v22 = 0;
        v24 = 0;
        uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v9, &v22, a1, a2);
        if (*((int *)&v9) != 3)
        {
            *((int128_t *)&v15) = *((int128_t *)&v11);
            *((int128_t *)&v13) = *((int128_t *)&v9);
        }
        else if (!*((long long *)&v12))
        {
            v14 = v11;
            v13 = 3;
        }
        else
        {
            v16 = 0;
            v17 = a1;
            v18 = a2;
            v19 = 1;
            v36 = &v16;
            v37 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v1 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
            v2 = 2;
            v5 = 0;
            v3 = &v36;
            v4 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v1);
            v13 = 2;
        }
        v49 = v14;
        if ((int)v13 == 3)
        {
            a0[1] = v49;
            a0[0] = 0;
            return a0;
        }
        v0 = (long long)v15;
        uu_du::format_error_message::h36dddfb589a289ab(&v1, &v13, a1, a2, "block-sizesrc/uu/du/src/du.rs ignored\ninvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more information.", 10);
        v50 = __rust_alloc(32, 8);
        if (!v50)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v50->field_0 = v1;
        v50->field_8 = v2;
        v50->field_10 = v3;
        v50->field_18 = 1;
        if (v49)
            __rust_dealloc(v0);
        a0[0] = v50;
        a0[1] = &g_534788;
        return a0;
    }
    else
    {
        a0[0] = a0;
        v1[0] = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-sizesrc/uu/du/src/du.rs ignored\ninvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for mo";
        v2 = 13;
        v3 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-sizesrc/uu/du/src/du.rs ignored\ninvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more informatio";
        v4 = 10;
        v5 = "BLOCKSIZEPOSIXLY_CORRECTblock-sizesrc/uu/du/src/du.rs ignored\ninvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more information.";
        v6 = 9;
        v7 = 0;
        v8 = 3;
        v42 = 8;
        do
        {
            std::env::_var::h2f29fdf15fefb03a(&v32, *((long long *)(v0 + v42)), *((long long *)(&v1 + v42)));
            v43 = *((long long *)&v33);
            if (*((long long *)&v32))
            {
                if (!v43 << 1)
                    continue;
                v44 = *((long long *)&v34);
                goto LABEL_4acd80;
            }
            v44 = *((long long *)&v34);
            v45 = *((long long *)&v35);
            v20 = 0;
            v21 = 0;
            v16 = 0;
            v18 = 0;
            uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v28, &v16, v44, v45);
            if (*((int *)&v28) == 3)
            {
                if (!*((long long *)&v31))
                {
                    a0 = a0;
                    a0[1] = *((long long *)&v30);
                    a0[0] = 0;
                    if (v43)
                    {
                        __rust_dealloc(v44);
                        return a0;
                    }
                    return a0;
                }
                v9 = 0;
                v10 = v44;
                v11 = v45;
                v12 = 1;
                v39 = &v9;
                v40 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v22 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                v23 = 2;
                v26 = 0;
                v24 = &v39;
                v25 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v37, &v22);
                v46 = *((long long *)&v38);
                if (!v37)
                    goto LABEL_4acf17;
            }
            else
            {
                v46 = *((long long *)&v30);
                if (!*((long long *)&v29))
                    goto LABEL_4acf17;
            }
            __rust_dealloc(v46);
LABEL_4acf17:
            if (!v43)
                continue;
LABEL_4acd80:
            __rust_dealloc(v44);
        } while ((v42 += 16, v42 != 56));
        std::env::_var::h2f29fdf15fefb03a(&v1, "POSIXLY_CORRECTblock-sizesrc/uu/du/src/du.rs ignored\ninvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more information.", 15);
        v47 = v1;
        v48 = v2;
        if (!v47 || v48 != 0x8000000000000000)
        {
            a0 = a0;
            if (v48)
                __rust_dealloc(v3);
            if (!v47)
            {
                a0[1] = 0x200;
                a0[0] = 0;
                return a0;
            }
        }
        a0[1] = 0x400;
        a0[0] = 0;
        return a0;
    }
}
