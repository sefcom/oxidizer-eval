long long uu_chmod::Chmoder::chmod_file(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x238]
    unsigned int v2;  // [bp-0x230], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x230]
    unsigned int v4;  // [bp-0x22c]
    char *v5;  // [bp-0x228], Other Possible Types: unsigned long long
    char v6;  // [bp-0x220], Other Possible Types: unsigned long long
    int v7;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x218]
    unsigned int v9;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0x210]
    unsigned int v11;  // [bp-0x20c]
    char *v12;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned int v13;  // [bp-0x200], Other Possible Types: unsigned long long, char
    void* v14;  // [bp-0x1f8]
    unsigned long long v15;  // [bp-0x1e0]
    int v16;  // [bp-0x1d8], Other Possible Types: void*, unsigned long long
    int v17;  // [bp-0x1d8]
    unsigned long long v18;  // [bp-0x1d0]
    char *v19;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x1b8], Other Possible Types: void*
    unsigned long long v22;  // [bp-0x1b0]
    unsigned short v23;  // [bp-0x198]
    unsigned int v24;  // [bp-0x184]
    unsigned long long v25;  // [bp-0x178]
    unsigned long long v26;  // [bp-0x170]
    int v27;  // [bp-0x168]
    unsigned long long v28;  // [bp-0x160]
    unsigned long long v29;  // [bp-0x158]
    int v30;  // [bp-0x140], Other Possible Types: char
    unsigned long long v31;  // [bp-0x130]
    int v32;  // [bp-0x128], Other Possible Types: char
    unsigned long long v33;  // [bp-0x118]
    int v34;  // [bp-0x110], Other Possible Types: char
    unsigned long long v35;  // [bp-0x100]
    char v36;  // [bp-0xf8]
    char v37;  // [bp-0xe0]
    char v38;  // [bp-0xd8]
    char v39;  // [bp-0xa8]
    unsigned long long v41;  // r12
    char v42;  // al
    void* v43;  // rbx
    unsigned int v44;  // ebp
    unsigned int v46;  // r13d
    unsigned long long v47;  // r12
    unsigned long long v48;  // rdx
    unsigned int v50;  // r13d
    unsigned int v51;  // r13d
    unsigned int v53;  // eax
    unsigned long long v57;  // rbx
    unsigned long long v58;  // rax

    uucore::features::perms::get_metadata(&v37, a1, a2, a0->field_25);
    if (*((int *)&v37) == 2)
    {
        v41 = *((long long *)&v38);
        v29 = v41;
        v42 = a1.is_symlink(a2);
        if (!a0->field_25 && v42 == 1)
        {
            if (a0->field_22 == 1)
            {
                v7 = 1;
                v9 = a1;
                v12 = a2;
                v13 = 1;
                v0 = &v7;
                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                v16 = &g_4eba70;
                v18 = 2;
                v21 = 0;
                v19 = &v0;
                v20 = 1;
                std::io::stdio::_print(&v16);
            }
            v43 = 0;
        }
        else if ((char)v29.kind() == 1)
        {
            v7 = 1;
            v9 = a1;
            v12 = a2;
            v13 = 1;
            v0 = &v7;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v17) = &g_4eba90;
            v18 = 2;
            v21 = 0;
            v19 = &v0;
            v20 = 1;
            v30.map_or_else(&(unsigned long long)v17);
            v20 = 1;
            v17 = v30;
            v19 = v31;
            v43 = (unsigned long long)v17.new();
        }
        else
        {
            v7 = 1;
            v9 = a1;
            v12 = a2;
            v13 = 1;
            v0 = &v7;
            v2 = <os_display::Quoted as core::fmt::Display>::fmt;
            v5 = &v29;
            v6 = <std::io::error::Error as core::fmt::Display>::fmt;
            *((unsigned long long **)&v17) = &g_4ebab0;
            v18 = 2;
            v21 = 0;
            v19 = &v0;
            v20 = 2;
            v32.map_or_else(&(unsigned long long)v17);
            v20 = 1;
            v17 = v32;
            v19 = v33;
            v43 = (unsigned long long)v17.new();
            v41 = v29;
        }
        core::ptr::drop_in_place<std::io::error::Error>(v41);
        return v43;
    }
    else
    {
        v44 = 4095 & *((int *)&v39);
        if (a0->field_18 == 1)
            return (!((char)a0.change_file(v44, a0->field_1c, a1, a2) & 1) ? 0 : 1.from());
        v15 = a2;
        if (!((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63)))
        {
            (char)v17.clone(a0);
            *((int128_t *)&v7) = *((int128_t *)&v18);
            if (v16 != 0x8000000000000000)
            {
                v26 = v16;
                *((int128_t *)&v27) = (int128_t)v7;
                (char)v18.into_searcher((long long)v27, v28);
                v16 = 0;
                v18 = v28;
                v23 = 1;
                v46 = v44;
                v24 = v44;
                while (true)
                {
                    v2 = v3;
                    v0 = v1;
                    v47 = v16.next();
                    if (!v47)
                        break;
                    v7 = v47;
                    v10 = v7 + v48;
                    if (v7.try_fold().eq())
                    {
                        uucore::features::mode::parse_numeric(&v7, v44, v7, v48, (unsigned int)a1.is_dir(v15));
                        v50 = v9;
                        v51 = v50;
                        v46 = v50;
                        v8 = v7;
                        if (v8 != 0x8000000000000000)
                        {
                            v25 = v12;
                            v51 = v50;
                            v46 = v11;
                            v8 = v7;
                        }
                    }
                    else
                    {
                        v53 = uucore::features::mode::get_umask();
                        uucore::features::mode::parse_symbolic(&v0, v44, v7, v48, v53, (unsigned int)a1.is_dir(v15));
                        if (v0 != 0x8000000000000000)
                        {
                            v46 = v4;
                            v25 = v5;
                            v51 = v2;
                            v8 = v0;
                        }
                        else
                        {
                            uucore::features::mode::parse_symbolic(&v7, v46, v7, v48, 0, (unsigned int)a1.is_dir(v15));
                            v46 = v7.unwrap();
                            v51 = v2;
                            v8 = v0;
                        }
                    }
                    v44 = v51;
                    if (v8 != 0x8000000000000000)
                    {
                        v0 = v8;
                        v2 = v44;
                        v4 = v46;
                        v5 = v25;
                        if (!a0->field_21)
                        {
                            v12 = v5;
                            v7 = v0;
                            v9 = v2;
                            v11 = v4;
                            v13 = 1;
                            v58 = v7.new();
                            core::ptr::drop_in_place<alloc::string::String>(&v26);
                            return v58;
                        }
                        v57 = 1.new();
                        core::ptr::drop_in_place<alloc::string::String>(&v0);
                        core::ptr::drop_in_place<alloc::string::String>(&v26);
                        return v57;
                    }
                }
                if (((char)a0.change_file(v24, v44, a1, v15) & 1))
                {
                    v57 = 1.from();
                    core::ptr::drop_in_place<alloc::string::String>(&v26);
                    return v57;
                }
                if (!(~(v46) & v44))
                {
                    core::ptr::drop_in_place<alloc::string::String>(&v26);
                    return 0;
                }
                v0 = 1;
                v2 = a1;
                v5 = v15;
                v6 = 0;
                uucore::features::fs::display_permissions_unix(&v36, v44, 0);
                uucore::features::fs::display_permissions_unix(&(char)v29, v46, 0);
                *((unsigned long long **)&v16) = &v0;
                v18 = <os_display::Quoted as core::fmt::Display>::fmt;
                v19 = &v36;
                v20 = <alloc::string::String as core::fmt::Display>::fmt;
                v21 = &(char)v29;
                v22 = <alloc::string::String as core::fmt::Display>::fmt;
                v7 = &g_4ebad0;
                v9 = 3;
                v14 = 0;
                v12 = &(unsigned long long)v16;
                v13 = 3;
                v34.map_or_else(&v7);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v29);
                core::ptr::drop_in_place<alloc::string::String>(&v36);
                v20 = 1;
                v16 = v34;
                v19 = v35;
                v58 = (unsigned long long)v16.new();
                core::ptr::drop_in_place<alloc::string::String>(&v26);
                return v58;
            }
        }
        core::option::unwrap_failed(&g_4ebb00); /* do not return */
    }
}
