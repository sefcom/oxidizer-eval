long long uu_cp::copy::h8367588ac9094380(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, char a5[79])
{
    char v0;  // [bp-0x358]
    char v1;  // [bp-0x338]
    char v2;  // [bp-0x330]
    char v3;  // [bp-0x328]
    char v4;  // [bp-0x320]
    char v5;  // [sp-0x31b]
    char v6;  // [sp-0x31a]
    char v7;  // [sp-0x319]
    int v8;  // [bp-0x318], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [sp-0x310]
    unsigned long long v10;  // [sp-0x308]
    struct_0 *v11;  // [sp-0x2f8]
    char v12;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v13;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [sp-0x2e0]
    unsigned long long v15;  // [sp-0x2d8]
    unsigned long long v16;  // [sp-0x2d0]
    char v17;  // [bp-0x2b0]
    char v18;  // [bp-0x2a0]
    int v19;  // [bp-0x298], Other Possible Types: char, unsigned long, unsigned long long
    char v20;  // [bp-0x290], Other Possible Types: unsigned long long
    int v21;  // [bp-0x288], Other Possible Types: char, unsigned long long
    char v22;  // [bp-0x280], Other Possible Types: unsigned long long
    int v23;  // [bp-0x278], Other Possible Types: void*, char
    char v24;  // [bp-0x270]
    int v25;  // [sp-0x268]
    int v26;  // [bp-0x260], Other Possible Types: char
    void* v27;  // [bp-0x1e8]
    unsigned long long v28;  // [sp-0x1d8]
    unsigned long long v29;  // [sp-0x1c0]
    unsigned long long v30;  // [sp-0x1b8]
    unsigned long v31;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x1a8]
    char v33;  // [bp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    char v34;  // [bp-0x198], Other Possible Types: unsigned long long
    char v35;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long v36;  // [bp-0x188], Other Possible Types: char
    char v37;  // [bp-0x180]
    char v38;  // [bp-0x170]
    int v39;  // [sp-0x118]
    int v40;  // [sp-0x108]
    int v41;  // [sp-0xf8]
    int v42;  // [sp-0xe8]
    int v43;  // [sp-0xd8]
    int v44;  // [sp-0xc8]
    int v45;  // [sp-0xb8]
    int v46;  // [sp-0xa8]
    int v47;  // [sp-0x98]
    int v48;  // [sp-0x88]
    int v49;  // [sp-0x78]
    int v50;  // [sp-0x68]
    char v51;  // [bp-0x58]
    char v52;  // [bp-0x48]
    int v53;  // [sp-0x40]
    struct_0 *v55;  // r15
    char v56;  // al
    unsigned long long v57;  // rax
    unsigned long v58;  // rsi
    unsigned long v59;  // rdx
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm0
    int v69;  // xmm1
    int v70;  // xmm2
    int v71;  // xmm0
    int v72;  // ymm0
    int v73;  // ymm0
    int v74;  // xmm1
    int v75;  // ymm1
    int v76;  // ymm1
    int v77;  // xmm2
    int v78;  // ymm2
    int v79;  // ymm2
    int v80;  // xmm0
    unsigned long long v81[3];  // rax
    void* v82;  // r15
    char v83[79];  // 4096
    unsigned long long v84;  // rbx
    char v85[79];  // r12
    int v86;  // ymm3
    unsigned long long v87;  // rbx
    unsigned long long v88;  // r13
    int v89;  // xmm0
    int v90;  // ymm0
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm2
    int v94;  // xmm3
    unsigned long long v95;  // r8
    unsigned long long v96;  // r9
    unsigned int v97;  // eax
    unsigned long long v99;  // rdx
    unsigned long long v102;  // rbx
    int v103;  // xmm0
    int v104;  // ymm0
    int v105;  // xmm1
    int v106;  // xmm2
    int v107;  // xmm3
    unsigned long long v109;  // rcx
    int v110;  // xmm0
    unsigned int v111;  // r15d
    int v115;  // ymm0
    int v116;  // xmm0
    unsigned long long v117;  // rsi
    unsigned long long v118;  // rdx

    v55 = a0;
    v56 = uu_cp::TargetType::determine::h3cb1137767b9e3b1(a2, a3, a4);
    v12 = v56;
    v7 = v56;
    uu_cp::verify_target_type::h57ea1eba172aef72(&v19, a3, a4, &v7);
    v57 = v19;
    if (v57 != 13)
    {
        *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v26);
        v60 = *((int128_t *)&v20);
        v61 = *((int128_t *)&v22);
        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v24);
        *((void*)&a0->field_18) = v61;
        *((void*)&a0->field_8) = v60;
        a0->field_0 = v57;
        return v55;
    }
    ::0x4fb3c0::std::thread::local::LocalKey$LT$T$GT$::try_with::h30a416f2e44bab97(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h9503e601711450ab(&v19, a2, ::0x4fd710::core::result::Result$LT$T$C$E$GT$::expect::hfc26fd3ca9b92518(&v19), v59);
    v62 = *((int128_t *)&v19);
    v63 = *((int128_t *)&v21);
    v64 = *((int128_t *)&v23);
    v44 = v64;
    v43 = v63;
    v42 = v62;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h21698c1964af26c4(&v19, v58, v59);
    v65 = *((int128_t *)&v19);
    v66 = *((int128_t *)&v21);
    v67 = *((int128_t *)&v23);
    v47 = v67;
    v46 = v66;
    v45 = v65;
    ::0x4fb3c0::std::thread::local::LocalKey$LT$T$GT$::try_with::h30a416f2e44bab97(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hcfad0eb693bc639c(&v19, a2, ::0x4fd710::core::result::Result$LT$T$C$E$GT$::expect::hfc26fd3ca9b92518(&v19), v59);
    v68 = *((int128_t *)&v19);
    v69 = *((int128_t *)&v21);
    v70 = *((int128_t *)&v23);
    v50 = v70;
    v49 = v69;
    v48 = v68;
    ::0x4fb3c0::std::thread::local::LocalKey$LT$T$GT$::try_with::h30a416f2e44bab97(&v19, v58, v59);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h9503e601711450ab(&v19, a2, ::0x4fd710::core::result::Result$LT$T$C$E$GT$::expect::hfc26fd3ca9b92518(&v19), v59);
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
        goto LABEL_502b7a;
    }
    if (uu_cp::disk_usage::h06b3a1cbf58a6658(a1, a2, a5[70]))
    {
        a0->field_0 = 2;
        a0->field_8 = v59;
        goto LABEL_50329e;
    }
    indicatif::progress_bar::ProgressBar::new::haefb4e1b56f8434e(&v13, v59, v59);
    indicatif::style::ProgressStyle::with_template::hf3f5e5e18e71351f(&v19, "{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}", 64);
    core::result::Result$LT$T$C$E$GT$::unwrap::h702072c536ec3467(&v33, &v19);
    indicatif::progress_bar::ProgressBar::with_style::hb9e195dcb73dee57(&v8, &v13, &v33);
    indicatif::progress_bar::ProgressBar::with_message::he9c9ac178ce5a152(&v17, &v8, uucore::util_name::h412db5e565a079f3(), v59);
    indicatif::progress_bar::ProgressBar::tick::hb73ba4bda2824c21(&v17, v58, v59);
    v28 = *((long long *)&v18);
    v80 = *((int128_t *)&v17);
    v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
    *((void*)&v27) = v80;
LABEL_502b7a:
    v31 = a1;
    v32 = a1 + a2 * 24;
    v81 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3d4fd1380a26239b(&v31);
    if (!v81)
    {
        v84 = 13;
        if (!(!v27))
            goto LABEL_503129;
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
            v87 = v81[1];
            v88 = v81[2];
            uucore::features::fs::normalize_path::hcda0da6e5738e455(&v17, v87, v88);
            if (!v6 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8c48cc83a8372a1(&v42, &v17))
            {
                std::fs::symlink_metadata::ha8b9885f9a62ee23(&v19, v87, v88);
                if ((int)v19 != 2)
                {
                    v97 = (int)v26 & 0xf000;
                    *((int *)&v8) = (v97 == 0x4000 ? "directory: warning: source   specified more than once\nwill not overwrite just-created ''" : "file");
                    v9 = (-0x100 | v97 == 0x4000) * 5 + 4;
                    v33 = uucore::util_name::h412db5e565a079f3();
                    v34 = v59;
                    v13 = &v33;
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
                    v19 = &g_5b5668;
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
                    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
                    v15 = &v33;
                    v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v19 = &g_5b5688;
                    v20 = 3;
                    v23 = 0;
                    v21 = &v13;
                    v22 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v58, v59);
                    goto LABEL_5030b0;
                }
                else
                {
                    v55 = v11;
                    v55->field_0 = 2;
                    v55->field_8 = v20;
LABEL_503285:
                    ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v17);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::hf62580e9d3e2c4e5(&v27, v58, v59);
                }
LABEL_50329e:
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h6ac29797bac587f5(&v39);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::h96cf13db6f1481ed(&v48);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h5c19dfea24a08b46(&v45);
            }
            uu_cp::construct_dest_path::h4514754e39be2e9a(&v33, v87, v88, a3, a4, v12, v1, v2);
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
                v92 = *((int128_t *)&v35);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                v93 = *((int128_t *)&v37);
                v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                v94 = *((int128_t *)&v38);
                v86 = v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                v25 = v94;
                v23 = v93;
                v21 = v92;
                v19 = v91;
                uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h53ea8deede8c9f0c(&v8, a3, a4, &v19, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
            }
            std::fs::metadata::hf5abd8c4fecf91b8(&v19, &v8, v99);
            if ((int)v19 == 2)
            {
                ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v19);
            }
            else
            {
                ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v19);
                std::fs::symlink_metadata::h75dcaa3d341f9ae5(&v19, &v8, v59);
                if ((int)v19 == 2)
                    goto LABEL_503196;
                if (!(!v27))
                    goto LABEL_502f3b;
            }
            std::fs::metadata::hf5abd8c4fecf91b8(&v19, v81, v59);
            if ((int)v19 == 2)
            {
                ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v19);
                goto LABEL_502f34;
            }
            ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v19);
            std::fs::symlink_metadata::h75dcaa3d341f9ae5(&v19, v81, v59);
            if ((int)v19 == 2)
            {
LABEL_503196:
                v55 = v11;
                v55->field_0 = 2;
                v55->field_8 = v20;
                goto LABEL_50327b;
            }
            if (((int)(&v25)[8] & 0xf000) == 0xa000)
                goto LABEL_502f3b;
LABEL_502f34:
            if (!(!v27))
                goto LABEL_502f5d;
LABEL_502f3b:
            if (v6 != 2 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8c48cc83a8372a1(&v39, &v8))
            {
                *((int128_t *)&v53) = (int128_t)(&v8)[8];
                v13 = v87;
                v14 = v88;
                v33 = &v53;
                v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v35 = &v13;
                v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v19 = &g_5b56b8;
                v20 = 3;
                v23 = 0;
                v21 = &v33;
                v22 = 2;
                ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v51, &v19);
                v55 = v11;
                v55->field_18 = *((long long *)&v52);
                *((int128_t *)&v55->field_8) = *((int128_t *)&v51);
                v55->field_0 = 4;
LABEL_50327b:
                ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
                goto LABEL_503285;
            }
LABEL_502f5d:
            uu_cp::copy_source::h7ec114b81884fd8f(&v33, &v27, v87, v88, a3, a4, v0, v85, &v45, &v39, &v48);
            v102 = v33;
            if (v102 == 13)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfea6a62ff9bdef3c(&v19, &v8);
                v15 = v21;
                v110 = *((int128_t *)&v19);
                v104 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                v13 = v110;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h42f501e1b171b032(&v39, &v13);
            }
            else
            {
                v103 = *((int128_t *)&v33);
                v104 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                v105 = *((int128_t *)&(&v33)[2]);
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
                v106 = *((int128_t *)&v37);
                v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
                v107 = *((int128_t *)&v38);
                v86 = v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                v25 = v107;
                v23 = v106;
                v21 = v105;
                *((void*)&v19) = v103;
                uu_cp::show_error_if_needed::h93135378e483dbed(&v19, v58, v59);
                ::0x4fba00::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h519777060ae72029(&v19, v58, v59, v109, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
                if (!(char)(&v19)[1])
                    v111 = (unsigned int)v82;
                else
                    v111 = 1;
                v82 = ((unsigned int)v19 != 8 ? v111 : 1);
            }
            ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
            if ((unsigned int)v102 == 13 && (unsigned int)v33 != 13)
                ::0x4fba00::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h519777060ae72029(&v33, v58, v59, v109, v95, v96, *((long long *)&v3), *((long long *)&v4), v8);
LABEL_5030b0:
            v21 = *((long long *)&v18);
            v116 = *((int128_t *)&v17);
            v73 = v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
            v19 = v116;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h42f501e1b171b032(&v42, &v19);
            v81 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3d4fd1380a26239b(&v31);
        } while (v81);
        v84 = (-0x100 | !((char)v82 & 1)) * 8 + 5;
        v55 = v11;
        if (v27)
        {
LABEL_503129:
            v21 = v28;
            *((int128_t *)&v19) = *((int128_t *)&v27);
            indicatif::progress_bar::ProgressBar::finish::h6408da8e71eca71c(&v19, v117, v118);
            ::0x4fbf50::core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h2adcf2ffd6d7e678(&v19, v58, v59);
        }
    }
    v55->field_0 = v84;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h6ac29797bac587f5(&v39);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::h96cf13db6f1481ed(&v48);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h5c19dfea24a08b46(&v45);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h6ac29797bac587f5(&v42);
    return v55;
}
