long long uu_sort::merge::replace_output_file_in_input_files(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x13c]
    unsigned long long v1;  // [bp-0x138]
    int v2;  // [bp-0x138]
    void* v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    int v6;  // [bp-0x118]
    void* v7;  // [bp-0x110]
    int v8;  // [bp-0x108], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0x100]
    void* v10;  // [bp-0xf8]
    char v11;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    int v12;  // [bp-0xc8]
    void* v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    int v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    void* v19;  // [bp-0x78]
    int v22;  // [bp-0x48], Other Possible Types: char
    void* v23;  // [bp-0x38]
    struct_0 *v25;  // r15
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rbx
    unsigned long v28;  // rbx
    void* v29;  // rbx
    unsigned long long v30;  // rdx

    v1 = 0x8000000000000000;
    if (a2)
    {
        v25 = a0;
        std::fs::canonicalize(&v8, a2, a3);
        v13 = v10;
        memcpy(&v11, &v8, 16);
        if (v11 < 9223372036854775810)
            goto LABEL_4c53af;
        v19 = v13;
        v17 = v12;
        if (a1)
        {
            v26 = a1 * 24;
            do
            {
                v27 = v26;
                std::fs::canonicalize(&v14, v25->field_0[1], v25->field_8);
                if (v14 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v14);
                }
                else if (v15.eq(v16, v18, v19))
                {
                    v8.next_file(a4);
                    if (v9 != 0x8000000000000000)
                    {
                        v0 = *((int *)&v8);
                        v5 = v9;
                        *((int128_t *)&v6) = *((int128_t *)&v10);
                        if (!((char)std::fs::copy(&v14, &v5) & 1))
                        {
                            v8.clone((long long)v6, v7);
                            v23 = v10;
                            memcpy(&v22, &v8, 16);
                            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v25);
                            v25->field_8 = v23;
                            *((void*)&v25->field_0[0]) = v22;
                            v10 = v7;
                            *((int128_t *)&v8) = *((int128_t *)&v5);
                            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v1);
                            v4 = v10;
                            *((int128_t *)&v2) = (int128_t)v8;
                            core::ptr::drop_in_place<std::fs::File>(&v0);
                            continue;
                        }
                        else
                        {
                            v8 = 9223372036854775811;
                            v9 = v30;
                            v29 = v8.new();
                            core::ptr::drop_in_place<std::path::PathBuf>(&v5);
                            core::ptr::drop_in_place<std::fs::File>(&v0);
                            goto LABEL_4c53c6;
                        }
                    }
                    else
                    {
                        v29 = v10;
                        core::ptr::drop_in_place<std::path::PathBuf>(&v14);
                        goto LABEL_4c53c6;
                    }
                }
                else
                {
                    core::ptr::drop_in_place<std::path::PathBuf>(&v14);
                }
                v25 = &v25->field_10;
                v28 = v27 - 24;
                v26 = v28;
            } while (v27 != 24);
            v29 = 0;
        }
        else
        {
            v29 = 0;
        }
LABEL_4c53c6:
        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
    }
    else
    {
        v11 = 9223372036854775809;
LABEL_4c53af:
        core::ptr::drop_in_place<core::option::Option<core::result::Result<std::path::PathBuf,std::io::error::Error>>>(&v12);
        v29 = 0;
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v1);
    return v29;
}
