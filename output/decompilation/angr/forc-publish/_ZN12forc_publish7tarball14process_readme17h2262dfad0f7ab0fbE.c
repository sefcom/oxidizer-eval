void forc_publish::tarball::process_readme(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    char *v3;  // [bp-0x148]
    unsigned long long v4;  // [bp-0x140]
    char v5;  // [bp-0x138]
    int v6;  // [bp-0x128]
    char v7;  // [bp-0x110]
    char v8;  // [bp-0x108]
    int v9;  // [bp-0x100]
    int v10;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v11;  // [bp-0xe0]
    char v12;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    int v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xd0]
    char *v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xc0]
    void* v17;  // [bp-0xb8]
    unsigned long long v19;  // rax

    v0.join(a1, a2, "README.mdoutForc.tomltokenstruct Registrystruct Registry with 1 element", 9);
    std::fs::metadata(&v12, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
    if ((unsigned int)v12 != 2)
    {
        forc_publish::md_pre_process::flatten_markdown(&v7, v1, v2);
        if (*((int *)&v7) == 6)
        {
            v19 = std::fs::write(&v0, &v8);
            if (v19)
            {
                a0->field_0 = 0;
                a0->field_8 = v19;
                core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
                return;
            }
        }
        else
        {
            v6 = v9;
            memcpy(&v5, &v7, 16);
            v3 = &v5;
            v4 = <forc_publish::md_pre_process::error::MDPreProcessError as core::fmt::Display>::fmt;
            v12 = &g_1253fa0;
            v14 = 1;
            v17 = 0;
            v15 = &v3;
            v16 = 1;
            v10.map_or_else(0, a2, &v12);
            v13 = v10;
            v15 = v11;
            forc_tracing::println_warning(1, v11);
            core::ptr::drop_in_place<alloc::string::String>(&v12);
            core::ptr::drop_in_place<forc_publish::md_pre_process::error::MDPreProcessError>(&v5);
        }
    }
    a0->field_0 = 14;
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return;
}
