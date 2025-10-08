long long fd::filesystem::is_empty(void* a0)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned int v6;  // edx
    unsigned int v7;  // edx
    unsigned long v8;  // cc_ndep
    unsigned long long v10;  // rdx
    unsigned int v11;  // ebx
    char v12;  // bl
    struct_0 *v13;  // rax

    if (((char)a0.file_type() & 1))
    {
        v7 = v6 & 0xf000;
        if (!((char)_ccall(0, 6, 0, (unsigned long long)(v7 & 65535), v8)))
        {
            if (v7 != 0x4000)
                goto LABEL_5f42ad;
            std::fs::read_dir(&v0, a0.path(), v10);
            if (v1 == 2)
            {
                v11 = 0;
            }
            else
            {
                v2 = v0;
                v3 = v1;
                v4.next(&v2);
                core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v4);
                core::ptr::drop_in_place<std::fs::ReadDir>(&v2);
                v12 = v4 ^ 1;
                v11 = v12;
                if (v1 != 2)
                    return v12 & 1;
            }
            core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
        }
        else
        {
            v13 = a0.metadata();
            if (!v13)
                goto LABEL_5f42ad;
            v12 = !v13->field_50;
            v11 = (unsigned int)a0 & 0xffffff00 | v12;
        }
    }
    else
    {
LABEL_5f42ad:
        v11 = 0;
    }
    return v11 & 0xffffff00 | v12 & 1;
}
