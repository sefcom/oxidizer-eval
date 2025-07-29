long long uu_cp::copydir::copy_directory(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5, struct_3 *a6, unsigned long a7, unsigned long long a8, unsigned long long a9, char a10)
{
    char v0;  // [bp-0x418]
    unsigned int v1;  // [bp-0x3fc]
    struct_0 *v2;  // [bp-0x3f8]
    char v3;  // [bp-0x3e9]
    char v4;  // [bp-0x3e8], Other Possible Types: unsigned long long
    char v5;  // [bp-0x3e8]
    unsigned int v6;  // [bp-0x3dc]
    int v7;  // [bp-0x3d8], Other Possible Types: char, unsigned long long
    char *v8;  // [bp-0x3d8]
    int v9;  // [bp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x3d0]
    int v11;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char *v12;  // [bp-0x3c8]
    int v13;  // [bp-0x3c0], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [bp-0x3c0]
    int v15;  // [bp-0x3b8]
    int v16;  // [bp-0x3b0], Other Possible Types: char *
    unsigned long long v17;  // [bp-0x3b0]
    char v18;  // [bp-0x3a0]
    char v21;  // [bp-0x397]
    char v22;  // [bp-0x395]
    unsigned int v23;  // [bp-0x394]
    unsigned long long v24;  // [bp-0x390]
    unsigned long long v25;  // [bp-0x388]
    int v26;  // [bp-0x388], Other Possible Types: char
    char *v27;  // [bp-0x388]
    char v28;  // [bp-0x380], Other Possible Types: unsigned long long
    int v29;  // [bp-0x378]
    char v30;  // [bp-0x378]
    int v31;  // [bp-0x368]
    int v32;  // [bp-0x358], Other Possible Types: unsigned long long
    char *v33;  // [bp-0x358]
    char *v34;  // [bp-0x358]
    unsigned long long v35;  // [bp-0x350]
    unsigned long long v36;  // [bp-0x350]
    char *v37;  // [bp-0x348], Other Possible Types: unsigned long long
    int v38;  // [bp-0x340], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x340]
    void* v40;  // [bp-0x338]
    char *v41;  // [bp-0x330]
    int v45;  // [bp-0x308], Other Possible Types: unsigned long long
    int v46;  // [bp-0x308]
    int v47;  // [bp-0x2f8], Other Possible Types: char *
    unsigned long long v48;  // [bp-0x2f8]
    int v49;  // [bp-0x2f8]
    int v50;  // [bp-0x2e8]
    int v51;  // [bp-0x2e8]
    char *v53;  // [bp-0x2d8]
    unsigned long long v54;  // [bp-0x2d0]
    int v55;  // [bp-0x2c8]
    unsigned long long v56;  // [bp-0x2b8]
    unsigned long long v57;  // [bp-0x2b0]
    unsigned long v58;  // [bp-0x2a8]
    unsigned int v59;  // [bp-0x29c]
    int v60;  // [bp-0x298], Other Possible Types: char *, char, unsigned long
    char v61;  // [bp-0x297]
    unsigned long v62;  // [bp-0x290]
    unsigned long long v63;  // [bp-0x290]
    int v64;  // [bp-0x288], Other Possible Types: void*, char *, unsigned long long
    char *v65;  // [bp-0x288]
    unsigned long long v66;  // [bp-0x280]
    int v67;  // [bp-0x278]
    void* v68;  // [bp-0x278], Other Possible Types: unsigned long long
    char v69;  // [bp-0x270], Other Possible Types: unsigned long long
    int v70;  // [bp-0x268], Other Possible Types: unsigned long long
    int v71;  // [bp-0x260]
    unsigned long long v72;  // [bp-0x258]
    unsigned long long v73;  // [bp-0x250]
    void* v74;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v75;  // [bp-0x240]
    char *v76;  // [bp-0x230]
    char v77;  // [bp-0x228]
    int v78;  // [bp-0x218]
    unsigned long long v79;  // [bp-0x208]
    char v80;  // [bp-0x200]
    unsigned int v81;  // [bp-0x1ff]
    unsigned int v82;  // [bp-0x1fc]
    uint128_t v83;  // [bp-0x1f8]
    int v84;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v85;  // [bp-0x1e0]
    unsigned long long v86;  // [bp-0x1e0]
    unsigned long long v87;  // [bp-0x1d8]
    char v88;  // [bp-0x1d0]
    int v89;  // [bp-0x1a8]
    unsigned long long v90;  // [bp-0x1a0]
    unsigned long long v91;  // [bp-0x198]
    unsigned long long v92;  // [bp-0x188]
    unsigned long long v93;  // [bp-0x180]
    int v94;  // [bp-0x178], Other Possible Types: unsigned long long
    int v95;  // [bp-0x170]
    int v96;  // [bp-0x168]
    char v97;  // [bp-0x160]
    char v98;  // [bp-0x158]
    char v99;  // [bp-0x148]
    char v100;  // [bp-0x138]
    char v102;  // [bp-0x108]
    unsigned long long v103;  // [bp-0xf8]
    char v104;  // [bp-0xf0]
    unsigned long long v105;  // [bp-0xe0]
    char v106;  // [bp-0xd8]
    char *v107;  // [bp-0xc8]
    char v108;  // [bp-0xc0]
    char *v109;  // [bp-0xb0]
    char *v112;  // [bp-0x80]
    char v113;  // [bp-0x78]
    char v114;  // [bp-0x68]
    int v115;  // [bp-0x58]
    char v116;  // [bp-0x48]
    unsigned long long v117;  // [bp-0x38]
    unsigned long long v118;  // rax
    unsigned long long v119;  // rdx
    int v120;  // xmm0
    int v121;  // xmm2
    int v122;  // xmm3
    unsigned long long *v123;  // rbx
    unsigned long long v124;  // rax
    unsigned long long v125;  // rax
    unsigned long long v126;  // rdx
    int v127;  // xmm0
    char *v128;  // xmm1
    unsigned int v130;  // ebp
    int v131;  // xmm0
    struct_2 *v132;  // r12
    int v133;  // xmm0
    int v134;  // xmm0
    int v135;  // xmm1
    int v142;  // xmm0
    unsigned int v143;  // ecx
    unsigned int v144;  // ecx
    unsigned long long v155;  // rax
    char *v156;  // rsi
    unsigned long long v157;  // rdx
    char *v158;  // rax
    int v159;  // xmm0
    char *v160;  // xmm1
    char v161;  // cl
    int v162;  // xmm0
    char *v163;  // xmm1
    char *v168;  // [bp-0x1e8]
    unsigned long long v169;  // [bp-0x178]

    v57 = a1;
    v5 = a6->field_59;
    if (!a6->field_59 && (!a10 || !a6->field_58) && (char)a2.is_symlink(a3))
    {
        uu_cp::copy_file(a0, v57, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        return a0;
    }
    if (!a6->field_5e)
    {
        (char)v32.to_vec("dircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 3);
        v7 = 1;
        v9 = a2;
        v11 = a3;
        v13 = 1;
        (char)v60.spec_to_string(&v7);
        v103 = v37;
        memcpy(&v102, &v32, 16);
        memcpy(&v104, &(char)v60, 16);
        v105 = v64;
        (char)v60.from_iter(&v102);
        uucore::mods::locale::get_message_with_args(&v2->field_8, "cp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 27, &(char)v60);
        v2->field_0 = 9223372036854775811;
        return a0;
    }
    uu_cp::copydir::path_has_prefix(&(char)v60, a4, a5, a2, a3);
    if (v60)
    {
        v2->field_0 = 9223372036854775809;
        *((unsigned long *)&v2->field_8) = v62;
        return a0;
    }
    if ((v61 & 1))
    {
        (char)v7.to_vec("source: cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 6);
        v84 = 1;
        v86 = a2;
        v87 = a3;
        v88 = 1;
        (char)v60.spec_to_string(&v84);
        v37 = v11;
        *((int128_t *)&v32) = *((int128_t *)&v7);
        *((int128_t *)&v38) = *((int128_t *)&v60);
        v41 = v64;
        (char)v60.to_vec("destcyanSome of bolddumb", 4);
        v47 = v64;
        *((int128_t *)&v45) = *((int128_t *)&v60);
        v118 = a2.file_name(a3);
        if (!v118)
            core::option::unwrap_failed(&g_5fbc18); /* do not return */
        v26.join(a4, a5, v118, v119);
        v94 = 1;
        *((int128_t *)&v95) = *((int128_t *)&v28);
        v97 = 1;
        (char)v60.spec_to_string(&v94);
        v11 = v48;
        v120 = (int128_t)v45;
        v7 = v120;
        *((int128_t *)&v13) = *((int128_t *)&v60);
        v16 = v64;
        v121 = *((int128_t *)&v37);
        v122 = (int128_t)(&v38)[8];
        *((int128_t *)&v60) = (int128_t)v32;
        v64 = v121;
        v67 = v122;
        v74 = (long long)(&v13)[8];
        v75 = v17;
        v72 = v11;
        v73 = v13;
        v70 = v120;
        (char)v7.from_iter(&(char)v60);
        uucore::mods::locale::get_message_with_args(&(char)v60, "cp-error-cannot-copy-directory-into-itself", 42, &(char)v7);
        v123 = a0;
        v2->field_18 = v64;
        *((int128_t *)&v2->field_8) = (int128_t)v60;
        v124 = 9223372036854775811;
    }
    else
    {
        v3 = a6->field_5c;
        if (a6->field_5c)
        {
            v125 = a2.parent(a3);
            if (!v125)
                goto LABEL_4e565a;
            (char)v27.join(a4, a5, v125, v126);
            uu_cp::copydir::build_dir(&(char)v60, &(char)v27, 1, *((int *)&a6->field_48), a6->padding_49[1], 0, *((long long *)&v0));
            v124 = (long long)v60;
            if (v124 == 9223372036854775820)
            {
                if (a6->field_60)
                {
                    (char)v84.join(a4, a5, a2, a3);
                    uu_cp::aligned_ancestors(&(char)v60, a2, a3, v85, v87);
                    (char)v94.into_iter(&(char)v60);
                    (char)v34.next(&(char)v94);
                    if (v33)
                    {
                        v34 = v33;
                        do
                        {
                            v53 = v34;
                            v54 = v36;
                            *((int128_t *)&v46) = *((int128_t *)&v37);
                            v8 = &v53;
                            v10 = <std::path::Display as core::fmt::Display>::fmt;
                            v12 = &(unsigned long long)v46;
                            v14 = <std::path::Display as core::fmt::Display>::fmt;
                            v60 = &g_5fbb68;
                            v63 = 3;
                            v68 = 0;
                            v65 = &v8;
                            v66 = 2;
                            std::io::stdio::_print(&(char)v60);
                            (char)v34.next(&(char)v94);
                            v34 = v33;
                        } while (v34);
                    }
                    ::0x4e33d0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&(char)v94);
                    ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v84);
                }
                v91 = *((long long *)&v30);
                *((int128_t *)&v89) = *((int128_t *)&v26);
                goto LABEL_4e566e;
            }
            else
            {
                v127 = *((int128_t *)&v63);
                v128 = *((int128_t *)&v66);
                v123 = a0;
                *((int128_t *)&(&v2->padding_20)[1]) = *((int128_t *)&v69);
                v2->field_18 = v128;
                *((void*)&v2->field_8) = v127;
            }
        }
        else
        {
LABEL_4e565a:
            std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v89, a4, a5);
LABEL_4e566e:
            v130 = a6->field_50;
            v93 = v90;
            v92 = v91;
            (char)v60.new(a2, a3, v90, v91);
            if ((long long)v60 == 0x8000000000000000)
            {
                v84 = v63;
                v8.to_vec("error\ncp-error-failed-to-create-directorysource: cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 5);
                v37 = v12;
                *((int128_t *)&v32) = *((int128_t *)&v8);
                v8.spec_to_string(&v84);
                v107 = v37;
                memcpy(&v106, &v32, 16);
                memcpy(&v108, &v8, 16);
                v109 = v12;
                v8.from_iter(&v106);
                uucore::mods::locale::get_message_with_args(&v33, "cp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 31, &v8);
                v2->field_18 = v37;
                *((int128_t *)&v2->field_8) = *((int128_t *)&v33);
                v2->field_0 = 9223372036854775811;
                ::0x4e35b0::core::ptr::drop_in_place<std::io::error::Error>(v84);
            }
            else
            {
                memcpy(&v100, &v72, 16);
                v131 = (int128_t)v60;
                memcpy(&v99, &v70, 16);
                memcpy(&v98, &v68, 16);
                *((int128_t *)&v96) = *((int128_t *)&v65);
                v94 = v131;
                v45 = 0x8000000000000000;
                v1 = 1;
                v56 = a3;
                v8.new(a2, a3);
                v58 = &a6->field_48;
                v22 = a6->field_5b;
                v79 = *((long long *)&v18);
                v78 = v16;
                memcpy(&v77, &v14, 16);
                v81 = *((int *)&v21);
                v82 = v23;
                memcpy(&v75, &v8, 16);
                v76 = v12;
                v60 = 0;
                v64 = 0;
                v66 = 8;
                *((uint128_t *)&v67) = 0;
                v70 = 8;
                *((uint128_t *)&v71) = 0;
                v73 = 8;
                v74 = 0;
                v80 = v4;
                v132 = &v85;
                v83 = 0;
                v6 = a6->field_5a & 1;
                v59 = v130;
                v4 = 9223372036854775820;
                while (true)
                {
                    v168.next(&(char)v60);
                    if (v168 != 9223372036854775809)
                    {
                        if (v168 != 9223372036854775810)
                        {
                            v8 = v168;
                            v133 = v132->field_0;
                            *((uint128_t *)&v16) = v132->field_20;
                            *((uint128_t *)&v13) = v132->field_10;
                            v9 = v133;
                            v25 = uucore::util_name();
                            v28 = v126;
                            v53 = &v25;
                            v54 = <&T as core::fmt::Display>::fmt;
                            v32 = &g_5fbb98;
                            v35 = 2;
                            v40 = 0;
                            v37 = &v53;
                            v38 = 1;
                            std::io::stdio::_eprint(&v32);
                            v27 = &v8;
                            v28 = <walkdir::error::Error as core::fmt::Display>::fmt;
                            v33 = &g_5fbb18;
                            v36 = 2;
                            v40 = 0;
                            v37 = &v27;
                            v39 = 1;
                            std::io::stdio::_eprint(&v33);
                            ::0x4e3620::core::ptr::drop_in_place<walkdir::error::Error>(&v8);
                            continue;
                        }
                        else
                        {
                            core::ptr::drop_in_place<walkdir::IntoIter>(&(char)v60);
                            v144 = v143 & 0xffffff00 | 1;
                            if (v3)
                            {
                                v1 = v144;
                                v155 = a2.file_name(v56);
                                if (!v155)
                                    core::option::unwrap_failed(&g_5fbbd0); /* do not return */
                                v53.join(v93, v92, v155, v126);
                                uu_cp::aligned_ancestors(&(char)v60, a2, v56, v54, (long long)v55);
                                v33.into_iter(&(char)v60);
                                v8.next(&v33);
                                v156 = v8;
                                if (v8)
                                {
                                    do
                                    {
                                        uucore::features::fs::canonicalize(&(char)v27, v156, v10, 0, 1);
                                        if (v27 == 0x8000000000000000)
                                        {
                                            ::0x4e3970::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v27);
                                        }
                                        else
                                        {
                                            v157 = (long long)v29;
                                            v87 = (long long)v29;
                                            *((int128_t *)&v84) = *((int128_t *)&v27);
                                            uu_cp::copy_attributes(&(char)v60, v85, v157, v12, v14, v58);
                                            v158 = v60;
                                            if (v158 == v4)
                                            {
                                                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(unsigned long long)v84);
                                                if (v27 == 0x8000000000000000)
                                                    ::0x4e3970::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v27);
                                            }
                                            else
                                            {
                                                v159 = *((int128_t *)&v63);
                                                v160 = *((int128_t *)&v66);
                                                *((int128_t *)&(&v2->padding_20)[1]) = *((int128_t *)&v69);
                                                v2->field_18 = v160;
                                                *((void*)&v2->field_8) = v159;
                                                v2->field_0 = v158;
                                                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(unsigned long long)v84);
                                                if (v27 == 0x8000000000000000)
                                                    ::0x4e3970::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v27);
                                                ::0x4e33d0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v33);
                                                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v53);
                                                v161 = (char)v1 ^ 1;
                                                goto LABEL_4e626d;
                                            }
                                        }
                                        v8.next(&v33);
                                        v156 = v8;
                                    } while (v8);
                                    goto LABEL_4e626d;
                                }
                                ::0x4e33d0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v33);
                                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v53);
                            }
                            *(a0) = v4;
                            core::ptr::drop_in_place<uu_cp::copydir::Context>(&v169);
                            break;
                        }
                    }
                    v134 = v132->field_0;
                    v135 = v132->field_10;
                    *((uint128_t *)&v31) = v132->field_20;
                    v29 = v135;
                    v26 = v134;
                    v8.new(&v169, v28, (long long)v29, v6);
                    if (v8 != 0x8000000000000000)
                    {
                        v117 = v24;
                        memcpy(&v116, &v18, 16);
                        v115 = v16;
                        memcpy(&v114, &v14, 16);
                        memcpy(&v113, &v10, 16);
                        v112 = v8;
                        uu_cp::copydir::copy_direntry(&v8, v57, &v112, a6, a7, v59, a8, a9);
                        if (v8 != v4)
                        {
                            v162 = *((int128_t *)&v10);
                            v163 = (int128_t)v13;
                            *((void*)&(&v2->padding_20)[1]) = v16;
                            v2->field_18 = v163;
                            *((void*)&v2->field_8) = v162;
                            v2->field_0 = v8;
LABEL_4e6251:
                            ::0x4e3690::core::ptr::drop_in_place<walkdir::dent::DirEntry>(&(char)v27);
                            core::ptr::drop_in_place<walkdir::IntoIter>(&(char)v60);
LABEL_4e626d:
                            if (!((1 | v161) & 1))
                                ::0x4e3690::core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v45);
                            core::ptr::drop_in_place<uu_cp::copydir::Context>(&v169);
                            break;
                        }
                        else if (((short)(int)(&v31)[8] & 0xf000) != 0x4000)
                        {
                            ::0x4e3690::core::ptr::drop_in_place<walkdir::dent::DirEntry>(&(char)v27);
                        }
                        else
                        {
                            v142 = (int128_t)v26;
                            *((int128_t *)&v15) = (int128_t)v31;
                            v11 = v29;
                            v7 = v142;
                            core::ptr::drop_in_place<core::option::Option<walkdir::dent::DirEntry>>(&v45);
                            memcpy(&v50, &v15, 16);
                            memcpy(&v48, &v11, 16);
                            *((int128_t *)&v46) = *((int128_t *)&v8);
                            v47 = v49;
                            v50 = v51;
                        }
                    }
                    else
                    {
                        *(a0) = 9223372036854775814;
                        goto LABEL_4e6251;
                    }
                }
            }
            ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v89);
            return a0;
        }
    }
    *(v123) = v124;
    ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v26);
    return v123;
}
