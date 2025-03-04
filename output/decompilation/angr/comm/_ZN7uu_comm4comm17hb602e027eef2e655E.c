long long uu_comm::comm::hb602e027eef2e655(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x2e8]
    char v1;  // [sp-0x2e0]
    char v2;  // [bp-0x2df]
    char v3;  // [bp-0x2dc]
    unsigned int v4;  // [sp-0x2d0]
    unsigned int v5;  // [sp-0x2cc]
    unsigned int v6;  // [sp-0x2c8]
    unsigned int v7;  // [sp-0x2c4]
    void* v8;  // [sp-0x2c0]
    unsigned long long v9;  // [sp-0x2b8]
    void* v10;  // [sp-0x2b0]
    void* v11;  // [sp-0x2a0]
    unsigned long long v12;  // [sp-0x298]
    void* v13;  // [sp-0x290]
    unsigned int v14;  // [sp-0x27c]
    struct struct_0 **v15;  // [sp-0x278]
    struct struct_0 **v16;  // [bp-0x278]
    unsigned long long v17;  // [sp-0x270]
    struct struct_0 **v18;  // [sp-0x268]
    unsigned long long v19;  // [sp-0x260]
    char *v20;  // [sp-0x258]
    unsigned long long v21;  // [sp-0x250]
    char *v22;  // [sp-0x248]
    unsigned long long v23;  // [sp-0x240]
    char *v24;  // [sp-0x238], Other Possible Types: struct struct_1 **
    unsigned long long v25;  // [sp-0x230]
    char *v26;  // [sp-0x228]
    unsigned long long v27;  // [sp-0x220]
    char *v28;  // [sp-0x218]
    unsigned long long v29;  // [sp-0x210]
    char *v30;  // [sp-0x208]
    unsigned long long v31;  // [sp-0x200]
    unsigned long v32;  // [sp-0x1f8]
    unsigned long long v33;  // [sp-0x1f0]
    char v34;  // [bp-0x1e8]
    char v35;  // [bp-0x1d0]
    unsigned long long v36;  // [sp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v37;  // [sp-0x1b0]
    struct struct_1 **v38;  // [sp-0x1a8], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v39;  // [sp-0x1a0]
    void* v40;  // [sp-0x198]
    unsigned long long v41;  // [sp-0x190]
    char v42;  // [sp-0x188]
    unsigned long long v43;  // [sp-0x180]
    unsigned long long v44;  // [sp-0x170]
    unsigned long long v45;  // [sp-0x160]
    unsigned long long v46;  // [sp-0x158]
    char v47;  // [sp-0x150]
    unsigned int v48;  // [bp-0x14f]
    unsigned int v49;  // [sp-0x14c]
    unsigned long long v50;  // [sp-0x148]
    unsigned long long v51;  // [sp-0x138]
    unsigned long long v52;  // [sp-0x128]
    unsigned long long v53;  // [sp-0x120]
    char v54;  // [sp-0x118]
    unsigned long long v55;  // [sp-0x110]
    unsigned long long v56;  // [sp-0x100]
    unsigned long long v57;  // [sp-0xf0]
    unsigned long long v58;  // [sp-0xe8]
    char v59;  // [sp-0xe0]
    unsigned int v60;  // [bp-0xdf]
    unsigned int v61;  // [sp-0xdc]
    unsigned long long v62;  // [sp-0xd8]
    unsigned long long v63;  // [sp-0xc8]
    unsigned long long v64;  // [sp-0xb8]
    unsigned long long v65;  // [sp-0xb0]
    char v66;  // [sp-0xa8]
    unsigned long long v67;  // [sp-0xa0]
    unsigned long long v68;  // [sp-0x90]
    unsigned long long v69;  // [sp-0x80]
    unsigned long long v70;  // [sp-0x78]
    char v71;  // [sp-0x70]
    unsigned int v72;  // [bp-0x6f]
    unsigned int v73;  // [sp-0x6c]
    unsigned long long v74;  // [sp-0x68]
    unsigned long long v75;  // [sp-0x58]
    unsigned long long v76;  // [sp-0x48]
    unsigned long long v77;  // [sp-0x40]
    char v78;  // [sp-0x38]
    unsigned long long v80;  // r15
    unsigned long long v82;  // r14
    unsigned long v83;  // rdx
    void* v84;  // rbx
    unsigned long long v85;  // r13
    unsigned long long v86;  // r12
    unsigned int v87;  // eax
    void* v88;  // r15
    void* v89;  // rbp
    unsigned long long v90;  // rax
    void* v91;  // rdi
    void* v92;  // rdi
    unsigned int v94;  // ecx

    v32 = a2;
    v33 = a3;
    v80 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "1", 1) ^ 1;
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v34, a2, a3, v80);
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v35, a2, a3, ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "2", 1) ^ 1) + v80);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v82 = uu_comm::LineReader::read_line::h3933b983d3202395(a0, &v8);
    v84 = v83;
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v85 = uu_comm::LineReader::read_line::h3933b983d3202395(a1, &v11);
    v86 = v83;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v87 = 0;
    v4 = 0;
    v0 = 0;
    while (true)
    {
        v14 = v87;
        v88 = v86;
        v89 = v85;
        while (true)
        {
            if (v82)
            {
                if (!v89)
                    goto LABEL_4aaee9;
                goto LABEL_4aaff0;
            }
            if (!v89)
            {
                if (!v84 && !v88)
                {
                    v88 = 0;
                    v89 = 0;
                    v84 = 0;
LABEL_4aaff0:
                    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "total", 5))
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(v89, v88);
                        ::0x4a9ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hdf26cf7b4a8875cd(&v11);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(v82, v84);
                        ::0x4a9ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hdf26cf7b4a8875cd(&v8);
                        ::0x4a9ea0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc84461bed04814e(&v35);
                        return ::0x4a9ea0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc84461bed04814e(&v34);
                    }
                    *((int *)&v1) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "zero-terminated", 15) ? 0 : 10);
                    v22 = &v5;
                    v23 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v24 = &v32;
                    v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h501bbda59a6f5bd5;
                    v26 = &v6;
                    v27 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v28 = &v7;
                    v29 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v30 = &v1;
                    v31 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                    v36 = 2;
                    v38 = 2;
                    v40 = 0;
                    v41 = 32;
                    v42 = 3;
                    v43 = 2;
                    v44 = 2;
                    v45 = 1;
                    v46 = 32;
                    v47 = 3;
                    v94 = *((int *)&v3);
                    v48 = *((int *)&v2);
                    v49 = v94;
                    v50 = 2;
                    v51 = 2;
                    v52 = 2;
                    v53 = 32;
                    v54 = 3;
                    v55 = 2;
                    v56 = 2;
                    v57 = 1;
                    v58 = 32;
                    v59 = 3;
                    v61 = *((int *)&(&v2)[3]);
                    v60 = *((int *)&v2);
                    v62 = 2;
                    v63 = 2;
                    v64 = 3;
                    v65 = 32;
                    v66 = 3;
                    v67 = 2;
                    v68 = 2;
                    v69 = 1;
                    v70 = 32;
                    v71 = 3;
                    v73 = *((int *)&(&v2)[3]);
                    v72 = *((int *)&v2);
                    v74 = 2;
                    v75 = 2;
                    v76 = 4;
                    v77 = 32;
                    v78 = 3;
                    v15 = &g_511398;
                    v17 = 7;
                    v20 = &v36;
                    v21 = 7;
                    v18 = &v22;
                    v19 = 5;
                    std::io::stdio::_print::he918bceb0c89db46(&v15);
                }
                if (!v84)
                {
LABEL_4aaee9:
                    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "2", 1))
                    {
                        alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v15, v12, v13);
                        v22 = &v34;
                        v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v24 = &v15;
                        v25 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                        v36 = &g_417fd8;
                        v37 = 2;
                        v40 = 0;
                        v38 = &v22;
                        v39 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v36);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(&v15);
                    }
                    v13 = 0;
                    v85 = uu_comm::LineReader::read_line::h3933b983d3202395(a1, &v11);
                    v86 = v83;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(v89, v88);
                    v87 = v14 + 1;
                    v6 = v87;
                    break;
                }
                else
                {
                    if (!v88)
                        goto LABEL_4aadf0;
                    v90 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::hd1958753a4b05d85(v9, v10, v12, v13);
                    if (!(char)v90)
                    {
                        v91 = a0;
                        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "3", 1))
                        {
                            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v15, v9, v10);
                            v22 = &v35;
                            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v24 = &v15;
                            v25 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                            v36 = &g_417fd8;
                            v37 = 2;
                            v40 = 0;
                            v38 = &v22;
                            v39 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v36);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(&v15);
                            v91 = a0;
                        }
                        v10 = 0;
                        v13 = 0;
                        v82 = uu_comm::LineReader::read_line::h3933b983d3202395(v91, &v8);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, v84);
                        v89 = uu_comm::LineReader::read_line::h3933b983d3202395(a1, &v11);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, v88);
                        v0 += 1;
                        v7 = v0;
                        v88 = v83;
                        v84 = v83;
                        continue;
                    }
                    if ((unsigned int)v90 == 1)
                        goto LABEL_4aaee9;
                }
            }
LABEL_4aadf0:
            v92 = a0;
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a4, "1", 1))
            {
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v22, v9, v10);
                v16 = &v22;
                v17 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                v36 = &g_414010;
                v37 = 1;
                v40 = 0;
                v38 = &v15;
                v39 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v36);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(&v22);
                v92 = a0;
            }
            v10 = 0;
            v82 = uu_comm::LineReader::read_line::h3933b983d3202395(v92, &v8);
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, v84);
            v4 += 1;
            v5 = v4;
            v84 = v83;
        }
    }
}
