long long uu_cp::copy::h5586f24b20d7299d(struct_3 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[79])
{
    char v0;  // [bp-0x358]
    char v1;  // [bp-0x338]
    char v2;  // [bp-0x330]
    char v3;  // [bp-0x328]
    char v4;  // [bp-0x320]
    char v5;  // [sp-0x31b]
    char v6;  // [sp-0x31a]
    char v7;  // [sp-0x319]
    struct struct_0 **v8;  // [bp-0x318]
    unsigned long long v9;  // [sp-0x310]
    unsigned long long v10;  // [sp-0x308]
    struct_3 *v11;  // [sp-0x2f8]
    char v12;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v13;  // [bp-0x2e8]
    unsigned long long v14;  // [sp-0x2e0]
    struct struct_0 **v15;  // [sp-0x2d8]
    unsigned long long v16;  // [sp-0x2d0]
    char v17;  // [bp-0x2b0]
    char v18;  // [bp-0x2a0]
    struct struct_0 **v19;  // [bp-0x298], Other Possible Types: unsigned long
    char v20;  // [bp-0x290], Other Possible Types: unsigned long long
    struct struct_0 **v21;  // [bp-0x288], Other Possible Types: char, unsigned long long
    char v22;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x278], Other Possible Types: struct struct_0 **
    char v24;  // [bp-0x270]
    int v25;  // [sp-0x268], Other Possible Types: struct struct_0 **
    char v26;  // [bp-0x260]
    struct struct_0 **v27;  // [bp-0x1e8]
    unsigned long long v28;  // [sp-0x1d8]
    unsigned long long v29;  // [sp-0x1c0]
    unsigned long long v30;  // [sp-0x1b8]
    unsigned long v31;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x1a8]
    struct struct_0 **v33;  // [bp-0x1a0], Other Possible Types: struct struct_2 **
    struct struct_0 **v34;  // [bp-0x198], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v35;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long v36;  // [bp-0x188], Other Possible Types: char
    char v37;  // [bp-0x180]
    char v38;  // [bp-0x170]
    struct struct_0 **v39;  // [sp-0x118]
    struct struct_0 **v40;  // [sp-0x108]
    struct struct_0 **v41;  // [sp-0xf8]
    struct struct_0 **v42;  // [sp-0xe8]
    struct struct_0 **v43;  // [sp-0xd8]
    struct struct_0 **v44;  // [sp-0xc8]
    struct struct_0 **v45;  // [sp-0xb8]
    struct struct_0 **v46;  // [sp-0xa8]
    struct struct_0 **v47;  // [sp-0x98]
    struct struct_0 **v48;  // [sp-0x88]
    struct struct_0 **v49;  // [sp-0x78]
    struct struct_0 **v50;  // [sp-0x68]
    char v51;  // [bp-0x58]
    char v52;  // [bp-0x48]
    struct struct_0 **v53;  // [sp-0x40]
    struct_3 *v55;  // r15
    char v56;  // al
    unsigned long long v57;  // rax
    unsigned long v58;  // rsi
    unsigned long v59;  // rdx
    struct struct_0 **v60;  // xmm0
    struct struct_0 **v61;  // xmm1
    struct struct_0 **v62;  // xmm0
    struct struct_0 **v63;  // xmm1
    struct struct_0 **v64;  // xmm2
    struct struct_0 **v65;  // xmm0
    struct struct_0 **v66;  // xmm1
    struct struct_0 **v67;  // xmm2
    struct struct_0 **v68;  // xmm0
    struct struct_0 **v69;  // xmm1
    struct struct_0 **v70;  // xmm2
    struct struct_0 **v71;  // xmm0
    int v72;  // ymm0
    int v73;  // ymm0
    struct struct_0 **v74;  // xmm1
    int v75;  // ymm1
    int v76;  // ymm1
    struct struct_0 **v77;  // xmm2
    int v78;  // ymm2
    int v79;  // ymm2
    struct struct_0 **v80;  // xmm0
    struct_1 *v81;  // rax
    void* v82;  // r15
    char v83[79];  // 4096
    unsigned long long v84;  // rbx
    char v85[79];  // r12
    int v86;  // ymm3
    struct struct_0 **v87;  // rbx
    unsigned long long v88;  // r13
    struct struct_0 **v89;  // xmm0
    int v90;  // ymm0
    struct struct_0 **v91;  // xmm0
    struct struct_0 **v92;  // xmm1
    struct struct_0 **v93;  // xmm2
    struct struct_0 **v94;  // xmm3
    unsigned long long v95;  // r8
    unsigned long long v96;  // r9
    unsigned int v97;  // eax
    unsigned long long v99;  // rdx
    struct struct_0 **v102;  // rbx
    struct struct_0 **v103;  // xmm0
    int v104;  // ymm0
    struct struct_0 **v105;  // xmm1
    struct struct_0 **v106;  // xmm2
    struct struct_0 **v107;  // xmm3
    unsigned long long v109;  // rcx
    struct struct_0 **v110;  // xmm0
    unsigned int v111;  // r15d
    int v115;  // ymm0
    struct struct_0 **v116;  // xmm0
    unsigned long long v117;  // rsi
    unsigned long long v118;  // rdx

    v55 = a0;
    v56 = uu_cp::TargetType::determine::h09744ae410e88efc(a2, a3, a4);
    v12 = v56;
    v7 = v56;
    uu_cp::verify_target_type::h7b1c78bb10dff0f5(&v19, a3, a4, &v7);
    v57 = v19;
    if (v57 != 13)
    {
        *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v26);
        v60 = *((int128_t *)&v20);
        v61 = *((int128_t *)&v22);
        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v24);
        a0->field_18 = v61;
        a0->field_8 = v60;
        a0->field_0 = v57;
        return v55;
    }
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v19, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v19), v59);
    v62 = *((int128_t *)&v19);
    v63 = *((int128_t *)&v21);
    v64 = *((int128_t *)&v23);
    v44 = v64;
    v43 = v63;
    v42 = v62;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hb9c79e3835ee1500(&v19, v58, v59);
    v65 = *((int128_t *)&v19);
    v66 = *((int128_t *)&v21);
    v67 = *((int128_t *)&v23);
    v47 = v67;
    v46 = v66;
    v45 = v65;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h07f3e8be27af1af7(&v19, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v19), v59);
    v68 = *((int128_t *)&v19);
    v69 = *((int128_t *)&v21);
    v70 = *((int128_t *)&v23);
    v50 = v70;
    v49 = v69;
    v48 = v68;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v19, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v19), v59);
    v71 = *((int128_t *)&v19);
    v73 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
    v74 = *((int128_t *)&v21);
    v76 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
    v77 = *((int128_t *)&v23);
    v79 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v41 = v77;
    v40 = v74;
    v39 = v71;
    if (!a5[73])
    {
        v27 = 0;
        goto LABEL_5034fa;
    }
    if (uu_cp::disk_usage::hdb6cf68ba645e675(a1, a2, a5[70]))
    {
        a0->field_0 = 2;
        a0->field_8 = v59;
        goto LABEL_503c1e;
    }
    indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v13, v59, v59);
    indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v19, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}", 64);
    core::result::Result$LT$T$C$E$GT$::unwrap::h16219874c036777a(&v33, &v19);
    indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v8, &v13, &v33);
    indicatif::progress_bar::ProgressBar::with_message::h08019f690f508299(&v17, &v8, uucore::util_name::h60d842bf27b05e82(), v59);
    indicatif::progress_bar::ProgressBar::tick::h5b31c589e9d52cbd(&v17, v58, v59);
    v28 = *((long long *)&v18);
    v80 = *((int128_t *)&v17);
    v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
    v27 = v80;
LABEL_5034fa:
    v31 = a1;
    v32 = a1 + a2 * 24;
    v81 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v31);
    if (!v81)
    {
        v84 = 13;
        if (!(!v27))
            goto LABEL_503aa9;
    }
    else
    {
        v11 = a0;
        v6 = a5[76];
        v5 = a5[78];
        v82 = 0;
        v12 = v12;
        v30 = a5[68];
        v29 = a5[66];
        do
        {
            v85 = v83;
            v87 = v81->field_8;
            v88 = v81->field_10;
            uucore::features::fs::normalize_path::hf9d1827f61a753a1(&v17, v87, v88);
            if (!v6 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v42, &v17))
            {
                std::fs::symlink_metadata::h8589e79b0a107dee(&v19, v87, v88);
                if ((int)v19 != 2)
                {
                    v97 = (int)(&v25)[8] & 0xf000;
                    *((int *)&v8) = (v97 == 0x4000 ? "directorycannot overwrite directory  with non-directory" : "file");
                    v9 = (-0x100 | v97 == 0x4000) * 5 + 4;
                    v33 = uucore::util_name::h60d842bf27b05e82();
                    v34 = v59;
                    v13 = &v33;
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v19 = &g_5b5d08;
                    v20 = 2;
                    v23 = 0;
                    v21 = &v13;
                    v22 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v58, v59);
                    v33 = 1;
                    v34 = v87;
                    v35 = v88;
                    v36 = 1;
                    v13 = &v8;
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v15 = &v33;
                    v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v19 = &g_5b5d28;
                    v20 = 3;
                    v23 = 0;
                    v21 = &v13;
                    v22 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v58, v59);
                    goto LABEL_503a30;
                }
                else
                {
                    v55 = v11;
                    v55->field_0 = 2;
                    v55->field_8 = v20;
LABEL_503c05:
                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v17);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1c11d9db54c24981(&v27, v58, v59);
                }
LABEL_503c1e:
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v39);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&v48);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&v45);
            }
            uu_cp::construct_dest_path::hfc66a1b24656cf26(&v33, v87, v88, a3, a4, v12, v1, v2);
            if ((int)v33 == 13)
            {
                v10 = *((long long *)&v36);
                v89 = *((int128_t *)&v34);
                v90 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                v8 = v89;
            }
            else
            {
                v91 = *((int128_t *)&v33);
                v90 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v92 = *((int128_t *)&(&v34)[1]);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                v93 = *((int128_t *)&v37);
                v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                v94 = *((int128_t *)&v38);
                v86 = v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                v25 = v94;
                v23 = v93;
                v21 = v92;
                v19 = v91;
                uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h5a73338177addea2(&v8, a3, a4, &v19, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
            }
            std::fs::metadata::hcf81ab27d993cd47(&v19, &v8, v99);
            if ((int)v19 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v19);
            }
            else
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v19);
                std::fs::symlink_metadata::h087c360320e6b054(&v19, &v8, v59);
                if ((int)v19 == 2)
                    goto LABEL_503b16;
                if (!(!v27))
                    goto LABEL_5038bb;
            }
            std::fs::metadata::hcf81ab27d993cd47(&v19, v81, v59);
            if ((int)v19 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v19);
                goto LABEL_5038b4;
            }
            ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v19);
            std::fs::symlink_metadata::h087c360320e6b054(&v19, v81, v59);
            if ((int)v19 == 2)
            {
LABEL_503b16:
                v55 = v11;
                v55->field_0 = 2;
                v55->field_8 = v20;
                goto LABEL_503bfb;
            }
            if (((int)(&v25)[1] & 0xf000) == 0xa000)
                goto LABEL_5038bb;
LABEL_5038b4:
            if (!(!v27))
                goto LABEL_5038dd;
LABEL_5038bb:
            if (v6 != 2 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v39, &v8))
            {
                *((int128_t *)&v53) = *((int128_t *)&(&v8)[1]);
                v13 = v87;
                v14 = v88;
                v33 = &v53;
                v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v35 = &v13;
                v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v19 = &g_5b5d58;
                v20 = 3;
                v23 = 0;
                v21 = &v33;
                v22 = 2;
                ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v51, &v19);
                v55 = v11;
                v55->field_18 = *((long long *)&v52);
                *((int128_t *)&v55->field_8) = *((int128_t *)&v51);
                v55->field_0 = 4;
LABEL_503bfb:
                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v8);
                goto LABEL_503c05;
            }
LABEL_5038dd:
            uu_cp::copy_source::ha83fca4ba2cc8af7(&v33, &v27, v87, v88, a3, a4, v0, v85, &v45, &v39, &v48);
            v102 = v33;
            if (v102 == 13)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&v19, &v8);
                v15 = v21;
                v110 = *((int128_t *)&v19);
                v104 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                v13 = v110;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v39, &v13);
            }
            else
            {
                v103 = *((int128_t *)&v33);
                v104 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                v105 = *((int128_t *)&(&v34)[1]);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
                v106 = *((int128_t *)&v37);
                v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
                v107 = *((int128_t *)&v38);
                v86 = v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                v25 = v107;
                v23 = v106;
                v21 = v105;
                v19 = v103;
                uu_cp::show_error_if_needed::h934143ac50374c6e(&v19, v58, v59);
                ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v19, v58, v59, v109, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
                if (!(char)(&v19)[1])
                    v111 = (unsigned int)v82;
                else
                    v111 = 1;
                v82 = ((unsigned int)v19 != 8 ? v111 : 1);
            }
            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v8);
            if ((unsigned int)v102 == 13 && (unsigned int)v33 != 13)
                ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v33, v58, v59, v109, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
LABEL_503a30:
            v21 = *((long long *)&v18);
            v116 = *((int128_t *)&v17);
            v73 = v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
            v19 = v116;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v42, &v19);
            v81 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v31);
        } while (v81);
        v84 = (-0x100 | !((char)v82 & 1)) * 8 + 5;
        v55 = v11;
        if (v27)
        {
LABEL_503aa9:
            v21 = v28;
            *((int128_t *)&v19) = *((int128_t *)&v27);
            indicatif::progress_bar::ProgressBar::finish::h204a36c2f269e760(&v19, v117, v118);
            ::0x4fc880::core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h2d075ec2e7438ac9(&v19, v58, v59);
        }
    }
    v55->field_0 = v84;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v39);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&v48);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&v45);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v42);
    return v55;
}
