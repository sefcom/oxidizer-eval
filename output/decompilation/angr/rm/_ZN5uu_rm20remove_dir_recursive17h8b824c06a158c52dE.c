long long uu_rm::remove_dir_recursive(unsigned long long a0, unsigned long long a1, char a2[8])
{
    char v0;  // [bp-0x132]
    char v1;  // [bp-0x131]
    char v2;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x128]
    char *v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    unsigned long long v7;  // [bp-0x118]
    void* v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0x108]
    unsigned long long v10;  // [sp-0x100]
    unsigned long long v11;  // [bp-0xf8]
    unsigned long long v12;  // [bp-0xf0]
    char *v13;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v14;  // [bp-0xe8]
    int v15;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xd8]
    int v17;  // [bp-0xd8]
    char v18;  // [bp-0xd0]
    unsigned long long v19;  // [bp-0xc8]
    char *v20;  // [sp-0xb8], Other Possible Types: unsigned long long
    int v21;  // [bp-0xb8]
    unsigned long long v22;  // [sp-0xb0]
    int v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0x98]
    char *v25;  // [bp-0x90], Other Possible Types: unsigned long long
    char v26;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x80]
    char v28;  // [bp-0x78], Other Possible Types: unsigned long long
    char v29;  // [bp-0x70]
    char v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x58]
    char v32;  // [bp-0x50]
    unsigned long long v33;  // [bp-0x40]
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long v37;  // r13, Other Possible Types: unsigned long long
    unsigned long long v38;  // r12
    unsigned long long v39;  // rbp
    int v40;  // xmm1
    int v41;  // xmm0
    unsigned int v42;  // eax
    char v43;  // bpl
    unsigned long long v44;  // rax
    unsigned long long v45;  // r12
    unsigned long long v46;  // rdx
    unsigned long long v48;  // rdx

    if (!(char)a0.is_dir(a1) || (char)a0.is_symlink(a1))
    {
        v39 = (unsigned int)uu_rm::remove_file(a0, a1, a2);
    }
    else
    {
        v1 = a2[7];
        if (a2[7] != 2 || (char)uu_rm::is_dir_empty(a0, a1) || (char)uu_rm::prompt_descend(a0, a1))
        {
            v2.try_from(a0, a1);
            if (!(v2 & 1) && v5 >= 1001)
            {
                v35 = std::fs::remove_dir_all(a0, a1);
                if (v35)
                {
                    v10 = v35.map_err_context(a0, a1);
                    v13 = uucore::util_name();
                    v15 = v36;
                    v20 = &v13;
                    v22 = <&T as core::fmt::Display>::fmt;
                    v2 = &g_57d6d0;
                    v3 = 2;
                    v8 = 0;
                    v4 = &v20;
                    v6 = 1;
                    std::io::stdio::_eprint(&v2);
                    v13 = &v10;
                    v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v2 = &g_57d6f0;
                    v3 = 2;
                    v8 = 0;
                    v4 = &v13;
                    v6 = 1;
                    std::io::stdio::_eprint(&v2);
                    goto LABEL_4a18c5;
                }
            }
            std::fs::read_dir(&v28, a0, a1);
            v37 = v29;
            v38 = v28;
            if ((char)v37 != 2)
            {
                v27 = v38;
                v25 = v38;
                v0 = v37;
                v26 = v37;
                v39 = 0;
                while (true)
                {
                    v2.next(&v25);
                    if (!(v2 & 1))
                        break;
                    v40 = *((int128_t *)&v7);
                    *((int128_t *)&v21) = *((int128_t *)&v3);
                    v24 = v9;
                    v23 = v40;
                    if (!v20)
                    {
                        v37 = v37 & 0xffffffffffffff00 | 1;
                    }
                    else
                    {
                        v19 = v9;
                        v41 = *((int128_t *)&v3);
                        *((int128_t *)&v17) = *((int128_t *)&v7);
                        v14 = v41;
                        v10.path(&(unsigned long long)v14);
                        v42 = uu_rm::remove_dir_recursive(v11, v12, a2);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v10);
                        core::ptr::drop_in_place<std::fs::DirEntry>(&(unsigned long long)v14);
                        v37 = v42 & 0xffffff00 | ((char)v42 | (char)v39) & 1;
                        if (!(!v20))
                            goto LABEL_4a1940;
                    }
                    core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&(unsigned long long)v21);
LABEL_4a1940:
                    v39 = v37 & 4294967295;
                }
                core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
                if (v1 == 2)
                    goto LABEL_4a1a5c;
            }
            else if ((char)v38.kind() == 1)
            {
                v27 = v38;
                ::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>(v38);
                v39 = 0;
                if (v1 == 2)
                    goto LABEL_4a1a5c;
            }
            else
            {
                ::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>(v38);
                v43 = 1;
                v39 = v39 & 0xffffffffffffff00 | 1;
                if (v1 == 2)
                {
LABEL_4a1a5c:
                    if (!(char)uu_rm::prompt_dir(a0, a1, a2[6], 2))
                        goto LABEL_4a1b7d;
                }
            }
            v44 = std::fs::remove_dir(a0, a1);
            if (v44)
            {
                v45 = v44;
                if (!(v43 & 1))
                {
                    if ((char)uu_rm::is_readable(a0, a1))
                    {
                        v10 = v45.map_err_context(a0, a1);
                        v13 = uucore::util_name();
                        v15 = v46;
                        v20 = &v13;
                        v22 = <&T as core::fmt::Display>::fmt;
                        v2 = &g_57d6d0;
                        v3 = 2;
                        v8 = 0;
                        v4 = &v20;
                        v6 = 1;
                        std::io::stdio::_eprint(&v2);
                        v13 = &v10;
                        v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v2 = &g_57d6f0;
                        v3 = 2;
                        v8 = 0;
                        v4 = &v13;
                        v6 = 1;
                        std::io::stdio::_eprint(&v2);
                    }
                    else
                    {
                        v13 = uucore::util_name();
                        v15 = v48;
                        v20 = &v13;
                        v22 = <&T as core::fmt::Display>::fmt;
                        v2 = &g_57d6d0;
                        v3 = 2;
                        v8 = 0;
                        v4 = &v20;
                        v6 = 1;
                        std::io::stdio::_eprint(&v2);
                        v13 = 1;
                        v15 = a0;
                        v16 = a1;
                        v18 = 1;
                        v20 = &v13;
                        v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v2 = &g_57d710;
                        v3 = 2;
                        v8 = 0;
                        v4 = &v20;
                        v6 = 1;
                        std::io::stdio::_eprint(&v2);
                        v43 = 1;
                        v39 = v39 & 0xffffffffffffff00 | 1;
                        goto LABEL_4a1d8d;
                    }
LABEL_4a18c5:
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v10);
                    v43 = 1;
                    v39 = v39 & 0xffffffffffffff00 | 1;
                }
                else
                {
LABEL_4a1d8d:
                    ::0x49f4b0::core::ptr::drop_in_place<std::io::error::Error>(v45);
                }
            }
            else if (a2[5])
            {
                v10.to_vec("filesizei128", 4);
                uu_rm::normalize(&v20, a0, a1);
                v13 = 1;
                *((int128_t *)&v15) = *((int128_t *)&v22);
                v18 = 1;
                v2.spec_to_string(&v13);
                v31 = v12;
                memcpy(&v30, &v10, 16);
                memcpy(&v32, &v2, 16);
                v33 = v5;
                v2.from_iter(&v30);
                uucore::mods::locale::get_message_with_args(&v10, "rm-verbose-removed-directory", 28, &v2);
                v25 = &v10;
                v26 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = &g_57d6f0;
                v3 = 2;
                v8 = 0;
                v4 = &v25;
                v6 = 1;
                std::io::stdio::_print(&v2);
                ::0x49f4a0::core::ptr::drop_in_place<alloc::string::String>(&v10);
                core::ptr::drop_in_place<std::path::PathBuf>(&v20);
            }
        }
        else
        {
LABEL_4a1b7d:
            v39 = 0;
        }
    }
    return (unsigned int)v39 & 0xffffff00 | v43 & 1;
}
