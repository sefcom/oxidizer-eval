long long uu_cp::copy_file::h137dae572520ab74(struct_0 *a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x418]
    unsigned long long v1;  // [sp-0x410]
    unsigned long long v2;  // [sp-0x408]
    unsigned long long v3;  // [sp-0x400]
    unsigned long long v4;  // [sp-0x3f8]
    unsigned long long v5;  // [sp-0x3f0]
    char v6;  // [bp-0x3e8]
    char v7;  // [bp-0x3e0]
    char v8;  // [sp-0x3da]
    char v9;  // [sp-0x3d9]
    unsigned long v10;  // [sp-0x3d0], Other Possible Types: unsigned long long
    char v11;  // [bp-0x3c8], Other Possible Types: unsigned long
    unsigned long v12;  // [sp-0x3c0], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3b0]
    char v15;  // [sp-0x3a8]
    char v16;  // [bp-0x3a0], Other Possible Types: unsigned long long, unsigned long
    char v17;  // [sp-0x398], Other Possible Types: unsigned long long, unsigned long
    unsigned long v18;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long v19;  // [sp-0x388], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x380], Other Possible Types: unsigned long
    char v21;  // [bp-0x378]
    char v22;  // [bp-0x368]
    char v23;  // [bp-0x358]
    char v24;  // [bp-0x348]
    char v25;  // [bp-0x338]
    char v26;  // [bp-0x328]
    char v27;  // [bp-0x318]
    int v28;  // [sp-0x2e8]
    unsigned long long v29;  // [sp-0x2d8]
    unsigned long long v30;  // [sp-0x2c8]
    unsigned long long v31;  // [sp-0x2c0]
    int v32;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    unsigned long long v33;  // [sp-0x2b0]
    int v34;  // [sp-0x2a8], Other Possible Types: unsigned long long
    char v35;  // [bp-0x2a0], Other Possible Types: unsigned long
    int v36;  // [sp-0x298]
    int v37;  // [sp-0x288]
    int v38;  // [sp-0x278]
    int v39;  // [sp-0x268]
    int v40;  // [sp-0x258]
    int v41;  // [sp-0x248]
    int v42;  // [sp-0x238]
    int v43;  // [bp-0x208], Other Possible Types: char, unsigned long
    unsigned long long v44;  // [sp-0x200]
    unsigned long long v45;  // [sp-0x1f8]
    unsigned long long v46;  // [sp-0x1f0]
    void* v47;  // [sp-0x1e8]
    char v48;  // [bp-0x160]
    char v49;  // [bp-0x150]
    unsigned long v50;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v51;  // [sp-0x140]
    int v52;  // [sp-0x138]
    int v53;  // [sp-0x128]
    int v54;  // [sp-0x118]
    int v55;  // [sp-0x108]
    int v56;  // [sp-0xf8]
    int v57;  // [sp-0xe8]
    int v58;  // [sp-0xd8]
    unsigned long v59;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v60;  // [bp-0xb8]
    char v61[79];  // [bp+0x8]
    char v62;  // [bp+0x10]
    char v63;  // [bp+0x18]
    char v64;  // [bp+0x20]
    char v65;  // [bp+0x28]
    unsigned long v66;  // r14
    char v67[79];  // r15
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rcx
    unsigned long long v71;  // r8
    unsigned long long v72;  // r9
    unsigned long long v74;  // rax
    char v75;  // bl
    char v76[79];  // rcx
    unsigned long long v77;  // r15
    char v78[79];  // rcx
    unsigned long long v79;  // r14
    unsigned long long v80;  // rax
    struct_0 *v81;  // rdx
    int v82;  // xmm0
    int v83;  // xmm1
    unsigned int v84;  // eax
    char v85[79];  // rbx
    struct_0 *v86;  // rbx
    char v87;  // dl
    unsigned int v88;  // eax
    char v89;  // cl
    char v90;  // r15b
    unsigned int v94;  // eax
    struct_0 *v95;  // rdx
    unsigned long long v96;  // rax
    struct_0 *v97;  // rcx
    unsigned long long v98;  // rbx
    unsigned long long v99;  // r14
    struct_0 *v100;  // rcx
    char v101[79];  // rbx
    unsigned long long v102;  // rax
    unsigned int v103;  // r14d
    struct_0 *v104;  // rdx
    int v105;  // xmm0
    int v106;  // xmm1
    unsigned long long v107;  // rax
    char v108[12];  // r14
    struct_0 *v109;  // rdx
    int v110;  // xmm0
    int v111;  // xmm1
    unsigned long long v112;  // rax
    struct_0 *v113;  // rdx
    int v114;  // xmm0
    int v115;  // xmm1
    unsigned long long v116;  // rbx
    struct_0 *v117;  // rax

    v66 = a5;
    v67 = v61;
    v11 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3);
    v9 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a4, a5);
    if (v9)
    {
        uucore::features::fs::FileInformation::from_path::hc095ee89fe83797a(&v16, a4, a5, 0);
        if (v16)
        {
            v44 = v17;
            v43 = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h56e0ce27030d2b53(&v43);
        }
        else
        {
            memcpy(&v32, &v17, 144);
            if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf4fa09333dd779c2(*((long long *)&v62), &v32))
            {
                v12 = a2;
                v13 = a3;
                v43 = a4;
                v44 = a5;
                v32 = &v12;
                v33 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v34 = &v43;
                v35 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v16 = &g_5b5918;
                v17 = 3;
                v20 = 0;
                v18 = &v32;
                vvar_1604{stack -904} = 2;
                vvar_1606{reg 40} = a0;
                ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v86->field_8, &v16);
                v86->field_0 = 4;
                return a0;
            }
        }
        if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc68dee6b6ad2e985(*((long long *)&v63), a4, a5))
        {
            v12 = a2;
            v13 = a3;
            v43 = a4;
            v44 = a5;
            v32 = &v12;
            v33 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v34 = &v43;
            v35 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v16 = &g_5b5918;
            v17 = 3;
            v20 = 0;
            v18 = &v32;
            v19 = 2;
            vvar_1567{reg 40} = a0;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v86->field_8, &v16);
            v86->field_0 = 4;
            return a0;
        }
        v67 = v61;
        if (v67[65] || (v67[64] & v65) || v11 != 1)
        {
            std::fs::metadata::hb89aa4d693159f5b(&v16, a4, a5);
            v10 = a5;
            v67 = v61;
            ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v16);
            v66 = v10;
            if ((int)v16 == 2 && (v67[60] || v67[61] != 1) && !(char)uucore::features::fs::is_symlink_loop::h5a2448179c195fb6(a4, v66, v69, v70, v71, v72))
            {
                std::env::var_os::h6d46bd5d32e849be(&v16, "POSIXLY_CORRECTnot writing through dangling symlink 'cannot change attribute : Source file is a non regular file", 15);
                v67 = v61;
                ::0x4fc560::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h207247f05b9e6e5e(&v16);
                v66 = v10;
                if (v16 == 0x8000000000000000)
                {
                    v32 = a4;
                    v33 = v66;
                    v43 = &v32;
                    v44 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v16 = &g_5b5948;
                    v17 = 2;
                    v20 = 0;
                    v18 = &v43;
                    v19 = 1;
                    v86 = a0;
                    ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v86->field_8, &v16);
                    v86->field_0 = 4;
                    return a0;
                }
            }
        }
        if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a2, a3, a4, v66, 1) && !v67[60] && v67[61] == 1 && !v67[76] && (v74 = std::fs::remove_file::h47909d41cb221495(a4, v66, v69), v74))
            goto LABEL_5071fe;
    }
    if ((char)uucore::features::fs::are_hardlinks_to_same_file::h42360bc7a5e7419e(a2, a3, a4, v66))
    {
        std::path::Path::components::h4f3217acf0fc8653(&v32, a2, a3);
        std::path::Path::components::h4f3217acf0fc8653(&v16, a4, v66);
        v67 = v61;
        if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a2, a3, a4, v66, 1) && !v67[60] && v67[61] == 1 && !v67[76] && (v74 = std::fs::remove_file::h47909d41cb221495(a4, v66, v69), v74))
            goto LABEL_5071fe;
    }
    v75 = v67[62];
    if (!(char)uu_cp::file_or_link_exists::h08e64fc6ee2ba9af(a4, v66))
    {
LABEL_506db5:
        goto LABEL_506db7;
    }
    else
    {
        if (!(v75) || !((v76 = v61, !(!v76[60]) || !(v76[61] == 1))))
        {
            v10 = v66;
            v77 = v61[78];
            if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a2, a3, a4, v66, 1) && !(char)v77)
            {
                if (!v11)
                {
                    if (v61[76] && !v9)
                    {
                        v8 = v77;
                        std::path::Path::components::h4f3217acf0fc8653(&v32, a2, a3);
                        std::path::Path::components::h4f3217acf0fc8653(&v16, a4, v10);
                        if (!(char)::0x4fdeb0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v32, &v16, v69, v70, v71, v72))
                        {
                            a0->field_0 = 13;
                            return a0;
                        }
                        v78 = v61;
                        v77 = v8;
                        if (!(!v78[60]) || !(!v78[61]))
                        {
                            a0->field_0 = 13;
                            return a0;
                        }
                    }
                }
                else
                {
                    if (!v9)
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                    else if (!v61[65])
                    {
                        a0->field_0 = 13;
                        return a0;
                    }
                }
            }
            v79 = v10;
            v5 = *((long long *)&v64);
            v4 = v65;
            uu_cp::handle_existing_dest::hbb6ce0730301dcae(&v16, a2, a3, a4, v79, v61);
            v80 = v16;
            if (v80 != 13)
            {
                v81 = a0;
                *((long long *)((char *)&v81->field_1c + 8)) = *((long long *)&v22);
                v82 = *((int128_t *)&v17);
                v83 = *((int128_t *)&v19);
                *((int128_t *)&(&v81->field_18)[1]) = *((int128_t *)&v21);
                *((void*)((char *)&v81->field_c + 8)) = v83;
                *((void*)&v81->field_8) = v82;
                v81->field_0 = v80;
                return a0;
            }
            if (!(char)uucore::features::fs::are_hardlinks_to_same_file::h42360bc7a5e7419e(a2, a3, a4, v79))
            {
                v66 = v10;
                goto LABEL_506db7;
            }
            v84 = v77;
            if (!v84)
            {
                v66 = v10;
                if (!(v11 & v9))
                {
                    a0->field_0 = 13;
                    return a0;
                }
            }
            else
            {
                v66 = v10;
                if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a2, a3, a4, v66, 1) && !v67[60] && v67[61] == 1 && !v67[76] && (v74 = std::fs::remove_file::h47909d41cb221495(a4, v66, v69), v74))
                    goto LABEL_506db5;
                if (v61[76])
                {
                    a0->field_0 = 13;
                    return a0;
                }
            }
        }
LABEL_506db7:
        v85 = v61;
        if ((1 & v11) && (!(!v85[60]) || !(v85[61] == 1)))
        {
            v32 = 1;
            v33 = a4;
            v34 = v66;
            v35 = 1;
            v43 = &v32;
            v44 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            vvar_1590{stack -928} = &g_5b5948;
            vvar_1591{stack -920} = 2;
            vvar_1592{stack -896} = 0;
            vvar_1593{stack -912} = &v43;
            vvar_1594{stack -904} = 1;
            vvar_1596{reg 40} = a0;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v86->field_8, &v16);
            v86->field_0 = 4;
            return a0;
        }
        if (v85[72])
            uu_cp::print_verbose_output::h0b084c4a4b69dba5(v85[68], a1, a2, a3, a4, v66);
        if (!v85[56])
        {
            v90 = v85[65];
            goto LABEL_506f33;
        }
        else
        {
            v87 = v85[65];
            v88 = -0x100 | v87;
            v89 = v85[64];
            uucore::features::fs::FileInformation::from_path::hc095ee89fe83797a(&v16, a2, a3, v94);
            v12 = 1;
            v13 = a2;
            v14 = a3;
            v15 = 1;
            v50 = &v12;
            v51 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v43 = &g_5b5838;
            v44 = 1;
            v47 = 0;
            v45 = &v50;
            v46 = 1;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v48, &v43);
            v45 = *((long long *)&v49);
            *((int128_t *)&v43) = *((int128_t *)&v48);
            if (v16)
            {
                v95 = a0;
                *((long long *)((char *)&v95->field_c + 8)) = *((long long *)&v49);
                *((int128_t *)&v95->field_8) = *((int128_t *)&v48);
                v95->field_0 = 3;
                v95->field_18 = v17;
                return a0;
            }
            v90 = v87;
            v29 = v19;
            *((int128_t *)&v28) = *((int128_t *)&v17);
            *((int128_t *)&v52) = *((int128_t *)&v21);
            *((int128_t *)&v53) = *((int128_t *)&v22);
            *((int128_t *)&v54) = *((int128_t *)&v23);
            *((int128_t *)&v55) = *((int128_t *)&v24);
            *((int128_t *)&v56) = *((int128_t *)&v25);
            *((int128_t *)&v57) = *((int128_t *)&v26);
            *((int128_t *)&v58) = *((int128_t *)&v27);
            core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6b9cf25980fea4b1(&v43);
            v32 = v28;
            v34 = v29;
            v35 = v20;
            v36 = v52;
            v37 = v53;
            v38 = v54;
            v39 = v55;
            v40 = v56;
            v41 = v57;
            v42 = v58;
            v96 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h7a53a92732db61a3(*((long long *)&v64), &v32);
            if (v96)
            {
                v74 = std::fs::hard_link::ha53cd50fd146179c(v96 + 144, a4, v66);
                if (!v74)
                {
                    a0->field_0 = 13;
                    return a0;
                }
            }
            else
            {
                v85 = v61;
LABEL_506f33:
                v11 = a4;
                v10 = v66;
                uu_cp::context_for::h3e296cd4ee9c0cb4(&v28, a2, a3, a4, v66);
                v31 = (long long)(&v28)[8];
                v30 = v29;
                v8 = v90;
                if (v8 || v65 && v85[64])
                    std::fs::metadata::hb89aa4d693159f5b(&v16, a2, a3);
                else
                    std::fs::symlink_metadata::ha8b9885f9a62ee23(&v16, a2, a3);
                v98 = v16;
                v99 = v17;
                if (v98 == 2)
                {
                    uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h06974b7ebc5fb844(&v12, a2, a3, v99);
                    v100 = a0;
                    v100->field_c = *((int128_t *)&v13);
                    v100->field_0 = 4;
                    v12 = v12;
                    *((unsigned long long *)&v100->field_8) = v12;
                    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                    return a0;
                }
                memcpy(&v43, &v17, 160);
                memcpy(&v36, &v45, 144);
                *((int128_t *)&v34) = *((int128_t *)&v18);
                v32 = v98;
                v33 = v99;
                v101 = v61;
                v5 = v30;
                v4 = v31;
                uu_cp::calculate_dest_permissions::hb92839efbaa4ced5(&v16, v11, v10, (int)(&v37)[8], v101[50], v101[51]);
                v102 = v16;
                v103 = v17;
                if (v102 != 13)
                {
                    v104 = a0;
                    *((int *)((char *)&v104->field_1c + 12)) = *((int *)&(&v22)[4]);
                    v105 = *((int128_t *)((char *)&v17 + 4));
                    v106 = *((int128_t *)&v19);
                    *((int128_t *)((char *)&(&v104->field_18)[1] + 4)) = *((int128_t *)&(&v21)[4]);
                    *((void*)((char *)&v104->field_c + 12)) = v106;
                    *((void*)&(&v104->field_8)[1]) = v105;
                    v104->field_0 = v102;
                    v104->field_8 = v103;
                    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                    return a0;
                }
                v4 = v65;
                v3 = *((long long *)&v62);
                v2 = &v32;
                v1 = v30;
                v0 = v31;
                uu_cp::handle_copy_mode::h110c7f0573f0bf87(&v16, a2, a3, v11, v10, v101);
                v107 = v16;
                if (v107 != 13)
                {
                    v109 = a0;
                    *((long long *)((char *)&v109->field_1c + 8)) = *((long long *)&v22);
                    v110 = *((int128_t *)&v17);
                    v111 = *((int128_t *)&v19);
                    *((int128_t *)&(&v109->field_18)[1]) = *((int128_t *)&v21);
                    *((void*)((char *)&v109->field_c + 8)) = v111;
                    *((void*)&v109->field_8) = v110;
                    v109->field_0 = v107;
                    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                    return a0;
                }
                if (!v9)
                {
                    v16 = std::fs::set_permissions::h982d4959e5230aac(v11, v10, v103);
                    if (v16)
                        ::0x4fc650::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hcf1902d600ed6e5e(&v16);
                }
                v108 = &v101[48];
                if (!v8 && (!v65 || !v101[64]))
                {
                    uu_cp::copy_attributes::h42d0749b6e7cbf07(&v16, a2, a3, v11, v10, v108);
                    v107 = v16;
                    if (v107 != 13)
                    {
                        vvar_1611{reg 32} = a0;
                        *((long long *)((char *)&v109->field_1c + 8)) = *((long long *)&v22);
                        vvar_1612{reg 224} = *((int128_t *)&v17);
                        vvar_1613{reg 256} = *((int128_t *)&v19);
                        *((int128_t *)&(&v109->field_18)[1]) = *((int128_t *)&v21);
                        *((void*)((char *)&v109->field_c + 8)) = v111;
                        *((void*)&v109->field_8) = v110;
                        v109->field_0 = v107;
                        ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                        return a0;
                    }
LABEL_50739a:
                    uucore::features::fs::FileInformation::from_path::hc095ee89fe83797a(&v16, a2, a3, v8);
                    v116 = v17;
                    if (v16)
                    {
                        v117 = a0;
                        v117->field_0 = 2;
                        *((unsigned long long *)&v117->field_8) = v116;
                        ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                        return a0;
                    }
                    memcpy(&v60, &v17, 136);
                    v59 = v116;
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v16, v11, v10);
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc37314786ce0bd02(&v43, *((long long *)&v64), &v59, &v16);
                    ::0x4fc320::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hd3d6afb39b0a633f(&v43);
                    if (*(a1))
                    {
                        std::fs::metadata::hb89aa4d693159f5b(&v16, a2, a3);
                        if ((int)v16 == 2)
                        {
                            v100 = a0;
                            v100->field_0 = 2;
                            v12 = v17;
                            *((unsigned long long *)&v100->field_8) = v12;
                            ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                            return a0;
                        }
                        indicatif::progress_bar::ProgressBar::inc::h68b57dcf0fa4530e(a1, *((long long *)&(&v23)[8]), v69);
                    }
                    a0->field_0 = 13;
                    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                    return a0;
                }
                uucore::features::fs::canonicalize::h231f0839fd3443a3(&v12, a2, a3, 0, 1, v72, *((long long *)&v6), *((long long *)&v7), a0, v66, v11);
                if (v12 != 0x8000000000000000)
                {
                    v45 = v14;
                    *((int128_t *)&v43) = *((int128_t *)&v12);
                    uu_cp::copy_attributes::h42d0749b6e7cbf07(&v16, v44, v14, v11, v10, v108);
                    v112 = v16;
                    if (v112 != 13)
                    {
                        v113 = a0;
                        *((long long *)((char *)&v113->field_1c + 8)) = *((long long *)&v22);
                        v114 = *((int128_t *)&v17);
                        v115 = *((int128_t *)&v19);
                        *((int128_t *)&(&v113->field_18)[1]) = *((int128_t *)&v21);
                        *((void*)((char *)&v113->field_c + 8)) = v115;
                        *((void*)&v113->field_8) = v114;
                        v113->field_0 = v112;
                        ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v43);
                        if (v12 != 0x8000000000000000)
                        {
                            ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                            return a0;
                        }
                        ::0x4fc860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v12);
                        ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v28);
                        return a0;
                    }
                    ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v43);
                    if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a2, a3, a4, v66, 1) && !v67[60] && v67[61] == 1 && !v67[76] && (v74 = std::fs::remove_file::h47909d41cb221495(a4, v66, v69), v74))
                        goto LABEL_50739a;
                }
                ::0x4fc860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v12);
                goto LABEL_50739a;
            }
        }
    }
LABEL_5071fe:
    v97 = a0;
    v97->field_0 = 2;
    *((unsigned long long *)&v97->field_8) = v74;
    return a0;
}
