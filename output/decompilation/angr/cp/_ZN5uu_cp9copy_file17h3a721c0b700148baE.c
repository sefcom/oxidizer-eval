long long uu_cp::copy_file::h3a721c0b700148ba(struct_0 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, char *a4, unsigned long long a5)
{
    struct_0 *v0;  // [sp-0x418]
    unsigned long long v1;  // [sp-0x410]
    struct struct_2 **v2;  // [sp-0x408]
    unsigned long long v3;  // [sp-0x400]
    struct_0 *v4;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x3f0]
    char v6;  // [sp-0x3d9]
    unsigned long v7;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct_0 *v8;  // [bp-0x3d0]
    char *v9;  // [bp-0x3c8]
    unsigned long v10;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x3a8]
    char v13;  // [sp-0x3a0]
    unsigned int v14;  // [sp-0x394]
    char *v15;  // [bp-0x390], Other Possible Types: unsigned long long, unsigned long
    struct struct_2 **v16;  // [sp-0x388], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_2 **v17;  // [sp-0x380]
    unsigned long v18;  // [sp-0x378], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x370], Other Possible Types: unsigned long
    char v20;  // [bp-0x368]
    char v21;  // [bp-0x358]
    char v22;  // [bp-0x348]
    char v23;  // [bp-0x338]
    char v24;  // [bp-0x328]
    char v25;  // [bp-0x318]
    char v26;  // [bp-0x308]
    char *v27;  // [sp-0x2d8]
    unsigned long long v28;  // [sp-0x2c8]
    unsigned long long v29;  // [sp-0x2c0]
    struct struct_2 **v30;  // [bp-0x2b8], Other Possible Types: char *
    unsigned long long v31;  // [sp-0x2b0]
    struct struct_2 **v32;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0x2a0]
    void* v34;  // [sp-0x298]
    char *v35;  // [bp-0x218], Other Possible Types: unsigned long long
    char *v36;  // [sp-0x210], Other Possible Types: unsigned long long
    char *v37;  // [sp-0x208], Other Possible Types: struct struct_2 **, unsigned long long
    char v38;  // [bp-0x200], Other Possible Types: unsigned long
    char *v39;  // [sp-0x1f8]
    char *v40;  // [sp-0x1e8]
    char *v41;  // [sp-0x1d8]
    char *v42;  // [sp-0x1c8]
    char *v43;  // [sp-0x1b8]
    char *v44;  // [sp-0x1a8]
    char *v45;  // [sp-0x198]
    char v46;  // [bp-0x160]
    char v47;  // [bp-0x150]
    char *v48;  // [sp-0x148]
    unsigned long long v49;  // [sp-0x140]
    char *v50;  // [sp-0x138]
    char *v51;  // [sp-0x128]
    char *v52;  // [sp-0x118]
    char *v53;  // [sp-0x108]
    char *v54;  // [sp-0xf8]
    char *v55;  // [sp-0xe8]
    char *v56;  // [sp-0xd8]
    unsigned long v57;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v58;  // [bp-0xb8]
    struct_1 *v59;  // [bp+0x8]
    char v60;  // [bp+0x10]
    char v61;  // [bp+0x18]
    char v62;  // [bp+0x20]
    char v63;  // [bp+0x28]
    unsigned long long v64;  // r15
    struct_1 *v65;  // r12
    struct_0 *v66;  // 4096
    unsigned int v67;  // r15d
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    char v72;  // bl
    unsigned long long v73;  // r15
    char v74;  // bl
    struct_1 *v75;  // rcx
    char v76;  // al
    struct_0 *v77;  // r15b
    struct_1 *v78;  // rcx
    unsigned long long v79;  // r13
    unsigned long long v80;  // r15
    unsigned long long v81;  // rax
    char *v82;  // xmm0
    char *v83;  // xmm1
    struct_0 *v84;  // cl
    struct_1 *v85;  // rbx
    unsigned long long v86;  // rbx
    unsigned long long v87;  // r15
    unsigned int v88;  // eax
    unsigned int v89;  // eax
    unsigned int v92;  // eax
    unsigned long long v93;  // rax
    unsigned long v94;  // r13
    unsigned long long v95;  // rax
    unsigned int v96;  // ecx
    unsigned int v97;  // ecx
    char *v98;  // r15
    unsigned long long v99;  // rbx
    struct_1 *v100;  // rbx
    unsigned long long v101;  // rax
    unsigned int v102;  // r15d
    char *v103;  // xmm0
    char *v104;  // xmm1
    unsigned long long v105;  // rax
    char v106[12];  // rbx
    char *v107;  // xmm0
    char *v108;  // xmm1
    unsigned long long v109;  // rax
    char *v110;  // xmm0
    char *v111;  // xmm1
    unsigned long long v112;  // rbx

    v64 = a5;
    v65 = v59;
    *((char *)&v9) = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3);
    v6 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a4, a5);
    if (!v6)
    {
LABEL_50758c:
        a0 = a0;
        if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, a3, a4, v64))
        {
            std::path::Path::components::h4f3217acf0fc8653(&v35, a2, a3);
            std::path::Path::components::h4f3217acf0fc8653(&v15, a4, v64);
            v65 = v59;
            if (!::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v35, &v15) && !v65->field_3c && v65->field_3d == 1)
            {
                v70 = std::fs::remove_file::h38159f05e7b4dc34(a4, v64);
                if (v70)
                {
                    a0->field_0 = 2;
                    *((unsigned long long *)&a0->field_8) = v70;
                    return a0;
                }
            }
        }
        v71 = uu_cp::file_or_link_exists::h0326283b1ad33442(a4, v64);
        v72 = v65->field_3e;
        if (!(char)v71)
            goto LABEL_5076a5;
        if (v72 && (v75 = v59, v76 = (char)(v71 & 0xffffffffffffff00 | 1), !(!v75->field_3c) || !(v75->field_3d == 1)))
        {
LABEL_5076a5:
            v85 = v59;
            if ((v74 & (char)v9) && (v85->field_3c || v85->field_3d != 1))
            {
                v35 = 1;
                v36 = a4;
                v37 = v73;
                v38 = 1;
                v30 = &v35;
                v31 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v68 = &g_5b6038;
                goto LABEL_5078fe;
            }
            else
            {
                if (v85->field_48)
                    uu_cp::print_verbose_output::h1215961a97776bc3(v85->field_44, a1, a2, a3, a4, v73);
                v7 = v73;
                if (!v85->field_38)
                {
                    v86 = v85->field_40;
                    v87 = v85->field_41;
                    goto LABEL_50783a;
                }
                else
                {
                    v86 = v85->field_40;
                    v87 = v85->field_41;
                    v88 = (v87 & 255 & 255);
                    if (v63)
                        v89 = (v86 & 255 & 255);
                    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a2, v12, v92);
                    v10 = 1;
                    v11 = a2;
                    v12 = a3;
                    v13 = 1;
                    v48 = &v10;
                    v49 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v30 = &g_5b5f08;
                    v31 = 1;
                    v34 = 0;
                    v32 = &v48;
                    v33 = 1;
                    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
                    v32 = *((long long *)&v47);
                    *((int128_t *)&v30) = *((int128_t *)&v46);
                    if (v15)
                    {
                        *((long long *)((char *)&a0->field_c + 8)) = *((long long *)&v47);
                        *((int128_t *)&a0->field_8) = *((int128_t *)&v46);
                        a0->field_0 = 3;
                        a0->field_18 = v16;
                        return a0;
                    }
                    v8 = a0;
                    v28 = v18;
                    *((int128_t *)&v27) = *((int128_t *)&v16);
                    *((int128_t *)&v50) = *((int128_t *)&v20);
                    *((int128_t *)&v51) = *((int128_t *)&v21);
                    *((int128_t *)&v52) = *((int128_t *)&v22);
                    *((int128_t *)&v53) = *((int128_t *)&v23);
                    *((int128_t *)&v54) = *((int128_t *)&v24);
                    *((int128_t *)&v55) = *((int128_t *)&v25);
                    *((int128_t *)&v56) = *((int128_t *)&v26);
                    core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391();
                    v35 = v27;
                    v37 = v28;
                    v38 = v19;
                    v39 = v50;
                    v40 = v51;
                    v41 = v52;
                    v42 = v53;
                    v43 = v54;
                    v44 = v55;
                    v45 = v56;
                    v93 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(*((long long *)&v62), &v35);
                    if (v93)
                    {
                        v70 = std::fs::hard_link::h6f8316d677157df8(v93 + 144, a4, v7);
                        if (v70)
                        {
                            a0 = v8;
                            a0->field_0 = 2;
                            *((unsigned long long *)&a0->field_8) = v70;
                            return a0;
                        }
                    }
                    else
                    {
                        a0 = v8;
LABEL_50783a:
                        v94 = a3;
                        v9 = a4;
                        uu_cp::context_for::h98549e35fded8509(&v27, a2, v94, a4, v7);
                        v8 = &(&v27)[1];
                        v29 = v28;
                        v95 = v87 & 4294967295;
                        if (!v63)
                            v96 = v95;
                        else
                            v96 = v86;
                        v97 = ((v95 & 255 & 255) ? v95 & 4294967295 : v96);
                        v14 = v97;
                        if (!(char)v14)
                            std::fs::symlink_metadata::h8589e79b0a107dee(&v15, a2, v94);
                        else
                            std::fs::metadata::h003d8cdbffde7c56(&v15, a2, v94);
                        v98 = v15;
                        v99 = v16;
                        if (v98 == 2)
                        {
                            uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h1d4007727df2d8d4(&v10, a2, v94, v99);
                            a0->field_c = *((int128_t *)&v11);
                            a0->field_0 = 4;
                            v10 = v10;
                            *((unsigned long long *)&a0->field_8) = v10;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                            return a0;
                        }
                        memcpy(&v30, &v16, 160);
                        memcpy(&v39, &v32, 144);
                        *((int128_t *)&v37) = *((int128_t *)&v17);
                        v35 = v98;
                        v36 = v99;
                        v100 = v59;
                        v5 = v29;
                        v4 = v8;
                        uu_cp::calculate_dest_permissions::he28553ee8e44ce96(&v15, v9, v7, (int)(&v40)[1], v100->field_32, v100->field_33);
                        v101 = v15;
                        v102 = (int)v16;
                        if (v101 != 13)
                        {
                            *((int *)((char *)&a0->field_1c + 12)) = *((int *)&(&v21)[4]);
                            v103 = *((int128_t *)((char *)&v16 + 4));
                            v104 = *((int128_t *)&v18);
                            *((int128_t *)((char *)&(&a0->field_18)[1] + 4)) = *((int128_t *)&(&v20)[4]);
                            *((char **)((char *)&a0->field_c + 12)) = v104;
                            *((char **)&(&a0->field_8)[1]) = v103;
                            a0->field_0 = v101;
                            a0->field_8 = v102;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                            return a0;
                        }
                        v4 = v63;
                        v3 = *((long long *)&v60);
                        v2 = &v35;
                        v1 = v29;
                        v0 = v8;
                        uu_cp::handle_copy_mode::h448f778e1ab38150(&v15, a2, v94, v9, v7, v100);
                        v105 = v15;
                        if (v105 != 13)
                        {
                            *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v21);
                            v107 = *((int128_t *)&v16);
                            v108 = *((int128_t *)&v18);
                            *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v20);
                            *((char **)((char *)&a0->field_c + 8)) = v108;
                            *((char **)&a0->field_8) = v107;
                            a0->field_0 = v105;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                            return a0;
                        }
                        if (!v6)
                        {
                            v15 = std::fs::set_permissions::hb44ce266ed57ae7b(v9, v7, v102);
                            if (v15)
                                ::0x4fcf80::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb146834ab15375cc(&v15);
                        }
                        v106 = &v100->padding_0[48];
                        if (!(char)v14)
                        {
                            uu_cp::copy_attributes::h0ca124c6c7245f78(&v15, a2, v94, v9, v7, v106);
                            v105 = v15;
                            if (v105 != 13)
                            {
                                *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v21);
                                vvar_1615{reg 224} = *((int128_t *)&v16);
                                vvar_1616{reg 256} = *((int128_t *)&v18);
                                *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v20);
                                *((char **)((char *)&a0->field_c + 8)) = v108;
                                *((char **)&a0->field_8) = v107;
                                a0->field_0 = v105;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                                return a0;
                            }
                        }
                        else
                        {
                            uucore::features::fs::canonicalize::hb17a5541a57984e7(&v10, a2, v94, 0, 1);
                            if (v10 == 0x8000000000000000)
                            {
LABEL_507c8e:
                                ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v10);
                            }
                            else
                            {
                                v32 = v12;
                                *((int128_t *)&v30) = *((int128_t *)&v10);
                                uu_cp::copy_attributes::h0ca124c6c7245f78(&v15, v31, v12, v9, v7, v106);
                                v109 = v15;
                                if (v109 != 13)
                                {
                                    *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v21);
                                    v110 = *((int128_t *)&v16);
                                    v111 = *((int128_t *)&v18);
                                    *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v20);
                                    *((char **)((char *)&a0->field_c + 8)) = v111;
                                    *((char **)&a0->field_8) = v110;
                                    a0->field_0 = v109;
                                    ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
                                    if (v10 != 0x8000000000000000)
                                    {
                                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                                        return a0;
                                    }
                                    ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v10);
                                    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                                    return a0;
                                }
                                ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
                                if (v10 == 0x8000000000000000)
                                    goto LABEL_507c8e;
                            }
                        }
                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a2, v94, (char)v14);
                        v112 = v16;
                        if (v15)
                        {
                            a0->field_0 = 2;
                            *((unsigned long long *)&a0->field_8) = v112;
                            ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                            return a0;
                        }
                        memcpy(&v58, &v16, 136);
                        v57 = v112;
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v15, v9, v7);
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6dd09ea9bc601e27(&v30, *((long long *)&v62), &v57, &v15);
                        ::0x4fcc50::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&v30);
                        if (*(a1))
                        {
                            std::fs::metadata::h003d8cdbffde7c56(&v15, a2, v94);
                            if ((int)v15 == 2)
                            {
                                a0->field_0 = 2;
                                v10 = v16;
                                *((unsigned long long *)&a0->field_8) = v10;
                                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                                return a0;
                            }
                            indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(a1, *((long long *)&(&v22)[8]));
                        }
                        a0->field_0 = 13;
                        ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v27);
                        return a0;
                    }
                }
            }
        }
        else
        {
            v7 = v64;
            v77 = (&v59->padding_4d)[1];
            if (!((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v64, 1)) || !(!v77))
            {
LABEL_507cb6:
                v8 = v77;
                v79 = a3;
                v80 = v7;
                v5 = *((long long *)&v62);
                v4 = v63;
                uu_cp::handle_existing_dest::h1a418223b4b32809(&v15, a2, v79, a4, v80, v59);
                v81 = v15;
                if (v81 != 13)
                {
                    *((long long *)((char *)&a0->field_1c + 8)) = *((long long *)&v21);
                    v82 = *((int128_t *)&v16);
                    v83 = *((int128_t *)&v18);
                    *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v20);
                    *((char **)((char *)&a0->field_c + 8)) = v83;
                    *((char **)&a0->field_8) = v82;
                    a0->field_0 = v81;
                    return a0;
                }
                if ((char)uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(a2, v79, a4, v80))
                {
                    v84 = (char)v8;
                    if (v84 == 2 && v59->field_4c)
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                    if (!((char)v9 & v6))
                    {
                        v73 = v7;
                        if (!v84)
                        {
                            a0->field_0 = 13;
                            return a0;
                        }
                        goto LABEL_5076a5;
                    }
                }
                v73 = v7;
                goto LABEL_5076a5;
            }
            else if (!(char)v9)
            {
                if (!(!!v59->field_4c) || !(!v6))
                    goto LABEL_507cb6;
                v8 = a0;
                std::path::Path::components::h4f3217acf0fc8653(&v35, a2, a3);
                std::path::Path::components::h4f3217acf0fc8653(&v15, a4, v7);
                if (::0x4fe7e0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v35, &v15))
                {
                    v78 = v59;
                    a0 = v8;
                    if (!(!v78->field_3c) || !(!v78->field_3d))
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                    goto LABEL_507cb6;
                }
            }
            else
            {
                if (!v6)
                {
                    a0->field_0 = 13;
                    return a0;
                }
                else if (!v59->field_41)
                {
                    a0->field_0 = 13;
                    return a0;
                }
                goto LABEL_507cb6;
            }
        }
        a0 = v8;
        a0->field_0 = 13;
        return a0;
    }
    uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&v15, a4, a5, 0);
    if (v15)
    {
        v31 = v16;
        *((char *)&v30) = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h9c31107a5315a077(&v30);
        goto LABEL_5072cf;
    }
    memcpy(&v35, &v16, 144);
    a0 = a0;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8db7bc2a0d0ef09(*((long long *)&v60), &v35))
    {
        v10 = a2;
        v11 = a3;
        v30 = a4;
        v31 = a5;
        v35 = &v10;
        v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v37 = &v30;
        v38 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v15 = &g_5b5fe8;
        v16 = 3;
        v19 = 0;
        v17 = &v35;
        goto LABEL_50741b;
    }
LABEL_5072cf:
    a0 = v66;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf39b9bbbffc687fc(*((long long *)&v61), a4, a5))
    {
        v10 = a2;
        v11 = a3;
        v30 = a4;
        v31 = a5;
        v35 = &v10;
        v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v37 = &v30;
        v38 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        v15 = &g_5b5fe8;
        v16 = 3;
        v19 = 0;
        v17 = &v35;
LABEL_50741b:
        v18 = 2;
    }
    else
    {
        v65 = v59;
        if (!(v65->field_41) && !((v65->field_40 & v63)) && !((char)v9 != 1))
        {
LABEL_507539:
            if ((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a2, a3, a4, v64, 1) && !v65->field_3c && v65->field_3d == 1 && !v65->field_4c)
            {
                v69 = std::fs::remove_file::h38159f05e7b4dc34(a4, v64);
                if (v69)
                {
                    a0->field_0 = 2;
                    *((unsigned long long *)&a0->field_8) = v69;
                    return a0;
                }
            }
            goto LABEL_50758c;
        }
        else
        {
            std::fs::metadata::h003d8cdbffde7c56(&v15, a4, a5);
            v7 = a5;
            v67 = v15;
            v65 = v59;
            ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v15);
            v64 = v7;
            if (!(!!v59->field_4c) || !(!v6))
                goto LABEL_507539;
            std::env::var_os::h1986be097247ce4a(&v15, "POSIXLY_CORRECT", 15);
            v65 = v59;
            ::0x4fce90::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h221d2028a300d640(&v15);
            v64 = v7;
            if (!(!!v59->field_4c) || !(!v6))
                goto LABEL_507539;
            v35 = a4;
            v36 = v64;
            v30 = &v35;
            v31 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v68 = &g_5b6018;
LABEL_5078fe:
            v15 = v68;
            v16 = 2;
            v19 = 0;
            v17 = &v30;
            v18 = 1;
        }
    }
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
    a0->field_0 = 4;
    return a0;
}
