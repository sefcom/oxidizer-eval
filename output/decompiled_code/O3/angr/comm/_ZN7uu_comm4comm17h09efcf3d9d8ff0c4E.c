long long uu_comm::comm::h09efcf3d9d8ff0c4(void* a0, void* a1, unsigned long a2, unsigned long a3, unsigned long long a4)
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
    unsigned long v15;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x270]
    unsigned long long v17;  // [sp-0x268]
    unsigned long long v18;  // [sp-0x260]
    unsigned long long v19;  // [sp-0x258]
    unsigned long long v20;  // [sp-0x250]
    char v21;  // [sp-0x248], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x240]
    unsigned long long v23;  // [sp-0x238]
    unsigned long long v24;  // [sp-0x230]
    unsigned long long v25;  // [sp-0x228]
    unsigned long long v26;  // [sp-0x220]
    unsigned long long v27;  // [sp-0x218]
    unsigned long long v28;  // [sp-0x210]
    unsigned long long v29;  // [sp-0x208]
    unsigned long long v30;  // [sp-0x200]
    unsigned long v31;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x1f0]
    char v33;  // [bp-0x1e8]
    char v34;  // [bp-0x1d0]
    unsigned long v35;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x1b0]
    unsigned long long v37;  // [sp-0x1a8]
    unsigned long long v38;  // [sp-0x1a0]
    void* v39;  // [sp-0x198]
    unsigned long long v40;  // [sp-0x190]
    char v41;  // [sp-0x188]
    unsigned long long v42;  // [sp-0x180]
    unsigned long long v43;  // [sp-0x170]
    unsigned long long v44;  // [sp-0x160]
    unsigned long long v45;  // [sp-0x158]
    char v46;  // [sp-0x150]
    unsigned int v47;  // [bp-0x14f]
    unsigned int v48;  // [sp-0x14c]
    unsigned long long v49;  // [sp-0x148]
    unsigned long long v50;  // [sp-0x138]
    unsigned long long v51;  // [sp-0x128]
    unsigned long long v52;  // [sp-0x120]
    char v53;  // [sp-0x118]
    unsigned long long v54;  // [sp-0x110]
    unsigned long long v55;  // [sp-0x100]
    unsigned long long v56;  // [sp-0xf0]
    unsigned long long v57;  // [sp-0xe8]
    char v58;  // [sp-0xe0]
    unsigned int v59;  // [bp-0xdf]
    unsigned int v60;  // [sp-0xdc]
    unsigned long long v61;  // [sp-0xd8]
    unsigned long long v62;  // [sp-0xc8]
    unsigned long long v63;  // [sp-0xb8]
    unsigned long long v64;  // [sp-0xb0]
    char v65;  // [sp-0xa8]
    unsigned long long v66;  // [sp-0xa0]
    unsigned long long v67;  // [sp-0x90]
    unsigned long long v68;  // [sp-0x80]
    unsigned long long v69;  // [sp-0x78]
    char v70;  // [sp-0x70]
    unsigned int v71;  // [bp-0x6f]
    unsigned int v72;  // [sp-0x6c]
    unsigned long long v73;  // [sp-0x68]
    unsigned long long v74;  // [sp-0x58]
    unsigned long long v75;  // [sp-0x48]
    unsigned long long v76;  // [sp-0x40]
    char v77;  // [sp-0x38]
    unsigned long long v79;  // rbx
    unsigned long long v80;  // r14
    unsigned long long v81;  // r15
    unsigned long long v83;  // rax
    void* v84;  // rax
    unsigned int v85;  // eax
    unsigned long long v88;  // rdx
    unsigned long long v89;  // r12
    void* v90;  // rbx
    unsigned long long v91;  // r12
    unsigned long long v92;  // rbx
    void* v94;  // 4096
    void* v95;  // 4096
    unsigned long long v96;  // rsi
    unsigned long long v97;  // 4096
    unsigned long long v98;  // 4096
    unsigned int v101;  // ecx

    v79 = a3;
    v80 = a2;
    v31 = a2;
    v32 = a3;
    v81 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "1", 1) ^ 1;
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v33, v80, v79, v81);
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v34, v80, v79, ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "2", 1) ^ 1) + v81);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v83 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(a0, &v8);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v84 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(a1, &v11);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v85 = 0;
    v4 = 0;
    v0 = 0;
    while (true)
    {
        v14 = v85;
        v91 = v89;
        v92 = v90;
        while (true)
        {
            v90 = v92;
            v91 = v91;
            if (v83)
            {
                if (!(!v84))
                    goto LABEL_4ab3d0;
                goto LABEL_4ab2c9;
            }
            if (v84)
            {
LABEL_4ab1d0:
                v95 = a0;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "1", 1))
                {
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v21, v9, v10);
                    v15 = &v21;
                    v16 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha896cb7423d329ed;
                    v35 = &g_4141b0;
                    v36 = 1;
                    v39 = 0;
                    v37 = &v15;
                    v38 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v35, v96, v88);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5a4a7a87a26e9233(&v21);
                    v98 = a0;
                }
                v10 = 0;
                v83 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(v95, &v8);
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(0, v90);
                v4 += 1;
                v5 = v4;
                v92 = v88;
            }
            else
            {
                if (!v90 && !v91)
                {
                    v84 = 0;
                    v90 = 0;
LABEL_4ab3d0:
                    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "total", 5))
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(v84, 0);
                        ::0x4aa2b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc121a2873206b2e7(&v11);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(v83, v90);
                        ::0x4aa2b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc121a2873206b2e7(&v8);
                        ::0x4aa280::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1ca7f616f9f11bdf(&v34);
                        return ::0x4aa280::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1ca7f616f9f11bdf(&v33);
                    }
                    *((int *)&v1) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "zero-terminated", 15) ? 0 : 10);
                    v21 = &v5;
                    v22 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v23 = &v31;
                    v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf73da64d703878c7;
                    v25 = &v6;
                    v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v27 = &v7;
                    v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                    v29 = &v1;
                    v30 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
                    v35 = 2;
                    v37 = 2;
                    v39 = 0;
                    v40 = 32;
                    v41 = 3;
                    v42 = 2;
                    v43 = 2;
                    v44 = 1;
                    v45 = 32;
                    v46 = 3;
                    v101 = *((int *)&v3);
                    v47 = *((int *)&v2);
                    v48 = v101;
                    v49 = 2;
                    v50 = 2;
                    v51 = 2;
                    v52 = 32;
                    v53 = 3;
                    v54 = 2;
                    v55 = 2;
                    v56 = 1;
                    v57 = 32;
                    v58 = 3;
                    v60 = *((int *)&(&v2)[3]);
                    v59 = *((int *)&v2);
                    v61 = 2;
                    v62 = 2;
                    v63 = 3;
                    v64 = 32;
                    v65 = 3;
                    v66 = 2;
                    v67 = 2;
                    v68 = 1;
                    v69 = 32;
                    v70 = 3;
                    v72 = *((int *)&(&v2)[3]);
                    v71 = *((int *)&v2);
                    v73 = 2;
                    v74 = 2;
                    v75 = 4;
                    v76 = 32;
                    v77 = 3;
                    v15 = &g_5125a8;
                    v16 = 7;
                    v19 = &v35;
                    v20 = 7;
                    v17 = &v21;
                    v18 = 5;
                    std::io::stdio::_print::he918bceb0c89db46(&v15, v96, v88);
                }
                if (v90)
                {
                    if (!v91)
                        goto LABEL_4ab1d0;
                    if (!(char)_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h8360e99e8971d377(v9, v10, v12, v13))
                    {
                        v94 = a0;
                        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "3", 1))
                        {
                            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v15, v9, v10);
                            v21 = &v34;
                            v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v23 = &v15;
                            v24 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha896cb7423d329ed;
                            v35 = &g_4180f8;
                            v36 = 2;
                            v39 = 0;
                            v37 = &v21;
                            v38 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v35, v96, v88);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5a4a7a87a26e9233(&v15);
                            v97 = a0;
                        }
                        v10 = 0;
                        v13 = 0;
                        v83 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(v94, &v8);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(0, v90);
                        v84 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(a1, &v11);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(0, v91);
                        v0 += 1;
                        v7 = v0;
                        v91 = v88;
                        v92 = v88;
                        continue;
                    }
                    if (!(!v84))
                        goto LABEL_4ab1d0;
                }
LABEL_4ab2c9:
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a4, "2", 1))
                {
                    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v15, v12, v13);
                    v21 = &v33;
                    v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v23 = &v15;
                    v24 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha896cb7423d329ed;
                    v35 = &g_4180f8;
                    v36 = 2;
                    v39 = 0;
                    v37 = &v21;
                    v38 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v35, v96, v88);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5a4a7a87a26e9233(&v15);
                }
                v13 = 0;
                v84 = uu_comm::LineReader::read_line::h2031d7f9b70ec022(a1, &v11);
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1a9a079f98c4bc4c(v84, v91);
                v85 = v14 + 1;
                v6 = v85;
                v89 = v88;
                break;
            }
        }
    }
}
