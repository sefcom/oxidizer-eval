long long uu_shred::wipe_name(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char *v0;  // [bp-0x218], Other Possible Types: unsigned long long
    int v1;  // [bp-0x210], Other Possible Types: unsigned int, unsigned long long, unsigned long
    char v2;  // [bp-0x20f]
    unsigned short v3;  // [bp-0x20c]
    char *v4;  // [bp-0x208]
    char v5;  // [bp-0x200], Other Possible Types: unsigned long long
    int v6;  // [bp-0x1f8]
    unsigned long long v8;  // [bp-0x1f0]
    char *v9;  // [bp-0x1e8]
    unsigned long long v10;  // [bp-0x1d8]
    unsigned long long v11;  // [bp-0x1d0]
    char *v12;  // [bp-0x1c8]
    unsigned int v13;  // [bp-0x1c0]
    unsigned int v14;  // [bp-0x1bc]
    unsigned long long v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b8]
    unsigned int v17;  // [bp-0x1b8]
    unsigned int v18;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v19;  // [bp-0x1b0], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x1a8]
    char v21;  // [bp-0x1a0], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x198]
    unsigned long long v23;  // [bp-0x188]
    struct_0 *v24;  // [bp-0x180]
    int v25;  // [bp-0x178]
    unsigned long long v26;  // [bp-0x170]
    int v27;  // [bp-0x168]
    unsigned long long v28;  // [bp-0x150]
    char *v29;  // [bp-0x148]
    char v30;  // [bp-0x140]
    int v31;  // [sp-0x138], Other Possible Types: char *, char, unsigned long long
    unsigned long long v32;  // [bp-0x138]
    unsigned long long v33;  // [bp-0x130]
    char *v34;  // [bp-0x128]
    unsigned long long v35;  // [bp-0x120]
    char *v36;  // [bp-0x118], Other Possible Types: void*
    unsigned long long v37;  // [bp-0x110]
    int v38;  // [bp-0x88]
    char v39;  // [bp-0x80]
    char v40;  // [bp-0x70]
    int v41;  // [bp-0x68]
    int v42;  // [bp-0x58]
    char v43;  // [bp-0x48]
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v50;  // rdx
    unsigned long long v51;  // [bp-0x138]
    unsigned long long v52;  // [bp-0x88]

    v13 = a4;
    v14 = a3;
    v45 = a1.file_name(a2);
    if (!v45)
        core::option::unwrap_failed(&g_4fa290); /* do not return */
    core::str::converts::from_utf8(&(char)v51, v45, a2);
    if ((v31 & 1))
        core::option::unwrap_failed(&g_4fa2a8); /* do not return */
    (char)v51.to_vec(a1, a2);
    v9 = v34;
    *((int128_t *)&v6) = *((int128_t *)&v31);
    v28 = 1;
    v29 = v34;
    v30 = 0;
    if (((char)v28.spec_next_back() & 1))
    {
        do
        {
            v41.new(v46);
            v27 = v42;
            v25 = v41;
            while (true)
            {
                v43.next(&(char)v25);
                if ((char)(((0 ^ *((long long *)&v43)) & (0 ^ -(*((long long *)&v43)))) >> 63))
                    break;
                v10.with_file_name(a1, a2, &v43);
                std::fs::metadata(&(char)v51, v11, v12);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v51);
                if ((unsigned int)v51 != 2)
                {
                    core::ptr::drop_in_place<std::path::PathBuf>(v10, v11);
                }
                else
                {
                    v47 = std::fs::rename(&(char)v6, &v10);
                    if (v47)
                    {
                        v23 = v47;
                        v15 = uucore::util_name();
                        v19 = v50;
                        v0 = &v15;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v31 = &g_4f9f98;
                        v33 = 2;
                        v36 = 0;
                        v34 = &v0;
                        v35 = 1;
                        std::io::stdio::_eprint(&v31);
                        v52 = 1;
                        memcpy(&v39, &v8, 16);
                        v40 = 0;
                        v0 = 1;
                        *((int128_t *)&v1) = *((int128_t *)&v11);
                        v5 = 1;
                        v31 = &v52;
                        v33 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v34 = &v0;
                        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v36 = &v23;
                        v37 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v15 = &g_4fa250;
                        v19 = 4;
                        v22 = 0;
                        v20 = &v31;
                        v21 = 3;
                        std::io::stdio::_eprint(&v15);
                        std::process::exit(1); /* do not return */
                    }
                    if ((char)v14)
                    {
                        v15 = uucore::util_name();
                        v19 = v48;
                        v0 = &v15;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v32 = &g_4f9f98;
                        v33 = 2;
                        v36 = 0;
                        v34 = &v0;
                        v35 = 1;
                        std::io::stdio::_eprint(&v32);
                        v15 = 1;
                        *((int128_t *)&v19) = *((int128_t *)&v8);
                        v21 = 0;
                        *((int128_t *)&v38) = *((int128_t *)&v11);
                        v0 = &v15;
                        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v4 = &(unsigned long long)v38;
                        v5 = <std::path::Display as core::fmt::Display>::fmt;
                        v51 = &g_4fa220;
                        v33 = 3;
                        v36 = 0;
                        v34 = &v0;
                        v35 = 2;
                        std::io::stdio::_eprint(&v51);
                    }
                    v16 = v15;
                    if ((char)v13 == 3)
                    {
                        v0 = 0x1b600000000;
                        v3 = 0;
                        v1 = 0;
                        v2 = 1;
                        (char)v51.clone(v11, v12);
                        v20 = v34;
                        memcpy(&v16, &(char)v51, 16);
                        (char)v51.open(&v0, &v16);
                        v17 = (char)v51.expect();
                        v17.sync_all().expect();
                        core::ptr::drop_in_place<std::fs::File>(v18);
                        v16 = v18;
                    }
                    v15 = v16;
                    v34 = v12;
                    *((int128_t *)&v31) = *((int128_t *)&v10);
                    core::ptr::drop_in_place<std::path::PathBuf>((long long)v6, v8);
                    v9 = v34;
                    *((int128_t *)&v6) = (int128_t)v31;
                    break;
                }
            }
            core::ptr::drop_in_place<uu_shred::FilenameIter>((long long)v25, v26);
        } while (((char)v28.spec_next_back() & 1));
    }
    v24->field_10 = v9;
    v24->field_0 = (int128_t)v6;
    return v9;
}
