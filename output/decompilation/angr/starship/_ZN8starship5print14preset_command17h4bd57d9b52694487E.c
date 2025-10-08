void starship::print::preset_command(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned int a3)
{
    char *v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char *v3;  // [bp-0x70], Other Possible Types: char
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    char *v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    void* v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v12;  // r14
    unsigned long long v13;  // rdx

    if (a3)
    {
        starship::print::preset_list(&v3);
        v0 = &v3;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &g_11f29a8;
        v6 = 2;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        std::io::stdio::_print(&v5);
        core::ptr::drop_in_place<alloc::string::String>(&v3);
        core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(a2);
        return;
    }
    else if (a0)
    {
        v12 = starship::shadow::get_preset_content(a0, a1);
        if ((char)(((0 ^ *(a2)) & (0 ^ -(*(a2)))) >> 63))
        {
            v2 = std::io::stdio::stdout();
            v10 = v2.write_all(v12, v13);
            if (v10)
            {
                v0 = v10;
                v3 = &v0;
                v4 = <std::io::error::Error as core::fmt::Display>::fmt;
                v5 = &g_11f70f8;
                v6 = 2;
                v9 = 0;
                v7 = &v3;
                v8 = 1;
                std::io::stdio::_eprint(&v5);
                std::process::exit(1); /* do not return */
            }
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v10);
            return;
        }
        else
        {
            v2 = std::fs::write(a2, v12, a2);
            if (v2)
            {
                v0 = v2;
                v3 = &v0;
                v4 = <std::io::error::Error as core::fmt::Display>::fmt;
                v5 = &g_11f70d8;
                v6 = 2;
                v9 = 0;
                v7 = &v3;
                v8 = 1;
                std::io::stdio::_eprint(&v5);
                std::process::exit(1); /* do not return */
            }
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v2);
            return;
        }
    }
    else
    {
        core::option::expect_failed("name argument must be specifiedError writing preset to file: ", 31, &g_11f7118); /* do not return */
    }
}
