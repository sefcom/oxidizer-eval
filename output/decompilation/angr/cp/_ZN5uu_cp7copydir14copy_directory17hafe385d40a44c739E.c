long long uu_cp::copydir::copy_directory(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6, unsigned long long a7, unsigned long long a8, unsigned long long a9)
{
    char v0;  // [bp-0x3d8]
    char v1;  // [bp-0x3b9]
    void* v2;  // [bp-0x3b8]
    unsigned int v3;  // [bp-0x3ac]
    unsigned long long v4;  // [bp-0x3a8]
    unsigned long long v5;  // [bp-0x3a0]
    char *v6;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x38c]
    char *v8;  // [bp-0x388], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x388]
    int v10;  // [bp-0x380], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x380]
    char *v12;  // [bp-0x378], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x378]
    int v14;  // [bp-0x370], Other Possible Types: unsigned long long, char
    unsigned long long v15;  // [bp-0x370]
    void* v16;  // [bp-0x368]
    int v17;  // [bp-0x360]
    char v18;  // [bp-0x350]
    int v19;  // [sp-0x350]
    char v21;  // [bp-0x347]
    char v22;  // [bp-0x345]
    unsigned int v23;  // [bp-0x344]
    unsigned long long v24;  // [bp-0x340]
    unsigned long long v25;  // [bp-0x338]
    unsigned long long v26;  // [bp-0x330]
    char *v27;  // [bp-0x328], Other Possible Types: unsigned long long
    char *v28;  // [bp-0x328]
    unsigned long long v29;  // [bp-0x328]
    unsigned long long v30;  // [bp-0x320]
    unsigned long long v31;  // [bp-0x320]
    char *v32;  // [bp-0x318], Other Possible Types: unsigned long long
    char v33;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0x310]
    void* v35;  // [bp-0x308]
    unsigned long long v40;  // [bp-0x2d8]
    char *v41;  // [bp-0x2d8]
    int v42;  // [bp-0x2d8], Other Possible Types: char
    unsigned long long v43;  // [bp-0x2d0]
    int v44;  // [bp-0x2c8]
    char v45;  // [bp-0x2c8]
    int v46;  // [bp-0x2b8]
    unsigned long v47;  // [bp-0x2a0]
    unsigned long long v48;  // [bp-0x298]
    unsigned int v49;  // [bp-0x28c]
    int v50;  // [bp-0x288]
    unsigned long long v51;  // [bp-0x280]
    unsigned long long v52;  // [bp-0x278]
    char *v53;  // [bp-0x270]
    unsigned long long v54;  // [bp-0x268]
    int v55;  // [bp-0x258]
    int v56;  // [bp-0x258], Other Possible Types: unsigned long long
    int v57;  // [bp-0x248]
    int v58;  // [bp-0x238]
    char *v59;  // [bp-0x220], Other Possible Types: char, unsigned long long
    char v60;  // [bp-0x218]
    unsigned long long v61;  // [bp-0x218]
    unsigned long long v62;  // [bp-0x210]
    int v63;  // [bp-0x208]
    int v64;  // [bp-0x1f8]
    char *v65;  // [bp-0x1e8], Other Possible Types: char, unsigned long
    char v66;  // [bp-0x1e7]
    unsigned long long v67;  // [bp-0x1e0]
    unsigned long long v68;  // [bp-0x1e0]
    void* v69;  // [bp-0x1d8], Other Possible Types: char *
    char *v70;  // [bp-0x1d8]
    unsigned long long v71;  // [bp-0x1d0]
    int v72;  // [bp-0x1c8], Other Possible Types: void*
    void* v73;  // [bp-0x1c8]
    char v74;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v75;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v76;  // [bp-0x1b0]
    char v77;  // [bp-0x1a8]
    unsigned long long v78;  // [bp-0x1a0]
    void* v79;  // [bp-0x198]
    char v80;  // [bp-0x190]
    char *v81;  // [bp-0x180]
    char v82;  // [bp-0x178]
    int v83;  // [bp-0x168]
    unsigned long long v84;  // [bp-0x158]
    char v85;  // [bp-0x150]
    unsigned int v86;  // [bp-0x14f]
    unsigned int v87;  // [bp-0x14c]
    uint128_t v88;  // [bp-0x148]
    char *v89;  // [bp-0x138], Other Possible Types: unsigned long long
    int v90;  // [bp-0x138]
    unsigned long long v91;  // [bp-0x130]
    int v92;  // [bp-0x128], Other Possible Types: char *
    unsigned long long v93;  // [bp-0x120]
    char v94;  // [bp-0x118]
    char v95;  // [bp-0x108]
    char v96;  // [bp-0xf8]
    unsigned long long v97;  // [bp-0xe0]
    unsigned long long v98;  // [bp-0xd8]
    int v103;  // [bp-0xb0], Other Possible Types: char
    unsigned long v104;  // [bp-0xa0]
    int v105;  // [bp-0x98], Other Possible Types: char
    unsigned long v106;  // [bp-0x88]
    char *v107;  // [bp-0x80]
    char v108;  // [bp-0x78]
    char v109;  // [bp-0x68]
    int v110;  // [bp-0x58]
    char v111;  // [bp-0x48]
    unsigned long long v112;  // [bp-0x38]
    char v113;  // r13b
    unsigned long long v114;  // 4096
    unsigned long long v115;  // rcx
    unsigned long long v116;  // rax
    unsigned long long v117;  // rax
    unsigned long long v118;  // rdx
    unsigned long long v119;  // rax
    unsigned long long v120;  // rdx
    char *v121;  // rax
    int v122;  // xmm0
    int v123;  // xmm1
    unsigned int v124;  // ebx
    int v125;  // xmm0
    int v126;  // xmm0
    int v127;  // xmm0
    unsigned int v140;  // ecx
    unsigned int v141;  // ecx
    unsigned long long v142;  // r13
    unsigned long long v143;  // rbp
    unsigned long long v144;  // r12
    char *v145;  // rax
    int v146;  // xmm0
    int v147;  // xmm1
    int v148;  // xmm2
    char *v149;  // rax
    int v150;  // xmm0
    int v151;  // xmm1
    unsigned long long v152;  // rax
    char *v153;  // rax
    int v154;  // xmm0
    int v155;  // xmm1
    char v156;  // cl
    unsigned long long v157;  // rdx
    int v158;  // xmm0
    int v159;  // xmm1
    unsigned long long v164;  // [bp-0x250]

    v26 = a1;
    v113 = a6->padding_51[6];
    v114 = a2;
    if (!v113)
    {
        v114 = a2;
        if (!a6->padding_51[5])
        {
            v114 = a2;
            if ((char)v114.is_symlink(a3))
                return uu_cp::copy_file(a0, v26, a2, a3, a4, a5, a6, a7, a8, a9, 1);
        }
    }
    v115 = v114;
    if (a6->field_5c)
    {
        v4 = v115;
        v5 = a3;
        uu_cp::copydir::path_has_prefix(&(char)v65, a4, a5, v115, a3);
        if (v65 == 1)
        {
            v116 = v67;
            *((unsigned long long *)v2) = 9223372036854775809;
            *((unsigned long long *)&v2[8]) = v67;
        }
        else if ((v66 & 1))
        {
            v29 = 1;
            v30 = v4;
            v32 = v5;
            v33 = 1;
            v117 = v4.file_name(v5);
            if (!v117)
                core::option::unwrap_failed(&g_55e768); /* do not return */
            v59.join(a4, a5, v117, v118);
            v8 = 1;
            *((int128_t *)&v10) = *((int128_t *)&v60);
            v14 = 1;
            v89 = &v29;
            v91 = <os_display::Quoted as core::fmt::Display>::fmt;
            v92 = &v8;
            v93 = <os_display::Quoted as core::fmt::Display>::fmt;
            v65 = &g_55e6a0;
            v67 = 2;
            v72 = 0;
            v69 = &v89;
            v71 = 2;
            v103.map_or_else(&(char)v65);
            core::ptr::drop_in_place<std::path::PathBuf>(&v59);
            *((unsigned long *)&v2[24]) = v104;
            v2[8] = v103;
            v116 = 9223372036854775811;
            *((unsigned long long *)v2) = 9223372036854775811;
        }
        else
        {
            v1 = a6->field_5a;
            if (a6->field_5a)
            {
                v119 = v4.parent(v5);
                if (!v119)
                    goto LABEL_499f11;
                v42.join(a4, a5, v119, v120);
                uu_cp::copydir::build_dir(&(char)v65, &v42, 1, (char)a6->field_48, a6->field_48[2], 0, *((long long *)&v0));
                v121 = v65;
                if (v121 == 9223372036854775820)
                {
                    if (a6->field_5e)
                    {
                        v59.join(a4, a5, v4, v5);
                        v6 = &v42;
                        uu_cp::aligned_ancestors(&(char)v65, v4, v5, v61, v62);
                        (char)v89.into_iter(&(char)v65);
                        (char)v27.next(&(char)v89);
                        if (v28)
                        {
                            v27 = v28;
                            do
                            {
                                v53 = v27;
                                v54 = v31;
                                *((int128_t *)&v56) = *((int128_t *)&v32);
                                v9 = &v53;
                                v11 = <std::path::Display as core::fmt::Display>::fmt;
                                v13 = &(unsigned long long)v56;
                                v15 = <std::path::Display as core::fmt::Display>::fmt;
                                v65 = &g_55e6c0;
                                v68 = 3;
                                v73 = 0;
                                v70 = &v9;
                                v71 = 2;
                                std::io::stdio::_print(&(char)v65);
                                (char)v27.next(&(char)v89);
                                v27 = v28;
                            } while (v27);
                        }
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&(char)v89);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v59);
                    }
                    v52 = *((long long *)&v45);
                    *((int128_t *)&v50) = *((int128_t *)&v42);
LABEL_499f25:
                    v124 = a6->padding_4b[3];
                    v98 = v51;
                    v97 = v52;
                    (char)v65.new(v4, v5, v51, v52);
                    if (v65 == 0x8000000000000000)
                    {
                        v59 = v68;
                        v27 = &v59;
                        v30 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v8 = &g_55e6f0;
                        v10 = 1;
                        v16 = 0;
                        v12 = &v27;
                        v14 = 1;
                        v105.map_or_else(&v8);
                        *((unsigned long *)&v2[24]) = v106;
                        v2[8] = v105;
                        *((unsigned long long *)v2) = 9223372036854775811;
                        core::ptr::drop_in_place<std::io::error::Error>(&v59);
                    }
                    else
                    {
                        memcpy(&v96, &v77, 16);
                        v125 = *((int128_t *)&v65);
                        memcpy(&v95, &v75, 16);
                        memcpy(&v94, &v73, 16);
                        *((int128_t *)&v92) = *((int128_t *)&v70);
                        v90 = v125;
                        v56 = 0x8000000000000000;
                        v3 = 1;
                        v9.new(v4, v5);
                        v47 = &a6->field_48;
                        v22 = a6->field_59;
                        v84 = *((long long *)&v18);
                        v83 = v17;
                        memcpy(&v82, &v15, 16);
                        v86 = *((int *)&v21);
                        v87 = v23;
                        memcpy(&v80, &v9, 16);
                        v81 = v13;
                        v65 = 0;
                        v69 = 0;
                        v71 = 8;
                        *((uint128_t *)&v72) = 0;
                        v75 = 8;
                        *((uint128_t *)&v76) = 0;
                        v78 = 8;
                        v79 = 0;
                        v85 = v113;
                        v88 = 0;
                        v7 = a6->field_58;
                        v49 = v124;
                        v25 = 9223372036854775820;
                        while (true)
                        {
                            v59.next(&(char)v65);
                            if (v59 != 9223372036854775809)
                            {
                                if (v59 != 9223372036854775810)
                                {
                                    v9 = v59;
                                    v126 = *((int128_t *)&v61);
                                    v17 = v64;
                                    v14 = v63;
                                    v10 = v126;
                                    v40 = uucore::util_name();
                                    v43 = v120;
                                    v53 = &v40;
                                    v54 = <&T as core::fmt::Display>::fmt;
                                    v27 = &g_55e700;
                                    v30 = 2;
                                    v35 = 0;
                                    v32 = &v53;
                                    v33 = 1;
                                    std::io::stdio::_eprint(&v27);
                                    v41 = &v9;
                                    v43 = <walkdir::error::Error as core::fmt::Display>::fmt;
                                    v28 = &g_55e620;
                                    v31 = 2;
                                    v35 = 0;
                                    v32 = &v41;
                                    v34 = 1;
                                    std::io::stdio::_eprint(&v28);
                                    core::ptr::drop_in_place<walkdir::error::Error>(&v9);
                                    continue;
                                }
                                else
                                {
                                    core::ptr::drop_in_place<walkdir::IntoIter>(&(char)v65);
                                    v141 = v140 & 0xffffff00 | 1;
                                    v26 = 0x8000000000000000;
                                    if (v26 != 0x8000000000000000)
                                    {
                                        if (v164.strip_prefix((long long)v57, v4, v5).unwrap(v120, &g_55e720))
                                        {
                                            v143 = v120;
                                            do
                                            {
                                                v144 = v142.parent(v143);
                                                v28.join(v4, v5, v142, v143);
                                                (char)v65.new(&v89, &v28, v7);
                                                v145 = v65;
                                                if (v145 != 0x8000000000000000)
                                                {
                                                    v24 = 8;
                                                    v146 = *((int128_t *)&v68);
                                                    v147 = *((int128_t *)&v71);
                                                    v148 = *((int128_t *)&v74);
                                                    *((int128_t *)&v19) = (int128_t)v76;
                                                    v17 = v148;
                                                    v14 = v147;
                                                    v10 = v146;
                                                    v9 = v145;
                                                    uu_cp::copy_attributes(&(char)v65, v11, v13, (long long)v19, (long long)(&v19)[8], v47);
                                                    v149 = v65;
                                                    if (v149 != v25)
                                                    {
                                                        v150 = *((int128_t *)&v68);
                                                        v151 = *((int128_t *)&v71);
                                                        *((int128_t *)&v2[40]) = *((int128_t *)&v74);
                                                        v2[24] = v151;
                                                        v2[8] = v150;
                                                        *((char **)v2) = v149;
                                                        core::ptr::drop_in_place<uu_cp::copydir::Entry>(&v9);
LABEL_49ab40:
                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v28);
                                                        goto LABEL_49aa64;
                                                    }
                                                }
                                                else
                                                {
                                                    *(a0) = 9223372036854775814;
                                                    goto LABEL_49ab40;
                                                }
                                                core::ptr::drop_in_place<uu_cp::copydir::Entry>(&v9);
                                                core::ptr::drop_in_place<std::path::PathBuf>(&v28);
                                                v142 = v144;
                                                v143 = v120;
                                            } while (v144);
                                        }
                                        core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v56);
                                        v141 = 0;
                                    }
                                    if (v1)
                                    {
                                        v3 = v141;
                                        v152 = v4.file_name(v5);
                                        if (!v152)
                                            core::option::unwrap_failed(&g_55e738); /* do not return */
                                        v42.join(v98, v97, v152, v120);
                                        uu_cp::aligned_ancestors(&(char)v65, v4, v5, v43, (long long)v44);
                                        v28.into_iter(&(char)v65);
                                        v8.next(&v28);
                                        if (v9)
                                        {
                                            v8 = v9;
                                            do
                                            {
                                                uucore::features::fs::canonicalize(&v59, v8, v11, 0, 1);
                                                if (v59 == 0x8000000000000000)
                                                {
                                                    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v59);
                                                }
                                                else
                                                {
                                                    uu_cp::copy_attributes(&(char)v65, v61, v62, v13, v15, v47);
                                                    v153 = v65;
                                                    if (v153 == v25)
                                                    {
                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v59);
                                                    }
                                                    else
                                                    {
                                                        v154 = *((int128_t *)&v68);
                                                        v155 = *((int128_t *)&v71);
                                                        *((int128_t *)&v2[40]) = *((int128_t *)&v74);
                                                        v2[24] = v155;
                                                        v2[8] = v154;
                                                        *((char **)v2) = v153;
                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v59);
                                                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v28);
                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v42);
                                                        v156 = (char)v3 ^ 1;
                                                        v157 = v26;
                                                        goto LABEL_49aa4e;
                                                    }
                                                }
                                                v8.next(&v28);
                                                v8 = v9;
                                            } while (v8);
                                        }
                                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v28);
                                        core::ptr::drop_in_place<std::path::PathBuf>(&v42);
                                    }
                                    *(a0) = v25;
                                    if (v26 != 0x8000000000000000)
                                        core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v56);
                                    core::ptr::drop_in_place<uu_cp::copydir::Context>(&v89);
                                    break;
                                }
                            }
                            v127 = *((int128_t *)&v61);
                            v46 = v64;
                            v44 = v63;
                            v42 = v127;
                            v6 = v43;
                            v48 = (long long)v44;
                            v9.new(&v89, v43, (long long)v44, v7);
                            if (v9 != 0x8000000000000000)
                            {
                                v112 = v24;
                                memcpy(&v111, &v18, 16);
                                v110 = v17;
                                memcpy(&v109, &v15, 16);
                                memcpy(&v108, &v11, 16);
                                v107 = v9;
                                uu_cp::copydir::copy_direntry(&v9, v26, &v107, a6, a7, v49, a8, a9);
                                if (v9 != v25)
                                {
                                    v158 = *((int128_t *)&v11);
                                    v159 = (int128_t)v14;
                                    v2[40] = v17;
                                    v2[24] = v159;
                                    v2[8] = v158;
                                    *((char **)v2) = v9;
LABEL_49aa2a:
                                    core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v42);
                                    core::ptr::drop_in_place<walkdir::IntoIter>(&(char)v65);
                                    v157 = 0x8000000000000000;
LABEL_49aa4e:
                                    if (!((v157 == 0x8000000000000000 | v156) & 1))
                                    {
LABEL_49aa64:
                                        core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v56);
                                    }
                                    core::ptr::drop_in_place<uu_cp::copydir::Context>(&v89);
                                    break;
                                }
                                else if (((short)(int)(&v46)[8] & 0xf000) != 0x4000)
                                {
                                    core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v61);
                                }
                                else
                                {
                                    core::ptr::drop_in_place<core::option::Option<walkdir::dent::DirEntry>>(&v56);
                                    v58 = v64;
                                    v57 = v63;
                                    *((int128_t *)&v55) = *((int128_t *)&v61);
                                }
                            }
                            else
                            {
                                *(a0) = 9223372036854775814;
                                goto LABEL_49aa2a;
                            }
                        }
                    }
                    v116 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&(char)v50);
                }
                else
                {
                    v122 = *((int128_t *)&v68);
                    v123 = *((int128_t *)&v71);
                    *((int128_t *)&v2[40]) = *((int128_t *)&v74);
                    v2[24] = v123;
                    v2[8] = v122;
                    *((char **)v2) = v121;
                    v116 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v42);
                }
            }
            else
            {
LABEL_499f11:
                std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v50, a4, a5);
                goto LABEL_499f25;
            }
        }
    }
    else
    {
        v8 = 1;
        v10 = v115;
        v12 = a3;
        v14 = 1;
        v27 = &v8;
        v30 = <os_display::Quoted as core::fmt::Display>::fmt;
        v65 = &g_55e690;
        v67 = 1;
        v72 = 0;
        v69 = &v27;
        v71 = 1;
        v2 + 8.map_or_else(&(char)v65);
        v116 = 9223372036854775811;
        *((unsigned long long *)v2) = 9223372036854775811;
    }
    return v116;
}
