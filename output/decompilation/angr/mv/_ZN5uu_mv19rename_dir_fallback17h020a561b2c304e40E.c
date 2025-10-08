long long uu_mv::rename_dir_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char *v0;  // [bp-0x258]
    unsigned long long v1;  // [bp-0x250]
    char v2;  // [bp-0x248]
    void* v3;  // [bp-0x248]
    int v4;  // [bp-0x230]
    int v6;  // [bp-0x220]
    int v7;  // [bp-0x210]
    unsigned long long v8;  // [bp-0x200]
    void* v9;  // [bp-0x1f8]
    unsigned int v10;  // [bp-0x1f0]
    char *v11;  // [bp-0x1e8]
    unsigned long long v12;  // [bp-0x1e0]
    int v13;  // [bp-0x1d8], Other Possible Types: char
    char v14;  // [bp-0x1c8]
    char v15;  // [bp-0x1b8]
    char v16;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x198]
    char *v18;  // [bp-0x190], Other Possible Types: char
    unsigned long long v19;  // [bp-0x188]
    void* v20;  // [bp-0x180], Other Possible Types: char
    char v21;  // [bp-0xf0]
    int v22;  // [bp-0xd8], Other Possible Types: char
    int v23;  // [bp-0xc8]
    unsigned long v24;  // [bp-0xc0]
    int v25;  // [bp-0xb8]
    char v26;  // [bp-0x48]
    char v27;  // [bp+0x0]
    unsigned long long v29;  // 4096

    std::fs::metadata(&v16, a2, a3);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v16);
    if (*((int *)&v16) == 2 || !std::fs::remove_dir_all(a2, a3))
    {
        v8 = 0xfa00;
        v10 = 0x10000;
        v9 = 0;
        fs_extra::dir::get_size(&v16, a0, v1);
        if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        {
            if (!a4)
                goto LABEL_48d9b9;
            v16.with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 64);
            v22.unwrap(&v16, &g_541a70);
            (char)v4.new(v17);
            memcpy(&v16, &v22, 136);
            v26.with_style(&(char)v4, &v16);
            v2.add(a4, &v26, a3);
            v29 = a1;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v16);
LABEL_48d9b9:
            v3 = 0;
            v29 = v1;
        }
        uucore::features::fsxattr::retrieve_xattrs(&v16, a0, v29);
        if (v16)
        {
            memcpy(&v15, &v20, 16);
            memcpy(&v14, &v18, 16);
            memcpy(&v13, &v16, 16);
        }
        else
        {
            uu_mv::rename_dir_fallback::{{closure}}(&v13, v17);
        }
        if (v3)
        {
            v0 = &v2;
            fs_extra::dir::move_dir_with_progress(&(char)v4, a0, v29, a2, a3, &v8);
        }
        else
        {
            fs_extra::dir::move_dir(&(char)v4, a0, v29, a2, a3, &v8);
        }
        if (uucore::features::fsxattr::apply_xattrs(a2, a3, &v13))
        {
            core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&(char)v4);
        }
        else if ((long long)v4 != 0x8000000000000000)
        {
            v23 = v6;
            v25 = v7;
            v22 = v4;
            if (v24 == 9223372036854775809)
            {
                1.new("Permission deniedinter-device move failed: '' to ''; unable to remove target: ", 17);
            }
            else
            {
                v11 = &v22;
                v12 = <fs_extra::error::Error as core::fmt::Debug>::fmt;
                v16 = &g_41fc00;
                v17 = 1;
                v20 = 0;
                v18 = &v11;
                v19 = 1;
                v21.map_or_else(&v16);
                40.new(&v21);
            }
            core::ptr::drop_in_place<fs_extra::error::Error>(&v22);
        }
        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v2);
    }
    return &v27;
}
