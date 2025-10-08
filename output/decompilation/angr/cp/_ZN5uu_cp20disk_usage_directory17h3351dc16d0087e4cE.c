long long uu_cp::disk_usage_directory(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x150]
    char v1;  // [bp-0x148]
    void* v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    char v5;  // [bp-0x128]
    char v6;  // [bp-0x110]
    unsigned long long v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    char v9;  // [bp-0xf8]
    char v10;  // [bp-0xe0]
    unsigned int v11;  // [bp-0xe0]
    unsigned int v12;  // [bp-0xdc]
    char v13;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v14;  // [bp-0xd0]
    char v15;  // [bp-0x90]
    struct_0 *v17;  // r14
    struct_1 *v18;  // r15
    void* v19;  // rbx
    char *v20;  // r12
    char *v21;  // r13
    char v22;  // al
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rbp

    std::fs::read_dir(&(char)v11, a0, a1);
    if (v13 == 2)
        return 1;
    v0 = *((long long *)&v10);
    v1 = v13;
    v17 = &v9;
    v18 = &v5;
    v19 = 0;
    v20 = &v6;
    v21 = &v0;
    while (true)
    {
        v20.next(v21);
        if (*((int *)&v6) != 1)
        {
            core::ptr::drop_in_place<std::fs::ReadDir>(&v0);
            return 0;
        }
        if (!v7)
            break;
        v18->field_10 = v17->field_10;
        v18->field_0 = v17->field_0;
        v3 = v7;
        v4 = v8;
        (char)v11.file_type(&v3);
        if (v11 != 1)
        {
            if (((unsigned short)v12 & 0xf000) == 0x4000)
            {
                (char)v11.path(&v3);
                v2 = v19;
                v22 = uu_cp::disk_usage_directory(v13, (long long)v14);
                v24 = v23;
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v11);
                v19 = v2;
                if ((v22 & 1))
                    goto LABEL_4a5911;
            }
            else
            {
                (char)v11.metadata(&v3);
                if (v11 == 2)
                    goto LABEL_4a5911;
                v24 = *((long long *)&v15);
            }
            core::ptr::drop_in_place<std::fs::DirEntry>(&v3);
            v19 += v24;
        }
        else
        {
LABEL_4a5911:
            core::ptr::drop_in_place<std::fs::DirEntry>(&v3);
            break;
        }
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v0);
    return 1;
}
