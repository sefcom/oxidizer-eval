long long uu_mkdir::create_dir(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x168]
    unsigned int v1;  // [bp-0x15c]
    unsigned long long v2;  // [bp-0x158]
    char *v3;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x148]
    char *v5;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x138]
    char *v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    char v9;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    char v12;  // [bp-0x108], Other Possible Types: unsigned int
    char v13;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xe0]
    unsigned long long v15;  // [bp-0xd8]
    char *v16;  // [bp-0xd0]
    unsigned int v17;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v18;  // [bp-0xc0]
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdi
    unsigned int v30;  // edx
    unsigned long v31;  // rdx

    std::fs::metadata(&v13, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v13, v15);
    if (v13 != 2 && !a3->field_c)
    {
        v5 = a0;
        v6 = a1;
        v3 = &v5;
        v4 = <std::path::Display as core::fmt::Display>::fmt;
        v13 = &g_4eded8;
        v15 = 2;
        v18 = 0;
        v16 = &v3;
        v17 = 1;
        v9.map_or_else(&v13);
        v12 = 1;
        return v9.new();
    }
    v1 = a2;
    v0 = a0;
    v2 = a1;
    v9.components(a0, a1);
    v13.components(1, 0);
    if (v9.eq(&v13))
        return 0;
    v20 = v2;
    v21 = v20;
    if (a3->field_c)
    {
        v22 = v0.parent(v20);
        if (v22)
        {
            v24 = uu_mkdir::create_dir(v22, v23, 1, a3);
            v21 = v20;
            if (v24)
                return v24;
        }
        else
        {
            v13.to_vec("failed to create whole tree: created directory ", 27);
            v17 = 1;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v13.new(), &g_4ede60);
            v21 = v2;
        }
    }
    v27 = v0;
    v28 = std::fs::create_dir(v27, v21);
    if (v28)
    {
        v29 = v28;
        if (!(char)v27.is_dir(v21))
            return v28.from();
        core::ptr::drop_in_place<std::io::error::Error>(v28);
        return 0;
    }
    else
    {
        if (a3->field_d)
        {
            v3 = uucore::util_name();
            v4 = v23;
            v9 = 1;
            v10 = v27;
            v11 = v21;
            v12 = 1;
            v5 = &v3;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v14 = &g_4edef8;
            v15 = 3;
            v18 = 0;
            v16 = &v5;
            v17 = 2;
            std::io::stdio::_print(&v14);
        }
        if ((unsigned int)v13 == 2)
        {
            v30 = uucore::features::fsxattr::get_acl_perm_bits_from_xattr(v27, v21);
            if ((char)v1)
            {
                v31 = v30 | (int)uucore::features::mode::get_umask() & 319 ^ 511;
            }
            else
            {
                v31 = v30 | a3->field_8;
                v0 = v27;
            }
        }
        else
        {
            v31 = a3->field_8;
            v0 = v27;
        }
        return uu_mkdir::chmod(v0, v21, v31);
    }
}
