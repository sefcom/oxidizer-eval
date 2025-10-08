long long uu_chmod::Chmoder::chmod(char a0[39], unsigned long long a1[3], unsigned long a2)
{
    char v0;  // [bp-0x18d]
    char v1;  // [bp-0x18c]
    char v2;  // [bp-0x18b]
    char v3;  // [bp-0x18a]
    char v4;  // [bp-0x189]
    char *v5;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x180]
    char *v7;  // [bp-0x178], Other Possible Types: void*
    unsigned long long v8;  // [bp-0x170], Other Possible Types: unsigned long
    char *v9;  // [bp-0x168], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0x160], Other Possible Types: char
    void* v11;  // [bp-0x158]
    unsigned long long v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x148]
    unsigned long long v14;  // [bp-0x140]
    unsigned int v15;  // [bp-0x134]
    unsigned long long v16;  // [bp-0x128]
    int v17;  // [bp-0x128]
    unsigned long long v18;  // [bp-0x120]
    char *v19;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x108]
    int v22;  // [bp-0x78]
    unsigned long long v23;  // [bp-0x68]
    int v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x50]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x38]
    unsigned long long v29[3];  // r12, Other Possible Types: unsigned long
    unsigned long long v30;  // r15
    unsigned long long v31[3];  // rax
    void* v32;  // rcx
    unsigned long v33;  // r14
    unsigned long v34;  // rbp
    unsigned long v37;  // rdx
    unsigned long long v39;  // rbp
    unsigned long long v40;  // r14

    if (!a2)
        return 0;
    v29 = a1;
    v30 = &a1[a2];
    v31 = a1 + 1;
    v0 = a0[33];
    v3 = a0[34];
    v1 = a0[35];
    v4 = a0[37];
    v2 = a0[36];
    v15 = ((a0[36] & 1) ? !a0[38] : a0[37] ^ 1);
    v32 = 0;
    while (true)
    {
        v11 = v32;
        while (true)
        {
            v33 = v29[1];
            v34 = v29[2];
            v29 = v31;
            std::fs::metadata(&v16, v33, v34);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v16, v18);
            if ((unsigned int)v16 == 2)
            {
                if (!(char)v33.is_symlink(v34))
                {
                    if (!(v0 & 1))
                    {
                        v7 = 0;
                        v8 = v33;
                        v9 = v34;
                        v10 = 1;
                        v5 = &v7;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v17) = &g_4eb9a8;
                        v18 = 2;
                        v21 = 0;
                        v19 = &v5;
                        v20 = 1;
                        v24.map_or_else(&(unsigned long long)v17);
                        v20 = 1;
                        v17 = v24;
                        v19 = v25;
                        *((double *)&v12) = (unsigned long long)v17.new();
                        v13 = &g_4eba08;
                        uucore::mods::error::set_exit_code((unsigned int)v12.code());
                        v5 = uucore::util_name();
                        v6 = v37;
                        v7 = &v5;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v9 = &v12;
                        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v16 = &g_4eb958;
                        v18 = 3;
                        v21 = 0;
                        v19 = &v7;
                        v20 = 2;
                        std::io::stdio::_eprint(&v16);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_4eba08);
                    }
LABEL_45e010:
                    uucore::mods::error::set_exit_code(1);
                }
                else if (!((char)v15 & 1))
                {
                    if (!(v0 & 1))
                    {
                        v7 = 0;
                        v8 = v33;
                        v9 = v34;
                        v10 = 1;
                        v5 = &v7;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v17) = &g_4eb948;
                        v18 = 1;
                        v21 = 0;
                        v19 = &v5;
                        v20 = 1;
                        v22.map_or_else(&(unsigned long long)v17);
                        v20 = 1;
                        v17 = v22;
                        v19 = v23;
                        *((double *)&v12) = (unsigned long long)v17.new();
                        v13 = &g_4eba08;
                        uucore::mods::error::set_exit_code((unsigned int)v12.code());
                        v5 = uucore::util_name();
                        v6 = v37;
                        v7 = &v5;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v9 = &v12;
                        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v16 = &g_4eb958;
                        v18 = 3;
                        v21 = 0;
                        v19 = &v7;
                        v20 = 2;
                        std::io::stdio::_eprint(&v16);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_4eba08);
                        uucore::mods::error::set_exit_code(1);
                    }
                    if ((v3 & 1))
                    {
                        v7 = 0;
                        v8 = v33;
                        v9 = v34;
                        v10 = 1;
                        v5 = &v7;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v16 = &g_4eb988;
                        v18 = 2;
                        v21 = 0;
                        v19 = &v5;
                        v20 = 1;
                        std::io::stdio::_print(&v16);
                        goto LABEL_45e010;
                    }
                }
            }
            else
            {
                if ((v4 & 1) || !(char)v33.is_symlink(v34))
                    break;
            }
            v31 = v29 + 24;
            if (v29 == v30)
                return v11;
        }
        if ((v2 & 1))
        {
            if ((v1 & 1) && (char)v33.equal(v34, "/neither symbolic link  nor referent has been changed\n: Permission denied: new permissions are , not src/uu/chmod/src/chmod.rsfailed to change mode of file  from  () to )\n", 1))
            {
                v7 = 0;
                v8 = v33;
                v9 = v34;
                v10 = 1;
                v5 = &v7;
                v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                v16 = &g_4eb9c8;
                v18 = 2;
                v21 = 0;
                v19 = &v5;
                v20 = 1;
                v26.map_or_else(&v16);
                v20 = 1;
                memcpy(&v16, &v26, 16);
                v19 = *((long long *)&v27);
                v40 = v16.new();
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v11, v14);
                return v40;
            }
            v32 = a0.walk_dir(v33, v34);
            v39 = v37;
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v11, v14);
        }
        else
        {
            v32 = a0.chmod_file(v33, v34).and(v37, v11, v14);
            v39 = v37;
        }
        v31 = v29 + 24;
        v14 = v39;
        if (v29 == v30)
        {
            v31 = v29;
            if (v29 == v30)
                return v32;
        }
        else if (v29 == v30)
        {
            return v32;
        }
    }
}
