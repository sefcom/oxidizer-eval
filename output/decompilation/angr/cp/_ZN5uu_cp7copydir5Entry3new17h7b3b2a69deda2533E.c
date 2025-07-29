long long uu_cp::copydir::Entry::new(struct_0 *a0, unsigned long long a1[10], unsigned long long a2, char a3)
{
    int v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    int v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0x100]
    int v7;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0xf0]
    char *v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xe0]
    void* v11;  // [bp-0xd8]
    unsigned long long v12;  // [bp-0xd0]
    int v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    char v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    char v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x80]
    char *v20;  // [bp-0x78]
    unsigned long long v21;  // [bp-0x70]
    int v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    char v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x40]
    unsigned long long v27;  // rax
    void* v28;  // rcx
    unsigned long long v29;  // rdx
    char v30;  // al
    unsigned long v31;  // r15
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    int v35;  // xmm0

    v27 = a2.as_ref();
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v18, v27, a2);
    v15.join(a1[1], a1[2], &v18);
    v28 = 0;
    if (!((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63)))
        v28 = a1[4];
    uu_cp::copydir::get_local_to_root_parent(&v7, v16, v17, v28, a1[5]);
    if (v7 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v15);
        return (unsigned long long)::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v18);
    }
    v2 = v9;
    *((int128_t *)&v0) = *((int128_t *)&v7);
    if (a3)
    {
        v30 = v27.is_dir(v29);
        v31 = a1[7];
        if (!v31)
        {
LABEL_4e46e6:
            v33 = v1.strip_prefix(v2, a1[8], a1[9]);
            if (!v33)
            {
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v15);
                return (unsigned long long)::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v18);
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v7, v33, a2);
            ::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
            v2 = v9;
            memcpy(&(char)v0, &v7, 16);
        }
        else if (*((char *)(a1[6] + v31 - 1)) == 47)
        {
            if (!(!v30))
                goto LABEL_4e45b0;
            goto LABEL_4e46e6;
        }
        else
        {
            if (!(!(v30 ^ 1) && !*((char *)(a1[6] + v31 - 1)) != 92))
                goto LABEL_4e46e6;
LABEL_4e45b0:
            v32 = std::fs::create_dir_all(a1[6], v31);
            if (v32)
            {
                v6 = v32;
                v7.to_vec("error\ncp-error-failed-to-create-directorysource: cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 5);
                v5 = v9;
                memcpy(&(char)v4, &v7, 16);
                v7.spec_to_string(&v6);
                v23 = v5;
                v22 = v4;
                memcpy(&v24, &v7, 16);
                v25 = v9;
                v7.from_iter(&v22);
                uucore::mods::locale::get_message_with_args(&(char)v4, "cp-error-failed-to-create-directorysource: cp-error-cannot-overwrite-non-directory-with-directorydircp-error-omitting-directorycp-error-failed-get-current-dircp-error-cannot-copy-directory-into-itself", 35, &v7);
                v20 = &(char)v4;
                v21 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_5fbb18;
                v8 = 2;
                v11 = 0;
                v9 = &v20;
                v10 = 1;
                std::io::stdio::_eprint(&v7);
                ::0x4e35a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                ::0x4e35b0::core::ptr::drop_in_place<std::io::error::Error>(v6);
            }
            else
            {
                ::0x4e3940::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
            }
        }
    }
    else
    {
        v31 = a1[7];
    }
    v9 = v2;
    memcpy(&v7, &(char)v0, 16);
    (char)v4.join(a1[6], v31, &v7);
    v34 = a1[6].is_file(v31);
    v9 = v17;
    v35 = *((int128_t *)&v15);
    v7 = v35;
    v12 = v19;
    memcpy(&v10, &v18, 16);
    v14 = v5;
    v13 = v4;
    a0->field_40 = v5;
    *((void*)&a0->field_30) = v4;
    *((void*)&a0->field_0) = v35;
    a0->field_20 = v11;
    a0->field_28 = v12;
    a0->field_10 = *((int128_t *)&v9);
    a0->field_48 = v34;
    return v34;
}
