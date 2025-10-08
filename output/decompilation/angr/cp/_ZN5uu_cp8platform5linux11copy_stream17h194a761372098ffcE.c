long long uu_cp::platform::linux::copy_stream(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned int v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xfc]
    char v2;  // [bp-0xf8], Other Possible Types: unsigned int
    char v3;  // [bp-0xf4]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    char v8;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0xc4]
    unsigned int v10;  // [bp-0xc0]
    char v11;  // [bp-0xbf]
    char v12;  // [bp-0xbc], Other Possible Types: unsigned short
    char v13;  // [bp-0x90]
    unsigned int v15;  // r14d
    unsigned int v16;  // eax

    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8.open(&v4);
    if (v8 == 1)
        return 1;
    v15 = v9;
    v0 = v15;
    v16 = uucore::features::mode::get_umask();
    v8 = 0;
    v12 = 0;
    v10 = 0;
    v12 = 1;
    v11 = 1;
    v9 = ~(v16) & 402;
    v2.open(&v8, &v6);
    if (v2 != 1)
    {
        v1 = *((int *)&v3);
        uucore::features::buf_copy::linux::copy_stream(&v8, &v0, &v1);
        if (*((long long *)&v8))
        {
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(*((long long *)&v8), *((long long *)&v10));
        }
        else if (a4)
        {
            v8.metadata(&v0);
            if (v8 != 2 && !v1.set_permissions(*((int *)&v13)))
            {
                core::ptr::drop_in_place<std::fs::File>(v1);
                core::ptr::drop_in_place<std::fs::File>(v0);
                return 0;
            }
        }
        else
        {
            core::ptr::drop_in_place<std::fs::File>(v1);
            core::ptr::drop_in_place<std::fs::File>(v0);
            return 0;
        }
        core::ptr::drop_in_place<std::fs::File>(v1);
        v15 = v0;
    }
    core::ptr::drop_in_place<std::fs::File>(v15);
    return 1;
}
