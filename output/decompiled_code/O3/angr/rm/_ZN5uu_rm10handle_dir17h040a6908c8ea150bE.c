long long uu_rm::handle_dir::h040a6908c8ea150b(unsigned long long a0, unsigned long long a1, char a2[7], unsigned long a3)
{
    struct struct_0 **v0;  // [sp-0x268]
    unsigned long long v1;  // [sp-0x260]
    struct struct_0 **v2;  // [sp-0x258]
    unsigned long long v3;  // [sp-0x250]
    struct struct_0 **v4;  // [bp-0x248]
    unsigned long long v5;  // [sp-0x230]
    struct struct_0 **v6;  // [bp-0x228], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x220], Other Possible Types: unsigned long long
    struct struct_0 **v8;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v9;  // [bp-0x210], Other Possible Types: char
    struct struct_0 **v10;  // [bp-0x208]
    struct struct_0 **v11;  // [sp-0x200]
    char v12;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned int v13;  // [sp-0x1e0]
    unsigned int v14;  // [sp-0x1dc]
    void* v15;  // [bp-0x1d8], Other Possible Types: struct struct_0 **
    unsigned long long v16;  // [sp-0x1d0]
    void* v17;  // [bp-0x1c8], Other Possible Types: struct struct_0 **, struct struct_2 **, char
    unsigned long long v18;  // [sp-0x1c0]
    struct struct_0 **v19;  // [bp-0x1b8], Other Possible Types: void*
    unsigned long long v20;  // [sp-0x1a8]
    struct struct_0 **v21;  // [sp-0x1a0]
    char v22;  // [bp-0x19e]
    unsigned long long v23;  // [sp-0x190]
    void* v24;  // [sp-0x188]
    struct struct_0 **v25;  // [sp-0x180]
    unsigned long long v26;  // [sp-0x170]
    struct struct_0 **v27;  // [sp-0x168]
    struct struct_0 **v28;  // [sp-0x158]
    struct struct_0 **v29;  // [sp-0x148]
    struct struct_0 **v30;  // [sp-0x138]
    struct struct_0 **v31;  // [sp-0x128], Other Possible Types: struct struct_1 **
    unsigned long v32;  // [sp-0x120], Other Possible Types: unsigned long long
    struct struct_1 **v33;  // [sp-0x118]
    unsigned long long v34;  // [bp-0x110], Other Possible Types: char
    char v35;  // [bp-0x100]
    char v36;  // [bp-0xf0]
    void* v37;  // [sp-0xe8]
    struct struct_0 **v38;  // [sp-0xe0]
    void* v39;  // [sp-0xd8]
    unsigned long long v40;  // [sp-0xd0]
    void* v41;  // [sp-0xc8]
    unsigned long long v42;  // [sp-0xc0]
    struct struct_0 **v43;  // [sp-0xb8]
    char *v44;  // [sp-0xa8]
    unsigned long long v45;  // [sp-0xa0]
    struct struct_1 **v46;  // [sp-0x98]
    unsigned long long v47;  // [sp-0x90]
    unsigned long v48;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v49;  // [sp-0x80]
    unsigned long long v50;  // [sp-0x78]
    char v51;  // [sp-0x70]
    struct struct_0 **v52;  // [sp-0x68]
    struct struct_0 **v53;  // [sp-0x58]
    struct struct_0 **v54;  // [sp-0x48]
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r14
    unsigned long long v63;  // r14
    struct struct_0 **v64;  // rax
    unsigned long long v65;  // rbp
    struct struct_0 **v66;  // xmm0
    struct struct_0 **v67;  // xmm0
    struct struct_0 **v68;  // xmm0
    struct struct_0 **v69;  // xmm0
    int v70;  // ymm0
    int v71;  // ymm0
    unsigned long long v72;  // rsi
    unsigned long long v73;  // rdx
    int v74;  // ymm1
    int v75;  // ymm2
    struct struct_0 **v76;  // rax
    struct struct_0 **v77;  // xmm0
    int v78;  // ymm0
    struct struct_0 **v79;  // xmm1
    int v80;  // ymm1
    struct struct_0 **v81;  // xmm2
    int v82;  // ymm2
    struct struct_0 **v83;  // xmm0
    struct struct_0 **v84;  // xmm1
    struct struct_0 **v85;  // xmm2
    unsigned long long v86;  // rax
    struct struct_0 **v87;  // xmm0
    struct struct_0 **v88;  // xmm1
    struct struct_0 **v89;  // xmm2
    struct struct_0 **v90;  // xmm0
    struct struct_0 **v91;  // xmm1
    struct struct_0 **v92;  // xmm2
    unsigned long long v93;  // rcx
    struct struct_0 **v94;  // xmm0
    struct struct_0 **v95;  // xmm1
    struct struct_0 **v96;  // xmm2
    unsigned long long v97;  // rsi
    unsigned long long v98;  // rdx
    struct struct_0 **v99;  // xmm0
    struct struct_0 **v100;  // xmm1
    struct struct_0 **v101;  // xmm2
    struct struct_0 **v102;  // xmm0
    struct struct_0 **v103;  // xmm1
    struct struct_0 **v104;  // xmm2
    unsigned long long v106;  // rdx
    struct struct_0 **v107;  // xmm0
    int v108;  // ymm0
    struct struct_0 **v109;  // xmm1
    int v110;  // ymm1
    unsigned long long v111[3];  // rax
    struct struct_0 **v112;  // xmm0
    struct struct_0 **v113;  // xmm1
    unsigned long long v114;  // rsi
    unsigned long long v115;  // rsi

    std::path::Path::components::h4f3217acf0fc8653(&v15, a0, a1);
    if (!(!v22) || !(v17 - 5 < 2))
    {
        v58 = std::path::Path::parent::h65c9a340a6266f2d(a0, a1, v56, v57);
        v59 = v57 | -0x100 | !v58;
        if (!a2[3])
        {
            if (!(!a2[4]))
                goto LABEL_4b73f0;
            goto LABEL_4b7400;
        }
        else if (!v58 && a2[2])
        {
            v59 = v59 | -0x100 | 1;
            if (!a2[4])
                goto LABEL_4b7400;
        }
        else
        {
LABEL_4b726e:
            v5 = a0;
            v60 = a2[5];
            v61 = a2[6];
            if (!((char)v61 != 2) || !(!(char)v60))
            {
                v41 = 0;
                *((int128_t *)&v43) = 0;
                v42 = 8;
                v37 = 0;
                v38 = 8;
                v39 = 0;
                v40 = a1;
                walkdir::WalkDir::new::h94b43d608c112e6d(&v6, v5, a1);
                v66 = *((int128_t *)&v12);
                v29 = v66;
                v67 = v11;
                v28 = v67;
                v68 = *((int128_t *)&v9);
                v27 = v68;
                v69 = *((int128_t *)&v6);
                v25 = v69;
                v26 = v8;
                v15 = 0;
                v17 = 0;
                v18 = 8;
                v71 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v19) = 0;
                v20 = 8;
                *((int128_t *)&v21) = 0;
                v23 = 8;
                v24 = 0;
                *((int128_t *)&v30) = 0;
                v65 = 0;
                v14 = v60;
                v13 = v61;
                while (true)
                {
                    if ((char)v61 == 2)
                    {
LABEL_4b77e0:
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v31, &v15, v73);
                        v76 = v31;
                        if (v76 == 3)
                            break;
                        v77 = *((int128_t *)&v32);
                        v78 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                        v79 = *((int128_t *)&v34);
                        v80 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
                        v81 = *((int128_t *)&v35);
                        v82 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                        v54 = v81;
                        v53 = v79;
                        v52 = v77;
                        if (!(!a2[4]))
                            goto LABEL_4b7990;
                        v83 = *((int128_t *)&v32);
                        v71 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        v84 = *((int128_t *)&v34);
                        v74 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                        v85 = *((int128_t *)&v35);
                        v75 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                        v4 = v85;
                        v2 = v84;
                        v0 = v83;
                        v6 = v38;
                        v7 = (char *)v6 + 0x18 * v39;
                        while (true)
                        {
                            v86 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h401dddcc1f8bca7a(&v6);
                            if (!v86)
                                break;
                            if ((char)std::path::Path::starts_with::h2e2f372e672a1657(v1, v2, v86))
                            {
                                ::0x4b5510::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&v0);
                                goto LABEL_4b77e0;
                            }
                        }
                        if (!(!a2[4]))
                            goto LABEL_4b7950;
                        std::fs::read_dir::h67bbb91b5f22fd39(&v6, v1, v2);
                        if (core::iter::traits::iterator::Iterator::fold::h676339c190ac643e(core::result::Result$LT$T$C$E$GT$::unwrap::h16565dcf888e9ebf(v6, (int)v7), (unsigned int)v56 & 1, v56))
                        {
                            if ((char)uu_rm::prompt_descend::h39295f8defb4b16a(v1, v2, v56))
                            {
                                v102 = *((int128_t *)&v0);
                                v71 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                                v103 = *((int128_t *)&v2);
                                v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                                v104 = *((int128_t *)&v4);
                                v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                                v10 = v104;
                                v8 = v103;
                                v6 = v102;
                                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&v41, &v6, v56);
                                continue;
                            }
                            else
                            {
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v6, v1, v2);
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hc1adebded84362db(&v37, &v6, v56);
                                goto LABEL_4b7974;
                            }
                        }
                    }
                    else
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v31, &v15, v73);
                        v76 = v31;
                        if (v76 == 3)
                            break;
                        v87 = *((int128_t *)&v32);
                        v78 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                        v88 = *((int128_t *)&v34);
                        v80 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                        v89 = *((int128_t *)&v35);
                        v82 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                        v54 = v89;
                        v53 = v88;
                        v52 = v87;
                        if ((unsigned int)v76 != 2)
                        {
LABEL_4b7990:
                            v93 = *((long long *)&v36);
                            v6 = v76;
                            v94 = v52;
                            v71 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                            v95 = v53;
                            v74 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                            v96 = v54;
                            v75 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                            v11 = v96;
                            v9 = v95;
                            v7 = v94;
                            v12 = v93;
                            v48 = uucore::util_name::h60d842bf27b05e82();
                            v49 = v56;
                            v44 = &v48;
                            v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                            v0 = &g_527970;
                            v1 = 2;
                            v4 = 0;
                            v2 = &v44;
                            v3 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v97, v56);
                            v48 = 1;
                            v49 = v5;
                            v50 = v40;
                            v51 = 1;
                            v44 = &v48;
                            v45 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v46 = &v6;
                            v47 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                            v0 = &g_527a00;
                            v1 = 3;
                            v4 = 0;
                            v2 = &v44;
                            v3 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v97, v56);
                            ::0x4b54e0::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::hc1425b400c799960(&v6);
                            v65 = v65 | -0x100 | 1;
                            continue;
                        }
                        v90 = *((int128_t *)&v32);
                        v71 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                        v91 = *((int128_t *)&v34);
                        v74 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                        v92 = *((int128_t *)&v35);
                        v75 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                        v4 = v92;
                        v2 = v91;
                        v0 = v90;
                        if (((short)(int)(&v4)[1] & 0xf000) != 0x4000)
                        {
LABEL_4b7950:
                            v65 = v65 | -0x100 | ((char)v65 | (char)uu_rm::remove_file::hfb41d07f759de271(v1, v2, v14, v13)) & 1;
LABEL_4b7974:
                            ::0x4b5510::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&v0);
                            continue;
                        }
                    }
                    v99 = *((int128_t *)&v0);
                    v71 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                    v100 = *((int128_t *)&v2);
                    v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                    v101 = *((int128_t *)&v4);
                    v75 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                    v10 = v101;
                    v8 = v100;
                    v6 = v99;
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&v41, &v6, v98);
                }
                core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h3761202ee7f4baa7(&v15);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h7ec7afdb8ff5890d(&v6, &v41);
                v107 = *((int128_t *)&v6);
                v108 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                v109 = *((int128_t *)&v8);
                v110 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                v17 = v109;
                v15 = v107;
                while (true)
                {
                    v111 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&v17);
                    if (!(v111) && !((v112 = *((int128_t *)&v15), v108 = v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112, v113 = *((int128_t *)&v17), v110 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113, v15 = v113, v17 = v112, v111 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&v17), v111)))
                        break;
                    v65 = v65 | -0x100 | ((char)v65 | (char)uu_rm::remove_dir::h7d132cab7d9f675c(v111[1], v111[2], a2)) & 1;
                }
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0424e9eb358fe413(&v37);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$walkdir..dent..DirEntry$GT$$GT$::hf45a67b5be4375a6(&v41);
                return (v65 | -0x100 | (char)v65 & 1) & 4294967295 & 4294967295;
            }
            v63 = v5;
            v64 = std::fs::remove_dir_all::ha0bf453026099f20(v63, a1, v56);
            if (!v64)
                return (0 | -0x100 | (char)0 & 1) & 4294967295 & 4294967295;
            v0 = v64;
            v15 = std::fs::remove_dir::h3ace2cb00c00de8e(v63, a1, v56);
            if (!v15)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&v15);
                v65 = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&v15);
                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v64) == 1)
                {
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v56;
                    v31 = &v6;
                    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v15 = &g_527970;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v114, v56);
                    v6 = 1;
                    v7 = v5;
                    v8 = a1;
                    v9 = 1;
                    v31 = &v6;
                    v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v15 = &g_5279b0;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v114, v56);
                }
                else
                {
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v56;
                    v31 = &v6;
                    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v15 = &g_527970;
                    v16 = 2;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v115, v56);
                    v6 = 1;
                    v7 = v5;
                    v8 = a1;
                    v9 = 1;
                    v31 = &v6;
                    v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v33 = &v0;
                    v34 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v15 = &g_5279d0;
                    v16 = 3;
                    v19 = 0;
                    v17 = &v31;
                    v18 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v115, v56);
                }
                v65 = vvar_195{reg 56} | -0x100 | 1;
            }
            ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v0);
            goto LABEL_4b7d07;
        }
    }
    else
    {
        if (!(!a2[4]))
            goto LABEL_4b726e;
        v59 = 0;
        if (!a2[4])
        {
LABEL_4b7400:
            v6 = uucore::util_name::h60d842bf27b05e82();
            v7 = v56;
            v31 = &v6;
            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v15 = &g_527970;
            v16 = 2;
            v19 = 0;
            v17 = &v31;
            v18 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v72, v56);
            v6 = 1;
            v7 = a0;
            v8 = a1;
            v9 = 1;
            v31 = &v6;
            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v15 = &g_527a50;
            v16 = 2;
            v19 = 0;
            v17 = &v31;
            v18 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v72, v106);
            v65 = vvar_195{reg 56} | -0x100 | 1;
            return (v65 | -0x100 | (char)v65 & 1) & 4294967295 & 4294967295;
        }
    }
LABEL_4b73f0:
    if (!(!a2[4]))
        goto LABEL_4b7400;
    v65 = (unsigned int)uu_rm::remove_dir::h7d132cab7d9f675c(a0, a1, a2);
LABEL_4b7d07:
    return (v65 | -0x100 | (char)v65 & 1) & 4294967295 & 4294967295;
}
