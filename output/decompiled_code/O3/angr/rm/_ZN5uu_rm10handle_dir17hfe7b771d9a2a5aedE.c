long long uu_rm::handle_dir::hfe7b771d9a2a5aed(unsigned long long a0, unsigned long long a1, char a2[7], unsigned long a3)
{
    int v0;  // [sp-0x268], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x260]
    int v2;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x250]
    void* v4;  // [bp-0x248], Other Possible Types: int
    unsigned long long v5;  // [sp-0x238]
    unsigned int v6;  // [sp-0x22c]
    int v7;  // [bp-0x228], Other Possible Types: char, unsigned long, unsigned long long
    int v8;  // [sp-0x220], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    int v10;  // [bp-0x210], Other Possible Types: char
    int v11;  // [bp-0x208]
    int v12;  // [sp-0x200]
    char v13;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned int v14;  // [sp-0x1dc]
    void* v15;  // [bp-0x1d8], Other Possible Types: int, char, unsigned long long
    unsigned long long v16;  // [sp-0x1d0]
    void* v17;  // [bp-0x1c8], Other Possible Types: int, char, unsigned long long
    unsigned long long v18;  // [sp-0x1c0]
    int v19;  // [bp-0x1b8], Other Possible Types: void*
    unsigned long long v20;  // [sp-0x1a8]
    int v21;  // [sp-0x1a0]
    char v22;  // [bp-0x19e]
    unsigned long long v23;  // [sp-0x190]
    void* v24;  // [sp-0x188]
    int v25;  // [sp-0x180]
    unsigned long long v26;  // [sp-0x170]
    int v27;  // [sp-0x168]
    int v28;  // [sp-0x158]
    int v29;  // [sp-0x148]
    int v30;  // [sp-0x138]
    unsigned long v31;  // [bp-0x128], Other Possible Types: unsigned long long
    char v32;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0x118]
    char v34;  // [bp-0x110], Other Possible Types: unsigned long long
    char v35;  // [bp-0x100]
    char v36;  // [bp-0xf0]
    void* v37;  // [sp-0xe8]
    unsigned long long v38;  // [sp-0xe0]
    void* v39;  // [sp-0xd8]
    unsigned long long v40;  // [sp-0xd0]
    void* v41;  // [sp-0xc8]
    unsigned long long v42;  // [sp-0xc0]
    int v43;  // [sp-0xb8]
    unsigned long v44;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v45;  // [sp-0xa0]
    unsigned long long v46;  // [sp-0x98]
    unsigned long long v47;  // [sp-0x90]
    unsigned long v48;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v49;  // [sp-0x80]
    unsigned long long v50;  // [sp-0x78]
    char v51;  // [sp-0x70]
    int v52;  // [sp-0x68]
    int v53;  // [sp-0x58]
    int v54;  // [sp-0x48]
    char v56;  // cl
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rbx
    unsigned long long v60;  // r14
    unsigned long long v61;  // r14
    unsigned long long v62;  // rax
    char v63;  // 4098
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // ymm0
    int v69;  // ymm0
    void* v70;  // rbp
    unsigned long long v72;  // rdx
    int v73;  // ymm1
    int v74;  // ymm2
    unsigned long long v75;  // rax
    int v76;  // xmm0
    int v77;  // ymm0
    int v78;  // xmm1
    int v79;  // ymm1
    int v80;  // xmm2
    int v81;  // ymm2
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm2
    unsigned long long v85;  // rax
    int v86;  // xmm0
    int v87;  // xmm1
    int v88;  // xmm2
    char v89;  // al
    int v90;  // xmm0
    int v91;  // xmm1
    int v92;  // xmm2
    unsigned long long v93;  // rcx
    int v94;  // xmm0
    int v95;  // xmm1
    int v96;  // xmm2
    unsigned long long v97;  // rsi
    unsigned long long v98;  // rdx
    int v99;  // xmm0
    int v100;  // xmm1
    int v101;  // xmm2
    int v102;  // xmm0
    int v103;  // xmm1
    int v104;  // xmm2
    unsigned long long v105;  // rsi
    int v107;  // xmm0
    int v108;  // ymm0
    int v109;  // xmm1
    int v110;  // ymm1
    unsigned long long v111;  // rdx
    unsigned long long v112[3];  // rax
    int v113;  // xmm0
    int v114;  // xmm1
    unsigned long long v115;  // rsi
    unsigned long long v116;  // rsi

    std::path::Path::components::h4f3217acf0fc8653(&v15, a0, a1);
    if (!v22 && v17 - 5 < 2)
    {
        if (!(!a2[3]))
            goto LABEL_4b71b4;
LABEL_4b7347:
        if (!a2[4])
            goto LABEL_4b798c;
    }
    else
    {
        v56 = a2[3];
        if (std::path::Path::parent::h65c9a340a6266f2d(a0, a1, v57, v58))
        {
            if (!v56)
                goto LABEL_4b7347;
            goto LABEL_4b71b4;
        }
        else
        {
            if (!v56)
                goto LABEL_4b7340;
            if (!a2[2])
            {
LABEL_4b71b4:
                v5 = a1;
                v59 = a2[5];
                v60 = a2[6];
                if ((char)v60 != 2 && !(char)v59)
                {
                    v61 = v5;
                    v62 = std::fs::remove_dir_all::hd0c9db03f7dc60cb(a0, v61, v57);
                    if (!v62)
                        return (0 | -0x100 | (char)0 & 1) & 4294967295 & 4294967295;
                    v0 = v62;
                    v15 = std::fs::remove_dir::h89d41f87f6808781(a0, v61, v57);
                    if (!v15)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5430c26983f1dc0d(&v15);
                        v70 = 0;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5430c26983f1dc0d(&v15);
                        if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v62) == 1)
                        {
                            v7 = uucore::util_name::h412db5e565a079f3();
                            v8 = v57;
                            v31 = &v7;
                            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                            v15 = &g_527d88;
                            v16 = 2;
                            v19 = 0;
                            v17 = &v31;
                            v18 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v115, v57);
                            v7 = 1;
                            v8 = a0;
                            v9 = v5;
                            v10 = 1;
                            v31 = &v7;
                            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v15 = &g_527dc8;
                            v16 = 2;
                            v19 = 0;
                            v17 = &v31;
                            v18 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v115, v57);
                        }
                        else
                        {
                            v7 = uucore::util_name::h412db5e565a079f3();
                            v8 = v57;
                            v31 = &v7;
                            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                            v15 = &g_527d88;
                            v16 = 2;
                            v19 = 0;
                            v17 = &v31;
                            v18 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v116, v57);
                            v7 = 1;
                            v8 = a0;
                            v9 = v5;
                            v10 = 1;
                            v31 = &v7;
                            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v33 = &v0;
                            v34 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            v15 = &g_527de8;
                            v16 = 3;
                            v19 = 0;
                            v17 = &v31;
                            v18 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v116, v57);
                        }
                        v70 = vvar_207{reg 56} | -0x100 | 1;
                    }
                    ::0x4b5440::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb47d7ad350d2ee6b(&v0);
                    return (v70 | -0x100 | (char)v70 & 1) & 4294967295 & 4294967295;
                }
                v41 = 0;
                *((int128_t *)&v43) = 0;
                v42 = 8;
                v37 = 0;
                v38 = 8;
                v39 = 0;
                v40 = a0;
                walkdir::WalkDir::new::h0d64d3964bf847e2(&v7, a0, v5);
                v64 = *((int128_t *)&v13);
                v29 = v64;
                v65 = v12;
                v28 = v65;
                v66 = *((int128_t *)&v10);
                v27 = v66;
                v67 = *((int128_t *)&v7);
                v25 = v67;
                v26 = v9;
                v15 = 0;
                v17 = 0;
                v18 = 8;
                v69 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v19) = 0;
                v20 = 8;
                *((int128_t *)&v21) = 0;
                v23 = 8;
                v24 = 0;
                *((int128_t *)&v30) = 0;
                v70 = 0;
                v6 = v59;
                v14 = v60;
                while (true)
                {
                    if ((char)v60 == 2)
                    {
LABEL_4b7580:
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v31, &v15, v72);
                        v75 = v31;
                        if (v75 == 3)
                            break;
                        v76 = *((int128_t *)&v32);
                        v77 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                        v78 = *((int128_t *)&v34);
                        v79 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                        v80 = *((int128_t *)&v35);
                        v81 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                        v54 = v80;
                        v53 = v78;
                        v52 = v76;
                        if (!(!a2[3]))
                            goto LABEL_4b76f0;
                        v82 = *((int128_t *)&v32);
                        v69 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                        v83 = *((int128_t *)&v34);
                        v73 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        v84 = *((int128_t *)&v35);
                        v74 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                        v4 = v84;
                        v2 = v83;
                        v0 = v82;
                        v7 = v38;
                        v8 = v7 + v39 * 24;
                        while (true)
                        {
                            v85 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21d1843b15e065f8(&v7);
                            if (!v85)
                                break;
                            if ((char)std::path::Path::starts_with::hb4009cb99993d078(v1, v2, v85))
                            {
                                ::0x4b5480::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::hb4472018e25179f9(&v0);
                                goto LABEL_4b7580;
                            }
                        }
                        if (((short)(int)(&v4)[8] & 0xf000) != 0x4000)
                        {
                            v89 = uu_rm::remove_file::hc62106a6a8bb50f7(v1, v2, v6, 2);
                        }
                        else
                        {
                            std::fs::read_dir::h2be7a9b2691086e4(&v7, v1, v2);
                            if (core::iter::traits::iterator::Iterator::fold::h70fda0759c0ac771(core::result::Result$LT$T$C$E$GT$::unwrap::h61cf1f2f293c1c83(v7, (unsigned int)v8), (unsigned int)v57 & 1, v57))
                            {
                                if (!(char)uu_rm::prompt_descend::hea79e689fb31decc(v1, v2, v57))
                                {
                                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v7, v1, v2);
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5d4299a989fa1fed(&v37, &v7, v57);
                                    goto LABEL_4b786f;
                                }
                                else
                                {
                                    v102 = (int128_t)v0;
                                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                                    v103 = (int128_t)v2;
                                    v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                                    v104 = (int128_t)v4;
                                    v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                                    v11 = v104;
                                    v9 = v103;
                                    v7 = v102;
                                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h0b32868d43fac32e(&v41, &v7, v57);
                                    continue;
                                }
                            }
LABEL_4b7490:
                            v99 = (int128_t)v0;
                            v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                            v100 = (int128_t)v2;
                            v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                            v101 = (int128_t)v4;
                            v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                            v11 = v101;
                            v9 = v100;
                            v7 = v99;
                            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h0b32868d43fac32e(&v41, &v7, v98);
                        }
                    }
                    else
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v31, &v15, v72);
                        v75 = v31;
                        if (v75 == 3)
                            break;
                        v86 = *((int128_t *)&v32);
                        v77 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                        v87 = *((int128_t *)&v34);
                        v79 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                        v88 = *((int128_t *)&v35);
                        v81 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                        v54 = v88;
                        v53 = v87;
                        v52 = v86;
                        if ((unsigned int)v75 != 2)
                        {
LABEL_4b76f0:
                            v93 = *((long long *)&v36);
                            v7 = v75;
                            v94 = v52;
                            v69 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                            v95 = v53;
                            v73 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                            v96 = v54;
                            v74 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                            v12 = v96;
                            v10 = v95;
                            v8 = v94;
                            v13 = v93;
                            v48 = uucore::util_name::h412db5e565a079f3();
                            v49 = v57;
                            v44 = &v48;
                            v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                            v0 = &g_527d88;
                            v1 = 2;
                            v4 = 0;
                            v2 = &v44;
                            v3 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v97, v57);
                            v48 = 1;
                            v49 = v40;
                            v50 = v5;
                            v51 = 1;
                            v44 = &v48;
                            v45 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                            v46 = &v7;
                            v47 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hbf2d58447dc08690;
                            v0 = &g_527e30;
                            v1 = 3;
                            v4 = 0;
                            v2 = &v44;
                            v3 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v97, v57);
                            ::0x4b5450::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::hd55a806e806b1242(&v7);
                            v70 = v70 | -0x100 | 1;
                            continue;
                        }
                        v90 = *((int128_t *)&v32);
                        v69 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                        v91 = *((int128_t *)&v34);
                        v73 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                        v92 = *((int128_t *)&v35);
                        v74 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                        v4 = v92;
                        v2 = v91;
                        v0 = v90;
                        if (((int)(&v4)[8] & 0xf000) == 0x4000)
                            goto LABEL_4b7490;
                        v89 = uu_rm::remove_file::hc62106a6a8bb50f7(v1, v2, v6, v14);
                    }
                    v70 = v70 | -0x100 | ((char)v70 | v89) & 1;
LABEL_4b786f:
                    ::0x4b5480::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::hb4472018e25179f9(&v0);
                }
                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h40f6572e59b28791(&v15);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::ha3c60a7fb1cd04cb(&v7, &v41);
                v107 = (int128_t)v7;
                v108 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                v109 = (int128_t)(&v8)[8];
                v110 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                v17 = v109;
                v15 = v107;
                while (true)
                {
                    v112 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb9ad85e6bcbfd77b(&v17);
                    if (!(v112) && !((v113 = (int128_t)v15, v108 = v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113, v114 = (int128_t)v17, v110 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114, v15 = v114, v17 = v113, v112 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hb9ad85e6bcbfd77b(&v17), v112)))
                        break;
                    v70 = v70 | -0x100 | ((char)v70 | (char)uu_rm::remove_dir::h7b5e8d876ae465c8(v112[1], v112[2], a2)) & 1;
                }
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h2678f5fae10a9214(&v37);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$walkdir..dent..DirEntry$GT$$GT$::h70c1e62d92d9b803(&v41);
                return (v70 | -0x100 | (char)v70 & 1) & 4294967295 & 4294967295;
            }
            else
            {
LABEL_4b7340:
                if (!a2[4])
                {
LABEL_4b798c:
                    v7 = uucore::util_name::h412db5e565a079f3();
                    v8 = v57;
                    v31 = &v7;
                    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                    v15 = &g_527d88;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v105, v57);
                    v7 = 1;
                    v8 = a0;
                    v9 = a1;
                    v10 = 1;
                    v31 = &v7;
                    v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v15 = &g_527e60;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v105, v111);
                    v70 = vvar_207{reg 56} | -0x100 | 1;
                    return (v70 | -0x100 | (char)v70 & 1) & 4294967295 & 4294967295;
                }
            }
        }
    }
    v63 = a2[2];
    if ((1 | !v63) == 1)
    {
        v70 = (unsigned int)uu_rm::remove_dir::h7b5e8d876ae465c8(a0, a1, a2);
        return (v70 | -0x100 | (char)v70 & 1) & 4294967295 & 4294967295;
    }
    goto LABEL_4b798c;
}
