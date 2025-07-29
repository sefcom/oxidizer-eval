long long uu_ls::get_security_context(struct_1 *a0, char a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x188]
    int v1;  // [bp-0x180], Other Possible Types: char
    unsigned long v2;  // [bp-0x170]
    char v3;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x160]
    char *v5;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x150]
    void* v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x130]
    unsigned long long v10;  // [bp-0x128]
    char v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x110]
    unsigned long long v13;  // [bp-0x108]
    char v14;  // [bp-0x100]
    char *v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    char *v17;  // [bp-0xe8]
    unsigned long long v18;  // [bp-0xe0]
    char v19;  // [bp-0xd8]
    char v20;  // [bp-0xd0]
    unsigned long long v22;  // rdx

    v1.to_vec("? ,\n, '  +?????????bd-???_-.:~/", 1);
    if (a4)
    {
        uu_ls::get_metadata_with_deref_opt(&v19, a2, a3, 1);
        if (*((int *)&v19) == 2)
        {
            v0 = *((long long *)&v20);
            if (!(a1 & 1))
            {
                a0->field_10 = v2;
                *((void*)&a0->field_0) = v1;
                return (unsigned long long)::0x51ca00::core::ptr::drop_in_place<std::io::error::Error>(&v0);
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, a2, a3);
            v12 = v5;
            memcpy(&v11, &v3, 16);
            v13 = *((long long *)&v20);
            v14 = 0;
            v10 = 9223372036854775810;
            uucore::mods::error::set_exit_code(1);
            v8 = uucore::util_name();
            v9 = v22;
            v15 = &v8;
            v16 = <&T as core::fmt::Display>::fmt;
            v17 = &v10;
            v18 = <uu_ls::LsError as core::fmt::Display>::fmt;
            v3 = &g_69f378;
            v4 = 3;
            v7 = 0;
            v5 = &v15;
            v6 = 2;
            std::io::stdio::_eprint(&v3);
            ::0x51c730::core::ptr::drop_in_place<uu_ls::LsError>(&v10);
        }
    }
    a0->field_10 = v2;
    *((void*)&a0->field_0) = v1;
    return v2;
}
