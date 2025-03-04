long long uu_rm::handle_dir::h040a6908c8ea150b(unsigned long long a0, unsigned long long a1, char a2[7])
{
    struct struct_0 **v0;  // [sp-0x268]
    struct struct_0 **v1;  // [sp-0x268]
    unsigned long long v2;  // [sp-0x260]
    struct struct_0 **v3;  // [sp-0x258]
    struct struct_0 **v4;  // [sp-0x258]
    unsigned long long v5;  // [sp-0x250]
    struct struct_0 **v6;  // [bp-0x248]
    struct struct_0 **v7;  // [sp-0x248]
    unsigned long long v8;  // [sp-0x230]
    struct struct_0 **v9;  // [bp-0x228]
    struct struct_0 **v10;  // [sp-0x228]
    unsigned long long v11;  // [sp-0x220]
    unsigned long v12;  // [bp-0x218], Other Possible Types: unsigned long long
    char v13;  // [sp-0x210]
    struct struct_0 **v14;  // [bp-0x208]
    struct struct_0 **v15;  // [sp-0x200]
    char v16;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned int v17;  // [sp-0x1e0]
    unsigned int v18;  // [sp-0x1dc]
    struct struct_0 **v19;  // [bp-0x1d8]
    struct struct_0 **v20;  // [bp-0x1d8]
    unsigned long long v21;  // [sp-0x1d0]
    struct struct_0 **v22;  // [sp-0x1c8], Other Possible Types: struct struct_2 **, char
    struct struct_0 **v23;  // [bp-0x1c8]
    unsigned long long v24;  // [sp-0x1c0]
    struct struct_0 **v25;  // [sp-0x1b8], Other Possible Types: void*
    unsigned long long v26;  // [sp-0x1a8]
    struct struct_0 **v27;  // [sp-0x1a0]
    char v28;  // [bp-0x19e]
    unsigned long long v29;  // [sp-0x190]
    void* v30;  // [sp-0x188]
    struct struct_0 **v31;  // [sp-0x180]
    unsigned long long v32;  // [sp-0x170]
    struct struct_0 **v33;  // [sp-0x168]
    struct struct_0 **v34;  // [sp-0x158]
    struct struct_0 **v35;  // [sp-0x148]
    struct struct_0 **v36;  // [sp-0x138]
    struct struct_1 **v37;  // [sp-0x128]
    struct struct_0 **v38;  // [sp-0x128], Other Possible Types: struct struct_1 **
    unsigned long v39;  // [sp-0x120], Other Possible Types: unsigned long long
    struct struct_1 **v40;  // [sp-0x118]
    unsigned long long v41;  // [sp-0x110], Other Possible Types: char
    char v42;  // [bp-0x100]
    char v43;  // [bp-0xf0]
    void* v44;  // [sp-0xe8]
    struct struct_0 **v45;  // [sp-0xe0]
    void* v46;  // [sp-0xd8]
    unsigned long long v47;  // [sp-0xd0]
    void* v48;  // [sp-0xc8]
    unsigned long long v49;  // [sp-0xc0]
    struct struct_0 **v50;  // [sp-0xb8]
    char *v51;  // [sp-0xa8]
    unsigned long long v52;  // [sp-0xa0]
    struct struct_1 **v53;  // [sp-0x98]
    unsigned long long v54;  // [sp-0x90]
    unsigned long v55;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v56;  // [sp-0x80]
    unsigned long long v57;  // [sp-0x78]
    char v58;  // [sp-0x70]
    struct struct_0 **v59;  // [sp-0x68]
    struct struct_0 **v60;  // [sp-0x58]
    struct struct_0 **v61;  // [sp-0x48]
    unsigned long long v63;  // rax
    unsigned long long v64;  // rcx
    unsigned long v65;  // rcx
    unsigned long long v66;  // rbx
    unsigned long long v67;  // r14
    unsigned long long v69;  // r14
    struct struct_0 **v70;  // rax
    unsigned long long v71;  // rbp
    struct struct_0 **v72;  // xmm0
    struct struct_0 **v73;  // xmm0
    struct struct_0 **v74;  // xmm0
    struct struct_0 **v75;  // xmm0
    int v76;  // ymm0
    int v77;  // ymm0
    unsigned long v78;  // rdx
    int v80;  // ymm1
    int v81;  // ymm2
    struct struct_0 **v82;  // rax
    struct struct_0 **v83;  // xmm0
    int v84;  // ymm0
    struct struct_0 **v85;  // xmm1
    int v86;  // ymm1
    struct struct_0 **v87;  // xmm2
    int v88;  // ymm2
    struct struct_0 **v89;  // xmm0
    struct struct_0 **v90;  // xmm1
    struct struct_0 **v91;  // xmm2
    unsigned long long v92;  // rax
    struct struct_0 **v93;  // xmm0
    struct struct_0 **v94;  // xmm1
    struct struct_0 **v95;  // xmm2
    struct struct_0 **v96;  // xmm0
    struct struct_0 **v97;  // xmm1
    struct struct_0 **v98;  // xmm2
    unsigned long long v99;  // rcx
    struct struct_0 **v100;  // xmm0
    struct struct_0 **v101;  // xmm1
    struct struct_0 **v102;  // xmm2
    unsigned int v103;  // rdx, Other Possible Types: unsigned long
    struct struct_0 **v104;  // xmm0
    struct struct_0 **v105;  // xmm1
    struct struct_0 **v106;  // xmm2
    struct struct_0 **v107;  // xmm0
    struct struct_0 **v108;  // xmm1
    struct struct_0 **v109;  // xmm2
    struct struct_0 **v111;  // xmm0
    int v112;  // ymm0
    struct struct_0 **v113;  // xmm1
    int v114;  // ymm1
    unsigned long long v115[3];  // rax
    struct struct_0 **v116;  // xmm0
    struct struct_0 **v117;  // xmm1
    unsigned long v118;  // rdx
    unsigned long v119;  // rdx

    std::path::Path::components::h4f3217acf0fc8653(&v19, a0, a1);
    if (!(!v28) || !(v22 - 5 < 2))
    {
        v63 = std::path::Path::parent::h65c9a340a6266f2d(a0, a1);
        v64 = v65 & 0xffffffffffffff00 | !v63;
        if (!a2[3])
        {
            if (!(!a2[4]))
                goto LABEL_4b73f0;
            goto LABEL_4b7400;
        }
        else if (!v63 && a2[2])
        {
            v64 = v64 & 0xffffffffffffff00 | 1;
            if (!a2[4])
                goto LABEL_4b7400;
        }
        else
        {
LABEL_4b726e:
            v8 = a0;
            v66 = a2[5];
            v67 = a2[6];
            if (!((char)v67 != 2) || !(!(char)v66))
            {
                v48 = 0;
                *((uint128_t *)&v50) = 0;
                v49 = 8;
                v44 = 0;
                v45 = 8;
                v46 = 0;
                v47 = a1;
                walkdir::WalkDir::new::h94b43d608c112e6d(&v9, v8, a1);
                v72 = *((int128_t *)&v16);
                v35 = v72;
                v73 = v15;
                v34 = v73;
                v74 = *((int128_t *)&v9);
                v33 = v74;
                v75 = *((int128_t *)&v9);
                v31 = v75;
                v32 = v12;
                v19 = 0;
                v22 = 0;
                v24 = 8;
                v77 = ((((v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((uint128_t *)&v25) = 0;
                v26 = 8;
                *((uint128_t *)&v27) = 0;
                v29 = 8;
                v30 = 0;
                *((uint128_t *)&v36) = 0;
                v71 = 0;
                v18 = v66;
                v17 = v67;
                while (true)
                {
                    if ((char)v67 == 2)
                    {
LABEL_4b77e0:
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v38, &v19);
                        v82 = v38;
                        if (v82 == 3)
                            break;
                        v83 = *((int128_t *)&v39);
                        v84 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        v85 = *((int128_t *)&v41);
                        v86 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                        v87 = *((int128_t *)&v42);
                        v88 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                        v61 = v87;
                        v60 = v85;
                        v59 = v83;
                        if (!((unsigned int)v82 == 2))
                            goto LABEL_4b7990;
                        v89 = *((int128_t *)&v39);
                        v77 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                        v90 = *((int128_t *)&v41);
                        v80 = v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                        v91 = *((int128_t *)&v42);
                        v81 = v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                        v7 = v91;
                        v4 = v90;
                        v1 = v89;
                        v9 = v45;
                        v9 = (char *)v9 + 0x18 * v46;
                        while (true)
                        {
                            v92 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h401dddcc1f8bca7a(&v9);
                            if (!v92)
                                break;
                            if ((char)std::path::Path::starts_with::h2e2f372e672a1657(v2, v3, v92))
                            {
                                ::0x4b5510::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&v1);
                                goto LABEL_4b77e0;
                            }
                        }
                        if (!(((int)(&v7)[1] & 0xf000) == 0x4000))
                            goto LABEL_4b7950;
                        std::fs::read_dir::h67bbb91b5f22fd39(&v9, v2, v3);
                        if (core::iter::traits::iterator::Iterator::fold::h676339c190ac643e(core::result::Result$LT$T$C$E$GT$::unwrap::h16565dcf888e9ebf(v9, (int)v9), v103 & 1))
                        {
                            if ((char)uu_rm::prompt_descend::h39295f8defb4b16a(v2, v3))
                            {
                                v107 = *((int128_t *)&v1);
                                v77 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                                v108 = *((int128_t *)&v4);
                                v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
                                v109 = *((int128_t *)&v7);
                                v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                                v14 = v109;
                                v9 = v108;
                                v9 = v107;
                                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&v48, &v9);
                                continue;
                            }
                            else
                            {
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v9, v2, v3);
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hc1adebded84362db(&v44, &v9);
                                goto LABEL_4b7974;
                            }
                        }
                    }
                    else
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v38, &v19);
                        v82 = v38;
                        if (v82 == 3)
                            break;
                        v93 = *((int128_t *)&v39);
                        v84 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                        v94 = *((int128_t *)&v41);
                        v86 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                        v95 = *((int128_t *)&v42);
                        v88 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                        v61 = v95;
                        v60 = v94;
                        v59 = v93;
                        if ((unsigned int)v82 != 2)
                        {
LABEL_4b7990:
                            v99 = *((long long *)&v43);
                            v9 = v82;
                            v100 = v59;
                            v77 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                            v101 = v60;
                            v80 = v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                            v102 = v61;
                            v81 = v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                            v15 = v102;
                            v9 = v101;
                            v9 = v100;
                            v16 = v99;
                            v55 = uucore::util_name::h60d842bf27b05e82();
                            v56 = v103;
                            v51 = &v55;
                            v52 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                            v0 = &g_527970;
                            v2 = 2;
                            v6 = 0;
                            v3 = &v51;
                            v5 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                            v55 = 1;
                            v56 = v8;
                            v57 = v47;
                            v58 = 1;
                            v51 = &v55;
                            v52 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v53 = &v9;
                            v54 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                            v0 = &g_527a00;
                            v2 = 3;
                            v6 = 0;
                            v3 = &v51;
                            v5 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                            ::0x4b54e0::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::hc1425b400c799960(&v9);
                            v71 = v71 & 0xffffffffffffff00 | 1;
                            continue;
                        }
                        v96 = *((int128_t *)&v39);
                        v77 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v97 = *((int128_t *)&v41);
                        v80 = v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                        v98 = *((int128_t *)&v42);
                        v81 = v88 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                        v7 = v98;
                        v4 = v97;
                        v1 = v96;
                        if (((short)(int)(&v7)[1] & 0xf000) != 0x4000)
                        {
LABEL_4b7950:
                            v71 = v71 & 0xffffffffffffff00 | ((char)v71 | (char)uu_rm::remove_file::hfb41d07f759de271(v2, v3, v18, v17)) & 1;
LABEL_4b7974:
                            ::0x4b5510::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&v1);
                            continue;
                        }
                    }
                    v104 = *((int128_t *)&v1);
                    v77 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                    v105 = *((int128_t *)&v4);
                    v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
                    v106 = *((int128_t *)&v7);
                    v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
                    v14 = v106;
                    v9 = v105;
                    v9 = v104;
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&v48, &v9);
                }
                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h3761202ee7f4baa7(&v19);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h7ec7afdb8ff5890d(&v9, &v48);
                v111 = *((int128_t *)&v9);
                v112 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                v113 = *((int128_t *)&v9);
                v114 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                v23 = v113;
                v20 = v111;
                while (true)
                {
                    v115 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&v23);
                    if (!(v115) && !((v116 = *((int128_t *)&v20), v112 = v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116, v117 = *((int128_t *)&v23), v114 = v114 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117, v20 = v117, v23 = v116, v115 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&v23), v115)))
                        break;
                    v71 = v71 & 0xffffffffffffff00 | ((char)v71 | (char)uu_rm::remove_dir::h7d132cab7d9f675c(v115[1], v115[2], a2)) & 1;
                }
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0424e9eb358fe413(&v44);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$walkdir..dent..DirEntry$GT$$GT$::hf45a67b5be4375a6(&v48);
                return (v71 & 0xffffffffffffff00 | (char)v71 & 1) & 4294967295 & 4294967295;
            }
            v69 = v8;
            v70 = std::fs::remove_dir_all::ha0bf453026099f20(v69, a1);
            if (!v70)
                return (0 & 0xffffffffffffff00 | (char)0 & 1) & 4294967295 & 4294967295;
            v0 = v70;
            v19 = std::fs::remove_dir::h3ace2cb00c00de8e(v69, a1);
            if (!v19)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&v19);
                v71 = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&v19);
                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v70) == 1)
                {
                    v10 = uucore::util_name::h60d842bf27b05e82();
                    v11 = v118;
                    v38 = &v9;
                    v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v19 = &g_527970;
                    v21 = 2;
                    v25 = 0;
                    v22 = &v38;
                    v24 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                    v10 = 1;
                    v11 = v8;
                    v12 = a1;
                    v13 = 1;
                    v38 = &v9;
                    v39 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v19 = &g_5279b0;
                    v21 = 2;
                    v25 = 0;
                    v22 = &v38;
                    v24 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                }
                else
                {
                    v10 = uucore::util_name::h60d842bf27b05e82();
                    v11 = v119;
                    v38 = &v9;
                    v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v19 = &g_527970;
                    v21 = 2;
                    v25 = 0;
                    v22 = &v38;
                    v24 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                    v10 = 1;
                    v11 = v8;
                    v12 = a1;
                    v13 = 1;
                    v38 = &v9;
                    v39 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v40 = &v1;
                    v41 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v19 = &g_5279d0;
                    v21 = 3;
                    v25 = 0;
                    v22 = &v38;
                    v24 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
                }
                v71 = vvar_190{reg 56} & 0xffffffffffffff00 | 1;
            }
            ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v1);
            goto LABEL_4b7d07;
        }
    }
    else
    {
        if (!(!a2[3]))
            goto LABEL_4b726e;
        v64 = 0;
        if (!a2[4])
        {
LABEL_4b7400:
            v10 = uucore::util_name::h60d842bf27b05e82();
            v11 = v78;
            v38 = &v9;
            v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v19 = &g_527970;
            v21 = 2;
            v25 = 0;
            v22 = &v38;
            v24 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
            v10 = 1;
            v11 = a0;
            v12 = a1;
            v13 = 1;
            v37 = &v9;
            v39 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v19 = &g_527a50;
            v21 = 2;
            v25 = 0;
            v22 = &v38;
            v24 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v19);
            v71 = vvar_190{reg 56} & 0xffffffffffffff00 | 1;
            return (v71 & 0xffffffffffffff00 | (char)v71 & 1) & 4294967295 & 4294967295;
        }
    }
LABEL_4b73f0:
    if (!(!(a2[2] & (char)v64)))
        goto LABEL_4b7400;
    v71 = (unsigned int)uu_rm::remove_dir::h7d132cab7d9f675c(a0, a1, a2);
LABEL_4b7d07:
    return (v71 & 0xffffffffffffff00 | (char)v71 & 1) & 4294967295 & 4294967295;
}
