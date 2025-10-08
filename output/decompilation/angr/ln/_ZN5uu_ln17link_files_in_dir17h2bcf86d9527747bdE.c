long long uu_ln::link_files_in_dir(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x129]
    void* v1;  // [bp-0x120], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x120]
    unsigned long long v4;  // [bp-0x118]
    char *v5;  // [bp-0x110], Other Possible Types: char
    unsigned long long v6;  // [bp-0x108]
    void* v7;  // [bp-0x100], Other Possible Types: char
    int v8;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe8]
    unsigned long v10;  // [bp-0xe0], Other Possible Types: unsigned long long
    char *v11;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v13;  // [bp-0xc8]
    int v14;  // [bp-0xc8]
    char *v15;  // [bp-0xb8]
    int v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xb0]
    char *v18;  // [sp-0xa8]
    unsigned long long v19;  // [sp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    unsigned long long v22;  // [bp-0x88]
    unsigned long long v23;  // [bp-0x80]
    char v24[55];  // [bp-0x78]
    unsigned long long v25;  // [bp-0x70]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long long v31;  // rdx
    void* v32;  // rax
    char v33;  // bl
    void* v34;  // r12
    void* v35;  // rbp
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    void* v39;  // rbx

    if (!(char)a2.is_dir(a3))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v4, a2, a3);
        v1 = 0;
        return v1.new();
    }
    (char)v2.with_capacity_and_hasher(a1, std::thread::local::LocalKey<T>::with(), v31);
    memcpy(&v28, &v7, 16);
    memcpy(&v27, &v5, 16);
    memcpy(&v26, &v1, 16);
    if (a1)
    {
        v25 = a0 + a1 * 24;
        v0 = v24[54] == 2 & v24[52];
        v32 = a0 + 24;
        v33 = 1;
        while (true)
        {
            v34 = a0;
            v35 = v32;
            if (v0 && (char)a2.is_symlink(a3))
            {
                if ((char)a2.is_file(a3))
                {
                    v20 = std::fs::remove_file(a2, a3);
                    if (v20)
                    {
                        v13 = v20;
                        v8 = uucore::util_name();
                        v10 = v31;
                        v15 = &v8;
                        v17 = <&T as core::fmt::Display>::fmt;
                        v3 = &g_4f6038;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v15;
                        v6 = 1;
                        std::io::stdio::_eprint(&v3);
                        v9 = 1;
                        v10 = a2;
                        v11 = a3;
                        v12 = 1;
                        v15 = &v9;
                        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v18 = &v13;
                        v19 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v2 = &g_4f6058;
                        v4 = 3;
                        v7 = 0;
                        v5 = &v15;
                        v6 = 2;
                        std::io::stdio::_eprint(&v2);
                        core::ptr::drop_in_place<std::io::error::Error>(&v13);
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
                    }
                }
                if ((char)a2.is_dir(a3))
                {
                    v20 = std::fs::remove_dir(a2, a3);
                    if (v20)
                    {
                        v13 = v20;
                        v8 = uucore::util_name();
                        v10 = v31;
                        v15 = &v8;
                        v17 = <&T as core::fmt::Display>::fmt;
                        v3 = &g_4f6038;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v15;
                        v6 = 1;
                        std::io::stdio::_eprint(&v3);
                        v9 = 1;
                        v10 = a2;
                        v11 = a3;
                        v12 = 1;
                        v15 = &v9;
                        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v18 = &v13;
                        v19 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v2 = &g_4f6058;
                        v4 = 3;
                        v7 = 0;
                        v5 = &v15;
                        v6 = 2;
                        std::io::stdio::_eprint(&v2);
                        core::ptr::drop_in_place<std::io::error::Error>(&v13);
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
                    }
                }
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v21, a2, a3);
            }
            else
            {
                core::str::converts::from_utf8(&(char)v2, (long long)v34[8], (long long)v34[16]);
                if (((char)v2 & 1))
                {
                    v8 = uucore::util_name();
                    v10 = v31;
                    v15 = &v8;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v3 = &g_4f6038;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v15;
                    v6 = 1;
                    std::io::stdio::_eprint(&v3);
                    v9 = 1;
                    v10 = (long long)v34[8];
                    v11 = (long long)v34[16];
                    v12 = 1;
                    v15 = &v9;
                    v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v2 = &g_4f6088;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v15;
                    v6 = 1;
                    std::io::stdio::_eprint(&v2);
                    v33 = 0;
                    if (v35 == v25)
                    {
                        v36 = 0;
                        if (v35 == v25)
                        {
                            v1 = 1;
                            v39 = v1.new();
                            core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v26);
                            return v39;
                        }
                    }
                    else
                    {
                        v36 = 24;
                        if (v35 == v25)
                        {
                            v1 = 1;
                            v39 = v1.new();
                            core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v26);
                            return v39;
                        }
                    }
                    goto LABEL_465640;
                }
                else
                {
                    v37 = v4.file_name(v5);
                    if (v37)
                        v21.join(a2, a3, v37, v31);
                    else
                        v21.join(a2, a3, v4, v5);
                }
            }
            if (v26.get_inner(&v21))
            {
                v8 = uucore::util_name();
                v10 = v31;
                v15 = &v8;
                v17 = <&T as core::fmt::Display>::fmt;
                v3 = &g_4f6038;
                v4 = 2;
                v7 = 0;
                v5 = &v15;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
                *((int128_t *)&v14) = *((int128_t *)&v22);
                *((int128_t *)&v16) = (int128_t)v34[8];
                v9 = &v13;
                v10 = <std::path::Display as core::fmt::Display>::fmt;
                v11 = &v15;
                v12 = <std::path::Display as core::fmt::Display>::fmt;
                v2 = &g_4f60a8;
                v4 = 3;
                v7 = 0;
                v5 = &v9;
                v6 = 2;
                std::io::stdio::_eprint(&v2);
                goto LABEL_465cf6;
            }
            else
            {
                v38 = uu_ln::link((long long)v34[8], (long long)v34[16], v22, v23, a4);
                if (v38)
                {
                    v13 = v38;
                    v8 = uucore::util_name();
                    v10 = v31;
                    v15 = &v8;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v3 = &g_4f6038;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v15;
                    v6 = 1;
                    std::io::stdio::_eprint(&v3);
                    v9 = &v13;
                    v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v2 = &g_4f60d8;
                    v4 = 2;
                    v7 = 0;
                    v5 = &v9;
                    v6 = 1;
                    std::io::stdio::_eprint(&v2);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v13, v31);
LABEL_465cf6:
                    v33 = 0;
                    goto LABEL_465cf8;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v31);
LABEL_465cf8:
                    v2.clone(v22, v23);
                    v11 = v5;
                    *((int128_t *)&v8) = *((int128_t *)&v2);
                    v26.insert(&(unsigned long long)v8);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v21);
                    if (v35 == v25)
                    {
                        v36 = 0;
                        if (v35 == v25)
                            break;
                    }
                    else
                    {
                        v36 = 24;
                        if (v35 == v25)
                            break;
                    }
LABEL_465640:
                    v32 = v36 + v35;
                    a0 = v35;
                }
            }
        }
        if (!(v33 & 1))
        {
            v1 = 1;
            v39 = v1.new();
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v26);
            return v39;
        }
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v26);
    return 0;
}
