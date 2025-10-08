void starship::logger::cleanup_log_files(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0x240]
    char v1;  // [bp-0x238]
    unsigned long long v2;  // [bp-0x230]
    int v3;  // [bp-0x228]
    int v4;  // [bp-0x218]
    unsigned long long v5;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x1f8]
    unsigned int v7;  // [bp-0x1f0]
    int v8;  // [bp-0x1e8]
    int v9;  // [bp-0x1d8]
    unsigned long long v10;  // [bp-0x1c8]
    unsigned long long v12;  // [bp-0x1c0]
    char v13;  // [bp-0x1b8]
    unsigned long long v14;  // [bp-0x1b8]
    int v15;  // [bp-0x1b0]
    unsigned long long v16;  // [bp-0x110]
    int v17;  // [bp-0x108]
    int v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xe8]
    unsigned long long v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xd8]
    int v22;  // [bp-0xd0]
    char v23;  // [bp-0xa8]
    unsigned long v25;  // rbx
    void* v27;  // rdx
    unsigned long long v28;  // rax
    void* v29;  // rdx
    unsigned long long v30;  // rsi
    unsigned long long v32;  // rdi
    char v34;  // al
    unsigned long long v35;  // rax

    v25 = a0[1];
    std::fs::read_dir(&(char)v12, v25.as_ref(a0[2]), v27);
    if (v13 == 2)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&(char)v12);
    }
    else
    {
        v0 = v12;
        v1 = v13;
        while (true)
        {
            v16.next(&v0);
            if ((int)v16 != 1)
                break;
            v5 = v19;
            v4 = v18;
            v3 = v17;
            if (!(long long)v3)
            {
LABEL_97c3c0:
                core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&v3);
            }
            else
            {
                v10 = v19;
                v9 = v18;
                v8 = v17;
                v20.path(&v8);
                v28 = v21.file_name((long long)v22);
                if (!v28)
                {
                    v29 = 0;
                    if (v28)
                        goto LABEL_97c464;
                }
                else
                {
                    v29 = v27;
                    if (v28)
                    {
LABEL_97c464:
LABEL_97c466:
                        core::str::converts::from_utf8(&(char)v12, v28, v29);
                        v30 = (long long)v15;
                        if ((char)v12)
                            v30 = 0;
                        if ((char)v12)
                            v32 = 1;
                        else
                            v32 = v14;
                        v34 = core::slice::<impl [T]>::starts_with(v32, v30);
                        core::mem::drop(v20, v21);
                        if (v34)
                        {
                            (char)v12.path(&v8);
                            v35 = std::path::Path::extension();
                            if (v35 && (char)v35.equal(v27, "log\nNOTE:\n    passed arguments: \nSupported modules list\n----------------------\nCould not edit configuration: Parsed arguments: ", 3))
                            {
                                core::mem::drop(v12, v14);
                                (char)v12.metadata(&v8);
                                if ((int)v12 == 2)
                                {
                                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v12);
                                }
                                else
                                {
                                    memcpy(&v20, &(char)v12, 176);
                                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v12);
                                    if (((short)*((int *)&v23) & 0xf000) == 0x8000)
                                    {
                                        (char)v12.modified(&v20);
                                        if ((int)v14 == 0x3b9aca00)
                                        {
                                            core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&(char)v12);
                                        }
                                        else
                                        {
                                            v6 = v12;
                                            v7 = v14;
                                            core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&(char)v12);
                                            (char)v12.elapsed(&v6);
                                            if ((char)v12.unwrap_or_default() >= 86401)
                                            {
                                                (char)v12.path(&v8);
                                                v2 = std::fs::remove_file(&(char)v12);
                                                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v2);
                                            }
                                            core::ptr::drop_in_place<std::fs::DirEntry>(&v8);
LABEL_97c548:
                                            if ((long long)v3)
                                                continue;
                                            goto LABEL_97c3c0;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                core::mem::drop(v12, v14);
                            }
                        }
                        core::ptr::drop_in_place<std::fs::DirEntry>(&v8);
                        goto LABEL_97c548;
                    }
                }
                v28 = 1;
                goto LABEL_97c466;
            }
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v0);
    }
    core::mem::drop(a0[0], v25);
    return;
}
