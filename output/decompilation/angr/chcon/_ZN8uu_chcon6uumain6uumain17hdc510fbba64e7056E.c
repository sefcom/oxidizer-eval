long long uu_chcon::uumain::uumain(unsigned long long a0, unsigned long a1)
{
    int v0;  // [bp-0x598], Other Possible Types: char *, unsigned long
    int v1;  // [bp-0x594]
    unsigned long long v2;  // [bp-0x590]
    int v3;  // [bp-0x588]
    char *v4;  // [bp-0x588], Other Possible Types: unsigned long
    unsigned int v5;  // [bp-0x580], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x578], Other Possible Types: unsigned int
    int v7;  // [bp-0x568], Other Possible Types: char, unsigned long, unsigned long long
    char v8;  // [bp-0x564]
    int v9;  // [bp-0x560], Other Possible Types: unsigned long long
    int v10;  // [bp-0x560]
    int v11;  // [bp-0x558], Other Possible Types: char *, unsigned long
    char v12;  // [bp-0x554]
    unsigned int v13;  // [bp-0x550], Other Possible Types: unsigned long long, char
    int v14;  // [bp-0x548], Other Possible Types: void*
    unsigned int v15;  // [bp-0x544]
    char v16;  // [bp-0x540]
    int v17;  // [bp-0x538], Other Possible Types: char
    unsigned long long v18;  // [bp-0x528]
    int v19;  // [bp-0x518], Other Possible Types: unsigned int, unsigned long long, unsigned long
    char v20;  // [bp-0x518]
    int v21;  // [bp-0x514]
    int v22;  // [bp-0x510], Other Possible Types: char
    unsigned long v23;  // [bp-0x510], Other Possible Types: unsigned long long
    int v24;  // [bp-0x508], Other Possible Types: char *, char, unsigned long long, unsigned long
    int v25;  // [bp-0x504]
    char v26;  // [bp-0x500], Other Possible Types: unsigned short, unsigned int, unsigned long long
    int v27;  // [bp-0x4f8], Other Possible Types: void*, char
    unsigned int v28;  // [bp-0x4f4]
    int v29;  // [bp-0x4f0], Other Possible Types: char
    int v30;  // [bp-0x4e8], Other Possible Types: char
    char v31;  // [bp-0x4e0], Other Possible Types: unsigned long long
    char v32;  // [bp-0x4d8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0x4d0]
    char v34;  // [bp-0x4c8]
    int v35;  // [bp-0x4b8]
    char v36;  // [bp-0x4a8]
    char *v37;  // [bp-0x490], Other Possible Types: char, unsigned long long
    unsigned long long v38;  // [bp-0x488]
    int v39;  // [bp-0x478], Other Possible Types: char *
    unsigned long long v40;  // [bp-0x478]
    void* v41;  // [bp-0x470], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0x468]
    char *v43;  // [bp-0x458]
    unsigned long long v44;  // [bp-0x450]
    int v45;  // [bp-0x448], Other Possible Types: char
    int v46;  // [bp-0x438]
    int v47;  // [bp-0x428]
    unsigned long v48;  // [bp-0x420]
    int v49;  // [bp-0x418]
    unsigned long long v50;  // [bp-0x410]
    char v51;  // [bp-0x408]
    char v52;  // [bp-0x3f8]
    char v53;  // [bp-0x3e8]
    int v54;  // [bp-0x3d8]
    char v55;  // [bp-0x3c8]
    char v56;  // [bp-0x3bf]
    char v57;  // [bp-0x3bd]
    char v58;  // [bp-0x3b8]
    unsigned long v59;  // [bp-0x3a8]
    int v60;  // [bp-0x3a0], Other Possible Types: char
    unsigned long v61;  // [bp-0x390]
    int v62;  // [bp-0x388], Other Possible Types: char
    unsigned long v63;  // [bp-0x378]
    int v64;  // [bp-0x370], Other Possible Types: char
    unsigned long v65;  // [bp-0x360]
    int v66;  // [bp-0x358], Other Possible Types: char
    unsigned long v67;  // [bp-0x348]
    char v68;  // [bp-0x340]
    unsigned long long v69;  // [bp-0x338]
    char v70;  // [bp-0x330]
    char v71;  // [bp-0x2f8]
    int v73;  // xmm1
    unsigned long long v74;  // rax
    int v75;  // xmm0
    int v76;  // xmm1
    unsigned long long v77;  // r12
    unsigned long v78;  // rax
    unsigned long long v79;  // r14
    int v81;  // xmm0
    void* v82;  // rbx
    unsigned long long v83;  // rax
    int v84;  // xmm0
    unsigned int v85;  // eax
    unsigned long long v86;  // rcx
    unsigned long long v87;  // rdx
    int v88;  // xmm1
    int v89;  // xmm0
    int v90;  // xmm1
    int v91;  // xmm2
    unsigned long long v92;  // rbx
    unsigned long long v93;  // r13
    unsigned long long v94;  // r13
    unsigned long long v95;  // rdx
    unsigned long v96;  // r13
    unsigned long long v97;  // rbx

    uu_chcon::uu_app(&v71);
    uu_chcon::parse_command_line(&(char)v19, &v71, a0);
    if (*((long long *)&v20) == 0x8000000000000000)
    {
        v73 = *((int128_t *)&v26);
        memcpy(&v7, &v22, 16);
        v18 = v33;
        memcpy(&v17, &v31, 16);
        *((int128_t *)&v14) = *((int128_t *)&v29);
        v11 = v73;
        if (*((int *)&v7) == 14)
            return v9.from();
        v39 = &v7;
        v41 = <uu_chcon::errors::Error as core::fmt::Display>::fmt;
        v0 = &g_4ef5c8;
        v2 = 2;
        v6 = 0;
        v4 = &v39;
        v5 = 1;
        v58.map_or_else(&(char)v0);
        v5 = 1;
        memcpy(&(char)v0, &v58, 16);
        v4 = v59;
        v74 = (char)v0.new();
        if (*((int *)&v7) != 14)
        {
            core::ptr::drop_in_place<uu_chcon::errors::Error>(&v7);
            return v74;
        }
        core::ptr::drop_in_place<clap_builder::error::Error>(v9);
        return v74;
    }
    else
    {
        memcpy(&v55, &v36, 16);
        v54 = v35;
        memcpy(&v53, &v34, 16);
        memcpy(&v52, &v32, 16);
        v75 = *((int128_t *)&v20);
        v76 = *((int128_t *)&v24);
        memcpy(&v51, &v30, 16);
        *((int128_t *)&v49) = *((int128_t *)&v27);
        v47 = v76;
        v46 = v75;
        v77 = 9223372036854775807 + v48;
        v78 = (v77 < 2 ? v77 : 2);
        if (v78)
        {
            if (v78 != 1)
            {
                v41 = 0;
                v40 = 2;
                v83 = 0;
                if (v56 == 1)
                    goto LABEL_45d4fc;
                goto LABEL_45d8c2;
            }
            uu_chcon::os_str_to_c_string(&v68, v50, *((long long *)&v51));
            if (*((int *)&v68) == 18)
            {
                v79 = *((long long *)&v70);
                v24 = v69;
                v19 = 1;
                v23 = v79 - 1;
                v26 = 0;
                if ((char)v19.check() == 2 || ((char)v19.check() & 1))
                {
                    core::ptr::drop_in_place<selinux::SecurityContext>(&(char)v19);
                    v41 = v69;
                    v42 = v79;
                    v40 = 2;
                    v83 = 0;
                    if (v56 == 1)
                        goto LABEL_45d4fc;
LABEL_45d8c2:
                    v19 = v83;
                    v22 = v75;
                    uu_chcon::process_files(&(char)v0, &v46, &v40, &(char)v19);
                    if ((long long)(&v1)[12])
                    {
                        v92 = v2;
                        v93 = (long long)(&v1)[12] * 72;
                        do
                        {
                            v94 = v93;
                            v7 = uucore::util_name();
                            v9 = v95;
                            v37 = &(char)v7;
                            v38 = <&T as core::fmt::Display>::fmt;
                            v19 = &g_4ef550;
                            v23 = 2;
                            v27 = 0;
                            v24 = &v37;
                            v26 = 1;
                            std::io::stdio::_eprint(&(char)v19);
                            uu_chcon::errors::report_full_error(&(char)v7, v92, &g_4ef648);
                            v37 = &(char)v7;
                            v38 = <alloc::string::String as core::fmt::Display>::fmt;
                            v19 = &g_4ef5c8;
                            v23 = 2;
                            v27 = 0;
                            v24 = &v37;
                            v26 = 1;
                            std::io::stdio::_eprint(&(char)v19);
                            core::ptr::drop_in_place<alloc::string::String>(v7, v9);
                            v92 += 72;
                            v96 = v94 - 72;
                            v93 = v96;
                        } while (v94 != 72);
                        v97 = 1.from();
                        core::ptr::drop_in_place<alloc::vec::Vec<uu_chcon::errors::Error>>(&(char)v0);
                        core::ptr::drop_in_place<uu_chcon::SELinuxSecurityContext>(&v40);
                        core::ptr::drop_in_place<uu_chcon::Options>(&v46);
                        return v97;
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_chcon::errors::Error>>(&(char)v0);
                    v82 = 0;
LABEL_45da5f:
                    core::ptr::drop_in_place<uu_chcon::SELinuxSecurityContext>(&v40);
                }
                else
                {
                    core::ptr::drop_in_place<selinux::SecurityContext>(&(char)v19);
                    v81 = (int128_t)(&v49)[8];
                    v7 = 1;
                    v9 = v81;
                    v13 = 1;
                    v0 = &(char)v7;
                    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v19 = &g_4ef608;
                    v23 = 2;
                    v27 = 0;
                    v24 = &(char)v0;
                    v26 = 1;
                    v64.map_or_else(&(char)v19);
                    v26 = 1;
                    v19 = v64;
                    v24 = v65;
                    v82 = (char)v19.new();
                    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v69, v79);
                }
            }
            else
            {
                v84 = (int128_t)(&v49)[8];
                v7 = 1;
                v10 = v84;
                v13 = 1;
                v0 = &(char)v7;
                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                v19 = &g_4ef608;
                v23 = 2;
                v27 = 0;
                v24 = &(char)v0;
                v26 = 1;
                v62.map_or_else(&(char)v19);
                v26 = 1;
                v19 = v62;
                v24 = v63;
                v82 = (char)v19.new();
                core::ptr::drop_in_place<uu_chcon::errors::Error>(&v68);
            }
        }
        else
        {
            (char)v7.of_path(&(char)v49);
            if ((int)v7 == 10)
            {
                if ((int)v10 == 2)
                {
                    (char)v19.from_io1(&(char)v49);
                    v85 = v19;
                    memcpy(&(char)v0, &v20, 16);
                    *((int128_t *)&v3) = *((int128_t *)&(&v24)[4]);
                    v6 = v28;
                    memcpy(&v45, &v27, 16);
                    v86 = v31;
                    v87 = v32;
                    if (v19 != 18)
                        goto LABEL_45d656;
                    goto LABEL_45d898;
                }
                else
                {
                    memcpy(&(char)v3, &v13, 16);
                    *((int128_t *)&v1) = (int128_t)v10;
                    goto LABEL_45d898;
                }
            }
            v85 = v7;
            memcpy(&(char)v0, &v8, 16);
            *((int128_t *)&v3) = *((int128_t *)&v12);
            v6 = v15;
            memcpy(&v45, &v16, 16);
            v86 = "Getting security context.Invalid security context Error flushing stdout: ";
            v87 = 24;
            if (v85 != 18)
            {
LABEL_45d656:
                v19 = v85;
                v88 = (int128_t)v3;
                *((int128_t *)&v21) = *((int128_t *)&v0);
                v25 = v88;
                v28 = v6;
                v29 = v45;
                v31 = v86;
                v32 = v87;
                uu_chcon::errors::report_full_error(&v37, &v19, &g_4ef648);
                v43 = &v37;
                v44 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_4ef5e8;
                v9 = 2;
                v14 = 0;
                v11 = &v43;
                v13 = 1;
                v60.map_or_else(&(char)v7);
                core::ptr::drop_in_place<alloc::string::String>(v37, v38);
                v13 = 1;
                v7 = v60;
                v11 = v61;
                v82 = (char)v7.new();
                core::ptr::drop_in_place<uu_chcon::errors::Error>(&v19);
            }
            else
            {
LABEL_45d898:
                v75 = (int128_t)v1;
                memcpy(&v42, &v3, 16);
                v39 = v75;
                v83 = 0;
                if (v56 == 1)
                {
LABEL_45d4fc:
                    if (v57)
                    {
                        uu_chcon::get_root_dev_ino(&(char)v7);
                        if ((int)v7 == 18)
                        {
                            v75 = (int128_t)v10;
                            v83 = 1;
                            goto LABEL_45d8c2;
                        }
                        else
                        {
                            v32 = v18;
                            v89 = (int128_t)v7;
                            v90 = (int128_t)(&v10)[8];
                            v91 = *((int128_t *)&v14);
                            v30 = v17;
                            v27 = v91;
                            v24 = v90;
                            v19 = v89;
                            uu_chcon::errors::report_full_error(&(char)v37, &(char)v19, &g_4ef648);
                            v43 = &(char)v37;
                            v44 = <alloc::string::String as core::fmt::Display>::fmt;
                            v0 = &g_4ef5e8;
                            v2 = 2;
                            v6 = 0;
                            v4 = &v43;
                            v5 = 1;
                            v66.map_or_else(&(char)v0);
                            core::ptr::drop_in_place<alloc::string::String>(v37, v38);
                            v5 = 1;
                            v0 = v66;
                            v4 = v67;
                            v82 = (char)v0.new();
                            core::ptr::drop_in_place<uu_chcon::errors::Error>(&(char)v19);
                            goto LABEL_45da5f;
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place<uu_chcon::Options>(&v46);
        return v82;
    }
}
