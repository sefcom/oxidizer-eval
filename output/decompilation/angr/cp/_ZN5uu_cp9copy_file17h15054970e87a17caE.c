long long uu_cp::copy_file(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5, struct_1 *a6, unsigned long a7, unsigned long long a8, unsigned long long a9, char a10)
{
    unsigned long v0;  // [bp-0x448]
    unsigned long v1;  // [bp-0x440]
    struct_0 *v2;  // [bp-0x420]
    unsigned long long v3;  // [bp-0x418]
    unsigned long v4;  // [bp-0x418]
    unsigned long v5;  // [bp-0x410], Other Possible Types: char
    char v6;  // [bp-0x410]
    unsigned int v7;  // [bp-0x408], Other Possible Types: unsigned long long, char
    unsigned int v8;  // [bp-0x408]
    char v9;  // [bp-0x408]
    unsigned long v10;  // [bp-0x400], Other Possible Types: char
    char v11;  // [bp-0x400]
    int v12;  // [bp-0x3f8], Other Possible Types: char, unsigned long long
    char v13;  // [bp-0x3f0]
    int v14;  // [bp-0x3ef]
    unsigned int v15;  // [bp-0x3ec]
    int v16;  // [bp-0x3e8], Other Possible Types: char
    char v17;  // [bp-0x3e0]
    int v18;  // [bp-0x3d8]
    char v19;  // [bp-0x3d0]
    int v20;  // [bp-0x3c8]
    unsigned int v21;  // [bp-0x3c0]
    char v22;  // [bp-0x3bc]
    unsigned long long v23;  // [bp-0x3b8]
    unsigned long long v24;  // [bp-0x3b0]
    char v25;  // [bp-0x3ac]
    unsigned long long v26;  // [bp-0x3a8]
    unsigned long long v27;  // [bp-0x3a0]
    char v28;  // [bp-0x39c]
    int v29;  // [bp-0x38c]
    char v30;  // [bp-0x37c]
    int v31;  // [bp-0x36c]
    char v32;  // [bp-0x35c]
    unsigned int v33;  // [bp-0x34c]
    unsigned long long v34;  // [bp-0x340]
    unsigned long v35;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long v36;  // [bp-0x330], Other Possible Types: unsigned long long
    char v37;  // [bp-0x328]
    unsigned int v38;  // [bp-0x31c]
    int v39;  // [bp-0x318], Other Possible Types: char
    unsigned long long v40;  // [bp-0x308]
    unsigned long long v41;  // [bp-0x2f8]
    int v42;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v43;  // [bp-0x2f0]
    int v44;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v45;  // [bp-0x2e0], Other Possible Types: char
    int v46;  // [bp-0x2d8], Other Possible Types: char
    unsigned long long v47;  // [bp-0x2d0]
    unsigned long v48;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned int v49;  // [bp-0x2c0]
    char v50;  // [bp-0x2bc]
    char v51;  // [bp-0x2ac]
    char v52;  // [bp-0x29c]
    int v53;  // [bp-0x28c]
    char v54;  // [bp-0x27c]
    int v55;  // [bp-0x26c]
    char v56;  // [bp-0x25c]
    unsigned int v57;  // [bp-0x24c]
    int v58;  // [sp-0x248]
    int v59;  // [bp-0x248]
    char v60;  // [bp-0x248]
    unsigned long long v62;  // [bp-0x240]
    int v63;  // [bp-0x238], Other Possible Types: unsigned long long
    int v64;  // [bp-0x230]
    int v65;  // [bp-0x228]
    unsigned long long v66;  // [bp-0x220]
    unsigned long long v67;  // [bp-0x218]
    unsigned long long v68;  // [bp-0x1b8]
    unsigned long long v69;  // [bp-0x1b8]
    unsigned long long v70;  // [bp-0x1b0]
    unsigned long long v71;  // [bp-0x1a8]
    char v72;  // [bp-0x1a0]
    char v73;  // [bp-0x128]
    unsigned long long v74;  // [bp-0x118]
    char v75;  // [bp-0x110]
    unsigned long long v76;  // [bp-0x100]
    char v77;  // [bp-0xf8]
    unsigned long long v78;  // [bp-0xe8]
    char v79;  // [bp-0xe0]
    unsigned long long v80;  // [bp-0xd0]
    unsigned long long v81;  // [bp-0xc0]
    char v82;  // [bp-0xb8]
    int v83;  // xmm2
    int v84;  // xmm3
    char *v85;  // rbx
    unsigned long long v86[2];  // r14
    unsigned long v87;  // rdi
    unsigned long long v88;  // rsi
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rax
    struct_1 *v91;  // r12
    struct_1 *v92;  // r12
    char v93;  // al
    char v94;  // dl
    char v95;  // dl
    unsigned int v96;  // eax
    int v99;  // xmm0
    int v100;  // xmm1
    struct_1 *v102;  // r12
    unsigned long v104;  // rcx
    unsigned int v105;  // eax
    unsigned int v106;  // r13d
    unsigned int v107;  // eax
    int v108;  // xmm0
    int v109;  // xmm1
    int v110;  // xmm2
    unsigned long long v111;  // rax
    unsigned long long v112;  // rax
    unsigned long v113;  // rbx
    unsigned long long v114;  // r13
    unsigned long long v115;  // rcx
    unsigned long long v116;  // rax
    unsigned long long v117[2];  // rdx
    unsigned long long v118;  // rcx
    unsigned int v119;  // ebx
    unsigned int v120;  // ecx
    unsigned int v121;  // ebx
    unsigned long v122;  // r9
    unsigned int v123;  // r13d
    int v124;  // xmm0
    int v125;  // xmm1
    unsigned long long v126;  // rsi
    int v127;  // xmm0
    int v128;  // xmm1
    unsigned long long v129;  // rbx
    int v130;  // xmm0
    int v131;  // xmm1
    int v132;  // xmm0
    int v133;  // xmm1
    char v134;  // [bp-0x3f0]

    v5 = a2.is_symlink(a3);
    v11 = a4.is_symlink(a5);
    if (v11)
    {
        (char)v12.from_path(a4, a5, 0);
        if ((v12 & 1))
        {
            v62 = *((long long *)&v13);
            v60 = 1;
            core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&v60);
        }
        else
        {
            memcpy(&(char)v42, &v13, 144);
            if (a7.get_inner(&(char)v42))
            {
                (char)v42.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
                v34 = 1;
                v35 = a2;
                v36 = a3;
                v37 = 1;
                (char)v12.spec_to_string(&v34);
                v63 = v44;
                *((int128_t *)&v59) = *((int128_t *)&v42);
                *((int128_t *)&v64) = *((int128_t *)&v12);
                v66 = *((long long *)&v16);
                (char)v12.to_vec("destcyanSome of bolddumb", 4);
                v40 = *((long long *)&v16);
                memcpy(&v39, &(char)v12, 16);
                v69 = 1;
                v70 = a4;
                v71 = a5;
                v72 = 1;
                (char)v12.spec_to_string(&v69);
                goto LABEL_4e1004;
            }
        }
        if (a8.get_inner(a4, a5))
        {
            v41.to_vec("sourceoperandcp-error-missing-file-operandcp-error-missing-destination-operandcp-error-extra-operand: file_type: warning: cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux", 6);
            v34 = 1;
            v35 = a2;
            v36 = a3;
            v37 = 1;
            (char)v12.spec_to_string(&v34);
            v63 = v44;
            *((int128_t *)&v59) = *((int128_t *)&v41);
            *((int128_t *)&v64) = *((int128_t *)&v12);
            v66 = *((long long *)&v16);
            (char)v12.to_vec("destcyanSome of bolddumb", 4);
            v40 = *((long long *)&v16);
            memcpy(&v39, &(char)v12, 16);
            v69 = 1;
            v70 = a4;
            v71 = a5;
            v72 = 1;
            (char)v12.spec_to_string(&v69);
LABEL_4e1004:
            v44 = v40;
            v42 = v39;
            *((int128_t *)&v45) = *((int128_t *)&v12);
            v47 = *((long long *)&v16);
            v83 = *((int128_t *)&v63);
            v84 = (int128_t)(&v64)[8];
            *((int128_t *)&v12) = *((int128_t *)&v60);
            v16 = v83;
            v18 = v84;
            v26 = (long long)(&v45)[8];
            v27 = v47;
            v23 = v44;
            v24 = (long long)v45;
            v20 = v39;
            v85 = &(char)v42;
            (char)v42.from_iter(&(char)v12);
            v86 = a0;
            v87 = &v86[1];
            v88 = "cp-error-will-not-copy-through-symlinkPOSIXLY_CORRECTcp-error-not-writing-dangling-symlinkNo such file or directorycp-error-cannot-statcp-error-cannot-create-fifotargetcp-error-target-not-directorySkipped copying file (exit with error = )";
            v89 = 38;
            goto LABEL_4e10ce;
        }
        if (!a6->padding_59[0])
        {
            if (a10)
            {
                if (!(!(v6) || a6->field_58))
                    goto LABEL_4e1299;
            }
            else
            {
                if (v6)
                {
LABEL_4e1299:
                    if ((char)uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, a5, 1) && !a6->field_54 && a6->field_55 == 1 && !a6->field_65)
                    {
                        v90 = std::fs::remove_file(a4, a5);
                        if (!(!v90))
                            goto LABEL_4e1358;
                        goto LABEL_4e12de;
                    }
                }
            }
        }
        std::fs::metadata(&(char)v12, a4, a5);
        ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v12);
        if ((int)v12 == 2 && (a6->field_54 || a6->field_55 != 1) && !(char)uucore::features::fs::is_symlink_loop(a4, a5))
        {
            std::env::var_os(&(char)v12, "POSIXLY_CORRECTcp-error-not-writing-dangling-symlinkNo such file or directorycp-error-cannot-statcp-error-cannot-create-fifotargetcp-error-target-not-directorySkipped copying file (exit with error = )", 15);
            ::0x4d43a0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&(char)v12);
            if (v12 == 0x8000000000000000)
            {
                v60.to_vec("destcyanSome of bolddumb", 4);
                v41 = 1;
                v43 = a4;
                v44 = a5;
                v45 = 1;
                (char)v12.spec_to_string(&v41);
                v74 = v63;
                memcpy(&v73, &v60, 16);
                memcpy(&v75, &(char)v12, 16);
                v76 = (long long)v16;
                (char)v12.from_iter(&v73);
                uucore::mods::locale::get_message_with_args(&v2->field_8, "cp-error-not-writing-dangling-symlinkNo such file or directorycp-error-cannot-statcp-error-cannot-create-fifotargetcp-error-target-not-directorySkipped copying file (exit with error = )", 37, &(char)v12);
                *((unsigned long long *)&v2->field_0) = 9223372036854775811;
                return v2;
            }
        }
        goto LABEL_4e1299;
    }
LABEL_4e12de:
    if ((char)uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, a5))
    {
        v41.components(a2, a3);
        v12.components(a4, a5);
        if (!v41.eq(&v12) && !a6->field_54 && a6->field_55 == 1)
        {
            v90 = std::fs::remove_file(a4, a5);
            if (v90)
            {
LABEL_4e1358:
                *((unsigned long long *)&v2->field_0) = 9223372036854775809;
                *((unsigned long long *)&v2->field_8[0]) = v90;
                return v2;
            }
        }
    }
    v4 = a2;
    v91 = a6;
    v92 = v91;
    if (!(char)uu_cp::file_or_link_exists(a4, a5))
    {
LABEL_4e1556:
        v102 = v92;
        if (!(v91->field_56 & v6) || !v102->field_54 && v102->field_55 == 1)
        {
            if (v102->field_50)
            {
                v104 = v102->padding_59[0];
                v105 = (unsigned int)v104 & 255;
                v106 = (unsigned int)v104 & 255;
                if (!(char)v104)
                    v105 = *((int *)&v102->field_58);
                if (a10)
                    v107 = v105;
                else
                    v107 = v106;
                v12.from_path(v4, a3, v107 & 1);
                if (((char)v12 & 1))
                {
                    uu_cp::delete_dest_if_needed_and_allowed::{{closure}}(&v41, v4, a3, *((long long *)&v134));
                    v67 = v48;
                    v108 = (int128_t)v42;
                    v109 = *((int128_t *)&v44);
                    v110 = *((int128_t *)&v46);
                    v65 = v110;
                    v63 = v109;
                    v58 = v108;
                    *((unsigned long *)&v2->field_9[16]) = v48;
                    *((void*)&v2->field_9[0]) = v110;
                    *((void*)&v2->field_8[8]) = v109;
                    *((void*)&v2->field_0) = v108;
                    return v2;
                }
                memcpy(&v41, &v134, 144);
                memcpy(&v60, &v41, 144);
                memcpy(&(char)v68, &v60, 144);
                v111 = a9.get_inner(&(char)v68);
                if (v111)
                {
                    v112 = std::fs::hard_link(v111 + 144, a4, a5);
                    if (v112)
                    {
                        *((unsigned long long *)&v2->field_0) = 9223372036854775809;
                        *((unsigned long long *)&v2->field_8[0]) = v112;
                        return v2;
                    }
                    if (a6->field_60)
                        uu_cp::print_verbose_output(a6->field_5c, a1, v4, a3, a4, a5);
                    *((unsigned long long *)&v2->field_0) = 9223372036854775820;
                    return v2;
                }
                v113 = v106;
                v3 = v4;
            }
            else
            {
                v113 = v102->padding_59[0];
                v3 = v4;
            }
            uu_cp::context_for(&(char)v34, v3, a3, a4, a5);
            v5 = v35;
            v114 = v113 & 4294967295;
            if (((char)v113 & 1) || a10 && a6->field_58)
                std::fs::metadata(&v12, v4, a3);
            else
                std::fs::symlink_metadata(&v12, v4, a3);
            v115 = *((long long *)&v134);
            if (v12 == 2)
            {
                uu_cp::copy_file::{{closure}}(&v60, v4, a3, v43);
                v116 = (long long)v58;
                memcpy(&v39, &v62, 16);
                v117 = a0;
                *((int128_t *)&v2->field_8[8]) = *((int128_t *)&v62);
                v118 = 9223372036854775811;
                goto LABEL_4e187c;
            }
            v57 = v33;
            memcpy(&v56, &v32, 16);
            v55 = v31;
            memcpy(&v54, &v30, 16);
            v53 = v29;
            memcpy(&v52, &v28, 16);
            memcpy(&v51, &v25, 16);
            memcpy(&v50, &v22, 16);
            *((int128_t *)&v46) = (int128_t)v18;
            v48 = (long long)v20;
            *((int128_t *)&v44) = (int128_t)v16;
            v41 = v12;
            v43 = v115;
            v49 = v21;
            uu_cp::calculate_dest_permissions(&v12, a4, a5, v49, a6->field_4a, a6->field_4b, v5, v36);
            if (v12 == 9223372036854775820)
            {
                v119 = v49 & 0xf000;
                v120 = 1;
                v7 = *((int *)&v134);
                if (v119 != 0x1000 && v119 != 0x2000 && v119 != 0x6000)
                    v120 = 0;
                v38 = v120;
                v1 = v119 == 0x1000;
                v0 = a10;
                uu_cp::handle_copy_mode(&v12, v4, a3, a4, a5, a6, v5, v36, &v41, a7);
                if (v12 == 9223372036854775820)
                {
                    if (a6->field_60 && !(v134 & 1))
                        uu_cp::print_verbose_output(a6->field_5c, a1, v4, a3, a4, a5);
                    if (!v10)
                    {
                        v12 = std::fs::set_permissions(a4, a5, v8);
                        if (v12)
                            ::0x4d4440::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v12);
                    }
                    v121 = *((int *)&a6->field_58);
                    v122 = &a6->padding_0[72];
                    v123 = v114;
                    v5 = a10 ^ 1 | (char)v114;
                    if (((((a10 ^ 1 | (char)v114) & 1) ? (char)v123 : (char)v121) & 1))
                    {
                        v10 = v122;
                        uucore::features::fs::canonicalize(&(char)v68, v4, a3, 0, 1);
                        if (v68 == 0x8000000000000000)
                        {
                            ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v68);
                            goto LABEL_4e1cf6;
                        }
                        else
                        {
                            v7 = 0x8000000000000000;
                            *((int128_t *)&v58) = *((int128_t *)&v69);
                            v63 = v71;
                            std::fs::metadata(&v12, v62, v71);
                            ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
                            if ((unsigned int)v12 != 2)
                            {
                                uu_cp::copy_attributes(&v12, v62, v63, a4, a5, v10);
                                if (v12 == 9223372036854775820)
                                    goto LABEL_4e1ccd;
                                v124 = *((int128_t *)&v134);
                                v125 = (int128_t)(&v16)[8];
                                *((int128_t *)&v2->field_9[8]) = (int128_t)(&v18)[8];
                                *((void*)&v2->field_8[16]) = v125;
                                *((void*)&v2->field_8[0]) = v124;
                                *((unsigned long long *)&v2->field_0) = v12;
                                ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v60);
                                if (v68 == v7)
                                    ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v68);
                            }
                            else
                            {
LABEL_4e1ccd:
                                ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&v60);
                                if (v68 == v7)
                                    ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&(char)v68);
LABEL_4e1cf6:
                                v126 = v4;
LABEL_4e1cfb:
                                v12.from_path(v126, a3, ((v6 & 1) ? v123 : v121) & 1);
                                v129 = *((long long *)&v134);
                                if (((char)v12 & 1))
                                {
                                    *((unsigned long long *)&v2->field_0) = 9223372036854775809;
                                    *((unsigned long long *)&v2->field_8[0]) = v129;
                                }
                                else
                                {
                                    memcpy(&v82, &(char)v16, 136);
                                    v81 = v129;
                                    std::sys::pal::unix::os::split_paths::bytes_to_path(&v12, a4, a5);
                                    v60.insert(a9, &v81, &v12);
                                    ::0x4d4130::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v60);
                                    if (!a1)
                                    {
LABEL_4e1e18:
                                        *((unsigned long long *)&v2->field_0) = 9223372036854775820;
                                        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v34);
                                        return v2;
                                    }
                                    std::fs::metadata(&v12, v4, a3);
                                    if ((int)v12 == 2)
                                    {
                                        v116 = *((long long *)&v134);
                                        v118 = 9223372036854775809;
                                        v117 = a0;
                                    }
                                    else
                                    {
                                        a1.inc(v26);
                                        goto LABEL_4e1e18;
                                    }
LABEL_4e187c:
                                    v117[0] = v118;
                                    v117[1] = v116;
                                }
                            }
                        }
                    }
                    else
                    {
                        v3 = v4;
                        if ((char)v38)
                        {
                            v10 = v122;
                            std::fs::metadata(&v12, v4, a3);
                            ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
                            v126 = v4;
                            v122 = v10;
                            v3 = v126;
                            if (!((unsigned int)v12 == 2))
                                goto LABEL_4e1cfb;
                        }
                        uu_cp::copy_attributes(&v12, v3, a3, a4, a5, v122);
                        if (v12 == 9223372036854775820)
                            goto LABEL_4e1cf6;
                        v127 = *((int128_t *)&v134);
                        v128 = (int128_t)(&v16)[8];
                        *((int128_t *)&v2->field_9[8]) = (int128_t)(&v18)[8];
                        *((void*)&v2->field_8[16]) = v128;
                        *((void*)&v2->field_8[0]) = v127;
                        *((unsigned long long *)&v2->field_0) = v12;
                    }
                }
                else
                {
                    v130 = (int128_t)v14;
                    v131 = (int128_t)(&v16)[9];
                    *((int128_t *)&v2->field_9[8]) = (int128_t)(&v18)[8];
                    *((void*)&v2->field_8[17]) = v131;
                    *((void*)&v2->field_8[1]) = v130;
                    *((unsigned long long *)&v2->field_0) = v12;
                    v2->field_8[0] = v134;
                }
            }
            else
            {
                v132 = *((int128_t *)&v15);
                v133 = (int128_t)(&v16)[12];
                *((int128_t *)&v2->field_9[8]) = (int128_t)(&v18)[8];
                *((void*)&v2->field_8[20]) = v133;
                *((void*)&v2->field_8[4]) = v132;
                *((unsigned long long *)&v2->field_0) = v12;
                *((unsigned int *)&v2->field_8[0]) = v7;
            }
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v34);
            return a0;
        }
        v60.to_vec("destcyanSome of bolddumb", 4);
        v41 = 1;
        v43 = a4;
        v44 = a5;
        v45 = 1;
        v12.spec_to_string(&v41);
        v78 = v63;
        memcpy(&v77, &v60, 16);
        memcpy(&v79, &v12, 16);
        v80 = (long long)v16;
        v85 = &v12;
        v12.from_iter(&v77);
        v86 = a0;
        v87 = &v86[1];
        v88 = "cp-error-cannot-change-attributecp-error-cannot-open-for-readingcp-error-invalid-backup-argumentoverride the usual backup suffix";
        v89 = 32;
LABEL_4e10ce:
        uucore::mods::locale::get_message_with_args(v87, v88, v89, v85);
        v86[0] = 9223372036854775811;
        return v86;
    }
    if ((v91->field_56 & 1))
    {
        v92 = v91;
        if (!v92->field_54)
        {
            v92 = v91;
            if (v92->field_55 == 1)
                goto LABEL_4e13bd;
            goto LABEL_4e1556;
        }
    }
LABEL_4e13bd:
    v93 = uucore::features::fs::paths_refer_to_same_file(v4, a3, a4, a5, 1);
    v94 = v91->field_67;
    v95 = v94;
    if ((!v95 & v93))
    {
        if (!v6)
        {
            v95 = v94;
            if (!(!!v91->field_65 && !v10))
                goto LABEL_4e1421;
            v9 = v94;
            v41.components(v4, a3);
            v12.components(a4, a5);
            if (!v41.eq(&v12))
            {
                *((unsigned long long *)&v2->field_0) = 9223372036854775820;
                return a0;
            }
            v95 = v7;
            if (!v91->field_55 && !v91->field_54)
                goto LABEL_4e1421;
        }
        else if (v10)
        {
            v95 = v94;
            if (!(!v91->padding_59[0]))
                goto LABEL_4e1421;
        }
    }
LABEL_4e1421:
    v9 = v95;
    uu_cp::handle_existing_dest(&v12, v4, a3, a4, a5, v91, a10, a9);
    if (v12 != 9223372036854775820)
    {
        v99 = *((int128_t *)&v134);
        v100 = *((int128_t *)&v17);
        *((int128_t *)&v2->field_9[8]) = *((int128_t *)&v19);
        *((void*)&v2->field_8[16]) = v100;
        *((void*)&v2->field_8[0]) = v99;
        *((unsigned long long *)&v2->field_0) = v12;
        return v2;
    }
    v92 = a6;
    if (!(char)uucore::features::fs::are_hardlinks_to_same_file(v4, a3, a4, a5))
        goto LABEL_4e1556;
    v96 = v7;
}
