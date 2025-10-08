long long uu_chroot::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x48c]
    unsigned long long v1;  // [bp-0x488]
    void* v2;  // [bp-0x480], Other Possible Types: char
    unsigned long long v3;  // [bp-0x478]
    void* v4;  // [bp-0x470], Other Possible Types: unsigned long
    char v5;  // [bp-0x468], Other Possible Types: unsigned int
    int v6;  // [bp-0x468]
    unsigned long long v7;  // [bp-0x460]
    char v8;  // [bp-0x458]
    unsigned long long v9;  // [bp-0x448]
    char *v10;  // [bp-0x440], Other Possible Types: char
    unsigned long long v11;  // [bp-0x438]
    unsigned long long v12;  // [bp-0x430]
    char v13;  // [bp-0x428], Other Possible Types: unsigned int
    unsigned int v14;  // [bp-0x424]
    unsigned long long v15;  // [bp-0x420]
    unsigned long long v16;  // [bp-0x418]
    char v17;  // [bp-0x410], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x408]
    char v19;  // [bp-0x400], Other Possible Types: unsigned long long
    char v20;  // [bp-0x3fc]
    int v21;  // [bp-0x3f8]
    char v22;  // [bp-0x3ec]
    int v23;  // [bp-0x3e8]
    unsigned int v24;  // [bp-0x3dc]
    int v25;  // [bp-0x3d8]
    int v26;  // [bp-0x3c8]
    int v27;  // [bp-0x3b8]
    char v28;  // [bp-0x3a8]
    unsigned long long v29;  // [bp-0x388]
    unsigned long long v30;  // [bp-0x380]
    unsigned int v31;  // [bp-0x378]
    char v32;  // [bp-0x374]
    char v33;  // [bp-0x364]
    unsigned int v34;  // [bp-0x354]
    int v35;  // [bp-0x350], Other Possible Types: char
    unsigned long long v36;  // [bp-0x340]
    int v37;  // [bp-0x338], Other Possible Types: char, unsigned long long
    unsigned int v38;  // [bp-0x338]
    int v39;  // [bp-0x330], Other Possible Types: unsigned long long
    char *v40;  // [bp-0x328], Other Possible Types: unsigned long long
    char v41;  // [bp-0x320], Other Possible Types: unsigned int, unsigned long long
    void* v42;  // [bp-0x318]
    int v43;  // [bp-0x310]
    int v44;  // [bp-0x300]
    int v45;  // [bp-0x2f0]
    char v46;  // [bp-0x2e0]
    char v47;  // [bp-0x70]
    unsigned long long v49;  // r15
    unsigned long long v50;  // r12
    int v51;  // xmm0
    unsigned long long v52[4];  // rbx
    unsigned long long v53;  // r14
    unsigned long long v54;  // r13
    unsigned long long v55;  // rbp
    unsigned long long v56[4];  // rax
    unsigned int v57;  // eax

    uu_chroot::uu_app(&v37);
    v17.try_get_matches_from(&v37, a0, a1);
    if ((char)(((0 ^ v17) & (0 ^ -(v17))) >> 63))
        return v30.new(125);
    memcpy(&v32, &v20, 16);
    memcpy(&v33, &v22, 16);
    v34 = v24;
    v29 = v17;
    v30 = v18;
    v31 = *((int *)&v19);
    std::env::var(&v28);
    v37.from(&v29);
    v49 = v39;
    v50 = v40;
    if (v37 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v28);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
        return v49;
    }
    *((int128_t *)&v27) = *((int128_t *)&v46);
    v51 = *((int128_t *)&v41);
    v26 = v45;
    v25 = v44;
    v23 = v43;
    v21 = v51;
    v17 = v37;
    v18 = v49;
    v19 = v40;
    if ((char)(&v27)[8])
    {
        uucore::features::fs::canonicalize(&v37, &v17);
        v5.unwrap(&v37);
        core::str::converts::from_utf8(&v37, v7, *((long long *)&v8));
        if ((v37 & 1) || !(char)v39.equal(v40, "/commandError flushing stdout: ", 1))
        {
            core::mem::drop(*((long long *)&v5), v7);
            v5.to_vec("option --skip-chdir only permitted if NEWROOT is old '/'SHELL/commandError flushing stdout: ", 56);
            v40 = *((long long *)&v8);
            *((int128_t *)&v37) = *((int128_t *)&v5);
            v41 = 125;
            v49 = v37.new();
LABEL_462554:
            core::ptr::drop_in_place<uu_chroot::Options>(&v17);
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v28);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
            return v49;
        }
        core::mem::drop(*((long long *)&v5), v7);
        v49 = v18;
        v50 = v19;
    }
    if ((char)v49.is_dir(v50))
    {
        v37.try_get_many(&v29);
        v47.unwrap(&v37);
        if (*((long long *)&v47))
        {
            v2.collect(&v47);
            if (!v4)
                goto LABEL_462396;
            v1 = v2;
            v52 = v3;
            v53 = v4 - 1;
            v54 = v52[0];
            v55 = v52[1];
            v0 = 0;
        }
        else
        {
            v2 = 0;
            v3 = 8;
            v4 = 0;
LABEL_462396:
            v56 = 8.alloc_impl(32);
            if (!v56)
                alloc::alloc::handle_alloc_error(8, 32); /* do not return */
            v52 = v56;
            if (*((long long *)&v28))
                v54 = "/bin/sh-ioption --skip-chdir only permitted if NEWROOT is old '/'SHELL/commandError flushing stdout: ";
            if (*((long long *)&v28))
                v55 = 7;
            v52[0] = v54;
            v52[1] = v55;
            v52[2] = "-ioption --skip-chdir only permitted if NEWROOT is old '/'SHELL/commandError flushing stdout: ";
            v52[3] = 2;
            v1 = 2;
            v53 = 1;
            v0 = 1;
        }
        v49 = uu_chroot::set_context(&v17);
        if (!v49)
        {
            v37.new(v54, v55);
            v37.args(&v52[2], v53);
            v13.status(&v37);
            if (v13 == 1)
            {
                v16 = v15;
                if ((char)v16.kind())
                {
                    v10.to_vec(v52[0], v52[1]);
                    v9 = v12;
                    memcpy(&v8, &v10, 16);
                    v57 = 1;
                }
                else
                {
                    v10.to_vec(v52[0], v52[1]);
                    v9 = v12;
                    memcpy(&v8, &v10, 16);
                    v57 = 2;
                }
                v7 = v16;
                v5 = v57;
                v49 = v5.new();
                core::ptr::drop_in_place<std::process::Command>(&v37);
            }
            else
            {
                core::ptr::drop_in_place<std::process::Command>(&v37);
                uucore::mods::error::set_exit_code((!v14 ? 0 : -(0 < (v14 & 127)) | v14 >> 8));
                core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v1, v52);
                if ((char)v0)
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v2, v3);
                core::ptr::drop_in_place<uu_chroot::Options>(&v17);
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v28);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
                return 0;
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v1, v52);
        if ((char)v0)
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v2, v3);
    }
    else
    {
        *((int128_t *)&v6) = *((int128_t *)&v18);
        v10 = &v5;
        v11 = <std::path::Display as core::fmt::Display>::fmt;
        v37 = &g_4195b0;
        v39 = 1;
        v42 = 0;
        v40 = &v10;
        v41 = 1;
        v35.map_or_else(&v37);
        v39 = v35;
        v41 = v36;
        v38 = 10;
        v49 = v38.new();
        goto LABEL_462554;
    }
    goto LABEL_462554;
}
