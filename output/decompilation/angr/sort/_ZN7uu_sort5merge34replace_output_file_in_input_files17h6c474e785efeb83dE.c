long long uu_sort::merge::replace_output_file_in_input_files(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x168]
    int v3;  // [bp-0x158], Other Possible Types: unsigned long long
    int v4;  // [bp-0x158]
    int v5;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x148]
    int v7;  // [bp-0x138], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    int v10;  // [bp-0xf0]
    unsigned long long v11;  // [bp-0xe0]
    int v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    int v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xb0]
    int v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x98]
    int v21;  // [bp-0x88], Other Possible Types: char
    unsigned long long v22;  // [bp-0x78]
    int v23;  // [bp-0x68], Other Possible Types: char
    unsigned long long v24;  // [bp-0x58]
    unsigned long long v25;  // [bp-0x40]
    unsigned long long v26;  // [bp-0x38]
    struct_0 *v28;  // rax
    struct_0 *v29;  // r13
    unsigned int v30;  // r15d
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rdx

    v3 = 0x8000000000000000;
    if (a2)
    {
        std::fs::canonicalize(&v7, a2, a3);
        v2 = v9;
        memcpy(&v0, &v7, 16);
        if (v0 < 9223372036854775810)
            goto LABEL_516e16;
        v20 = v2;
        v18 = v1;
        v25 = a0;
        v26 = a0 + a1 * 24;
        v28 = v25.next();
        if (v28)
        {
            v29 = v28;
            do
            {
                std::fs::canonicalize(&v10, *((long long *)&v29->padding_1[7]), v29->field_10);
                if ((long long)v10 == 0x8000000000000000)
                    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v10);
                v12 = v10;
                v14 = v11;
                if (v13.eq(v11, v19, v20))
                {
                    if (v5 == 0x8000000000000000)
                    {
                        v7.next_file(a4);
                        if (v8 != 0x8000000000000000)
                        {
                            v30 = *((int *)&v7);
                            v15 = v8;
                            *((int128_t *)&v16) = *((int128_t *)&v9);
                            v9 = v14;
                            *((int128_t *)&v7) = (int128_t)v12;
                            if (!std::fs::copy(&v7, &v15))
                            {
                                v7.clone(&v15);
                                v24 = v9;
                                memcpy(&v23, &v7, 16);
                                ::0x515030::core::ptr::drop_in_place<std::ffi::os_str::OsString>(v29);
                                v29->field_10 = v24;
                                *((void*)&v29->field_0) = v23;
                                v9 = v17;
                                *((int128_t *)&v7) = *((int128_t *)&v15);
                                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v4);
                                v6 = v9;
                                memcpy(&v4, &v7, 16);
                                ::0x514cf0::core::ptr::drop_in_place<std::fs::File>(v30);
                                v3 = v5;
                                goto LABEL_516df4;
                            }
                            else
                            {
                                v7 = 9223372036854775811;
                                v8 = v32;
                                v31 = v7.new();
                                ::0x514d50::core::ptr::drop_in_place<std::path::PathBuf>(&v15);
                                ::0x514cf0::core::ptr::drop_in_place<std::fs::File>(v30);
                            }
                        }
                        else
                        {
                            v31 = v9;
                            ::0x514d50::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v12);
                        }
                        if ((long long)v10 == 0x8000000000000000)
                            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v10);
                        ::0x514d50::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
                        if (v0 == 0x8000000000000000)
                            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
                        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v4);
                        return v31;
                    }
                    v7.clone(&v4);
                    v22 = v9;
                    memcpy(&v21, &v7, 16);
                    ::0x515030::core::ptr::drop_in_place<std::ffi::os_str::OsString>(v29);
                    v29->field_10 = v22;
                    *((void*)&v29->field_0) = v21;
                }
                ::0x514d50::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v12);
                v3 = v4;
LABEL_516df4:
                v4 = v3;
                if ((long long)v10 == 0x8000000000000000)
                    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v10);
                v29 = v25.next();
            } while (v29);
        }
        ::0x514d50::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v18);
        if (v0 == 0x8000000000000000)
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    }
    else
    {
        v0 = 9223372036854775809;
LABEL_516e16:
        core::ptr::drop_in_place<core::option::Option<core::result::Result<std::path::PathBuf,std::io::error::Error>>>(&v1);
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v4);
    return 0;
}
