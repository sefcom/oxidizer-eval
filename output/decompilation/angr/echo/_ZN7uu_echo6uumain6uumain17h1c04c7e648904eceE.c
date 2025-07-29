long long uu_echo::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3a0]
    unsigned long long v1[3];  // [bp-0x398]
    unsigned long v2;  // [bp-0x390], Other Possible Types: unsigned long long
    char v3;  // [bp-0x388], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x378]
    char v5;  // [bp-0x360], Other Possible Types: unsigned long long
    int v6;  // [bp-0x348]
    unsigned long long v7;  // [bp-0x340]
    char *v8;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x330]
    void* v10;  // [bp-0x328]
    char *v11;  // [bp-0x310]
    unsigned long long v12;  // [bp-0x308]
    char v13;  // [bp-0x300]
    char v14;  // [bp-0x2e8]
    unsigned long long v15;  // [bp-0x2d8]
    unsigned long long v17;  // rax
    void* v18;  // rax
    char v19;  // bl
    char v20;  // bpl
    unsigned long long v21;  // rax
    unsigned long long v22;  // [bp-0x348]

    v13.skip(a0, a1);
    v0.from_iter(&v13, &g_52b7b8);
    std::env::var_os(&v14);
    ::0x479de0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v14);
    if (!((char)(((0 ^ *((long long *)&v14)) & (0 ^ -(*((long long *)&v14)))) >> 63)))
    {
        if (v2 && (char)v1[1].eq(v1[2]))
        {
            v14.into_iter(&v0);
            uu_echo::filter_flags(&(char)v22, &v14);
            memcpy(&v3, &(char)v22, 16);
            v4 = v8;
            v19 = 1;
            goto LABEL_47a9c1;
        }
        else
        {
            v4 = v2;
            memcpy(&v3, &v0, 16);
            v19 = 1;
            v20 = 1;
            goto LABEL_47a9c1;
        }
    }
    if (v2 != 1)
    {
LABEL_47a995:
        v14.into_iter(&v0);
        uu_echo::filter_flags(&v3, &v14);
LABEL_47a9c1:
        v8 = v4;
        *((int128_t *)&v6) = *((int128_t *)&v3);
        v3 = std::io::stdio::stdout();
        v5 = v3.lock();
        v15 = v8;
        memcpy(&v14, &v22, 16);
        v21 = uu_echo::execute(&v5, &v14, v20 & 1, v19 & 1);
        if (!v21)
        {
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v5);
            return 0;
        }
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v5);
        return v21;
    }
    if ((char)v1[1].h755a6090d15ab747 (.specialized.2)(v1[2]))
    {
        uu_echo::uu_app(&v14);
        v17 = v14.print_help();
        if (v17)
        {
            v18 = v17.from();
            ::0x479900::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v14);
        }
        else
        {
            ::0x479900::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v14);
LABEL_47aa5c:
            v18 = 0;
        }
        ::0x479d30::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
        return v18;
    }
    if (!(char)v1[1].h755a6090d15ab747 (.specialized.1)(v1[2]))
        goto LABEL_47a995;
    uu_echo::uu_app(&v14);
    v5.render_version(&v14);
    v11 = &v5;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = &g_411480;
    v7 = 1;
    v10 = 0;
    v8 = &v11;
    v9 = 1;
    std::io::stdio::_print(&v22);
    ::0x479780::core::ptr::drop_in_place<alloc::string::String>(&v5);
    ::0x479900::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v14);
    goto LABEL_47aa5c;
}
