long long uu_tail::follow::watch::Observer::init_files(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x88]
    unsigned long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    int v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rdx
    struct_1 *v17;  // rax
    unsigned long long v18;  // rbx

    if (a0->field_0 == 3)
        return 0;
    v8 = a1.into_iter();
    v9 = v16;
    if (v8.next())
    {
        v7 = a0 + 1;
        do
        {
            if (v17->field_18 == 0x8000000000000000)
                continue;
            (char)v3.clone(&v17->field_18);
            v2 = v6;
            *((int128_t *)&v0) = *((int128_t *)&v3);
            v6 = v6;
            if (!(char)v1.is_absolute(v6))
            {
                std::env::current_dir(&(char)v3);
                if (*((long long *)&v3) == 0x8000000000000000)
                {
                    v18 = v11.from();
                    ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                    return v18;
                }
                v10 = *((long long *)&v3);
                v11 = v4;
                v12 = v6;
                v5 = v2;
                *((int128_t *)&v3) = (int128_t)v0;
                v13.join(v11, v6, &(char)v3);
                v0 = v13;
                v2 = *((long long *)&v14);
                ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v10);
                v6 = v5;
            }
            if ((char)v1.is_tailable(v2))
            {
                v18 = a0->field_10.watch_with_parent(a0->field_18, v1, v2);
                if (v18)
                {
                    ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                    return v18;
                }
            }
            else if (v1.is_orphan(v2))
            {
                v6 = v2;
                *((int128_t *)&v3) = (int128_t)v0;
                v7.push(&(char)v3, &g_636a00);
                continue;
            }
            else if (v1.parent(v2))
            {
                v18 = a0->field_10.watch(a0->field_18);
                if (v18)
                {
                    ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                    return v18;
                }
            }
            else
            {
                core::option::unwrap_failed(&g_6369e8); /* do not return */
            }
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
            v17 = v8.next();
        } while (v17);
    }
    return 0;
}
