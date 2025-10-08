long long uu_cp::copydir::Entry::new(void* a0, unsigned long long a1[10], unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0xf0]
    int v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    int v4;  // [sp-0xc8], Other Possible Types: unsigned long long (64 bits)[1], unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    char *v6;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xb0]
    void* v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98], Other Possible Types: char
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    char *v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    char v19;  // [bp-0x48]
    char v20;  // [bp-0x38]
    unsigned long long v22;  // rax
    void* v23;  // rcx
    unsigned long long v24;  // rdx
    char v25;  // al
    unsigned long v26;  // r15
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    int v29;  // xmm0

    v22 = a2.as_ref();
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v19, v22, a2);
    v12.join(a1[1], a1[2], &v19);
    v23 = 0;
    if (!((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63)))
        v23 = a1[4];
    uu_cp::copydir::get_local_to_root_parent(&v4, v13, v14, v23, a1[5]);
    if (v4 == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::path::PathBuf>(&v12);
        return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v19);
    }
    v3 = v6;
    *((int128_t *)&v1) = *((int128_t *)&v4);
    if (a3)
    {
        v25 = v22.is_dir(v24);
        v26 = a1[7];
        if (!v26)
        {
LABEL_498ec6:
            v27 = v2.strip_prefix(v3, a1[8], a1[9]);
            if (!v27)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
                core::ptr::drop_in_place<std::path::PathBuf>(&v12);
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v19);
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, v27, a2);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
            v3 = v6;
            *((int128_t *)&v1) = *((int128_t *)&v4);
        }
        else if (*((char *)(a1[6] + v26 - 1)) == 47)
        {
            if (v25)
                goto LABEL_498e2b;
            goto LABEL_498ec6;
        }
        else
        {
            if ((v25 ^ 1) || *((char *)(a1[6] + v26 - 1)) != 92)
                goto LABEL_498ec6;
LABEL_498e2b:
            v18 = std::fs::create_dir_all(a1[6], v26);
            if (v18)
            {
                v0 = v18;
                v15 = &v0;
                v16 = <std::io::error::Error as core::fmt::Display>::fmt;
                v4 = &g_55e600;
                v5 = 2;
                v8 = 0;
                v6 = &v15;
                v7 = 1;
                std::io::stdio::_eprint(&v4);
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v18);
            }
        }
    }
    else
    {
        v26 = a1[7];
    }
    v15.join(a1[6], v26, &(char)v1);
    v28 = a1[6].is_file(v26);
    v6 = v14;
    v29 = *((int128_t *)&v12);
    v4 = v29;
    v9 = *((long long *)&v20);
    memcpy(&v7, &v19, 16);
    v11 = v17;
    memcpy(&v10, &v15, 16);
    *((unsigned long long *)&a0[64]) = v17;
    a0[48] = v10;
    *(a0) = v29;
    *((void* *)&a0[32]) = v8;
    *((unsigned long long *)&a0[40]) = v9;
    *((int128_t *)&a0[16]) = *((int128_t *)&v6);
    *((char *)&a0[72]) = v28;
    return v28;
}
