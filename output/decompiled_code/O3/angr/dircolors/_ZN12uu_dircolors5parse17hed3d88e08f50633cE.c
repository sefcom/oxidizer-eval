long long uu_dircolors::parse::hed3d88e08f50633c(struct_0 *a0, unsigned long long a1, char *a2, unsigned long a3, unsigned long a4)
{
    char v0;  // [sp-0x3b1]
    unsigned long long v1;  // [bp-0x3b0], Other Possible Types: unsigned int
    void* v2;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x3a0]
    unsigned long long v4;  // [sp-0x398]
    char v5;  // [bp-0x390], Other Possible Types: unsigned long, unsigned long long
    void* v6;  // [sp-0x388], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x380]
    int v8;  // [bp-0x378], Other Possible Types: char, unsigned int, unsigned long long, unsigned long
    unsigned long v9;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x368], Other Possible Types: unsigned long long
    char v11;  // [bp-0x360], Other Possible Types: unsigned long, unsigned long long
    void* v12;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x350], Other Possible Types: unsigned long long
    char v14;  // [sp-0x348]
    unsigned int v15;  // [bp-0x347]
    unsigned int v16;  // [sp-0x344]
    unsigned long long v17;  // [sp-0x340]
    unsigned long long v18;  // [sp-0x330]
    unsigned long long v19;  // [sp-0x320]
    unsigned long long v20;  // [sp-0x318]
    char v21;  // [sp-0x310]
    unsigned long long v22;  // [sp-0x308]
    unsigned long long v23;  // [sp-0x2f8]
    void* v24;  // [sp-0x2e8]
    unsigned long long v25;  // [sp-0x2e0]
    char v26;  // [sp-0x2d8]
    unsigned int v27;  // [bp-0x2d7]
    unsigned int v28;  // [sp-0x2d4]
    void* v29;  // [sp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v30;  // [sp-0x2c8]
    unsigned long long v31;  // [sp-0x2c0]
    char v32;  // [bp-0x2b8], Other Possible Types: unsigned long
    unsigned long long v33;  // [sp-0x2b0]
    unsigned long long v34;  // [sp-0x2a8]
    unsigned long v35;  // [sp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x298]
    void* v37;  // [sp-0x290]
    unsigned long v38;  // [sp-0x288], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x280]
    char v40;  // [bp-0x278]
    char v41;  // [bp-0x270]
    char v42;  // [bp-0x268]
    char v43;  // [bp-0x25d]
    char v44;  // [bp-0x25a]
    char v45;  // [bp-0x256]
    char v46;  // [bp-0x253]
    char v47;  // [bp-0x24f]
    char v48;  // [bp-0x24c]
    unsigned long long v49;  // [sp-0x248]
    unsigned long v50;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long v51;  // [sp-0x210], Other Possible Types: unsigned long long
    int v52;  // [bp-0x208], Other Possible Types: char
    unsigned long long v53;  // [sp-0x1f8]
    int v54;  // [bp-0x1e8], Other Possible Types: char
    unsigned long long v55;  // [sp-0x1d8]
    int v56;  // [sp-0x1c8]
    unsigned long long v57;  // [sp-0x1b8]
    int v58;  // [sp-0x1a8]
    unsigned long long v59;  // [sp-0x198]
    unsigned long long v60;  // [sp-0x190]
    unsigned long long v61;  // [sp-0x188]
    char v62;  // [bp-0x180]
    char v63;  // [bp-0x178]
    char v64;  // [bp-0x170]
    unsigned long v65;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v66;  // [sp-0x160]
    int v67;  // [sp-0x158]
    unsigned long long v68;  // [sp-0x148]
    char v69;  // [bp-0x120]
    char v70;  // [bp-0x118]
    char v71;  // [bp-0x108]
    char v72;  // [bp-0x100]
    char v73;  // [bp-0xf0]
    int v74;  // [sp-0xe8]
    char v75;  // [bp-0xd8]
    char v76;  // [bp-0xc8]
    char v77;  // [bp-0xc0]
    char v78;  // [bp-0xb0]
    char v79;  // [bp-0xa8]
    char v80;  // [bp-0x98]
    char v81;  // [bp-0x90]
    char v82;  // [bp-0x80]
    char v83;  // [bp-0x78]
    char v84;  // [bp-0x68]
    char v85;  // [bp-0x60]
    char v86;  // [bp-0x50]
    char v87;  // [bp-0x48]
    char v88;  // [bp-0x38]
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // ymm0
    int v93;  // ymm0
    unsigned long long v94;  // rdx
    unsigned long long v95;  // 4098
    int v96;  // xmm0
    int v97;  // ymm0
    int v98;  // xmm0
    unsigned long long v99;  // r13
    unsigned long long v100;  // rdx
    unsigned long long v101;  // rbp
    int v102;  // xmm0
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rcx
    unsigned long long v106;  // r13
    int v107;  // xmm0
    int v108;  // xmm0
    int v109;  // xmm0
    int v110;  // xmm0
    int v111;  // xmm0
    unsigned long long v112;  // rax
    int v113;  // xmm0
    int v114;  // xmm0
    struct_0 *v115;  // rcx
    struct_0 *v116;  // rcx
    unsigned long long v117;  // rsi
    struct_0 *v118;  // rcx
    unsigned long long v119;  // rax

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf9536dbcef425488(&v8, 1790, 0);
    if (*((long long *)&v8))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v35 = v9;
    v36 = v10;
    v37 = 0;
    uu_dircolors::get_colors_format_strings::h7e375a9e829ba5bd(&v8, a2);
    v59 = v10;
    v90 = *((int128_t *)&v8);
    v58 = v90;
    v57 = v13;
    v91 = *((int128_t *)&v11);
    v93 = v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
    v56 = v91;
    ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6((long long)(&v58)[8], v59 + (long long)(&v58)[8]), v94);
    std::env::var::h70049cfcf420cd1e(&v8, "TERM", 4);
    v95 = *((long long *)&v8);
    if (!v95)
    {
        v53 = v11;
        v98 = *((int128_t *)&v9);
        v97 = v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
        v52 = v98;
    }
    else
    {
        v68 = v11;
        v96 = *((int128_t *)&v9);
        v97 = v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
        v67 = v96;
        uu_dircolors::parse::_$u7b$$u7b$closure$u7d$$u7d$::hc1de369934e8d983(&v52, &v67);
    }
    v61 = (long long)(&v52)[8];
    v60 = v53;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h09ac04d45b7e0618(&v8, a1);
    core::iter::traits::iterator::Iterator::enumerate::h9c70e09c26e0b543(&v67, &v8);
    v0 = *(a2);
    v1 = 0;
    v99 = &v54;
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9ef6cb277a0316f1(&v69, &v67, v100);
        v101 = v101 | -0x100 | *((long long *)&v70) != 0x8000000000000000;
        if (*((long long *)&v70) == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::haac56bd323b4f342((long long)v67, (long long)(&v67)[8]);
            if (*(a2) == 2)
            {
                ::0x46e560::alloc::string::String::pop::hb9a0a0c79640417e(&v35, v117, v94);
                break;
            }
        }
        v55 = *((long long *)&v71);
        v102 = *((int128_t *)&v70);
        v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
        v54 = v102;
        v50 = *((long long *)&v69) + 1;
        if (!v94)
        {
            ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(v99);
            continue;
        }
        uu_dircolors::escape::h0c714f3271b9e618(&v62, _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::purify::h056f407cab161296(::0x46e470::alloc::str::_$LT$impl$u20$core..borrow..Borrow$LT$str$GT$$u20$for$u20$alloc..string..String$GT$::borrow::ha27266882ad30354((long long)(&v54)[8], *((long long *)&v71)), v94, v94), v94);
        _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::split_two::h24b6a475bf4a97c6(&v8, *((long long *)&v63), *((long long *)&v64));
        v104 = (long long)v8;
        v33 = (long long)v8;
        v34 = v9;
        v38 = v10;
        v39 = v11;
        if (!v39)
        {
            v2 = 0;
            v3 = a3;
            v4 = a4;
            v5 = 0;
            v29 = &v2;
            v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v31 = &v50;
            v32 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v8 = &g_5249f8;
            v9 = 3;
            v12 = 0;
            v10 = &v29;
            v11 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v72, &v8);
            v115 = a0;
            *((long long *)((char *)&v115->field_8 + 8)) = *((long long *)&v73);
            *((int128_t *)&(&v115->field_0)[1]) = *((int128_t *)&v72);
            v115->field_0 = 1;
            goto LABEL_46ca91;
        }
        else
        {
            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v40, v104, v34);
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(*((long long *)&v41), *((long long *)&v42), &g_416c28, 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(*((long long *)&v41), *((long long *)&v42), "colorterm", 9))
            {
                v106 = v99 | -0x100 | 1;
                if (!(char)_$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::h79dca502cf0673d2(v61, v60, v38, v39))
                    v106 = v106 | -0x100 | ((char)v1 != 1) * 2 | 1;
            }
            else
            {
                v105 = ((char)v1 == 1 ? 2 : v1);
                v106 = v99 | -0x100 | 3;
                if ((char)v105 != 3)
                {
                    v106 = v105 & 4294967295;
                    v107 = *((int128_t *)&v41);
                    v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                    v74 = v107;
                    v1 = v33;
                    v49 = v34;
                    v8 = 0;
                    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h48c2d9323d856323(v1, v49, ::0x46e1e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(46, &v8), v94))
                    {
                        v1 = v33;
                        v49 = v34;
                        v8 = 0;
                        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h48c2d9323d856323(v1, v49, ::0x46e1e0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(42, &v8), v94))
                        {
                            if (v0 != 2)
                            {
                                v2 = &v33;
                                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                v4 = &v38;
                                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                v8 = &g_524a68;
                                v9 = 3;
                                v12 = 0;
                                v10 = &v2;
                                v11 = 2;
                                core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v81, &v8);
                                v111 = *((int128_t *)&v81);
                                v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                                v8 = v111;
                                v10 = *((long long *)&v82);
                                ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                                ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                            }
                            else
                            {
                                v29 = &v38;
                                v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                v31 = &v33;
                                v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                v8 = 2;
                                v10 = 2;
                                v12 = 0;
                                v13 = 32;
                                v14 = 3;
                                v16 = *((int *)&v46);
                                v15 = *((int *)&v45);
                                v17 = 2;
                                v18 = 2;
                                v19 = 1;
                                v20 = 32;
                                v21 = 3;
                                v22 = 2;
                                v23 = 2;
                                v24 = 0;
                                v25 = 32;
                                v26 = 3;
                                v28 = *((int *)&(&v45)[3]);
                                v27 = *((int *)&v45);
                                v2 = &g_524a28;
                                v3 = 4;
                                v6 = &v8;
                                v7 = 3;
                                v4 = &v29;
                                v5 = 2;
                                core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v79, &v2);
                                v110 = *((int128_t *)&v79);
                                v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                                v8 = v110;
                                v10 = *((long long *)&v80);
                                ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                                ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                            }
                        }
                        else
                        {
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(*((long long *)&v41), *((long long *)&v42), "options", 7) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(*((long long *)&v41), *((long long *)&v42), "color", 5) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h438e56383649de42(*((long long *)&v41), *((long long *)&v42), "eightbit", 8))
                            {
                                v65 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E;
                                v66 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E + 1184;
                                v112 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h3a0bf38196cbd53f(&v65, &v74);
                                if (!v112)
                                {
                                    v29 = 0;
                                    v30 = a3;
                                    v31 = a4;
                                    v32 = 0;
                                    v8 = &v29;
                                    v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                    v10 = &v50;
                                    v11 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                                    v12 = &v33;
                                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                    v2 = &g_524a98;
                                    v3 = 3;
                                    v6 = 0;
                                    v4 = &v8;
                                    v5 = 3;
                                    core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v87, &v2);
                                    v116 = a0;
                                    *((long long *)((char *)&v116->field_8 + 8)) = *((long long *)&v88);
                                    *((int128_t *)&(&v116->field_0)[1]) = *((int128_t *)&v87);
                                    v116->field_0 = 1;
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v40);
LABEL_46ca91:
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v62);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v54);
                                    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::haac56bd323b4f342((long long)v67, (long long)(&v67)[8]);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v52);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v56);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v58);
                                    v119 = ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v35);
                                    return v119;
                                }
                                v51 = v112 + 16;
                                if (v0 == 2)
                                {
                                    v29 = &v38;
                                    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                    v31 = &v51;
                                    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8967dee8b947efe2;
                                    v8 = 2;
                                    v10 = 2;
                                    v12 = 0;
                                    v13 = 32;
                                    v14 = 3;
                                    v16 = *((int *)&v48);
                                    v15 = *((int *)&v47);
                                    v17 = 2;
                                    v18 = 2;
                                    v19 = 1;
                                    v20 = 32;
                                    v21 = 3;
                                    v22 = 2;
                                    v23 = 2;
                                    v24 = 0;
                                    v25 = 32;
                                    v26 = 3;
                                    v28 = *((int *)&v48);
                                    v27 = *((int *)&v47);
                                    v2 = &g_524a28;
                                    v3 = 4;
                                    v6 = &v8;
                                    v7 = 3;
                                    v4 = &v29;
                                    v5 = 2;
                                    core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v83, &v2);
                                    v113 = *((int128_t *)&v83);
                                    v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                                    v8 = v113;
                                    v10 = *((long long *)&v84);
                                    ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                                }
                                else
                                {
                                    v2 = &v51;
                                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8967dee8b947efe2;
                                    v4 = &v38;
                                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                                    v8 = &g_524a68;
                                    v9 = 3;
                                    v12 = 0;
                                    v10 = &v2;
                                    v11 = 2;
                                    core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v85, &v8);
                                    v114 = *((int128_t *)&v85);
                                    v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
                                    v8 = v114;
                                    v10 = *((long long *)&v86);
                                    ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                                    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                                }
                            }
                        }
                    }
                    else if (v0 == 2)
                    {
                        v29 = &v38;
                        v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                        v31 = &v33;
                        v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                        v8 = 2;
                        v10 = 2;
                        v12 = 0;
                        v13 = 32;
                        v14 = 3;
                        v16 = *((int *)&v44);
                        v15 = *((int *)&v43);
                        v17 = 2;
                        v18 = 2;
                        v19 = 1;
                        v20 = 32;
                        v21 = 3;
                        v22 = 2;
                        v23 = 2;
                        v24 = 0;
                        v25 = 32;
                        v26 = 3;
                        v28 = *((int *)&(&v43)[3]);
                        v27 = *((int *)&v43);
                        v2 = &g_524ac8;
                        v3 = 4;
                        v6 = &v8;
                        v7 = 3;
                        v4 = &v29;
                        v5 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v75, &v2);
                        v108 = *((int128_t *)&v75);
                        v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
                        v8 = v108;
                        v10 = *((long long *)&v76);
                        ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                        ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                    }
                    else
                    {
                        v2 = &v33;
                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                        v4 = &v38;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5ce9265434258456;
                        v8 = &g_524b08;
                        v9 = 3;
                        v12 = 0;
                        v10 = &v2;
                        v11 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h7abfdc6570659c50(&v77, &v8);
                        v109 = *((int128_t *)&v77);
                        v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                        v8 = v109;
                        v10 = *((long long *)&v78);
                        ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6(v9, v10 + v9), v94);
                        ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v8);
                    }
                }
            }
            ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v40);
            ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v62);
            ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v54);
            v1 = v106;
            v99 = &v54;
        }
    }
    ::0x46e480::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hdf95a6126c08913b(&v35, ::0x46e2e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h3956b26f028ce2d6((long long)(&v56)[8], v57 + (long long)(&v56)[8]), v94);
    v118 = a0;
    *((void* *)((char *)&v118->field_8 + 8)) = v37;
    *((int128_t *)&(&v118->field_0)[1]) = *((int128_t *)&v35);
    v118->field_0 = 0;
    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v52);
    ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v56);
    v119 = ::0x46de40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab66b12d7ceb35f4(&v58);
    return v119;
}
