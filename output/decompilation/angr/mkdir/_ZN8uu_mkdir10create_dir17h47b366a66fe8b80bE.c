long long uu_mkdir::create_dir(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned int v0;  // [bp-0x1ec]
    int v1;  // [bp-0x1e8], Other Possible Types: char
    unsigned long long v2;  // [bp-0x1d8]
    int v3;  // [bp-0x1d0]
    unsigned long long v4;  // [bp-0x1c0]
    int v5;  // [bp-0x1b8], Other Possible Types: char *, char
    unsigned long long v6;  // [bp-0x1b0]
    unsigned long long v7;  // [bp-0x1a8]
    int v8;  // [bp-0x1a0]
    unsigned long long v9;  // [bp-0x198]
    unsigned long long v10;  // [bp-0x190]
    unsigned long long v11;  // [bp-0x170]
    int v12;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v13;  // [bp-0x160]
    int v14;  // [bp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long long v15;  // [bp-0x150], Other Possible Types: unsigned int
    int v16;  // [bp-0x148], Other Possible Types: void*
    int v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x128]
    unsigned long long v19;  // [bp-0x120]
    unsigned long long v20;  // [bp-0x118]
    unsigned long long v21;  // [bp-0x110]
    int v22;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0xa0]
    unsigned long long v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x90]
    char v27;  // [bp-0x88]
    char v28;  // [bp-0x80]
    unsigned long long v29;  // [bp-0x70]
    int v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x58]
    char v32;  // [bp-0x50]
    unsigned long long v33;  // [bp-0x40]
    unsigned long long v35;  // r13
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdi
    int v43;  // xmm2
    int v44;  // xmm3
    unsigned int v45;  // edx
    unsigned long v46;  // rdx

    std::fs::metadata(&v12, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v12, v13);
    if (v12 != 2 && !a3->field_c)
    {
        v1.to_vec("pathzeroAnsi -- ", 4);
        v5.to_string_lossy(a0, a1);
        v12.to_vec(v6, v7);
        v33 = v14;
        memcpy(&v32, &v12, 16);
        v30 = v1;
        v31 = v2;
        v12.from_iter(&v30);
        uucore::mods::locale::get_message_with_args(&v28, "mkdir-error-file-existsmkdir-error-failed-to-create-treemkdir-verbose-created-directory", 23, &v12);
        v15 = 1;
        memcpy(&v12, &v28, 16);
        v14 = v29;
        v35 = v12.new();
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v5);
        return v35;
    }
    v11 = v12;
    v0 = a2;
    v5.components(a0, a1);
    v12.components(1, 0);
    if (v5.eq(&v12))
        return 0;
    if (a3->field_c)
    {
        v36 = a0.parent(a1);
        if (v36)
        {
            v38 = uu_mkdir::create_dir(v36, v37, 1, a3);
            if (v38)
                return v38;
        }
        else
        {
            uucore::mods::locale::get_message(&v12, "mkdir-error-failed-to-create-treemkdir-verbose-created-directory", 33);
            v15 = 1;
            ::0x4a0160::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12.new(), &g_57f4e8);
        }
    }
    v40 = std::fs::create_dir(a0, a1);
    if (v40)
    {
        v41 = v40;
        if (!(char)a0.is_dir(a1))
            return v41.from();
        ::0x4a0330::core::ptr::drop_in_place<std::io::error::Error>(v41);
        return 0;
    }
    else
    {
        if (a3->field_d)
        {
            v5.to_vec("util_namemkdir-error-file-existsmkdir-error-failed-to-create-treemkdir-verbose-created-directory", 9);
            v12.to_vec(uucore::util_name(), a2);
            v4 = v14;
            *((int128_t *)&v3) = *((int128_t *)&v12);
            memcpy(&v1, &v5, 16);
            v2 = v7;
            v12.to_vec("pathzeroAnsi -- ", 4);
            v23 = v14;
            memcpy(&v22, &v12, 16);
            v24 = 1;
            v25 = a0;
            v26 = a1;
            v27 = 1;
            v12.spec_to_string(&v24);
            v7 = v23;
            v5 = v22;
            *((int128_t *)&v8) = *((int128_t *)&v12);
            v10 = v14;
            v43 = *((int128_t *)&v2);
            v44 = (int128_t)(&v3)[8];
            v12 = v1;
            v14 = v43;
            v16 = v44;
            v20 = v9;
            v21 = v10;
            v18 = v7;
            v19 = (long long)v8;
            v17 = v22;
            v5.from_iter(&v12);
            uucore::mods::locale::get_message_with_args(&v1, "mkdir-verbose-created-directory", 31, &v5);
            v5 = &v1;
            v6 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &g_57f550;
            v13 = 2;
            v16 = 0;
            v14 = &v5;
            v15 = 1;
            std::io::stdio::_print(&v12);
            ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&v1);
        }
        if ((int)v11 == 2)
        {
            v45 = uucore::features::fsxattr::get_acl_perm_bits_from_xattr(a0, a1);
            v46 = (!(char)v0 ? v45 | a3->field_8 : v45 | (int)uucore::features::mode::get_umask() & 319 ^ 511);
        }
        else
        {
            v46 = a3->field_8;
        }
        return uu_mkdir::chmod(a0, a1, v46);
    }
}
