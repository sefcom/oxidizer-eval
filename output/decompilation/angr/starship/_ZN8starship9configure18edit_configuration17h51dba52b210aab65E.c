long long starship::configure::edit_configuration(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x258]
    unsigned long long v1;  // [bp-0x250]
    unsigned long long v2;  // [bp-0x248]
    unsigned long long v3;  // [bp-0x240]
    unsigned long long v4;  // [bp-0x238]
    unsigned long long v5;  // [bp-0x230]
    int v6;  // [bp-0x228]
    unsigned long long v7;  // [bp-0x218]
    char *v8;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x208]
    char *v10;  // [bp-0x200]
    unsigned long long v11;  // [bp-0x1f8]
    void* v12;  // [bp-0x1f0]
    char v13;  // [bp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [bp-0x1d8]
    char *v15;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v16;  // [bp-0x1c8], Other Possible Types: unsigned long long
    void* v17;  // [bp-0x1c0]
    int v18;  // [bp-0x100], Other Possible Types: char
    char v19;  // [bp-0xf0]
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rbx

    v18.get_config_path_os();
    if ((char)(((0 ^ *((long long *)&v18)) & (0 ^ -(*((long long *)&v18)))) >> 63))
    {
        v13 = &g_11f33a8;
        v14 = 1;
        v15 = 8;
        *((uint128_t *)&v16) = 0;
        std::io::stdio::_eprint(&v13);
        std::process::exit(1); /* do not return */
    }
    v7 = *((long long *)&v19);
    v6 = v18;
    starship::configure::get_editor(&v13, a1, a2);
    shell_words::split(&v18, v14, v15);
    if (*((long long *)&v18) == 0x8000000000000000)
    {
        v21 = alloc::boxed::Box<T>::new();
        core::ptr::drop_in_place<alloc::string::String>(&v13);
    }
    else
    {
        v2 = *((long long *)&v19);
        v0 = v18;
        core::ptr::drop_in_place<alloc::string::String>(&v13);
        if (!v2)
            core::panicking::panic_bounds_check(0, 0, &g_11f33f8); /* do not return */
        starship::utils::create_command(&v13, v1);
        if (v13 == 0x8000000000000000)
        {
            v3 = v14;
            v4 = v1;
            v5 = <alloc::string::String as core::fmt::Debug>::fmt;
            v8 = &g_11f33b8;
            v9 = 2;
            v12 = 0;
            v10 = &v4;
            v11 = 1;
            std::io::stdio::_eprint(&v8);
            v21 = v3.new();
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
        }
        else
        {
            memcpy(&v18, &v13, 224);
            v18.stdin(0);
            v18.stdout(0);
            v18.stderr(0);
            v18.args(v1 + 24, v2 - 1);
            v18.arg(&v6);
            (char)v4.status(&v18);
            if ((int)v4 != 1)
            {
                core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&(char)v4);
                core::ptr::drop_in_place<std::process::Command>(&v18);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
                return 0;
            }
            v3 = v5;
            v8 = &(char)v0;
            v9 = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
            v13 = &g_11f33d8;
            v14 = 2;
            v17 = 0;
            v15 = &v8;
            v16 = 1;
            std::io::stdio::_eprint(&v13);
            v22 = v3.new();
            core::ptr::drop_in_place<std::process::Command>(&v18);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
            return v22;
        }
    }
    core::ptr::drop_in_place<gix_ref::FullName>(&v6);
    return v21;
}
