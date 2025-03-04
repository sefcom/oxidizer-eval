long long uu_cp::copy_file::h3a721c0b700148ba(struct_0 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, char *a4, unsigned long long a5, struct_1 *a6)
{
    unsigned long long v0;  // [sp-0x410]
    struct struct_2 **v1;  // [sp-0x408]
    unsigned long long v2;  // [sp-0x400]
    char v3;  // [bp-0x3f8]
    char v4;  // [sp-0x3d9]
    unsigned long v5;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct_0 *v6;  // [bp-0x3d0]
    struct_0 *v7;  // [sp-0x3d0]
    char *v8;  // [bp-0x3c8]
    unsigned long long v9;  // [sp-0x3b8], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x3a8]
    char v12;  // [sp-0x3a0]
    unsigned int v13;  // [sp-0x394]
    char *v14;  // [sp-0x390], Other Possible Types: unsigned long
    unsigned long v15;  // [sp-0x390], Other Possible Types: unsigned long long
    struct struct_2 **v16;  // [bp-0x388], Other Possible Types: char, unsigned long
    unsigned long long v17;  // [sp-0x388], Other Possible Types: unsigned long
    struct struct_2 **v18;  // [sp-0x380]
    unsigned long v19;  // [sp-0x378], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x370], Other Possible Types: unsigned long
    char v21;  // [bp-0x368]
    char v22;  // [bp-0x358]
    char v23;  // [bp-0x348]
    char v24;  // [bp-0x338]
    char v25;  // [bp-0x328]
    char v26;  // [bp-0x318]
    char v27;  // [bp-0x308]
    char *v28;  // [sp-0x2d8]
    unsigned long long v29;  // [sp-0x2c8]
    unsigned long v30;  // [sp-0x2c0]
    char *v31;  // [bp-0x2b8]
    char *v32;  // [bp-0x2b8]
    struct struct_2 **v33;  // [bp-0x2b8]
    unsigned long long v34;  // [sp-0x2b0]
    struct struct_2 **v35;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x2a0]
    void* v37;  // [sp-0x298]
    char *v38;  // [bp-0x218]
    char *v39;  // [sp-0x210], Other Possible Types: unsigned long long
    char *v40;  // [sp-0x208], Other Possible Types: struct struct_2 **, unsigned long, unsigned long long
    char v41;  // [bp-0x200], Other Possible Types: unsigned long
    char *v42;  // [sp-0x1f8]
    char *v43;  // [sp-0x1e8]
    char *v44;  // [sp-0x1d8]
    char *v45;  // [sp-0x1c8]
    char *v46;  // [sp-0x1b8]
    char *v47;  // [sp-0x1a8]
    char *v48;  // [sp-0x198]
    char v49;  // [bp-0x160]
    char v50;  // [bp-0x150]
    char *v51;  // [sp-0x148]
    unsigned long long v52;  // [sp-0x140]
    char *v53;  // [sp-0x138]
    char *v54;  // [sp-0x128]
    char *v55;  // [sp-0x118]
    char *v56;  // [sp-0x108]
    char *v57;  // [sp-0xf8]
    char *v58;  // [sp-0xe8]
    char *v59;  // [sp-0xd8]
    unsigned long v60;  // [sp-0xc0]
    char v61;  // [bp-0xb8]
    char v62;  // [bp+0x10]
    char v63;  // [bp+0x18]
    char v64;  // [bp+0x20]
    char v65;  // [bp+0x28]
    unsigned long long v66;  // r15
    struct_1 *v67;  // rbx
    struct_0 *v68;  // r12
    struct_1 *v70;  // rbx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    struct_1 *v77;  // rbx
    unsigned long long v80;  // rax
    unsigned long long v83;  // rax
    char v84;  // bl
    char v85;  // al
    struct_0 *v86;  // r15b
    unsigned long long v87;  // r13
    unsigned long long v88;  // r15
    unsigned long long v89;  // rax
    char *v90;  // xmm0
    char *v91;  // xmm1
    struct_0 *v92;  // cl
    unsigned long long v93;  // rbx
    unsigned long long v94;  // r15
    unsigned int v95;  // ecx
    unsigned int v97;  // ecx
    unsigned long long v98;  // rax
    unsigned long v99;  // r13
    unsigned long long v100;  // rax
    unsigned int v101;  // ecx
    unsigned long long v102;  // rcx
    char *v103;  // r15
    unsigned long long v104;  // rbx
    unsigned long long v105;  // rax
    unsigned long long v106;  // rax
    unsigned int v107;  // r15d
    char *v108;  // xmm0
    char *v109;  // xmm1
    unsigned long long v110;  // rax
    char v111[12];  // rbx
    char *v112;  // xmm0
    char *v113;  // xmm1
    unsigned long long v114;  // rax
    char *v115;  // xmm0
    char *v116;  // xmm1
    unsigned long long v117;  // rbx

    v66 = a5;
    *((char *)&v8) = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3);
    v67 = a6;
    v4 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a4, a5);
    if (!v4)
    {
LABEL_50758c:
        v68 = a0;
        if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, a3, a4, v66))
        {
            std::path::Path::components::h4f3217acf0fc8653(&v38, a2, a3);
            std::path::Path::components::h4f3217acf0fc8653(&v15, a4, v66);
            v77 = a6;
            if (!::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v38, &v15) && !a6->field_3c && a6->field_3d == 1)
            {
                v80 = std::fs::remove_file::h38159f05e7b4dc34(a4, v66);
                if (v80)
                {
                    v68->field_0 = 2;
                    *((unsigned long long *)&v68->field_8) = v80;
                    return v68;
                }
            }
        }
        v83 = uu_cp::file_or_link_exists::h0326283b1ad33442(a4, v66);
        v84 = v77->field_3e;
        if (!(char)v83)
        {
            v85 = v84;
            goto LABEL_5076a5;
        }
        if (v84 && (v85 = (char)(v83 & 0xffffffffffffff00 | 1), !(!a6->field_3c) || !(a6->field_3d == 1)))
        {
LABEL_5076a5:
            if ((v85 & (char)v8) && (a6->field_3c || a6->field_3d != 1))
            {
                v38 = 1;
                v39 = a4;
                v40 = v66;
                v41 = 1;
                v33 = &v38;
                v34 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v75 = &g_5b6038;
                goto LABEL_5078fe;
            }
            else
            {
                if (a6->field_48)
                    uu_cp::print_verbose_output::h1215961a97776bc3(a6->field_44, a1, a2, a3, a4, v66);
                v5 = v66;
                if (!a6->field_38)
                {
                    v93 = a6->field_40;
                    v94 = a6->field_41;
                    goto LABEL_50783a;
                }
                else
                {
                    v93 = a6->field_40;
                    v94 = a6->field_41;
                    v95 = (!v65 ? (v93 & 255 & 255) : (v94 & 255 & 255));
                    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a2, v11, v97);
                    v9 = 1;
                    v10 = a2;
                    v11 = a3;
                    v12 = 1;
                    v51 = &v9;
                    v52 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v31 = &g_5b5f08;
                    v34 = 1;
                    v37 = 0;
                    v35 = &v51;
                    v36 = 1;
                    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v49, &v31);
                    v35 = *((long long *)&v50);
                    *((int128_t *)&v32) = *((int128_t *)&v49);
                    if (v14)
                    {
                        *((long long *)((char *)&v68->field_c + 8)) = *((long long *)&v50);
                        *((int128_t *)&v68->field_8) = *((int128_t *)&v49);
                        v68->field_0 = 3;
                        v68->field_18 = v16;
                        return v68;
                    }
                    v6 = v68;
                    v29 = v19;
                    *((int128_t *)&v28) = *((int128_t *)&v16);
                    *((int128_t *)&v53) = *((int128_t *)&v21);
                    *((int128_t *)&v54) = *((int128_t *)&v22);
                    *((int128_t *)&v55) = *((int128_t *)&v23);
                    *((int128_t *)&v56) = *((int128_t *)&v24);
                    *((int128_t *)&v57) = *((int128_t *)&v25);
                    *((int128_t *)&v58) = *((int128_t *)&v26);
                    *((int128_t *)&v59) = *((int128_t *)&v27);
                    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&v31);
                    v38 = v28;
                    v40 = v29;
                    v41 = v20;
                    v42 = v53;
                    v43 = v54;
                    v44 = v55;
                    v45 = v56;
                    v46 = v57;
                    v47 = v58;
                    v48 = v59;
                    v98 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(*((long long *)&v64), &v38);
                    if (v98)
                    {
                        v80 = std::fs::hard_link::h6f8316d677157df8(v98 + 144, a4, v5);
                        if (v80)
                        {
                            v68 = v6;
                            v68->field_0 = 2;
                            *((unsigned long long *)&v68->field_8) = v80;
                            return v68;
                        }
                    }
                    else
                    {
                        v68 = v6;
LABEL_50783a:
                        v99 = a3;
                        v8 = a4;
                        uu_cp::context_for::h98549e35fded8509(&v28, a2, v99, a4, v5);
                        v7 = &(&v28)[1];
                        v30 = v29;
                        v100 = v94 & 4294967295;
                        if (!v65)
                            v101 = v100;
                        else
                            v101 = v93;
                        v102 = ((v100 & 255 & 255) ? v100 & 4294967295 : v101);
                        v13 = v102;
                        if (!(char)v102)
                            std::fs::symlink_metadata::h8589e79b0a107dee(&v15, a2, v99);
                        else
                            std::fs::metadata::h003d8cdbffde7c56(&v15, a2, v99);
                        v103 = v14;
                        v104 = v17;
                        if (v103 == 2)
                        {
                            uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h1d4007727df2d8d4(&v9, a2, v99, v104);
                            v105 = v9;
                            v68->field_c = *((int128_t *)&v10);
                            v68->field_0 = 4;
                            *((unsigned long long *)&v68->field_8) = v105;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                            return v68;
                        }
                        memcpy(&v31, &v16, 160);
                        memcpy(&v42, &v35, 144);
                        *((int128_t *)&v40) = *((int128_t *)&v18);
                        v38 = v103;
                        v39 = v104;
                        uu_cp::calculate_dest_permissions::he28553ee8e44ce96(&v15, v8, v5, (int)(&v43)[1], a6->field_32, a6->field_33, v7, v30);
                        v106 = v14;
                        v107 = v16;
                        if (v106 != 13)
                        {
                            *((int *)((char *)&v68->field_1c + 12)) = *((int *)&(&v22)[4]);
                            v108 = *((int128_t *)((char *)&v16 + 4));
                            v109 = *((int128_t *)&v19);
                            *((int128_t *)((char *)&(&v68->field_18)[1] + 4)) = *((int128_t *)&(&v21)[4]);
                            *((char **)((char *)&v68->field_c + 12)) = v109;
                            *((char **)&(&v68->field_8)[1]) = v108;
                            v68->field_0 = v106;
                            v68->field_8 = v107;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                            return v68;
                        }
                        v2 = *((long long *)&v62);
                        v1 = &v38;
                        v0 = v30;
                        uu_cp::handle_copy_mode::h448f778e1ab38150(&v15, a2, v99, v8, v5, a6, v7);
                        v110 = v14;
                        if (v110 != 13)
                        {
                            *((long long *)((char *)&v68->field_1c + 8)) = *((long long *)&v22);
                            v112 = *((int128_t *)&v16);
                            v113 = *((int128_t *)&v19);
                            *((int128_t *)&(&v68->field_18)[1]) = *((int128_t *)&v21);
                            *((char **)((char *)&v68->field_c + 8)) = v113;
                            *((char **)&v68->field_8) = v112;
                            v68->field_0 = v110;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                            return v68;
                        }
                        if (!v4)
                        {
                            v14 = std::fs::set_permissions::hb44ce266ed57ae7b(v8, v5, v107);
                            if (v14)
                                ::0x4fcf80::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb146834ab15375cc(&v15);
                        }
                        v111 = &a6->padding_0[48];
                        if (!(char)v13)
                        {
                            uu_cp::copy_attributes::h0ca124c6c7245f78(&v15, a2, v99, v8, v5, v111);
                            v110 = v14;
                            if (v110 != 13)
                            {
                                *((long long *)((char *)&v68->field_1c + 8)) = *((long long *)&v22);
                                vvar_1605{reg 224} = *((int128_t *)&v16);
                                vvar_1606{reg 256} = *((int128_t *)&v19);
                                *((int128_t *)&(&v68->field_18)[1]) = *((int128_t *)&v21);
                                *((char **)((char *)&v68->field_c + 8)) = v113;
                                *((char **)&v68->field_8) = v112;
                                v68->field_0 = v110;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                                return v68;
                            }
                        }
                        else
                        {
                            uucore::features::fs::canonicalize::hb17a5541a57984e7(&v9, a2, v99, 0, 1);
                            if (v9 == 0x8000000000000000)
                            {
LABEL_507c8e:
                                ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v9);
                            }
                            else
                            {
                                v35 = v11;
                                *((int128_t *)&v32) = *((int128_t *)&v9);
                                uu_cp::copy_attributes::h0ca124c6c7245f78(&v15, v34, v11, v8, v5, v111);
                                v114 = v14;
                                if (v114 != 13)
                                {
                                    *((long long *)((char *)&v68->field_1c + 8)) = *((long long *)&v22);
                                    v115 = *((int128_t *)&v16);
                                    v116 = *((int128_t *)&v19);
                                    *((int128_t *)&(&v68->field_18)[1]) = *((int128_t *)&v21);
                                    *((char **)((char *)&v68->field_c + 8)) = v116;
                                    *((char **)&v68->field_8) = v115;
                                    v68->field_0 = v114;
                                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v31);
                                    if (v9 != 0x8000000000000000)
                                    {
                                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                                        return v68;
                                    }
                                    ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v9);
                                    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                                    return v68;
                                }
                                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v31);
                                if (v9 == 0x8000000000000000)
                                    goto LABEL_507c8e;
                            }
                        }
                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a2, v99, (char)v13);
                        v117 = v17;
                        if (v14)
                        {
                            v68->field_0 = 2;
                            *((unsigned long long *)&v68->field_8) = v117;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                            return v68;
                        }
                        memcpy(&v61, &v16, 136);
                        v60 = v117;
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v15, v8, v5);
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6dd09ea9bc601e27(&v31, *((long long *)&v64), &v60, &v15);
                        ::0x4fcc50::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&v31);
                        if (*(a1))
                        {
                            std::fs::metadata::h003d8cdbffde7c56(&v15, a2, v99);
                            if ((int)v14 == 2)
                            {
                                v105 = v17;
                                v68->field_0 = 2;
                                *((unsigned long long *)&v68->field_8) = v105;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                                return v68;
                            }
                            indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(a1, *((long long *)&(&v23)[8]));
                        }
                        v68->field_0 = 13;
                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v28);
                        return v68;
                    }
                }
            }
        }
        else
        {
            v5 = v66;
            v86 = (&a6->padding_4d)[1];
            if (!((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v66, 1)) || !(!v86))
            {
LABEL_507cb6:
                v7 = v86;
                v87 = a3;
                v88 = v5;
                uu_cp::handle_existing_dest::h1a418223b4b32809(&v15, a2, v87, a4, v88, a6, v3, *((long long *)&v64));
                v89 = v14;
                if (v89 != 13)
                {
                    *((long long *)((char *)&v68->field_1c + 8)) = *((long long *)&v22);
                    v90 = *((int128_t *)&v17);
                    v91 = *((int128_t *)&v19);
                    *((int128_t *)&(&v68->field_18)[1]) = *((int128_t *)&v21);
                    *((char **)((char *)&v68->field_c + 8)) = v91;
                    *((char **)&v68->field_8) = v90;
                    v68->field_0 = v89;
                    return v68;
                }
                if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, v87, a4, v88))
                {
                    v92 = (char)v7;
                    if (v92 == 2 && a6->field_4c)
                    {
                        v68->field_0 = 13;
                        return v68;
                    }
                    if (!((char)v8 & v4))
                    {
                        v85 = v84;
                        v66 = v5;
                        if (!v92)
                        {
                            v68->field_0 = 13;
                            return v68;
                        }
                        goto LABEL_5076a5;
                    }
                }
                v85 = v84;
                v66 = v5;
                goto LABEL_5076a5;
            }
            else if (!(char)v8)
            {
                if (!(!!a6->field_4c && !v4))
                    goto LABEL_507cb6;
                v6 = v68;
                std::path::Path::components::h4f3217acf0fc8653(&v38, a2, a3);
                std::path::Path::components::h4f3217acf0fc8653(&v15, a4, v5);
                if (::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v38, &v15))
                {
                    v68 = v6;
                    if (!(!a6->field_3c) || !(!a6->field_3d))
                    {
                        v68->field_0 = 13;
                        return v68;
                    }
                    goto LABEL_507cb6;
                }
            }
            else
            {
                if (!v4)
                {
                    v68->field_0 = 13;
                    return v68;
                }
                else if (!a6->field_41)
                {
                    v68->field_0 = 13;
                    return v68;
                }
                goto LABEL_507cb6;
            }
        }
        v68 = v6;
        v68->field_0 = 13;
        return v68;
    }
    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a4, a5, 0);
    if (v14)
    {
        v34 = v17;
        *((char *)&v32) = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h9c31107a5315a077(&v31);
        v68 = a0;
        goto LABEL_5072cf;
    }
    memcpy(&v38, &v16, 144);
    v68 = a0;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8db7bc2a0d0ef09(*((long long *)&v62), &v38))
    {
        v9 = a2;
        v10 = a3;
        v31 = a4;
        v34 = a5;
        v38 = &v9;
        v39 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v40 = &v31;
        v41 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v15 = &g_5b5fe8;
        v17 = 3;
        v20 = 0;
        v18 = &v38;
        goto LABEL_50741b;
    }
LABEL_5072cf:
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf39b9bbbffc687fc(*((long long *)&v63), a4, a5))
    {
        v9 = a2;
        v10 = a3;
        v31 = a4;
        v34 = a5;
        v38 = &v9;
        v39 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v40 = &v31;
        v41 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v15 = &g_5b5fe8;
        v17 = 3;
        v20 = 0;
        v18 = &v38;
LABEL_50741b:
        v19 = 2;
    }
    else if (!(a6->field_41) && !((a6->field_40 & v65)) && !(!((v70 = a6, (char)v8 == 1))))
    {
LABEL_507539:
        v67 = v70;
        if ((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v66, 1) && !v67->field_3c && v67->field_3d == 1 && !v67->field_4c)
        {
            v76 = std::fs::remove_file::h38159f05e7b4dc34(a4, v66);
            if (v76)
            {
                v68 = a0;
                a0->field_0 = 2;
                *((unsigned long long *)&a0->field_8) = v76;
                return v68;
            }
        }
        goto LABEL_50758c;
    }
    else
    {
        std::fs::metadata::h003d8cdbffde7c56(&v15, a4, a5);
        v5 = a5;
        ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v15);
        v66 = v5;
        v70 = a6;
        if (!((int)v14 == 2 && (a6->field_3c || a6->field_3d != 1) && !(char)uucore::features::fs::is_symlink_loop::h6176a52fb38b92f8(a4, v66)))
            goto LABEL_507539;
        std::env::var_os::h1986be097247ce4a(&v15, "POSIXLY_CORRECT", 15);
        ::0x4fce90::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h221d2028a300d640(&v15);
        v66 = v5;
        v70 = a6;
        if (!(v14 == 0x8000000000000000))
            goto LABEL_507539;
        v38 = a4;
        v39 = v66;
        v33 = &v38;
        v34 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v75 = &g_5b6018;
LABEL_5078fe:
        v15 = v75;
        v17 = 2;
        v20 = 0;
        v18 = &v31;
        v19 = 1;
    }
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v68->field_8, &v15);
    v68->field_0 = 4;
    return v68;
}
