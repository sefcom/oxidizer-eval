long long uu_rm::remove_dir_recursive(unsigned long long a0, unsigned long long a1, char a2[8])
{
    char v0;  // [bp-0x10a]
    char v1;  // [bp-0x109]
    char v2;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0x100]
    char *v5;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xf0]
    void* v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    char *v10;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v11;  // [bp-0xd8]
    unsigned long long v12;  // [bp-0xd0]
    unsigned long long v13;  // [bp-0xc8]
    int v14;  // [bp-0xc8]
    char v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    char *v17;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    char *v20;  // [bp-0x98], Other Possible Types: unsigned long long
    int v21;  // [bp-0x98]
    unsigned long long v22;  // [sp-0x90]
    int v23;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x78]
    unsigned long long v26;  // [bp-0x68]
    char v27[8];  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    char v29;  // [bp-0x50]
    unsigned long long v30;  // [bp-0x48]
    char v31;  // [bp-0x40], Other Possible Types: unsigned long long
    char v32;  // [bp-0x38]
    char v34[8];  // rbx
    unsigned long long v35;  // r13
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx
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

    v34 = a2;
    v35 = a1;
    core::str::converts::from_utf8(&v2, a0, a1);
    if (!(v2 & 1) && v5 >= 1001)
    {
        v36 = std::fs::remove_dir_all(a0, a1);
        if (v36)
        {
            v17 = v36.map_err_context(a0, a1);
            v10 = uucore::util_name();
            v12 = v37;
            v20 = &v10;
            v22 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ea4a0;
            v4 = 2;
            v8 = 0;
            v5 = &v20;
            v6 = 1;
            std::io::stdio::_eprint(&v2);
            v10 = &v17;
            v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v2 = &g_4ea4e0;
            v3 = 2;
            v8 = 0;
            v5 = &v10;
            v6 = 1;
            std::io::stdio::_eprint(&v2);
            goto LABEL_45c9c4;
        }
LABEL_45cd09:
        v39 = 0;
LABEL_45ce98:
        return v39 & 4294967295;
    }
    if (!(char)a0.is_dir(a1) || (char)a0.is_symlink(a1))
        return (unsigned int)uu_rm::remove_file(a0, a1, a2);
    v1 = a2[7];
    if (a2[7] == 2 && !(char)uu_rm::is_dir_empty(a0, a1) && !(char)uu_rm::prompt_descend(a0, a1))
        goto LABEL_45cd09;
    std::fs::read_dir(&v31, a0, a1);
    v38 = v32;
    if ((char)v38 != 2)
    {
        *((char *[8])&v27[0]) = a2;
        v30 = a1;
        v26 = v31;
        v28 = v26;
        v0 = v38;
        v29 = v38;
        v39 = 0;
        while (true)
        {
            v2.next(&v28);
            if ((int)v2 != 1)
                break;
            v40 = *((int128_t *)&v7);
            *((int128_t *)&v21) = *((int128_t *)&v3);
            v25 = v9;
            v23 = v40;
            if (!v20)
            {
                v38 = v38 & 0xffffffffffffff00 | 1;
            }
            else
            {
                v16 = v9;
                v41 = *((int128_t *)&v4);
                *((int128_t *)&v14) = *((int128_t *)&v7);
                v11 = v41;
                v17.path(&(unsigned long long)v11);
                v42 = uu_rm::remove_dir_recursive(v18, v19, v27);
                core::ptr::drop_in_place<std::path::PathBuf>(v17, v18);
                core::ptr::drop_in_place<std::fs::DirEntry>(&(unsigned long long)v11);
                v38 = v42 & 0xffffff00 | ((char)v42 | (char)v39) & 1;
                if (v20)
                    goto LABEL_45cac0;
            }
            core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&(unsigned long long)v21);
LABEL_45cac0:
            v39 = v38 & 4294967295;
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v28);
        v35 = v30;
        v34 = v27;
        if (v1 == 2)
            goto LABEL_45cbe9;
    }
    else if ((char)v26.kind() == 1)
    {
        core::ptr::drop_in_place<std::io::error::Error>(v26);
        v39 = 0;
        if (v1 == 2)
            goto LABEL_45cbe9;
    }
    else
    {
        core::ptr::drop_in_place<std::io::error::Error>(v26);
        v43 = 1;
        v39 = v39 & 0xffffffffffffff00 | 1;
        if (v1 == 2)
        {
LABEL_45cbe9:
            if (!(char)uu_rm::prompt_dir(a0, v35, v34[6], 2))
                goto LABEL_45cd09;
        }
    }
    v44 = std::fs::remove_dir(a0, v35);
    if (v44)
    {
        v45 = v44;
        if (!(v43 & 1))
        {
            if ((char)uu_rm::is_readable(a0, v35))
            {
                v17 = v45.map_err_context(a0, v35);
                v10 = uucore::util_name();
                v12 = v46;
                v20 = &v10;
                v22 = <&T as core::fmt::Display>::fmt;
                v2 = &g_4ea4a0;
                v3 = 2;
                v8 = 0;
                v5 = &v20;
                v6 = 1;
                std::io::stdio::_eprint(&v2);
                v10 = &v17;
                v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v2 = &g_4ea4e0;
                v3 = 2;
                v8 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_eprint(&v2);
            }
            else
            {
                v10 = uucore::util_name();
                v12 = v48;
                v20 = &v10;
                v22 = <&T as core::fmt::Display>::fmt;
                v2 = &g_4ea4a0;
                v3 = 2;
                v8 = 0;
                v5 = &v20;
                v6 = 1;
                std::io::stdio::_eprint(&v2);
                v10 = 1;
                v12 = a0;
                v13 = v35;
                v15 = 1;
                v20 = &v10;
                v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                v2 = &g_4ea500;
                v3 = 2;
                v8 = 0;
                v5 = &v20;
                v6 = 1;
                std::io::stdio::_eprint(&v2);
                v39 = v39 & 0xffffffffffffff00 | 1;
                goto LABEL_45ce90;
            }
LABEL_45c9c4:
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v17);
            return (v39 & 0xffffffffffffff00 | 1) & 4294967295;
        }
LABEL_45ce90:
        core::ptr::drop_in_place<std::io::error::Error>(v45);
    }
    else if (v34[5] == 1)
    {
        uu_rm::normalize(&v20, a0, v35);
        v10 = 1;
        v12 = v22;
        v13 = (long long)v23;
        v15 = 1;
        v17 = &v10;
        v18 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = &g_4ea520;
        v3 = 2;
        v8 = 0;
        v5 = &v17;
        v6 = 1;
        std::io::stdio::_print(&v2);
        core::ptr::drop_in_place<std::path::PathBuf>(v20, v22);
        return v39 & 4294967295;
    }
    goto LABEL_45ce98;
}
