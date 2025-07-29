long long uu_cp::disk_usage_directory(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x148]
    char v1;  // [bp-0x140]
    unsigned long long v2;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x130]
    int v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x118]
    unsigned long long v6;  // [bp-0x110]
    unsigned long long v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    int v9;  // [bp-0xf8]
    unsigned long long v10;  // [bp-0xe8]
    char v11;  // [bp-0xe0]
    unsigned int v12;  // [bp-0xe0]
    unsigned int v13;  // [bp-0xdc]
    char v14;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v15;  // [bp-0xd0]

    std::fs::read_dir(&(char)v12, a0, a1);
    if (v14 == 2)
        return 1;
    v0 = *((long long *)&v11);
    v1 = v14;
    while (true)
    {
        v6.next(&v0);
        if (!((char)v6 & 1))
        {
            ::0x4d38b0::core::ptr::drop_in_place<std::fs::ReadDir>(&v0);
            return 0;
        }
        if (!v7)
            break;
        v5 = v10;
        v4 = v9;
        v2 = v7;
        v3 = v8;
        (char)v12.file_type(&v2);
        if (!((char)v12 & 1))
        {
            if (((unsigned short)v13 & 0xf000) == 0x4000)
            {
                (char)v12.path(&v2);
                if (!uu_cp::disk_usage_directory(v14, *((long long *)&v15)))
                {
                    ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v12);
                }
                else
                {
                    ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v12);
LABEL_4e2b00:
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v2);
                    break;
                }
            }
            else
            {
                (char)v12.metadata(&v2);
                if (v12 == 2)
                    goto LABEL_4e2adb;
            }
            core::ptr::drop_in_place<std::fs::DirEntry>(&v2);
        }
        else
        {
LABEL_4e2adb:
            goto LABEL_4e2b00;
        }
    }
    ::0x4d38b0::core::ptr::drop_in_place<std::fs::ReadDir>(&v0);
    return 1;
}
