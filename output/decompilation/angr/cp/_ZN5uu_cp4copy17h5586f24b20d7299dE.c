long long uu_cp::copy::h5586f24b20d7299d(struct_3 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[79])
{
    char v0;  // [bp-0x358]
    char v1;  // [bp-0x338]
    char v2;  // [bp-0x330]
    char v3;  // [sp-0x31b]
    char v4;  // [sp-0x31a]
    char v5;  // [sp-0x319]
    struct struct_0 **v6;  // [sp-0x318]
    struct struct_0 **v7;  // [sp-0x318]
    unsigned long long v8;  // [sp-0x310]
    unsigned long long v9;  // [sp-0x308]
    struct_3 *v10;  // [sp-0x2f8]
    char v11;  // [bp-0x2f0], Other Possible Types: unsigned long
    struct struct_0 **v12;  // [sp-0x2e8]
    unsigned long long v13;  // [sp-0x2e0]
    struct struct_0 **v14;  // [sp-0x2d8]
    unsigned long long v15;  // [sp-0x2d0]
    char v16;  // [bp-0x2b0]
    char v17;  // [bp-0x2a0]
    struct struct_0 **v18;  // [bp-0x298]
    char v19;  // [sp-0x290], Other Possible Types: unsigned long long
    struct struct_0 **v20;  // [bp-0x288], Other Possible Types: char, unsigned long long
    char v21;  // [sp-0x280], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x278], Other Possible Types: struct struct_0 **
    char v23;  // [bp-0x270]
    struct struct_0 **v24;  // [sp-0x268]
    struct struct_0 **v26;  // [bp-0x1e8]
    unsigned long long v27;  // [sp-0x1d8]
    char v28[79];  // [sp-0x1c8]
    unsigned long long v29;  // [sp-0x1c0]
    unsigned long long v30;  // [sp-0x1b8]
    unsigned long v31;  // [sp-0x1b0]
    unsigned long long v32;  // [sp-0x1a8]
    struct struct_0 **v33;  // [sp-0x1a0], Other Possible Types: struct struct_2 **, unsigned long long, unsigned long, char
    struct struct_0 **v34;  // [sp-0x1a0], Other Possible Types: struct struct_2 **
    unsigned long long v35;  // [sp-0x198]
    struct struct_0 **v36;  // [sp-0x190]
    unsigned long v37;  // [bp-0x188]
    char v38;  // [bp-0x180]
    char v39;  // [bp-0x170]
    struct struct_0 **v40;  // [sp-0x118]
    struct struct_0 **v41;  // [sp-0x108]
    struct struct_0 **v42;  // [sp-0xf8]
    struct struct_0 **v43;  // [sp-0xe8]
    struct struct_0 **v44;  // [sp-0xd8]
    struct struct_0 **v45;  // [sp-0xc8]
    struct struct_0 **v46;  // [sp-0xb8]
    struct struct_0 **v47;  // [sp-0xa8]
    struct struct_0 **v48;  // [sp-0x98]
    struct struct_0 **v49;  // [sp-0x88]
    struct struct_0 **v50;  // [sp-0x78]
    struct struct_0 **v51;  // [sp-0x68]
    char v52;  // [bp-0x58]
    char v53;  // [bp-0x48]
    struct struct_0 **v54;  // [sp-0x40]
    char v56[79];  // r12
    struct_3 *v57;  // r15
    char v58;  // al
    struct struct_0 **v59;  // rax
    struct struct_0 **v60;  // xmm0
    struct struct_0 **v61;  // xmm1
    unsigned long long v62;  // rdx
    struct struct_0 **v63;  // xmm0
    struct struct_0 **v64;  // xmm1
    struct struct_0 **v65;  // xmm2
    struct struct_0 **v66;  // xmm0
    struct struct_0 **v67;  // xmm1
    struct struct_0 **v68;  // xmm2
    struct struct_0 **v69;  // xmm0
    struct struct_0 **v70;  // xmm1
    struct struct_0 **v71;  // xmm2
    struct struct_0 **v72;  // xmm0
    int v73;  // ymm0
    int v74;  // ymm0
    struct struct_0 **v75;  // xmm1
    int v76;  // ymm1
    int v77;  // ymm1
    struct struct_0 **v78;  // xmm2
    int v79;  // ymm2
    int v80;  // ymm2
    struct struct_0 **v81;  // xmm0
    struct_1 *v82;  // rax
    struct_1 *v83;  // r14
    void* v84;  // r15
    unsigned long long v85;  // rbx
    struct struct_0 **v86;  // rbx
    unsigned long long v87;  // r13
    struct struct_0 **v88;  // xmm0
    int v89;  // ymm0
    struct struct_0 **v90;  // xmm0
    struct struct_0 **v91;  // xmm1
    struct struct_0 **v92;  // xmm2
    struct struct_0 **v93;  // xmm3
    unsigned int v94;  // eax
    char v96[79];  // r12
    struct struct_0 **v98;  // rbx
    struct struct_0 **v99;  // xmm0
    struct struct_0 **v100;  // xmm1
    struct struct_0 **v101;  // xmm2
    struct struct_0 **v102;  // xmm3
    struct struct_0 **v104;  // xmm0
    unsigned int v105;  // r15d
    struct struct_0 **v106;  // xmm0
    int v107;  // ymm3

    v56 = a5;
    v57 = a0;
    v58 = uu_cp::TargetType::determine::h09744ae410e88efc(a2, a3, a4);
    v11 = v58;
    v5 = v58;
    uu_cp::verify_target_type::h7b1c78bb10dff0f5(&v18, a3, a4, &v5);
    v59 = v18;
    if (v59 != 13)
    {
        *((struct struct_0 ***)((char *)&a0->field_28 + 8)) = v24;
        v60 = *((int128_t *)&v19);
        v61 = *((int128_t *)&v21);
        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v23);
        a0->field_18 = v61;
        a0->field_8 = v60;
        a0->field_0 = v59;
        return v57;
    }
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v18);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v18, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v18), v62);
    v63 = *((int128_t *)&v18);
    v64 = *((int128_t *)&v20);
    v65 = *((int128_t *)&v22);
    v45 = v65;
    v44 = v64;
    v43 = v63;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hb9c79e3835ee1500(&v18);
    v66 = *((int128_t *)&v18);
    v67 = *((int128_t *)&v20);
    v68 = *((int128_t *)&v22);
    v48 = v68;
    v47 = v67;
    v46 = v66;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v18);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h07f3e8be27af1af7(&v18, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v18), v62);
    v69 = *((int128_t *)&v18);
    v70 = *((int128_t *)&v20);
    v71 = *((int128_t *)&v22);
    v51 = v71;
    v50 = v70;
    v49 = v69;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v18);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v18, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v18), v62);
    v72 = *((int128_t *)&v18);
    v74 = (((v73 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
    v75 = *((int128_t *)&v20);
    v77 = (((v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
    v78 = *((int128_t *)&v22);
    v80 = (((v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
    v42 = v78;
    v41 = v75;
    v40 = v72;
    if (!a5[73])
    {
        v26 = 0;
        goto LABEL_5034fa;
    }
    if (uu_cp::disk_usage::hdb6cf68ba645e675(a1, a2, a5[70]))
    {
        a0->field_0 = 2;
        a0->field_8 = v62;
        goto LABEL_503c1e;
    }
    indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v12, v62);
    indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v18, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
    core::result::Result$LT$T$C$E$GT$::unwrap::h16219874c036777a(&v33, &v18);
    indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v6, &v12, &v33);
    indicatif::progress_bar::ProgressBar::with_message::h08019f690f508299(&v16, &v6, uucore::util_name::h60d842bf27b05e82(), v62);
    indicatif::progress_bar::ProgressBar::tick::h5b31c589e9d52cbd(&v16);
    v27 = *((long long *)&v17);
    v81 = *((int128_t *)&v16);
    v74 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
    v26 = v81;
LABEL_5034fa:
    v31 = a1;
    v32 = a1 + a2 * 24;
    v82 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v31);
    if (!v82)
    {
        v85 = 13;
        if (!(!v26))
            goto LABEL_503aa9;
    }
    else
    {
        v83 = v82;
        v10 = a0;
        v4 = a5[76];
        v3 = a5[78];
        v84 = 0;
        v11 = v11;
        v30 = a5[68];
        v29 = a5[66];
        *((char *[79])&v28[0]) = a5;
        do
        {
            v86 = v83->field_8;
            v87 = v83->field_10;
            uucore::features::fs::normalize_path::hf9d1827f61a753a1(&v16, v86, v87);
            if (!v4 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v43, &v16))
            {
                std::fs::symlink_metadata::h8589e79b0a107dee(&v18, v86, v87);
                if ((int)v18 != 2)
                {
                    v94 = (int)v24 & 0xf000;
                    *((int *)&v7) = (v94 == 0x4000 ? "directorycannot overwrite directory  with non-directory" : "file");
                    v8 = (v94 == 0x4000) * 5 + 4;
                    v34 = uucore::util_name::h60d842bf27b05e82();
                    v35 = v62;
                    v12 = &v33;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v18 = &g_5b5d08;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v12;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v33 = 1;
                    v33 = v86;
                    v33 = v87;
                    v33 = 1;
                    v12 = &v6;
                    v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v14 = &v33;
                    v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v18 = &g_5b5d28;
                    v19 = 3;
                    v22 = 0;
                    v20 = &v12;
                    v21 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    goto LABEL_503a30;
                }
                else
                {
                    v57 = v10;
                    v57->field_0 = 2;
                    v57->field_8 = v19;
LABEL_503c05:
                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v16);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1c11d9db54c24981(&v26);
                }
LABEL_503c1e:
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v40);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&v49);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&v46);
            }
            uu_cp::construct_dest_path::hfc66a1b24656cf26(&v33, v86, v87, a3, a4, v11, v1, v2);
            if ((int)v33 == 13)
            {
                v9 = *((long long *)&v33);
                v88 = *((int128_t *)&(&v33)[1]);
                v89 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                v6 = v88;
            }
            else
            {
                v90 = *((int128_t *)&v33);
                v89 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                v91 = *((int128_t *)&v33);
                v77 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v92 = *((int128_t *)&v38);
                v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                v93 = *((int128_t *)&v39);
                v107 = v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                v24 = v93;
                v22 = v92;
                v20 = v91;
                v18 = v90;
                uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h5a73338177addea2(&v6, a3, a4, &v18);
            }
            std::fs::metadata::hcf81ab27d993cd47(&v18, &v6);
            if ((int)v18 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v18);
            }
            else
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v18);
                std::fs::symlink_metadata::h087c360320e6b054(&v18, &v6);
                if ((int)v18 == 2)
                    goto LABEL_503b16;
                if (!(((int)(&v24)[1] & 0xf000) == 0xa000))
                    goto LABEL_5038bb;
            }
            std::fs::metadata::hcf81ab27d993cd47(&v18, v83);
            if ((int)v18 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v18);
                goto LABEL_5038b4;
            }
            ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v18);
            std::fs::symlink_metadata::h087c360320e6b054(&v18, v83);
            if ((int)v18 == 2)
            {
LABEL_503b16:
                v57 = v10;
                v57->field_0 = 2;
                v57->field_8 = v19;
                goto LABEL_503bfb;
            }
            if (((int)(&v24)[1] & 0xf000) == 0xa000)
                goto LABEL_5038bb;
LABEL_5038b4:
            if (!(v3 == 1))
                goto LABEL_5038dd;
LABEL_5038bb:
            if (v4 != 2 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v40, &v6))
            {
                *((int128_t *)&v54) = *((int128_t *)&(&v6)[1]);
                v12 = v86;
                v13 = v87;
                v34 = &v54;
                v35 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v36 = &v12;
                v37 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v18 = &g_5b5d58;
                v19 = 3;
                v22 = 0;
                v20 = &v33;
                v21 = 2;
                ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v52, &v18);
                v57 = v10;
                v57->field_18 = *((long long *)&v53);
                *((int128_t *)&v57->field_8) = *((int128_t *)&v52);
                v57->field_0 = 4;
LABEL_503bfb:
                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v6);
                goto LABEL_503c05;
            }
LABEL_5038dd:
            uu_cp::copy_source::ha83fca4ba2cc8af7(&v33, &v26, v86, v87, a3, a4, v0, v56, &v46, &v40, &v49);
            v98 = v33;
            if (v98 == 13)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&v18, &v6);
                v14 = v20;
                v104 = *((int128_t *)&v18);
                v74 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                v12 = v104;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v40, &v12);
            }
            else
            {
                v99 = *((int128_t *)&v33);
                v74 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                v100 = *((int128_t *)&v33);
                v77 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                v101 = *((int128_t *)&v38);
                v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                v102 = *((int128_t *)&v39);
                v107 = v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                v24 = v102;
                v22 = v101;
                v20 = v100;
                v18 = v99;
                uu_cp::show_error_if_needed::h934143ac50374c6e(&v18);
                ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v18);
                if ((char)(&v18)[1])
                    v105 = 1;
                else
                    v105 = (unsigned int)v84;
                v84 = ((unsigned int)v18 != 8 ? v105 : 1);
            }
            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v6);
            *((char *[79])&v96[0]) = v28;
            if ((unsigned int)v98 == 13)
            {
                *((char *[79])&v28[0]) = v28;
                if ((unsigned int)v33 != 13)
                {
                    ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v33);
                    *((char *[79])&v28[0]) = v28;
                }
            }
LABEL_503a30:
            v20 = *((long long *)&v17);
            v106 = *((int128_t *)&v16);
            v74 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
            v18 = v106;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v43, &v18);
            v83 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v31);
        } while (v83);
        v85 = (!((char)v84 & 1)) * 8 + 5;
        v57 = v10;
        if (v26)
        {
LABEL_503aa9:
            v20 = v27;
            *((int128_t *)&v18) = *((int128_t *)&v26);
            indicatif::progress_bar::ProgressBar::finish::h204a36c2f269e760(&v18);
            ::0x4fc880::core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h2d075ec2e7438ac9(&v18);
        }
    }
    v57->field_0 = v85;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v40);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&v49);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&v46);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&v43);
    return v57;
}
