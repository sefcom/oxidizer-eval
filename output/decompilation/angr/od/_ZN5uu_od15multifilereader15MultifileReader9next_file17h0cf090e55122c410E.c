long long uu_od::multifilereader::MultifileReader::next_file(struct_1 *a0)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned int v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0xac]
    unsigned long long v6;  // [bp-0xa8]
    void* v7;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x78]
    char *v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    void* v15;  // [bp-0x60]
    char *v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    char *v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax

    if (a0->field_10)
    {
        do
        {
            v1.remove(a0, 0, &g_5965f8);
            if (v1)
            {
                if ((unsigned int)v1 == 1)
                {
                    std::io::stdio::stdin();
                    v22 = 0.new();
                    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(a0->field_18, a0->field_20);
                    a0->field_18 = v22;
                    a0->field_20 = &g_596610;
                    return &g_596610;
                }
                v23 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(a0->field_18, a0->field_20);
                a0->field_18 = v2;
                a0->field_20 = v3;
                return v23;
            }
            v4.open(v2, v3);
            if (!((char)v4 & 1))
            {
                v22 = v5.new();
                core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(a0->field_18, a0->field_20);
                a0->field_18 = v22;
                a0->field_20 = &g_596610;
                return &g_596610;
            }
            v0 = v6;
            v7 = uucore::util_name();
            v8 = v21;
            v16 = &v7;
            v17 = <&T as core::fmt::Display>::fmt;
            v11 = &g_5965a8;
            v12 = 2;
            v15 = 0;
            v13 = &v16;
            v14 = 1;
            std::io::stdio::_eprint(&v11);
            v7 = 0;
            v8 = v2;
            v9 = v3;
            v10 = 0;
            v16 = &v7;
            v17 = <os_display::Quoted as core::fmt::Display>::fmt;
            v18 = &v0;
            v19 = <std::io::error::Error as core::fmt::Display>::fmt;
            v11 = &g_5965c8;
            v12 = 3;
            v15 = 0;
            v13 = &v16;
            v14 = 2;
            std::io::stdio::_eprint(&v11);
            a0->field_28 = 1;
            core::ptr::drop_in_place<std::io::error::Error>(v0);
        } while (a0->field_10);
    }
    v24 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(a0->field_18, a0->field_20);
    a0->field_18 = 0;
    return v24;
}
