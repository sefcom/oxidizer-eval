long long uu_cp::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x538], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x530]
    int v2;  // [bp-0x528], Other Possible Types: char
    int v3;  // [bp-0x520]
    char v4;  // [bp-0x518]
    unsigned long long v5;  // [bp-0x510]
    char v6;  // [bp-0x508]
    unsigned long long v7;  // [bp-0x4f8]
    unsigned long long v8;  // [bp-0x4f0]
    void* v9;  // [bp-0x4e8], Other Possible Types: char *
    unsigned long long v10;  // [bp-0x4e0]
    void* v11;  // [bp-0x4d8]
    char *v12;  // [bp-0x4c8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x4c0]
    int v14;  // [bp-0x4b8], Other Possible Types: char *
    unsigned long long v15;  // [bp-0x4b0]
    int v16;  // [bp-0x4a8]
    int v17;  // [bp-0x498]
    unsigned long long v18;  // [bp-0x488]
    int v19;  // [bp-0x478]
    unsigned long long v20;  // [bp-0x470]
    unsigned long long v21;  // [bp-0x468]
    int v22;  // [bp-0x458]
    unsigned long long v23;  // [bp-0x450]
    unsigned long long v24;  // [bp-0x448]
    unsigned long long v25;  // [bp-0x440]
    unsigned long long v26;  // [bp-0x438]
    char *v27;  // [bp-0x430]
    int v28;  // [bp-0x428], Other Possible Types: unsigned long long
    void* v29;  // [bp-0x420]
    int v30;  // [bp-0x418]
    unsigned long long v31;  // [bp-0x408]
    int v32;  // [bp-0x400]
    int v33;  // [bp-0x3f0]
    unsigned long long v34;  // [bp-0x3e0]
    char *v35;  // [bp-0x3d8]
    unsigned long long v36;  // [bp-0x3d0]
    char v37;  // [bp-0x3c8]
    int v38;  // [bp-0x3b8], Other Possible Types: char
    int v39;  // [bp-0x3a8], Other Possible Types: char
    unsigned long long v40;  // [bp-0x398]
    char v41;  // [bp-0x390], Other Possible Types: unsigned long long
    struct_0 *v42;  // [bp-0x388]
    int v43;  // [bp-0x380]
    int v44;  // [bp-0x370]
    unsigned long long v45;  // [bp-0x360]
    int v46;  // [bp-0x358], Other Possible Types: char, unsigned long long
    int v47;  // [bp-0x350], Other Possible Types: char
    int v48;  // [bp-0x348], Other Possible Types: void*, unsigned long long
    void* v49;  // [bp-0x348]
    int v50;  // [bp-0x340], Other Possible Types: char, unsigned int
    int v51;  // [bp-0x338]
    int v52;  // [bp-0x330], Other Possible Types: char
    unsigned long long v53;  // [bp-0x328]
    unsigned long long v54;  // [bp-0x320]
    int v55;  // [bp-0x318]
    int v56;  // [bp-0x308]
    char v57;  // [bp-0x2f8]
    char v58;  // [bp-0x90]
    struct_0 *v60;  // rbx
    unsigned int v61;  // eax
    unsigned long long v62;  // r14
    unsigned long long v63;  // rax
    unsigned long long v64;  // r14
    unsigned long long v65;  // r14
    unsigned long long v66;  // rax
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rdi
    unsigned long long v69;  // rdx
    int v70;  // xmm1
    int v71;  // xmm2
    unsigned long long v72;  // rdx
    int v73;  // xmm0
    int v74;  // xmm1

    uu_cp::uu_app(&v46);
    v41.try_get_matches_from(&v46, a0, a1);
    if ((char)(((0 ^ v41) & (0 ^ -(v41))) >> 63))
    {
        v60 = v42;
        uu_cp::uu_app(&v46);
        v61 = v60->field_dd;
        switch (v61)
        {
        case 12:
            v63 = v46.print_help();
            if (v63)
            {
                v64 = v63.from();
                core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v46);
                core::ptr::drop_in_place<clap_builder::error::Error>(v60);
                return v64;
            }
            break;
        case 14:
            v0.render_version(&v46);
            v14 = &v0;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v25 = &g_420910;
            v26 = 1;
            v29 = 0;
            v27 = &v14;
            v28 = 1;
            std::io::stdio::_print(&v25);
            core::ptr::drop_in_place<alloc::string::String>(v0, v1);
            break;
        default:
            v62 = v60.new();
            core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v46);
            return v62;
        }
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v46);
        core::ptr::drop_in_place<clap_builder::error::Error>(v60);
        return 0;
    }
    else
    {
        v18 = v45;
        v17 = v44;
        v16 = v43;
        *((int128_t *)&v14) = *((int128_t *)&v41);
        v46.from_matches(&(char)v14);
        memcpy(&v37, &v47, 16);
        memcpy(&v38, &v50, 16);
        memcpy(&v39, &v52, 16);
        v40 = v54;
        if (v46 == 0x8000000000000000)
        {
            v65 = v37.new();
        }
        else
        {
            v34 = *((long long *)&v57);
            v33 = v56;
            v32 = v55;
            memcpy(&(char)v26, &v37, 16);
            v28 = v38;
            v30 = v39;
            v31 = v40;
            v25 = v46;
            if ((int)(&v33)[4].eq() && *((char *)&v34 + 5))
            {
                v0.to_vec("options --backup and --no-clobber are mutually exclusivepaths", 56);
                v48 = *((long long *)&v2);
                *((int128_t *)&v46) = *((int128_t *)&v0);
                v50 = 1;
                v65 = v46.new();
            }
            else
            {
                v46.try_remove_many(&(char)v14);
                v58.unwrap(&v46);
                if (*((long long *)&v58))
                {
                    v46.collect(&v58);
                    v66 = v46;
                    v67 = *((long long *)&v47);
                    v49 = v48;
                }
                else
                {
                    v66 = 0x8000000000000000;
                }
                if (v66 == 0x8000000000000000)
                    v48 = 0;
                if (v66 != 0x8000000000000000)
                {
                    v68 = v67;
                    if (v66 != 0x8000000000000000)
                        goto LABEL_48690f;
LABEL_48690e:
                    v66 = 0;
                }
                else
                {
                    v68 = 8;
                    if (v66 == 0x8000000000000000)
                        goto LABEL_48690e;
LABEL_48690f:
                }
                v7 = v66;
                v8 = v68;
                v9 = v48;
                uu_cp::parse_path_args(&v46, &v7, &v25);
                memcpy(&v0, &v47, 16);
                *((int128_t *)&v2) = *((int128_t *)&v50);
                memcpy(&v4, &v52, 16);
                if (v46 == 9223372036854775820)
                {
                    v69 = (long long)v2;
                    v21 = (long long)v2;
                    *((int128_t *)&v19) = *((int128_t *)&v0);
                    v24 = v5;
                    *((int128_t *)&v22) = (int128_t)v3;
                    uu_cp::copy(&v0, v20, v69, v23, v5, &v25);
                    if (v0 == 9223372036854775820)
                    {
                        v0.drop_in_place<core::result::Result<(),uu_cp::Error>>();
                    }
                    else
                    {
                        v70 = (int128_t)v2;
                        v71 = *((int128_t *)&v4);
                        *((int128_t *)&v46) = *((int128_t *)&v0);
                        v53 = *((long long *)&v6);
                        v51 = v71;
                        v48 = v70;
                        if (0x8000000000000000 + v46 != 4)
                        {
                            v12 = uucore::util_name();
                            v13 = v72;
                            v35 = &v12;
                            v36 = <&T as core::fmt::Display>::fmt;
                            v7 = &g_55ccb8;
                            v8 = 2;
                            v11 = 0;
                            v9 = &v35;
                            v10 = 1;
                            std::io::stdio::_eprint(&v7);
                            v12 = &v46;
                            v13 = <uu_cp::Error as core::fmt::Display>::fmt;
                            v7 = &g_55ccd8;
                            v8 = 2;
                            v11 = 0;
                            v9 = &v12;
                            v10 = 1;
                            std::io::stdio::_eprint(&v7);
                        }
                        uucore::mods::error::set_exit_code(1);
                        core::ptr::drop_in_place<uu_cp::Error>(&v46);
                    }
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v22);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&(char)v19);
                    core::ptr::drop_in_place<uu_cp::Options>(&v25);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&(char)v14);
                    return 0;
                }
                v73 = *((int128_t *)&v0);
                v74 = (int128_t)v2;
                *((int128_t *)&v52) = *((int128_t *)&v4);
                v50 = v74;
                v47 = v73;
                v65 = v46.new();
            }
            core::ptr::drop_in_place<uu_cp::Options>(&v25);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&(char)v14);
        return v65;
    }
}
