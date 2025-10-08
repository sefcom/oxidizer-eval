long long uu_install::copy_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    char *v3;  // [bp-0x150], Other Possible Types: char
    unsigned long long v4;  // [bp-0x150]
    unsigned int v5;  // [bp-0x150]
    unsigned int v6;  // [bp-0x150]
    unsigned long long v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x140]
    char *v9;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned int v10;  // [bp-0x138]
    unsigned int v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x130]
    int v13;  // [bp-0x128], Other Possible Types: char *
    unsigned long long v14;  // [bp-0x120]
    unsigned long long v15;  // [bp-0x118]
    char v16;  // [bp-0x110]
    unsigned long long v17;  // [bp-0x100]
    char v18;  // [bp-0xf8], Other Possible Types: unsigned long long
    char *v19;  // [bp-0xe8]
    char v20;  // [bp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned int v21;  // [bp-0xdc]
    int v22;  // [bp-0xd8], Other Possible Types: unsigned long long
    char *v23;  // [bp-0xd0]
    char *v24;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v25;  // [bp-0xc0], Other Possible Types: char
    char *v26;  // [bp-0xb0]
    char v27;  // [bp-0xa8]
    unsigned long long v29;  // rdi
    unsigned long long v30;  // rbx
    char v31;  // al
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned int v35;  // eax
    unsigned int v36;  // ebp

    std::fs::canonicalize(&v0, a2, a3);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
        goto LABEL_468ba2;
    }
    std::fs::canonicalize(&(char)v20, a0, a1);
    v29 = v22;
    if (*((long long *)&v20) == 0x8000000000000000)
    {
        v30 = v29.from();
        goto LABEL_468deb;
    }
    else
    {
        v9 = *((long long *)&v20);
        v12 = v29;
        v13 = v23;
        v31 = v29.eq(v13, v1, v2);
        core::ptr::drop_in_place<std::path::PathBuf>(&v9);
        if (v31)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, a0, a1);
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v9, a2, a3);
            v24 = v8;
            *((int128_t *)&v22) = *((int128_t *)&v3);
            memcpy(&v25, &v9, 16);
            v26 = v13;
            v20 = 16;
            v30 = (char)v20.new();
LABEL_468deb:
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        }
        else
        {
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
LABEL_468ba2:
            if ((char)a2.is_dir(a3) && !(char)a0.is_dir(a1))
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a2, a3);
                (char)v20.clone(v1, v2);
                v19 = v23;
                memcpy(&v18, &(char)v20, 16);
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, a0, a1);
                v9.clone(v7, v8);
                v26 = v13;
                memcpy(&v25, &v9, 16);
                memcpy(&v22, &v18, 16);
                v24 = v19;
                v20 = 15;
                v32 = (char)v20.new();
                core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                return v32;
            }
            v18 = std::fs::remove_file(a2, a3);
            if (v18)
            {
                v0 = v18;
                if ((char)v18.kind())
                {
                    v9 = uucore::util_name();
                    v12 = v33;
                    v3 = &v9;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v20 = &g_502188;
                    v22 = 2;
                    v25 = 0;
                    v23 = &v3;
                    v24 = 1;
                    std::io::stdio::_eprint(&(char)v20);
                    v4 = a2;
                    v7 = a3;
                    v9 = &v4;
                    v12 = <std::path::Display as core::fmt::Display>::fmt;
                    v13 = &v0;
                    v14 = <std::io::error::Error as core::fmt::Debug>::fmt;
                    v20 = &g_5024b8;
                    v22 = 3;
                    v25 = 0;
                    v23 = &v9;
                    v24 = 2;
                    std::io::stdio::_eprint(&(char)v20);
                }
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v18);
            }
            std::fs::metadata(&v20, a0, a1);
            if ((int)v20 == 2)
            {
                v18 = v22;
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a0, a1);
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, a2, a3);
                v15 = v2;
                *((int128_t *)&v13) = *((int128_t *)&v0);
                memcpy(&v16, &v4, 16);
                v17 = v8;
                v12 = v18;
                v9 = 8;
                return v9.new();
            }
            v35 = 0xf000 & *((int *)&v27);
            if (v35 != 0x1000 && v35 != 0x6000 && v35 != 0x2000)
            {
                v34 = uu_install::copy_normal_file(a0, a1, a2, a3);
                return v34;
            }
            v20.open(a0, a1);
            if (((char)v20 & 1))
                return v22.from();
            v36 = v21;
            v5 = v36;
            v20.create(a2, a3);
            if ((int)v20 == 1)
            {
                v30 = v22.from();
            }
            else
            {
                v10 = v21;
                uucore::features::buf_copy::linux::copy_stream(&v20, &v5, &v10);
                v30 = v20;
                core::ptr::drop_in_place<std::fs::File>(v11);
                v36 = v6;
            }
            core::ptr::drop_in_place<std::fs::File>(v36);
        }
        return v30;
    }
}
