long long just::which::which(void* a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x128], Other Possible Types: char
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    int v5;  // [bp-0x108]
    int v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    void* v9;  // [bp-0xf0]
    int v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    char *v14;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xb0]
    unsigned long long v18;  // [bp-0xa8]
    char v19;  // [bp-0xa0]
    char v20;  // [bp-0x88]
    int v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x78]
    char v23;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x70]
    struct_0 *v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v28;  // [bp-0x50]
    int v29;  // [bp-0x48]
    char v30;  // [bp-0x38]
    unsigned long long v32;  // rax
    unsigned long v33;  // rdi
    struct_0 *v36;  // rax
    struct_0 *v37;  // r12
    int v38;  // xmm0
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax

    v27 = a2;
    v28 = a3;
    v14.components(a2, a3);
    v32 = v14.fold();
    if (!v32)
    {
        v33 = a0 + 8;
        v40 = v33.to_vec("empty command`PATH` environment variable not setenvironment-variablesignalvariant identifierattributestarget", 13);
        *((unsigned long long *)a0) = 1;
        return v40;
    }
    if (v32 == 1)
    {
        std::env::var_os(&(char)v0, "PATH ... => M", 4);
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        {
            v40 = a0 + 8.to_vec("`PATH` environment variable not setenvironment-variablesignalvariant identifierattributestarget", 35);
            *((unsigned long long *)a0) = 1;
            return v40;
        }
        v11 = *((long long *)&v0);
        v12 = v1;
        v13 = v3;
        v15 = std::sys::pal::unix::os::split_paths::bytes_to_path;
        v16 = v12;
        v17 = v13;
        v18 = std::sys::pal::unix::os::split_paths::is_separator;
        v19 = 0;
        v14 = &v27;
        v23.collect(&v14);
        v9 = a0;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v11);
    }
    else
    {
        v36 = 8.alloc_impl(24);
        if (!v36)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v37 = v36;
        v14.to_vec(a2, a3);
        v9 = a0;
        v3 = v16;
        v38 = *((int128_t *)&v14);
        v0 = v38;
        v37->field_10 = v16;
        *((void*)&v37->field_0) = v38;
        v24 = 1;
        v25 = v37;
        v26 = 1;
    }
    v14.into_iter(&v23);
    (char)v21.next(&v14);
    if (!((char)(((0 ^ *((long long *)&v20)) & (0 ^ -(*((long long *)&v20)))) >> 63)))
    {
        do
        {
            v5 = v21;
            v8 = v22;
            if (!(char)v7.is_absolute(v22))
            {
                v11.working_directory(a1->field_10, *((long long *)&a1->field_18));
                v3 = v8;
                *((int128_t *)&v0) = (int128_t)v5;
                v29.join(v12, v13, &(char)v0);
                v5 = v29;
                v8 = *((long long *)&v30);
                core::ptr::drop_in_place<std::path::PathBuf>(&v11);
            }
            (char)v0.lexiclean(v7, v8);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
            v8 = v3;
            *((int128_t *)&v6) = (int128_t)v0;
            if ((char)is_executable::is_executable(&(char)v6))
            {
                core::str::converts::from_utf8(&(char)v0, v7, v8);
                if (!((char)v0 & 1))
                {
                    (char)v0.to_vec(v1, v3);
                    v39 = (long long)v0;
                    *((int128_t *)&v10) = *((int128_t *)&v1);
                    if (v39 != 9223372036854775809)
                    {
                        *((int128_t *)&v9[16]) = (int128_t)v10;
                        *((unsigned long long *)&v9[8]) = v39;
                        *((unsigned long long *)v9) = 0;
                        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
                        return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v14);
                    }
                }
                just::which::which::{{closure}}(&(char)v0, v7, v8);
                *((unsigned long long *)&v9[24]) = v3;
                *((int128_t *)&v9[8]) = (int128_t)v0;
                *((unsigned long long *)v9) = 1;
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
                return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v14);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
            (char)v21.next(&v14);
        } while ((long long)v21 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v14);
    *((unsigned long long *)&v9[8]) = 0x8000000000000000;
    *((unsigned long long *)v9) = 0;
    return v9;
}
