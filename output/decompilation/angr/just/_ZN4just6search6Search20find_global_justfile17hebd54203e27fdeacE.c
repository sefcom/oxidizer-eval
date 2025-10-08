long long just::search::Search::find_global_justfile(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    struct_0 *v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    char v4;  // [bp-0x150]
    unsigned long long v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    unsigned long long v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    int v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0x100]
    int v14;  // [bp-0xf8]
    char v15;  // [bp-0xe8]
    int v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd0]
    unsigned long long v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xc0]
    unsigned long long v21;  // [bp-0xb8]
    int v22;  // [bp-0xb0]
    unsigned long long v23;  // [bp-0xa0]
    char v24;  // [bp-0x98]
    char v25;  // [bp-0x78]
    unsigned long long v26;  // [bp-0x70]
    unsigned long long v27;  // [bp-0x68]
    int v28;  // [bp-0x60]
    unsigned long long v29;  // [bp-0x50]
    int v30;  // [bp-0x48], Other Possible Types: char
    unsigned long long v31;  // [bp-0x38]
    char *v33;  // rsi

    v25.global_justfile_paths();
    v24.into_iter(&v25);
    v15.next(&v24);
    if (!((char)(((0 ^ *((long long *)&v15)) & (0 ^ -(*((long long *)&v15)))) >> 63)))
    {
        v33 = &(char)v9;
        do
        {
            v11 = v17;
            v9 = v16;
            std::fs::read_dir(&v0, v33);
            if ((char)v1 != 2)
            {
                v3 = v0;
                v4 = v1;
                while (true)
                {
                    v25.next(&v3);
                    if (*((int *)&v25) != 1)
                        break;
                    if (v26)
                    {
                        v23 = v29;
                        v22 = v28;
                        v20 = v26;
                        v21 = v27;
                        v12.file_name(&v20);
                        core::str::converts::from_utf8(&v5, v13, (long long)v14);
                        if ((int)v5 == 1 || !(char)::0x60cdf0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v6, v7, v18, v19))
                        {
                            core::ptr::drop_in_place<std::fs::DirEntry>(&v20);
                            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v12);
                        }
                        else
                        {
                            v5.path(&v20);
                            *((unsigned long long *)((char *)&v2->field_8 + 8)) = v7;
                            *((int128_t *)&(&v2->field_0)[1]) = *((int128_t *)&v5);
                            v2->field_0 = 9223372036854775814;
                            core::ptr::drop_in_place<std::fs::DirEntry>(&v20);
                            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v12);
LABEL_6887d1:
                            core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
                            if ((char)v1 == 2)
                                core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
                            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v9);
                            return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,&str)>>(&v24);
                        }
                    }
                    else
                    {
                        just::search::Search::find_global_justfile::{{closure}}(&v5, v10, v11, v27);
                        memcpy(&v30, &v6, 16);
                        v31 = v8;
                        *((unsigned long long *)((char *)&v2->field_8 + 8)) = v8;
                        *((void*)&(&v2->field_0)[1]) = v30;
                        v2->field_0 = v5;
                        goto LABEL_6887d1;
                    }
                }
                core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
                if ((char)v1 != 2)
                    continue;
            }
            core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v9);
            v15.next(&v24);
            v33 = &(char)v9;
        } while ((long long)v16 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,&str)>>(&v24);
    v2->field_0 = 9223372036854775809;
    return a0;
}
