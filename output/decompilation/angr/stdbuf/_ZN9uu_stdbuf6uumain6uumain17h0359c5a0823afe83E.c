long long uu_stdbuf::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x518], Other Possible Types: char, unsigned long long
    int v1;  // [bp-0x518]
    unsigned long long v2;  // [bp-0x510]
    char *v3;  // [sp-0x508], Other Possible Types: char, unsigned long long, unsigned long
    char v4;  // [bp-0x504]
    unsigned long long v5;  // [bp-0x500], Other Possible Types: unsigned int
    void* v6;  // [bp-0x4f8], Other Possible Types: char
    char v7;  // [bp-0x4f4]
    unsigned long long v8;  // [bp-0x4f0]
    char v9;  // [bp-0x4e8]
    char v10;  // [bp-0x4e4]
    unsigned long long v11;  // [bp-0x4d8]
    char *v12;  // [bp-0x4d0], Other Possible Types: unsigned long long
    unsigned long v13;  // [bp-0x4c8], Other Possible Types: unsigned long long
    char *v14;  // [bp-0x4c0]
    unsigned long long v15;  // [bp-0x4b8]
    char v16;  // [bp-0x4b0], Other Possible Types: unsigned long long
    char v17;  // [bp-0x4a8]
    int v18;  // [bp-0x498]
    int v19;  // [bp-0x48c]
    char v20;  // [bp-0x470]
    unsigned long long v21;  // [bp-0x458]
    unsigned long long v22;  // [bp-0x450]
    unsigned int v23;  // [bp-0x448]
    char v24;  // [bp-0x444]
    char v25;  // [bp-0x434]
    unsigned int v26;  // [bp-0x424]
    char v27;  // [bp-0x420], Other Possible Types: unsigned int
    char v28;  // [bp-0x41c]
    unsigned long long v29;  // [bp-0x418]
    int v30;  // [bp-0x410]
    unsigned long long v31;  // [bp-0x400]
    unsigned long long v32;  // [bp-0x3f8]
    unsigned long long v33;  // [bp-0x3f0]
    unsigned long long v34;  // [bp-0x3e8]
    int v35;  // [bp-0x3e0]
    int v36;  // [bp-0x3d0]
    unsigned long long v37;  // [bp-0x3c0]
    char v38;  // [bp-0x3b8]
    unsigned long long v39;  // [bp-0x3a8]
    int v40;  // [bp-0x398], Other Possible Types: char
    unsigned long v41;  // [bp-0x388]
    int v42;  // [bp-0x380], Other Possible Types: char
    unsigned long v43;  // [bp-0x370]
    int v44;  // [bp-0x368], Other Possible Types: char
    unsigned long v45;  // [bp-0x358]
    int v46;  // [bp-0x350], Other Possible Types: char
    unsigned long v47;  // [bp-0x340]
    char v48;  // [bp-0x338]
    char v49;  // [bp-0x328]
    char v50;  // [bp-0x318]
    char v51;  // [bp-0x308]
    char v52;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v53;  // [bp-0x2e8]
    int v54;  // [bp-0x2d8], Other Possible Types: char
    char v55;  // [bp-0x2c8]
    unsigned long long v57;  // r14
    unsigned long long v58;  // rax
    char v59;  // bpl
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned int v62;  // eax
    unsigned int v63;  // eax

    uu_stdbuf::uu_app(&v52);
    (char)v0.try_get_matches_from(&v52, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v22.new(125);
    memcpy(&v24, &v4, 16);
    memcpy(&v25, &v7, 16);
    v26 = *((int *)&v10);
    v21 = v0;
    v22 = v2;
    v23 = *((int *)&v3);
    v52.try_from(&v21);
    if (v52 == 3)
    {
        v3 = *((long long *)&v54);
        v0 = v53;
        v5 = 125;
        v57 = (char)v0.new();
    }
    else
    {
        v37 = *((long long *)&v55);
        v36 = v54;
        v34 = v52;
        v35 = v53;
        v52.try_get_many(&v21);
        (char)v0.unwrap(&v52);
        if (!v0)
            core::option::unwrap_failed(&g_8a8168); /* do not return */
        memcpy(&v51, &v9, 16);
        memcpy(&v50, &v6, 16);
        memcpy(&v49, &v3, 16);
        memcpy(&v48, &v0, 16);
        v58 = v48.next();
        if (!v58)
            core::option::unwrap_failed(&g_8a8180); /* do not return */
        v52.new(v58);
        v16.collect(&v48);
        tempfile::dir::tempdir(&(char)v0);
        v20.unwrap(&(char)v0);
        uu_stdbuf::get_preload_env(&(char)v0, &v20);
        v57 = v2;
        if (v0 == 0x8000000000000000)
        {
            v59 = 1;
            goto LABEL_80d1fb;
        }
        v39 = v8;
        memcpy(&v38, &(char)v5, 16);
        v31 = v0;
        v32 = v57;
        v33 = v3;
        v52.env(&v31, &v38);
        uu_stdbuf::set_command_env(&v52, "_STDBUF_I_STDBUF_O_STDBUF_Efailed to execute process:Error flushing stdout: ", 9, &v34);
        uu_stdbuf::set_command_env(&v52, "_STDBUF_O_STDBUF_Efailed to execute process:Error flushing stdout: ", 9, &(char)v35);
        uu_stdbuf::set_command_env(&v52, "_STDBUF_Efailed to execute process:Error flushing stdout: ", 9, &(char)v36);
        v52.args(&v16);
        v27.spawn(&v52);
        if (v27 == 1)
        {
            v11 = v29;
            v60 = (unsigned long long)v29.kind();
            if (!(char)v60)
            {
                v12 = &g_8a8250;
                v13 = <&T as core::fmt::Display>::fmt;
                *((unsigned long long **)&v1) = &g_8a8090;
                v2 = 2;
                v6 = 0;
                v3 = &v12;
                v5 = 1;
                v42.map_or_else(&(unsigned long long)v1);
                v5 = 127;
                v1 = v42;
                v3 = v43;
                v61 = (unsigned long long)v1.new();
            }
            else if ((unsigned int)v60 == 1)
            {
                v12 = &g_8a8250;
                v13 = <&T as core::fmt::Display>::fmt;
                *((unsigned long long **)&v1) = &g_8a8070;
                v2 = 2;
                v6 = 0;
                v3 = &v12;
                v5 = 1;
                v40.map_or_else(&(unsigned long long)v1);
                v5 = 126;
                v1 = v40;
                v3 = v41;
                v61 = (unsigned long long)v1.new();
            }
            else
            {
                v12 = &g_8a8250;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v11;
                v15 = <std::io::error::Error as core::fmt::Display>::fmt;
                *((unsigned long long **)&v1) = &g_8a80b0;
                v2 = 2;
                v6 = 0;
                v3 = &v12;
                v5 = 2;
                v44.map_or_else(&(unsigned long long)v1);
                v5 = 1;
                v1 = v44;
                v3 = v45;
                v61 = (unsigned long long)v1.new();
            }
            v57 = v61;
            core::ptr::drop_in_place<std::io::error::Error>(&v11);
            goto LABEL_80d1f9;
        }
        else
        {
            v19 = v30;
            *((int128_t *)&v18) = *((int128_t *)&v28);
            (char)v0.wait(&(char)v18);
            (char)v12.map_err_context(&(char)v0);
            v57 = v12;
            if (v12)
            {
                core::ptr::drop_in_place<std::process::Child>(&(char)v18);
LABEL_80d1f9:
LABEL_80d1fb:
                core::ptr::drop_in_place<tempfile::dir::TempDir>(&v20);
                if (v59)
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v16, *((long long *)&v17));
                core::ptr::drop_in_place<std::process::Command>(&v52);
            }
            else
            {
                v62 = v13;
                v63 = v62 & 127;
                if (!((char)v62 & 127))
                {
                    v57 = (!(unsigned int)(v13 >> 8) ? 0 : (unsigned int)(v13 >> 8).from());
                }
                else if ((char)v63 + 1 >= 2)
                {
                    v27 = v63;
                    v12 = &v27;
                    v13 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                    *((unsigned long long **)&v1) = &g_8a80d0;
                    v2 = 1;
                    v6 = 0;
                    v3 = &v12;
                    v5 = 1;
                    v46.map_or_else(&(unsigned long long)v1);
                    v5 = 1;
                    v1 = v46;
                    v3 = v47;
                    v57 = (unsigned long long)v1.new();
                }
                else
                {
                    core::option::unwrap_failed(&g_8a81b0); /* do not return */
                }
                core::ptr::drop_in_place<std::process::Child>(&(char)v18);
                core::ptr::drop_in_place<tempfile::dir::TempDir>(&v20);
                core::ptr::drop_in_place<std::process::Command>(&v52);
            }
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return v57;
}
