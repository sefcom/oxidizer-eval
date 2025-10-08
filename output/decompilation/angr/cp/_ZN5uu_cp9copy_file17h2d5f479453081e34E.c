long long uu_cp::copy_file(void* a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, char a6[104], unsigned long a7, unsigned long long a8, unsigned long long a9, char a10)
{
    unsigned long v0;  // [bp-0x3b8]
    unsigned long v1;  // [bp-0x3b0]
    unsigned long v2;  // [bp-0x390]
    unsigned long v3;  // [bp-0x388]
    char v4;  // [bp-0x380], Other Possible Types: unsigned long
    char v5;  // [bp-0x380]
    char v6;  // [sp-0x378], Other Possible Types: unsigned long, unsigned long long
    void* v7;  // [bp-0x378], Other Possible Types: char
    unsigned long v8;  // [bp-0x370], Other Possible Types: char
    char v9;  // [bp-0x370]
    unsigned int v10;  // [bp-0x364]
    char *v11;  // [bp-0x360], Other Possible Types: char, unsigned long
    char *v13;  // [bp-0x358], Other Possible Types: unsigned long long, unsigned long
    char v14;  // [bp-0x358]
    unsigned long v15;  // [bp-0x350], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x348]
    unsigned long long v17;  // [bp-0x340]
    void* v18;  // [bp-0x338]
    char v19;  // [bp-0x320], Other Possible Types: unsigned long long
    char v20;  // [bp-0x318], Other Possible Types: unsigned long long
    int v21;  // [bp-0x317]
    unsigned int v22;  // [bp-0x314]
    char *v23;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x308]
    int v25;  // [bp-0x307]
    unsigned int v26;  // [bp-0x304]
    void* v27;  // [bp-0x300], Other Possible Types: unsigned long long
    char v28;  // [bp-0x2f8]
    unsigned long long v29;  // [bp-0x2f0]
    char v30;  // [bp-0x2e8], Other Possible Types: unsigned int
    int v31;  // [bp-0x2e4]
    char v32;  // [bp-0x2d8]
    unsigned int v33;  // [bp-0x2d4]
    unsigned long long v34;  // [bp-0x2d0]
    char v35;  // [bp-0x2c8]
    int v36;  // [bp-0x2c4]
    char v37;  // [bp-0x2b8]
    int v38;  // [bp-0x2b4]
    char v39;  // [bp-0x2a8]
    int v40;  // [bp-0x2a4]
    char v41;  // [bp-0x298]
    int v42;  // [bp-0x294]
    char v43;  // [bp-0x284]
    unsigned int v44;  // [bp-0x274]
    unsigned long long v45;  // [bp-0x270], Other Possible Types: unsigned long
    unsigned long v46;  // [bp-0x268]
    unsigned long v47;  // [bp-0x260]
    char v48;  // [bp-0x258]
    unsigned int v49;  // [bp-0x24c]
    int v50;  // [bp-0x248], Other Possible Types: char *, char, unsigned long, unsigned long long
    unsigned long v52;  // [bp-0x240], Other Possible Types: unsigned long long
    int v53;  // [bp-0x238], Other Possible Types: char *, unsigned long, unsigned long long
    char v54;  // [bp-0x230], Other Possible Types: unsigned long long
    int v55;  // [bp-0x228]
    int v56;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned int v57;  // [bp-0x210]
    int v58;  // [bp-0x208]
    int v59;  // [bp-0x1fc]
    int v60;  // [bp-0x1f8]
    char v61;  // [bp-0x1e8]
    int v62;  // [bp-0x1dc]
    int v63;  // [bp-0x1d8]
    int v64;  // [bp-0x1c8]
    int v65;  // [bp-0x1bc]
    char v66;  // [bp-0x1ac]
    unsigned int v67;  // [bp-0x19c]
    char *v68;  // [bp-0x198]
    unsigned long long v69;  // [bp-0x190]
    int v70;  // [bp-0x188], Other Possible Types: char
    unsigned long long v71;  // [bp-0x178]
    int v72;  // [bp-0x170], Other Possible Types: char
    unsigned long v73;  // [bp-0x160]
    int v74;  // [bp-0x158]
    unsigned long long v75;  // [bp-0x148]
    int v76;  // [bp-0x138], Other Possible Types: char
    int v77;  // [bp-0x128], Other Possible Types: char
    int v78;  // [bp-0x118], Other Possible Types: char
    int v79;  // [bp-0x108], Other Possible Types: char
    char v80;  // [bp-0xf8]
    int v81;  // [bp-0xe8], Other Possible Types: char
    int v82;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v83;  // [bp-0xc0]
    char v84;  // [bp-0xb8]
    char v85[104];  // 4096
    unsigned long v86;  // 4096
    unsigned long v87;  // r15
    unsigned long long v88;  // rax
    char v89[104];  // rbp
    unsigned long v90;  // r13
    char v91[104];  // rbp
    char v92;  // al
    unsigned long v93;  // r13
    void* v94;  // r15
    unsigned int v95;  // eax
    int v96;  // xmm0
    int v97;  // xmm1
    char v98[104];  // rbp
    unsigned long long v99;  // r15
    unsigned int v100;  // eax
    unsigned long long v101;  // rax
    unsigned long long v102;  // r13
    unsigned long long v103;  // rax
    unsigned long v104;  // r15
    unsigned long long v105;  // rcx
    unsigned long long v106;  // rax
    unsigned long long v107;  // rcx
    unsigned int v108;  // edx
    unsigned int v109;  // ebx
    char v110;  // al
    unsigned long v111;  // r9
    int v112;  // xmm0
    int v113;  // xmm1
    int v114;  // xmm0
    int v115;  // xmm1
    unsigned long long v116;  // rbx
    int v117;  // xmm0
    int v118;  // xmm1
    int v119;  // xmm0
    int v120;  // xmm1

    v4 = a2.is_symlink(a3);
    v9 = a4.is_symlink(a5);
    v85 = a6;
    v86 = a5;
    if (v9)
    {
        v19.from_path(a4, a5, 0);
        if ((v19 & 1))
        {
            v15 = *((long long *)&v20);
            v14 = 1;
            core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(&v14);
        }
        else
        {
            memcpy(&v50, &v20, 144);
            if (a7.get_inner(&v50))
            {
                v45 = a2;
                v46 = a3;
                v13 = a4;
                v15 = a5;
                v50 = &v45;
                v52 = <std::path::Display as core::fmt::Display>::fmt;
                v53 = &v13;
                v54 = <std::path::Display as core::fmt::Display>::fmt;
                v19 = &g_55ed00;
                v20 = 3;
                v27 = 0;
                v23 = &v50;
                goto LABEL_4a407f;
            }
        }
        if (a8.get_inner(a4, a5))
        {
            v45 = a2;
            v46 = a3;
            v13 = a4;
            v15 = a5;
            v50 = &v45;
            v52 = <std::path::Display as core::fmt::Display>::fmt;
            v53 = &v13;
            v54 = <std::path::Display as core::fmt::Display>::fmt;
            v19 = &g_55ed00;
            v20 = 3;
            v27 = 0;
            v23 = &v50;
LABEL_4a407f:
            v24 = 2;
            goto LABEL_0x4a408b;
        }
        if (!a6[89])
        {
            if (a10)
            {
                if (v5 && !a6[88])
                    goto LABEL_4a41f5;
            }
            else
            {
                if (v5)
                {
LABEL_4a41f5:
                    v87 = a5;
                    v85 = a6;
                    v86 = v87;
                    if ((char)uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, a5, 1))
                    {
                        v85 = a6;
                        v86 = v87;
                        if (!v85[84])
                        {
                            v85 = a6;
                            v86 = v87;
                            if (v85[85] == 1)
                            {
                                v85 = a6;
                                v86 = v87;
                                if (!v85[101])
                                {
                                    v85 = a6;
                                    v86 = v87;
                                    if (std::fs::remove_file(a4, v87))
                                        goto LABEL_4a4821;
                                    goto LABEL_4a4248;
                                }
                            }
                        }
                    }
                }
            }
        }
        std::fs::metadata(&v19, a4, a5);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v19);
        if ((int)v19 == 2 && (a6[84] || a6[85] != 1) && !(char)uucore::features::fs::is_symlink_loop(a4, a5))
        {
            std::env::var_os(&v19);
            if (v19 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, *((long long *)&v20));
                v50 = a4;
                v52 = a5;
                v13 = &v50;
                v15 = <std::path::Display as core::fmt::Display>::fmt;
                v19 = &g_55ed30;
                v20 = 2;
                v27 = 0;
                v23 = &v13;
                v24 = 1;
                v7 + 8.map_or_else(&v19);
                *((unsigned long long *)v7) = 9223372036854775811;
                return 9223372036854775811;
            }
            core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v19, *((long long *)&v20));
        }
        goto LABEL_4a41f5;
    }
LABEL_4a4248:
    v89 = v85;
    v3 = a2;
    if ((char)uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, v86))
    {
        v90 = v86;
        (unsigned long long)v50.components(v3, a3);
        v19.components(a4, v90);
        v86 = v90;
        if (!(unsigned long long)v50.eq(&v19) && !v89[84] && v89[85] == 1 && std::fs::remove_file(a4, v86))
            goto LABEL_4a4821;
    }
    v91 = v89;
    if (!(char)uu_cp::file_or_link_exists(a4, v86))
    {
LABEL_4a44b2:
        v98 = v91;
        if ((v89[86] & v5) && (v98[84] || v98[85] != 1))
        {
            v50 = 1;
            v52 = a4;
            v53 = v86;
            v54 = 1;
            v13 = &v50;
            v15 = <os_display::Quoted as core::fmt::Display>::fmt;
            v19 = &g_55ed50;
            v20 = 2;
            v27 = 0;
            v23 = &v13;
            v24 = 1;
            a0 + 8.map_or_else(&v19);
            *((unsigned long long *)a0) = 9223372036854775811;
            return 9223372036854775811;
        }
        v4 = v86;
        if (!v98[80])
        {
            v104 = v98[89];
            v102 = a9;
            goto LABEL_4a4841;
        }
        v99 = a9;
        v7 = v98[89];
        v100 = v7;
        if (a10 == 1 && !v7)
            v100 = v98[88];
        v19.from_path(v3, v2, v100);
        v45 = 1;
        v46 = v3;
        v47 = v2;
        v48 = 1;
        v68 = &v45;
        v69 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = &g_55ec38;
        v15 = 1;
        v18 = 0;
        v16 = &v68;
        v17 = 1;
        v72.map_or_else(&v13);
        if (((char)v19 & 1))
        {
            v101 = *((long long *)&v20);
            *((unsigned long *)&a0[24]) = v73;
            a0[8] = v72;
            *((unsigned long long *)a0) = 9223372036854775810;
            *((unsigned long long *)&a0[32]) = v101;
            return v101;
        }
        v102 = v99;
        v71 = v24;
        memcpy(&v70, &v20, 16);
        memcpy(&v76, &v28, 16);
        memcpy(&v77, &v30, 16);
        memcpy(&v78, &v32, 16);
        memcpy(&v79, &v35, 16);
        memcpy(&v80, &v37, 16);
        memcpy(&v81, &v39, 16);
        memcpy(&v82, &v41, 16);
        core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v72);
        v75 = v71;
        v74 = v70;
        v50 = v70;
        v53 = v75;
        v54 = v27;
        v55 = v76;
        v56 = v77;
        v58 = v78;
        v60 = v79;
        memcpy(&v61, &v80, 16);
        v63 = v81;
        v64 = v82;
        v103 = v99.get_inner(&(unsigned long long)v50);
        if (!v103)
        {
            v104 = v6;
LABEL_4a4841:
            uu_cp::context_for(&v45, v3, a3, a4, v4);
            v6 = v46;
            v11 = v47;
            if (((char)v104 & 1) || a10 && v98[88])
                std::fs::metadata(&v19, v3, a3);
            else
                std::fs::symlink_metadata(&v19, v3, a3);
            v105 = *((long long *)&v20);
            if (v19 == 2)
            {
                uu_cp::copy_file::{{closure}}(&v13, v3, a3, v52);
                v106 = v13;
                memcpy(&v74, &v15, 16);
                *((int128_t *)&a0[16]) = *((int128_t *)&v15);
                v107 = 9223372036854775811;
                goto LABEL_4a4906;
            }
            v67 = v44;
            memcpy(&v66, &v43, 16);
            v65 = v42;
            memcpy(&(char)v63, &v40, 16);
            *((int128_t *)&v62) = (int128_t)v38;
            memcpy(&(char)v60, &v36, 16);
            *((int128_t *)&v59) = *((int128_t *)&v33);
            memcpy(&(char)v56, &v31, 16);
            memcpy(&v55, &v27, 16);
            v56 = v29;
            *((int128_t *)&v53) = *((int128_t *)&v23);
            v50 = v19;
            v52 = v105;
            v57 = v30;
            uu_cp::calculate_dest_permissions(&v19, a4, v4, v57, v98[74], v98[75], v6, v11);
            v108 = *((int *)&v20);
            if (v19 == 9223372036854775820)
            {
                v109 = v57 & 0xf000;
                v10 = 1;
                v49 = *((int *)&v20);
                if (v109 != 0x1000 && v109 != 0x2000 && v109 != 0x6000)
                    v10 = 0;
                v1 = v109 == 0x1000;
                v0 = a10;
                uu_cp::handle_copy_mode(&v19, v3, a3, a4, v4, v98, v6, v11, &v50, a7);
                v110 = v20;
                if (v19 == 9223372036854775820)
                {
                    if (v98[96] && !(v110 & 1))
                        uu_cp::print_verbose_output(v98[92], a1, v3, a3, a4, v4);
                    if (!v8)
                    {
                        v19 = std::fs::set_permissions(a4, v4, v49);
                        if (v19)
                            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
                    }
                    v111 = &v98[72];
                    if (((char)v104 & 1) || a10 && v98[88])
                    {
                        v8 = v111;
                        uucore::features::fs::canonicalize(&v13, v3, a3, 0, 1);
                        if (v13 == 0x8000000000000000)
                        {
                            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v13);
                            goto LABEL_4a4d50;
                        }
                        v6 = v15;
                        v11 = v16;
                        std::fs::metadata(&v19, v15, v16);
                        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v19);
                        if ((unsigned int)v19 != 2)
                        {
                            uu_cp::copy_attributes(&v19, v6, v11, a4, v4, v8);
                            if (v19 == 9223372036854775820)
                                goto LABEL_4a4d46;
                            v112 = *((int128_t *)&v20);
                            v113 = *((int128_t *)&v24);
                            *((int128_t *)&a0[40]) = *((int128_t *)&v28);
                            a0[24] = v113;
                            a0[8] = v112;
                            *((unsigned long long *)a0) = v19;
                            core::ptr::drop_in_place<std::path::PathBuf>(&v13);
                        }
                        else
                        {
LABEL_4a4d46:
                            core::ptr::drop_in_place<std::path::PathBuf>(&v13);
LABEL_4a4d50:
                            if (!((~(a10) | (char)v104) & 1))
                                v104 = v98[88];
                            v19.from_path(v3, a3, (unsigned int)v104 & 1);
                            v116 = *((long long *)&v20);
                            if ((int)v19 == 1)
                            {
                                *((unsigned long long *)a0) = 9223372036854775809;
                                *((unsigned long long *)&a0[8]) = v116;
                            }
                            else
                            {
                                memcpy(&v84, &v23, 136);
                                v83 = v116;
                                std::sys::pal::unix::os::split_paths::bytes_to_path(&v19, a4, v4);
                                v13.insert(v102, &v83, &v19);
                                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v13);
                                if (a1)
                                {
                                    std::fs::metadata(&v19, v3, a3);
                                    if ((int)v19 == 2)
                                    {
                                        v106 = *((long long *)&v20);
                                        v107 = 9223372036854775809;
                                    }
                                    else
                                    {
                                        a1.inc(v34);
                                        goto LABEL_4a4e55;
                                    }
LABEL_4a4906:
                                    *((unsigned long long *)a0) = v107;
                                    *((unsigned long long *)&a0[8]) = v106;
                                }
                                else
                                {
LABEL_4a4e55:
                                    *((unsigned long long *)a0) = 9223372036854775820;
                                }
                            }
                        }
                    }
                    else
                    {
                        if ((char)v10)
                        {
                            v8 = v111;
                            std::fs::metadata(&v19, v3, a3);
                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v19);
                            v111 = v8;
                            if ((unsigned int)v19 == 2)
                                goto LABEL_4a4c78;
                            goto LABEL_4a4d50;
                        }
                        else
                        {
LABEL_4a4c78:
                            uu_cp::copy_attributes(&v19, v3, a3, a4, v4, v111);
                            if (v19 == 9223372036854775820)
                                goto LABEL_4a4d50;
                            v114 = *((int128_t *)&v20);
                            v115 = *((int128_t *)&v24);
                            *((int128_t *)&a0[40]) = *((int128_t *)&v28);
                            a0[24] = v115;
                            a0[8] = v114;
                            *((unsigned long long *)a0) = v19;
                        }
                    }
                }
                else
                {
                    v117 = (int128_t)v21;
                    v118 = (int128_t)v25;
                    *((int128_t *)&a0[40]) = *((int128_t *)&v28);
                    a0[25] = v118;
                    a0[9] = v117;
                    *((unsigned long long *)a0) = v19;
                    *((char *)&a0[8]) = v110;
                }
            }
            else
            {
                v119 = *((int128_t *)&v22);
                v120 = *((int128_t *)&v26);
                *((int128_t *)&a0[40]) = *((int128_t *)&v28);
                a0[28] = v120;
                a0[12] = v119;
                *((unsigned long long *)a0) = v19;
                *((unsigned int *)&a0[8]) = v49;
            }
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v45);
        }
        if (std::fs::hard_link(v103 + 144, a4, v4))
        {
LABEL_4a4821:
            *((unsigned long long *)a0) = 9223372036854775809;
            *((unsigned long long *)&a0[8]) = v88;
            return v88;
        }
        if (v98[96])
            uu_cp::print_verbose_output(v98[92], a1, v3, a3, a4, v4);
LABEL_4a4be2:
        *((unsigned long long *)a0) = 9223372036854775820;
        return 9223372036854775820;
    }
    else if ((v89[86] & 1))
    {
        v91 = v89;
        if (!v91[84])
        {
            v91 = v89;
            if (v91[85] == 1)
                goto LABEL_4a42dc;
            goto LABEL_4a44b2;
        }
    }
    else
    {
LABEL_4a42dc:
        v92 = uucore::features::fs::paths_refer_to_same_file(v3, a3, a4, v86, 1);
        v93 = v89[103];
        if ((!(char)v93 & v92))
        {
            if (v5)
            {
                if (v8 && v89[89])
                    goto LABEL_4a435d;
                goto LABEL_4a4be2;
            }
            else
            {
                if (!v89[101] || v8)
                    goto LABEL_4a435d;
                v11 = v93;
                (unsigned long long)v50.components(v3, a3);
                v19.components(a4, v86);
                if (!(unsigned long long)v50.eq(&v19))
                {
                    *((unsigned long long *)v7) = 9223372036854775820;
                    return v7;
                }
                if (!v89[85] && !v89[84])
                    goto LABEL_4a435d;
                goto LABEL_4a4be2;
            }
        }
LABEL_4a435d:
        uu_cp::handle_existing_dest(&v19, v3, a3, a4, v86, v89, a10, a9);
        if (v19 != 9223372036854775820)
        {
            v96 = *((int128_t *)&v20);
            v97 = *((int128_t *)&v24);
            *((int128_t *)&v94[40]) = *((int128_t *)&v28);
            v94[24] = v97;
            v94[8] = v96;
            *((unsigned long long *)v94) = v19;
            return v19;
        }
        v91 = a6;
        if (!(char)uucore::features::fs::are_hardlinks_to_same_file(v3, a3, a4, v86))
            goto LABEL_4a44b2;
        goto LABEL_4a4be2;
    }
    switch (v95)
    {
    case 0:
        v91 = a6;
        if (!(v5 & v8))
            goto LABEL_4a4be2;
        break;
    default:
        v91 = a6;
        break;
    }
    goto LABEL_4a44b2;
}
