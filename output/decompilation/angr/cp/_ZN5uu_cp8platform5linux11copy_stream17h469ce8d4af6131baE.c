long long uu_cp::platform::linux::copy_stream(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0xf8]
    char v1;  // [bp-0xf4], Other Possible Types: unsigned int
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xec]
    unsigned long long v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    char v8;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0xbc]
    unsigned int v10;  // [bp-0xb8]
    char v11;  // [bp-0xb7]
    char v12;  // [bp-0xb4], Other Possible Types: unsigned short
    char v13;  // [bp-0x88]
    unsigned int v15;  // ebp
    unsigned int v16;  // eax
    unsigned int v17;  // eax

    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8.open(&v4);
    if ((v8 & 1))
        return 1;
    v15 = v9;
    v16 = uucore::features::mode::get_umask();
    v8 = 0;
    v12 = 0;
    v10 = 0;
    v12 = 1;
    v11 = 1;
    v9 = ~(v16) & 402;
    v2.open(&v8, &v6);
    if (!(v2 & 1))
    {
        v0 = *((int *)&v3);
        v8.metadata(&v0);
        if (v8 != 2)
        {
            v17 = *((int *)&v13) & 0xf000;
            if (v17 == 0x1000 || v17 == 0x2000 || v17 == 0x6000 || !v0.set_len(0))
            {
                uucore::features::buf_copy::linux::copy_stream(&v8, &v1, &v0);
                if (!*((long long *)&v8))
                {
                    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
                    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
                    return 0;
                }
                ::0x4eafe0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(*((long long *)&v8), *((long long *)&v10));
            }
        }
        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
        v15 = v1;
    }
    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v15);
    return 1;
}
