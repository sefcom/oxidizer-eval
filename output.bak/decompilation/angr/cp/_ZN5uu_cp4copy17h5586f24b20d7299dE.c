long long uu_cp::copy::h5586f24b20d7299d(struct_1 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[79])
{
    char v0;  // [bp-0x358]
    char v1;  // [bp-0x338]
    char v2;  // [bp-0x330]
    char v3;  // [sp-0x31b]
    char v4;  // [sp-0x31a]
    char v5;  // [sp-0x319]
    struct struct_0 **v6;  // [bp-0x318]
    unsigned long long v7;  // [sp-0x310]
    unsigned long long v8;  // [sp-0x308]
    struct_1 *v9;  // [sp-0x2f8]
    char v10;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [bp-0x2e8]
    unsigned long long v12;  // [sp-0x2e0]
    struct struct_0 **v13;  // [sp-0x2d8]
    unsigned long long v14;  // [sp-0x2d0]
    char v15;  // [bp-0x2b0]
    char v16;  // [bp-0x2a0]
    struct struct_0 **v17;  // [bp-0x298], Other Possible Types: unsigned long, unsigned long long
    char v18;  // [bp-0x290], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [bp-0x288], Other Possible Types: char, unsigned long long
    char v20;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x278], Other Possible Types: struct struct_0 **
    char v22;  // [bp-0x270]
    int v23;  // [sp-0x268], Other Possible Types: struct struct_0 **
    char v24;  // [bp-0x260]
    struct struct_0 **v25;  // [bp-0x1e8]
    unsigned long long v26;  // [sp-0x1d8]
    unsigned long long v27;  // [sp-0x1c0]
    unsigned long long v28;  // [sp-0x1b8]
    unsigned long v29;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0x1a8]
    struct struct_2 **v31;  // [bp-0x1a0], Other Possible Types: struct struct_0 **
    struct struct_0 **v32;  // [bp-0x198], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v33;  // [bp-0x190], Other Possible Types: char, unsigned long long
    unsigned long v34;  // [bp-0x188], Other Possible Types: char
    char v35;  // [bp-0x180]
    char v36;  // [bp-0x170]
    struct struct_0 **v37;  // [sp-0x118]
    struct struct_0 **v38;  // [sp-0x108]
    struct struct_0 **v39;  // [sp-0xf8]
    struct struct_0 **v40;  // [sp-0xe8]
    struct struct_0 **v41;  // [sp-0xd8]
    struct struct_0 **v42;  // [sp-0xc8]
    struct struct_0 **v43;  // [sp-0xb8]
    struct struct_0 **v44;  // [sp-0xa8]
    struct struct_0 **v45;  // [sp-0x98]
    struct struct_0 **v46;  // [sp-0x88]
    struct struct_0 **v47;  // [sp-0x78]
    struct struct_0 **v48;  // [sp-0x68]
    char v49;  // [bp-0x58]
    char v50;  // [bp-0x48]
    struct struct_0 **v51;  // [sp-0x40]
    struct_1 *v53;  // r15
    char v54;  // al
    unsigned long long v55;  // rax
    struct struct_0 **v56;  // xmm0
    struct struct_0 **v57;  // xmm1
    unsigned long long v58;  // rdx
    struct struct_0 **v59;  // xmm0
    struct struct_0 **v60;  // xmm1
    struct struct_0 **v61;  // xmm2
    struct struct_0 **v62;  // xmm0
    struct struct_0 **v63;  // xmm1
    struct struct_0 **v64;  // xmm2
    struct struct_0 **v65;  // xmm0
    struct struct_0 **v66;  // xmm1
    struct struct_0 **v67;  // xmm2
    struct struct_0 **v68;  // xmm0
    int v69;  // ymm0
    int v70;  // ymm0
    struct struct_0 **v71;  // xmm1
    int v72;  // ymm1
    int v73;  // ymm1
    struct struct_0 **v74;  // xmm2
    int v75;  // ymm2
    int v76;  // ymm2
    struct struct_0 **v77;  // xmm0
    struct_3 *v78;  // rax
    void* v79;  // r15
    char v80[79];  // 4096
    unsigned long long v81;  // rbx
    char v82[79];  // r12
    int v83;  // ymm3
    struct struct_0 **v84;  // rbx
    unsigned long long v85;  // r13
    struct struct_0 **v86;  // xmm0
    int v87;  // ymm0
    struct struct_0 **v88;  // xmm0
    struct struct_0 **v89;  // xmm1
    struct struct_0 **v90;  // xmm2
    struct struct_0 **v91;  // xmm3
    unsigned int v92;  // eax
    struct struct_0 **v96;  // rbx
    struct struct_0 **v97;  // xmm0
    int v98;  // ymm0
    struct struct_0 **v99;  // xmm1
    struct struct_0 **v100;  // xmm2
    struct struct_0 **v101;  // xmm3
    struct struct_0 **v103;  // xmm0
    unsigned int v104;  // r15d
    int v108;  // ymm0
    struct struct_0 **v109;  // xmm0

    v53 = a0;
    v54 = uu_cp::TargetType::determine::h09744ae410e88efc(a2, a3, a4);
    v10 = v54;
    v5 = v54;
    uu_cp::verify_target_type::h7b1c78bb10dff0f5(&v17, a3, a4, &v5);
    v55 = v17;
    if (v55 != 13)
    {
        *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v24);
        v56 = *((int128_t *)&v18);
        v57 = *((int128_t *)&v20);
        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v22);
        a0->field_18 = v57;
        a0->field_8 = v56;
        a0->field_0 = v55;
        return v53;
    }
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v17);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v17, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v17), v58);
    v59 = *((int128_t *)&v17);
    v60 = *((int128_t *)&v19);
    v61 = *((int128_t *)&v21);
    v42 = v61;
    v41 = v60;
    v40 = v59;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hb9c79e3835ee1500(&v17);
    v62 = *((int128_t *)&v17);
    v63 = *((int128_t *)&v19);
    v64 = *((int128_t *)&v21);
    v45 = v64;
    v44 = v63;
    v43 = v62;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v17);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h07f3e8be27af1af7(&v17, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v17), v58);
    v65 = *((int128_t *)&v17);
    v66 = *((int128_t *)&v19);
    v67 = *((int128_t *)&v21);
    v48 = v67;
    v47 = v66;
    v46 = v65;
    ::0x4fbcf0::std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&v17);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(&v17, a2, ::0x4fe040::core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&v17), v58);
    v68 = *((int128_t *)&v17);
    v70 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
    v71 = *((int128_t *)&v19);
    v73 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
    v74 = *((int128_t *)&v21);
    v76 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
    v39 = v74;
    v38 = v71;
    v37 = v68;
    if (!a5[73])
    {
        v25 = 0;
        goto LABEL_5034fa;
    }
    if (uu_cp::disk_usage::hdb6cf68ba645e675(a1, a2, a5[70]))
    {
        a0->field_0 = 2;
        a0->field_8 = v58;
        goto LABEL_503c1e;
    }
    indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&v11, v58);
    indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&v17, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
    core::result::Result$LT$T$C$E$GT$::unwrap::h16219874c036777a(&v31, &v17);
    indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&v6, &v11, &v31);
    indicatif::progress_bar::ProgressBar::with_message::h08019f690f508299(&v15, &v6, uucore::util_name::h60d842bf27b05e82(), v58);
    indicatif::progress_bar::ProgressBar::tick::h5b31c589e9d52cbd(&v15);
    v26 = *((long long *)&v16);
    v77 = *((int128_t *)&v15);
    v70 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v25 = v77;
LABEL_5034fa:
    v29 = a1;
    v30 = a1 + a2 * 24;
    v78 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v29);
    if (!v78)
    {
        v81 = 13;
        if (!(!v25))
            goto LABEL_503aa9;
    }
    else
    {
        v9 = a0;
        v4 = a5[76];
        v3 = a5[78];
        v79 = 0;
        v10 = v10;
        v28 = a5[68];
        v27 = a5[66];
        do
        {
            v82 = v80;
            v84 = v78->field_8;
            v85 = v78->field_10;
            uucore::features::fs::normalize_path::hf9d1827f61a753a1(&v15, v84, v85);
            if (!v4 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v40, &v15))
            {
                std::fs::symlink_metadata::h8589e79b0a107dee(&v17, v84, v85);
                if ((int)v17 != 2)
                {
                    v92 = (int)(&v23)[8] & 0xf000;
                    *((int *)&v6) = (v92 == 0x4000 ? "directorycannot overwrite directory  with non-directory" : "file");
                    v7 = (-0x100 | v92 == 0x4000) * 5 + 4;
                    v31 = uucore::util_name::h60d842bf27b05e82();
                    v32 = v58;
                    v11 = &v31;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v17 = &g_5b5d08;
                    v18 = 2;
                    v21 = 0;
                    v19 = &v11;
                    v20 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                    v31 = 1;
                    v32 = v84;
                    v33 = v85;
                    v34 = 1;
                    v11 = &v6;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v13 = &v31;
                    v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v17 = &g_5b5d28;
                    v18 = 3;
                    v21 = 0;
                    v19 = &v11;
                    v20 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                    goto LABEL_503a30;
                }
                else
                {
                    v53 = v9;
                    v53->field_0 = 2;
                    v53->field_8 = v18;
LABEL_503c05:
                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1c11d9db54c24981(&v25);
                }
LABEL_503c1e:
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de();
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10();
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9();
            }
            uu_cp::construct_dest_path::hfc66a1b24656cf26(&v31, v84, v85, a3, a4, v10, v1, v2);
            if ((int)v31 == 13)
            {
                v8 = *((long long *)&v34);
                v86 = *((int128_t *)&v32);
                v87 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v6 = v86;
            }
            else
            {
                v88 = *((int128_t *)&v31);
                v87 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                v89 = *((int128_t *)&v33);
                v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                v90 = *((int128_t *)&v35);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                v91 = *((int128_t *)&v36);
                v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v23 = v91;
                v21 = v90;
                v19 = v89;
                v17 = v88;
                uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h5a73338177addea2(&v6, a3, a4, &v17);
            }
            std::fs::metadata::hcf81ab27d993cd47(&v17, &v6);
            if ((int)v17 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v17);
            }
            else
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v17);
                std::fs::symlink_metadata::h087c360320e6b054(&v17, &v6);
                if ((int)v17 == 2)
                    goto LABEL_503b16;
                if (!(!v25))
                    goto LABEL_5038bb;
            }
            std::fs::metadata::hcf81ab27d993cd47(&v17, v78);
            if ((int)v17 == 2)
            {
                ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v17);
                goto LABEL_5038b4;
            }
            ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v17);
            std::fs::symlink_metadata::h087c360320e6b054(&v17, v78);
            if ((int)v17 == 2)
            {
LABEL_503b16:
                v53 = v9;
                v53->field_0 = 2;
                v53->field_8 = v18;
                goto LABEL_503bfb;
            }
            if (((int)(&v23)[1] & 0xf000) == 0xa000)
                goto LABEL_5038bb;
LABEL_5038b4:
            if (!(!v25))
                goto LABEL_5038dd;
LABEL_5038bb:
            if (v4 != 2 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&v37, &v6))
            {
                *((int128_t *)&v51) = *((int128_t *)&(&v6)[1]);
                v11 = v84;
                v12 = v85;
                v31 = &v51;
                v32 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v33 = &v11;
                v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v17 = &g_5b5d58;
                v18 = 3;
                v21 = 0;
                v19 = &v31;
                v20 = 2;
                ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
                v53 = v9;
                v53->field_18 = *((long long *)&v50);
                *((int128_t *)&v53->field_8) = *((int128_t *)&v49);
                v53->field_0 = 4;
LABEL_503bfb:
                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
                goto LABEL_503c05;
            }
LABEL_5038dd:
            uu_cp::copy_source::ha83fca4ba2cc8af7(&v31, &v25, v84, v85, a3, a4, v0, v82, &v43, &v37, &v46);
            v96 = v31;
            if (v96 == 13)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&v17, &v6);
                v13 = v19;
                v103 = *((int128_t *)&v17);
                v98 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                v11 = v103;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v37, &v11);
            }
            else
            {
                v97 = *((int128_t *)&v31);
                v98 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                v99 = *((int128_t *)&(&v32)[1]);
                v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                v100 = *((int128_t *)&v35);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                v101 = *((int128_t *)&v36);
                v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                v23 = v101;
                v21 = v100;
                v19 = v99;
                v17 = v97;
                uu_cp::show_error_if_needed::h934143ac50374c6e(&v17);
                ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v17);
                if (!(char)(&v17)[1])
                    v104 = (unsigned int)v79;
                else
                    v104 = 1;
                v79 = ((unsigned int)v17 != 8 ? v104 : 1);
            }
            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
            if ((unsigned int)v96 == 13 && (unsigned int)v31 != 13)
                ::0x4fc330::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&v31);
LABEL_503a30:
            v19 = *((long long *)&v16);
            v109 = *((int128_t *)&v15);
            v70 = v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
            v17 = v109;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&v40, &v17);
            v78 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&v29);
        } while (v78);
        v81 = (-0x100 | !((char)v79 & 1)) * 8 + 5;
        v53 = v9;
        if (v25)
        {
LABEL_503aa9:
            v19 = v26;
            *((int128_t *)&v17) = *((int128_t *)&v25);
            indicatif::progress_bar::ProgressBar::finish::h204a36c2f269e760(&v17);
            ::0x4fc880::core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h2d075ec2e7438ac9(&v17);
        }
    }
    v53->field_0 = v81;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de();
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10();
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9();
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de();
    return v53;
}
