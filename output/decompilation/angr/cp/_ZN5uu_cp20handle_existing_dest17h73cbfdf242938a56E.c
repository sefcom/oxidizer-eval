long long uu_cp::handle_existing_dest(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_0 *a5, char a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    char *v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x120]
    unsigned long long v4;  // [bp-0x120]
    void* v5;  // [bp-0x118]
    char v6;  // [bp-0x110]
    unsigned long v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    unsigned long long v10;  // [bp-0xf0]
    char v11;  // [bp-0xe8]
    char *v12;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xd0]
    char v15;  // [bp-0xc8]
    void* v16;  // [bp-0xc0]
    char *v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xb0]
    char *v19;  // [bp-0xa8]
    unsigned long long v20;  // [bp-0xa0]
    char v21;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v22;  // [bp-0x90]
    unsigned long long v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x78]
    unsigned long v25;  // [bp-0x70]
    char v26;  // [bp-0x68]
    unsigned long long v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long long v29;  // rax
    unsigned int v30;  // eax
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbp
    unsigned long long v33;  // r14
    unsigned long long v34;  // r15
    struct_0 *v35;  // r13
    struct_1 *v36;  // r14
    unsigned long long v37;  // rax
    unsigned int v38;  // eax
    int v39;  // xmm0
    int v40;  // xmm1

    v25 = a6;
    if ((char)uu_cp::is_forbidden_to_copy_to_same_file(a1, a2, a3, a4, a5, a6))
    {
        v12 = 1;
        v13 = a1;
        v14 = a2;
        v15 = 1;
        v8 = 1;
        v9 = a3;
        v10 = a4;
        v11 = 1;
        v17 = &v12;
        v18 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = &v8;
        v20 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_55ebd8;
        v1 = 3;
        v5 = 0;
        v2 = &v17;
        v3 = 2;
        v29 = v16 + 8.map_or_else(&v0);
        *((unsigned long long *)v16) = 9223372036854775811;
        return v29;
    }
    v30 = a5->field_66;
    if (v30 != 1)
    {
        v31 = a2;
        v32 = a1;
        v33 = a4;
        v34 = a3;
        if (v30 != 2)
        {
            (char)v0.verify(a5->field_54, v34, v33, a5->field_5f);
            if (v0 != 9223372036854775820)
            {
                v39 = *((int128_t *)&v1);
                v40 = *((int128_t *)&v4);
                *((int128_t *)&v16[40]) = *((int128_t *)&v6);
                v16[24] = v40;
                v16[8] = v39;
                *((unsigned long long *)v16) = v0;
                return v0;
            }
        }
        v35 = a5;
        uucore::features::backup_control::get_backup_path(&v21, a5->field_65);
        if (v21 != 0x8000000000000000)
        {
            v24 = v23;
            if ((char)uucore::features::fs::paths_refer_to_same_file(v32, v31, v22, v23, 1))
            {
                v12 = 1;
                v13 = v34;
                v14 = v33;
                v15 = 1;
                v8 = 1;
                v9 = v32;
                v10 = v31;
                v11 = 1;
                v17 = &v12;
                v18 = <os_display::Quoted as core::fmt::Display>::fmt;
                v19 = &v8;
                v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = &g_55ec08;
                v1 = 3;
                v5 = 0;
                v2 = &v17;
                v3 = 2;
                v28.map_or_else(&v0);
                v36 = &v28;
                *((unsigned long long *)&v16[24]) = v36->field_10;
                *((char [16])&v16[8]) = v36->field_0;
                *((unsigned long long *)v16) = 9223372036854775811;
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v21);
            }
            v38 = v34.is_symlink(v33);
            uu_cp::backup_dest(&v0, v34, v33, v22, v24, v38);
            v37 = v0;
            memcpy(&v26, &v1, 16);
            v27 = v4;
            if (v0 != 9223372036854775820)
            {
                *((unsigned long *)&v16[48]) = v7;
                *((int128_t *)&v16[32]) = *((int128_t *)&v5);
                v36 = &v26;
                *((unsigned long long *)&v16[24]) = v36->field_10;
                *((char [16])&v16[8]) = v36->field_0;
                *((unsigned long long *)v16) = v37;
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v21);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&v26);
            v0 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v21);
            if ((char)v38)
            {
                *((long long *)v16) = 9223372036854775820;
                return v0;
            }
        }
        uu_cp::delete_dest_if_needed_and_allowed(&v0, v32, v31, v34, v33, v35, v25, a7);
        v0 = v0;
        if (v0 != 9223372036854775820)
        {
            v39 = *((int128_t *)&v1);
            v40 = *((int128_t *)&v4);
            *((int128_t *)&v16[40]) = *((int128_t *)&v6);
            v16[24] = v40;
            v16[8] = v39;
            *((unsigned long long *)v16) = v0;
            return v0;
        }
        *((long long *)v16) = 9223372036854775820;
        return v0;
    }
    else
    {
        if (a5->field_5f)
        {
            v8 = 1;
            v9 = a3;
            v10 = a4;
            v11 = 1;
            v12 = &v8;
            v13 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_55eb08;
            v1 = 2;
            v5 = 0;
            v2 = &v12;
            v3 = 1;
            std::io::stdio::_print(&v0);
        }
        *((unsigned long long *)v16) = 9223372036854775815;
        *((char *)&v16[8]) = 0;
        return 9223372036854775815;
    }
}
