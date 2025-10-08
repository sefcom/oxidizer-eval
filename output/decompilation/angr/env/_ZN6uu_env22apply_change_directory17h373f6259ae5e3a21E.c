long long uu_env::apply_change_directory(unsigned long long a0[17])
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x80], Other Possible Types: unsigned int
    void* v5;  // [bp-0x78]
    char *v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long v11;  // [bp-0x40]
    unsigned long v12;  // [bp-0x38]
    char v13;  // [bp-0x30]
    char v14;  // [bp-0x28]
    char v15;  // [bp-0x18]
    unsigned long v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v17 = a0[15];
    if (!(!v17 || a0[11]))
    {
        (char)v1.to_vec("must specify command with --chdir (-C)cannot change directory to : warning: no name specified for value failed to set signal action for signal ", 38);
        v4 = 125;
        return (char)v1.new();
    }
    else if (v17)
    {
        v18 = std::env::set_current_dir(v17, a0[16]);
        if (!v18)
            return 0;
        v0 = v18;
        v10 = 1;
        v11 = v17;
        v12 = a0[16];
        v13 = 1;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &v0;
        v9 = <std::io::error::Error as core::fmt::Display>::fmt;
        v1 = &g_510c88;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 2;
        v14.map_or_else(&v1);
        v4 = 125;
        memcpy(&v1, &v14, 16);
        v3 = *((long long *)&v15);
        v19 = v1.new();
        core::ptr::drop_in_place<std::io::error::Error>(&v0);
        return v19;
    }
    else
    {
        return 0;
    }
}
