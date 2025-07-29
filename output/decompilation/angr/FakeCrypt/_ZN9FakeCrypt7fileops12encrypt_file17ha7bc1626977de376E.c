int FakeCrypt::fileops::encrypt_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x818]
    struct struct_0 v1[1];  // [bp-0x811]
    char v2;  // [bp-0x810]
    char v3;  // [bp-0x80c]
    void* v4;  // [bp-0x800]
    unsigned long long v5;  // [bp-0x7f8]
    void* v6;  // [bp-0x7f0]
    struct struct_0 v7[16];  // [bp-0x7e8]
    char *v8;  // [bp-0x7d8], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x7d8]
    unsigned long long v10;  // [bp-0x7d0]
    char *v11;  // [bp-0x7c8]
    unsigned long long v12;  // [bp-0x7c0]
    char v13;  // [bp-0x7b8], Other Possible Types: unsigned long
    unsigned int v14;  // [bp-0x7b4]
    unsigned long long v15;  // [bp-0x7b0]
    char *v16;  // [bp-0x7a8]
    unsigned long long v17;  // [bp-0x7a0]
    void* v18;  // [bp-0x798]
    char v19;  // [bp-0x3f8]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    unsigned int v27;  // eax

    *((unsigned long long *)&v7[0]) = a0;
    v2.open(a0, a1);
    if ((v2 & 1))
        return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v2);
    v0 = *((int *)&v3);
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v21 = v0.read_to_end(&v4);
    if (v21)
    {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v21, v22);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0, v23);
        v4.resize((9223372036854775792 & v6) + 16, 0);
        v13.new(a2);
        v19.inner_iv_init(&v13, a3);
        v24 = v19.encrypt_padded_mut(1, v6, v6);
        if (v24)
        {
            v13.create(v7, a1);
            if (*((int *)&v13))
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v13);
            }
            else
            {
                v8 = v14;
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v8.write_all(v24, v23));
                ::0x454540::core::ptr::drop_in_place<std::fs::File>(v9);
            }
        }
        else
        {
            v8 = &v7[0].field_0;
            v10 = <&T as core::fmt::Debug>::fmt;
            v11 = &v1[0].field_0;
            v12 = <inout::errors::PadError as core::fmt::Display>::fmt;
            v13 = &g_4d95a0;
            v15 = 3;
            v18 = 0;
            v16 = &v8;
            v17 = 2;
            std::io::stdio::_eprint(&v13);
        }
    }
    ::0x4545c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
    v27 = ::0x454540::core::ptr::drop_in_place<std::fs::File>(v0);
    if (!(v2 & 1))
        return v27;
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v2);
}
