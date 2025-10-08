long long uu_od::multifilereader::MultifileReader::next_file(void* a0)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xe0]
    unsigned int v2;  // [bp-0xdc]
    unsigned long long v3;  // [bp-0xd8]
    void* v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    char *v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    void* v12;  // [bp-0x90]
    char *v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    char *v15;  // [bp-0x70]
    unsigned long long v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    if ((long long)a0[16])
    {
        do
        {
            v17.remove(a0);
            if (v17)
            {
                if ((unsigned int)v17 == 1)
                {
                    std::io::stdio::stdin();
                    v23 = 0.new();
                    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>((long long)a0[24], (long long)a0[32]);
                    *((unsigned long long *)&a0[24]) = v23;
                    *((unsigned long long **)&a0[32]) = &g_5024a0;
                    return &g_5024a0;
                }
                memcpy(&v20, &v18, 16);
                v24 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>((long long)a0[24], (long long)a0[32]);
                *((int128_t *)&a0[24]) = *((int128_t *)&v20);
                return v24;
            }
            v1.open(v18, v19);
            if (!((char)v1 & 1))
            {
                v23 = v2.new();
                core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>((long long)a0[24], (long long)a0[32]);
                *((unsigned long long *)&a0[24]) = v23;
                *((unsigned long long **)&a0[32]) = &g_5024a0;
                return &g_5024a0;
            }
            v0 = v3;
            v4 = uucore::util_name();
            v5 = v22;
            v13 = &v4;
            v14 = <&T as core::fmt::Display>::fmt;
            v8 = &g_502438;
            v9 = 2;
            v12 = 0;
            v10 = &v13;
            v11 = 1;
            std::io::stdio::_eprint(&v8);
            v4 = 0;
            v5 = v18;
            v6 = v19;
            v7 = 0;
            v13 = &v4;
            v14 = <os_display::Quoted as core::fmt::Display>::fmt;
            v15 = &v0;
            v16 = <std::io::error::Error as core::fmt::Display>::fmt;
            v8 = &g_502458;
            v9 = 3;
            v12 = 0;
            v10 = &v13;
            v11 = 2;
            std::io::stdio::_eprint(&v8);
            *((char *)&a0[40]) = 1;
            core::ptr::drop_in_place<std::io::error::Error>(v0);
        } while ((long long)a0[16]);
    }
    v25 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>((long long)a0[24], (long long)a0[32]);
    *((unsigned long long *)&a0[24]) = 0;
    return v25;
}
