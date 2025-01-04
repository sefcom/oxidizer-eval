long long uu_cp::copy_file::h3a721c0b700148ba(struct_1 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, char *a4, unsigned long long a5)
{
    struct_1 *v0;  // [sp-0x418]
    unsigned long long v1;  // [sp-0x410]
    struct struct_0 **v2;  // [sp-0x408]
    unsigned long long v3;  // [sp-0x400]
    struct_1 *v4;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x3f0]
    char v6;  // [bp-0x3e8]
    char v7;  // [bp-0x3e0]
    char v8;  // [sp-0x3d9]
    unsigned long v9;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct_1 *v10;  // [bp-0x3d0]
    char *v11;  // [bp-0x3c8]
    unsigned long v12;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3a8]
    char v15;  // [sp-0x3a0]
    unsigned int v16;  // [sp-0x394]
    char *v17;  // [bp-0x390], Other Possible Types: unsigned long long, unsigned long
    struct struct_0 **v18;  // [sp-0x388], Other Possible Types: char, unsigned long long, unsigned long
    struct struct_0 **v19;  // [sp-0x380]
    unsigned long v20;  // [sp-0x378], Other Possible Types: unsigned long long
    void* v21;  // [sp-0x370], Other Possible Types: unsigned long
    char v22;  // [bp-0x368]
    char v23;  // [bp-0x358]
    char v24;  // [bp-0x348]
    char v25;  // [bp-0x338]
    char v26;  // [bp-0x328]
    char v27;  // [bp-0x318]
    char v28;  // [bp-0x308]
    char *v29;  // [sp-0x2d8]
    unsigned long long v30;  // [sp-0x2c8]
    unsigned long long v31;  // [sp-0x2c0]
    struct struct_0 **v32;  // [bp-0x2b8], Other Possible Types: char *
    unsigned long long v33;  // [sp-0x2b0]
    struct struct_0 **v34;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x2a0]
    void* v36;  // [sp-0x298]
    char *v37;  // [bp-0x218], Other Possible Types: unsigned long long
    char *v38;  // [sp-0x210], Other Possible Types: unsigned long long
    char *v39;  // [sp-0x208], Other Possible Types: struct struct_0 **, unsigned long long
    char v40;  // [bp-0x200], Other Possible Types: unsigned long
    char *v41;  // [sp-0x1f8]
    char *v42;  // [sp-0x1e8]
    char *v43;  // [sp-0x1d8]
    char *v44;  // [sp-0x1c8]
    char *v45;  // [sp-0x1b8]
    char *v46;  // [sp-0x1a8]
    char *v47;  // [sp-0x198]
    char v48;  // [bp-0x160]
    char v49;  // [bp-0x150]
    char *v50;  // [sp-0x148]
    unsigned long long v51;  // [sp-0x140]
    char *v52;  // [sp-0x138]
    char *v53;  // [sp-0x128]
    char *v54;  // [sp-0x118]
    char *v55;  // [sp-0x108]
    char *v56;  // [sp-0xf8]
    char *v57;  // [sp-0xe8]
    char *v58;  // [sp-0xd8]
    unsigned long v59;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v60;  // [bp-0xb8]
    struct_2 *v61;  // [bp+0x8]
    char v62;  // [bp+0x10]
    char v63;  // [bp+0x18]
    char v64;  // [bp+0x20]
    char v65;  // [bp+0x28]
    unsigned long long v66;  // r15
    struct_2 *v67;  // r12
    struct_1 *v68;  // 4096
    unsigned int v69;  // r15d
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rcx
    unsigned long long v72;  // r8
    unsigned long long v73;  // r9
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    char v78;  // bl
    unsigned long long v79;  // r15
    char v80;  // bl
    struct_2 *v81;  // rcx
    char v82;  // al
    struct_1 *v83;  // r15b
    struct_2 *v84;  // rcx
    unsigned long long v85;  // r13
    unsigned long long v86;  // r15
    unsigned long long v87;  // rax
    char *v88;  // xmm0
    char *v89;  // xmm1
    struct_1 *v90;  // cl
    struct_2 *v91;  // rbx
    unsigned long long v92;  // rbx
    unsigned long long v93;  // r15
    unsigned int v94;  // eax
    unsigned int v95;  // eax
    unsigned int v98;  // eax
    unsigned long long v99;  // rax
    unsigned long v100;  // r13
    unsigned long long v101;  // rax
    unsigned int v102;  // ecx
    unsigned int v103;  // ecx
    char *v104;  // r15
    unsigned long long v105;  // rbx
    struct_2 *v106;  // rbx
    unsigned long long v107;  // rax
    unsigned int v108;  // r15d
    char *v109;  // xmm0
    char *v110;  // xmm1
    unsigned long long v111;  // rax
    char v112[12];  // rbx
    char *v113;  // xmm0
    char *v114;  // xmm1
    unsigned long long v115;  // rax
    char *v116;  // xmm0
    char *v117;  // xmm1
    unsigned long long v118;  // rbx

    v66 = a5;
    v67 = v61;
    *((char *)&v11) = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3);
    v8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a4, a5);
    if (!v8)
    {
LABEL_50758c:
        a0 = a0;
        if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, a3, a4, v66))
        {
            std::path::Path::components::h4f3217acf0fc8653(&v37, a2, a3);
            std::path::Path::components::h4f3217acf0fc8653(&v17, a4, v66);
            v67 = v61;
            if (!(char)::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v37, &v17, v70, v71, v72, v73) && !v67->field_3c && v67->field_3d == 1)
            {
                v76 = std::fs::remove_file::h38159f05e7b4dc34(a4, v66, v70);
                if (v76)
                {
                    a0->field_0 = 2;
                    *((unsigned long long *)&a0->field_8) = v76;
                    return a0;
                }
            }
        }
        v77 = uu_cp::file_or_link_exists::h0326283b1ad33442(a4, v66);
        v78 = v67->field_3e;
        if (!(char)v77)
            goto LABEL_5076a5;
        if (v78 && (v81 = v61, v82 = (char)(v77 | -0x100 | 1), !(!v81->field_3c) || !(v81->field_3d == 1)))
        {
LABEL_5076a5:
            v91 = v61;
            if ((v80 & (char)v11) && (v91->field_3c || v91->field_3d != 1))
            {
                v37 = 1;
                v38 = a4;
                v39 = v79;
                v40 = 1;
                v32 = &v37;
                v33 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v74 = &g_5b6038;
                goto LABEL_5078fe;
            }
            else
            {
                if (v91->field_48)
                    uu_cp::print_verbose_output::h1215961a97776bc3(v91->field_44, a1, a2, a3, a4, v79);
                v9 = v79;
                if (!v91->field_38)
                {
                    v92 = v91->field_40;
                    v93 = v91->field_41;
                    goto LABEL_50783a;
                }
                else
                {
                    v92 = v91->field_40;
                    v93 = v91->field_41;
                    v94 = -0x100 | (v93 & 255 & 255);
                    if (v65)
                        v95 = -0x100 | (v92 & 255 & 255);
                    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v17, a2, v14, v98);
                    v12 = 1;
                    v13 = a2;
                    v14 = a3;
                    v15 = 1;
                    v50 = &v12;
                    v51 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v32 = &g_5b5f08;
                    v33 = 1;
                    v36 = 0;
                    v34 = &v50;
                    v35 = 1;
                    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v48, &v32);
                    v34 = *((long long *)&v49);
                    *((int128_t *)&v32) = *((int128_t *)&v48);
                    if (v17)
                    {
                        *((long long *)((char *)&a0->field_c + 8)) = *((long long *)&v49);
                        *((int128_t *)&a0->field_8) = *((int128_t *)&v48);
                        a0->field_0 = 3;
                        a0->field_18 = v18;
                        return a0;
                    }
                    v10 = a0;
                    v30 = v20;
                    *((int128_t *)&v29) = *((int128_t *)&v18);
                    *((int128_t *)&v52) = *((int128_t *)&v22);
                    *((int128_t *)&v53) = *((int128_t *)&v23);
                    *((int128_t *)&v54) = *((int128_t *)&v24);
                    *((int128_t *)&v55) = *((int128_t *)&v25);
                    *((int128_t *)&v56) = *((int128_t *)&v26);
                    *((int128_t *)&v57) = *((int128_t *)&v27);
                    *((int128_t *)&v58) = *((int128_t *)&v28);
                    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&v32);
                    v37 = v29;
                    v39 = v30;
                    v40 = v21;
                    v41 = v52;
                    v42 = v53;
                    v43 = v54;
                    v44 = v55;
                    v45 = v56;
                    v46 = v57;
                    v47 = v58;
                    v99 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(*((long long *)&v64), &v37);
                    if (v99)
                    {
                        v76 = std::fs::hard_link::h6f8316d677157df8(v99 + 144, a4, v9);
                        if (v76)
                        {
                            a0 = v10;
                            a0->field_0 = 2;
                            *((unsigned long long *)&a0->field_8) = v76;
                            return a0;
                        }
                    }
                    else
                    {
                        a0 = v10;
LABEL_50783a:
                        v100 = a3;
                        v11 = a4;
                        uu_cp::context_for::h98549e35fded8509(&v29, a2, v100, a4, v9);
                        v10 = &(&v29)[1];
                        v31 = v30;
                        v101 = v93 & 4294967295;
                        if (!v65)
                            v102 = v101;
                        else
                            v102 = v92;
                        v103 = ((v101 & 255 & 255) ? v101 & 4294967295 : v102);
                        v16 = v103;
                        if (!(char)v16)
                            std::fs::symlink_metadata::h8589e79b0a107dee(&v17, a2, v100);
                        else
                            std::fs::metadata::h003d8cdbffde7c56(&v17, a2, v100);
                        v104 = v17;
                        v105 = v18;
                        if (v104 == 2)
                        {
                            uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h1d4007727df2d8d4(&v12, a2, v100, v105);
                            a0->field_c = *((int128_t *)&v13);
                            a0->field_0 = 4;
                            v12 = v12;
                            *((unsigned long long *)&a0->field_8) = v12;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                            return a0;
                        }
                        memcpy(&v32, &v18, 160);
                        memcpy(&v41, &v34, 144);
                        *((int128_t *)&v39) = *((int128_t *)&v19);
                        v37 = v104;
                        v38 = v105;
                        v106 = v61;
                        v5 = v31;
                        v4 = v10;
                        uu_cp::calculate_dest_permissions::he28553ee8e44ce96(&v17, v11, v9, (int)(&v42)[1], v106->field_32, v106->field_33);
                        v107 = v17;
                        v108 = v18;
                        if (v107 != 13)
                        {
                            *((int *)((char *)&a0->field_1c + 12)) = *((int *)&(&v23)[4]);
                            v109 = *((int128_t *)((char *)&v18 + 4));
                            v110 = *((int128_t *)&v20);
                            *((int128_t *)((char *)&(&a0->field_18)[1] + 4)) = *((int128_t *)&(&v22)[4]);
                            *((char **)((char *)&a0->field_c + 12)) = v110;
                            *((char **)&(&a0->field_8)[1]) = v109;
                            a0->field_0 = v107;
                            a0->field_8 = v108;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                            return a0;
                        }
                        v4 = v65;
                        v3 = *((long long *)&v62);
                        v2 = &v37;
                        v1 = v31;
                        v0 = v10;
                        uu_cp::handle_copy_mode::h448f778e1ab38150(&v17, a2, v100, v11, v9, v106);
                        v111 = v17;
                        if (v111 != 13)
                        {
                            *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v23);
                            v113 = *((int128_t *)&v18);
                            v114 = *((int128_t *)&v20);
                            *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v22);
                            *((char **)((char *)&a0->field_c + 8)) = v114;
                            *((char **)&a0->field_8) = v113;
                            a0->field_0 = v111;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                            return a0;
                        }
                        if (!v8)
                        {
                            v17 = std::fs::set_permissions::hb44ce266ed57ae7b(v11, v9, v108);
                            if (v17)
                                ::0x4fcf80::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb146834ab15375cc(&v17);
                        }
                        v112 = &v106->padding_0[48];
                        if (!(char)v16)
                        {
                            uu_cp::copy_attributes::h0ca124c6c7245f78(&v17, a2, v100, v11, v9, v112);
                            v111 = v17;
                            if (v111 != 13)
                            {
                                *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v23);
                                vvar_1615{reg 224} = *((int128_t *)&v18);
                                vvar_1616{reg 256} = *((int128_t *)&v20);
                                *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v22);
                                *((char **)((char *)&a0->field_c + 8)) = v114;
                                *((char **)&a0->field_8) = v113;
                                a0->field_0 = v111;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                                return a0;
                            }
                        }
                        else
                        {
                            uucore::features::fs::canonicalize::hb17a5541a57984e7(&v12, a2, v100, 0, 1, v73, *((long long *)&v6), *((long long *)&v7), v79, v10, v11);
                            if (v12 == 0x8000000000000000)
                            {
LABEL_507c8e:
                                ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v12);
                            }
                            else
                            {
                                v34 = v14;
                                *((int128_t *)&v32) = *((int128_t *)&v12);
                                uu_cp::copy_attributes::h0ca124c6c7245f78(&v17, v33, v14, v11, v9, v112);
                                v115 = v17;
                                if (v115 != 13)
                                {
                                    *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v23);
                                    v116 = *((int128_t *)&v18);
                                    v117 = *((int128_t *)&v20);
                                    *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v22);
                                    *((char **)((char *)&a0->field_c + 8)) = v117;
                                    *((char **)&a0->field_8) = v116;
                                    a0->field_0 = v115;
                                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v32);
                                    if (v12 != 0x8000000000000000)
                                    {
                                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                                        return a0;
                                    }
                                    ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v12);
                                    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                                    return a0;
                                }
                                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v32);
                                if (v12 == 0x8000000000000000)
                                    goto LABEL_507c8e;
                            }
                        }
                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v17, a2, v100, -0x100 | (char)v16);
                        v118 = v18;
                        if (v17)
                        {
                            a0->field_0 = 2;
                            *((unsigned long long *)&a0->field_8) = v118;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                            return a0;
                        }
                        memcpy(&v60, &v18, 136);
                        v59 = v118;
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v17, v11, v9);
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6dd09ea9bc601e27(&v32, *((long long *)&v64), &v59, &v17);
                        ::0x4fcc50::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&v32);
                        if (*(a1))
                        {
                            std::fs::metadata::h003d8cdbffde7c56(&v17, a2, v100);
                            if ((int)v17 == 2)
                            {
                                a0->field_0 = 2;
                                v12 = v18;
                                *((unsigned long long *)&a0->field_8) = v12;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                                return a0;
                            }
                            indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(a1, *((long long *)&(&v24)[8]), v70);
                        }
                        a0->field_0 = 13;
                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v29);
                        return a0;
                    }
                }
            }
        }
        else
        {
            v9 = v66;
            v83 = (&v61->padding_4d)[1];
            if (!((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v66, 1)) || !(!v83))
            {
LABEL_507cb6:
                v10 = v83;
                v85 = a3;
                v86 = v9;
                v5 = *((long long *)&v64);
                v4 = v65;
                uu_cp::handle_existing_dest::h1a418223b4b32809(&v17, a2, v85, a4, v86, v61);
                v87 = v17;
                if (v87 != 13)
                {
                    *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v23);
                    v88 = *((int128_t *)&v18);
                    v89 = *((int128_t *)&v20);
                    *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v22);
                    *((char **)((char *)&a0->field_c + 8)) = v89;
                    *((char **)&a0->field_8) = v88;
                    a0->field_0 = v87;
                    return a0;
                }
                if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, v85, a4, v86))
                {
                    v90 = (char)v10;
                    if (v90 == 2 && v61->field_4c)
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                    if (!((char)v11 & v8))
                    {
                        v79 = v9;
                        if (!v90)
                        {
                            a0->field_0 = 13;
                            return a0;
                        }
                        goto LABEL_5076a5;
                    }
                }
                v79 = v9;
                goto LABEL_5076a5;
            }
            else if (!(char)v11)
            {
                if (!(!!v61->field_4c) || !(!v8))
                    goto LABEL_507cb6;
                v10 = a0;
                std::path::Path::components::h4f3217acf0fc8653(&v37, a2, a3);
                std::path::Path::components::h4f3217acf0fc8653(&v17, a4, v9);
                if ((char)::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v37, &v17, v70, v71, v72, v73))
                {
                    v84 = v61;
                    a0 = v10;
                    if (!(!v84->field_3c) || !(!v84->field_3d))
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                    goto LABEL_507cb6;
                }
            }
            else
            {
                if (!v8)
                {
                    a0->field_0 = 13;
                    return a0;
                }
                else if (!v61->field_41)
                {
                    a0->field_0 = 13;
                    return a0;
                }
                goto LABEL_507cb6;
            }
        }
        a0 = v10;
        a0->field_0 = 13;
        return a0;
    }
    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v17, a4, a5, 0);
    if (v17)
    {
        v33 = v18;
        *((char *)&v32) = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h9c31107a5315a077(&v32);
        goto LABEL_5072cf;
    }
    memcpy(&v37, &v18, 144);
    a0 = a0;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8db7bc2a0d0ef09(*((long long *)&v62), &v37))
    {
        v12 = a2;
        v13 = a3;
        v32 = a4;
        v33 = a5;
        v37 = &v12;
        v38 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v39 = &v32;
        v40 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v17 = &g_5b5fe8;
        v18 = 3;
        v21 = 0;
        v19 = &v37;
        goto LABEL_50741b;
    }
LABEL_5072cf:
    a0 = v68;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf39b9bbbffc687fc(*((long long *)&v63), a4, a5))
    {
        v12 = a2;
        v13 = a3;
        v32 = a4;
        v33 = a5;
        v37 = &v12;
        v38 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v39 = &v32;
        v40 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v17 = &g_5b5fe8;
        v18 = 3;
        v21 = 0;
        v19 = &v37;
LABEL_50741b:
        v20 = 2;
    }
    else
    {
        v67 = v61;
        if (!(v67->field_41) && !((v67->field_40 & v65)) && !((char)v11 != 1))
        {
LABEL_507539:
            if ((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v66, 1) && !v67->field_3c && v67->field_3d == 1 && !v67->field_4c)
            {
                v75 = std::fs::remove_file::h38159f05e7b4dc34(a4, v66, v70);
                if (v75)
                {
                    a0->field_0 = 2;
                    *((unsigned long long *)&a0->field_8) = v75;
                    return a0;
                }
            }
            goto LABEL_50758c;
        }
        else
        {
            std::fs::metadata::h003d8cdbffde7c56(&v17, a4, a5);
            v9 = a5;
            v69 = v17;
            v67 = v61;
            ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v17);
            v66 = v9;
            if (!(!!v61->field_4c) || !(!v8))
                goto LABEL_507539;
            std::env::var_os::h1986be097247ce4a(&v17, "POSIXLY_CORRECT", 15);
            v67 = v61;
            ::0x4fce90::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h221d2028a300d640(&v17);
            v66 = v9;
            if (!(!!v61->field_4c) || !(!v8))
                goto LABEL_507539;
            v37 = a4;
            v38 = v66;
            v32 = &v37;
            v33 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v74 = &g_5b6018;
LABEL_5078fe:
            v17 = v74;
            v18 = 2;
            v21 = 0;
            v19 = &v32;
            v20 = 1;
        }
    }
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&a0->field_8, &v17);
    a0->field_0 = 4;
    return a0;
}
