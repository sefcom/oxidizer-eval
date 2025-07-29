long long uu_mv::rename_dir_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x1c8]
    void* v1;  // [bp-0x1c8]
    int v2;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v3;  // [bp-0x1a0]
    int v4;  // [bp-0x198]
    char v5;  // [bp-0x188]
    char v6;  // [bp-0xf0]
    int v7;  // [bp-0xd8], Other Possible Types: char
    int v8;  // [bp-0xd8]
    int v9;  // [bp-0xc8]
    int v10;  // [bp-0xb8], Other Possible Types: char
    char v11;  // [bp-0x48]
    unsigned long long v12;  // r13
    char *v13;  // rcx
    unsigned long long v14;  // r13
    unsigned long long v15;  // rax

    std::fs::metadata(&v2, a2, a3);
    ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(*((long long *)&v2), v3);
    if (*((long long *)&v2) != 2)
    {
        v12 = std::fs::remove_dir_all(a2, a3);
        if (v12)
            return v12;
    }
    fs_extra::dir::get_size(&v2, a0, a1);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        if (!a4)
            goto LABEL_4ce0a3;
        v2.with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}errmv-error-inter-device-move-failedmv-error-permission-deniedNoSuchFileCannotStatNotADirectorySelfTargetSubdirectoryDirectoryToNonDirectoryNonDirectoryToDirectoryNotADirectoryTargetNotADirect", 64);
        v7.unwrap(&v2, &g_5d9d58);
        v6.new(v3);
        memcpy(&v2, &v7, 136);
        v11.with_style(&v6, &v2);
        v0.add(a4, &v11, a3);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v2);
LABEL_4ce0a3:
        v1 = 0;
    }
    uucore::features::fsxattr::retrieve_xattrs(&v2, a0, a1);
    if (*((long long *)&v2))
    {
        memcpy(&v10, &v5, 16);
        v9 = v4;
        memcpy(&v8, &v2, 16);
    }
    else
    {
        uu_mv::rename_dir_fallback::{{closure}}(&v7, v3);
        v7 = v8;
    }
    v13 = &v0;
    if (!v1)
        v13 = 0;
    v14 = uu_mv::copy_dir_contents(a0, a1, a2, a3, a5, a6, v13);
    memcpy(&v5, &v10, 16);
    v4 = v9;
    v2 = v7;
    v15 = uucore::features::fsxattr::apply_xattrs(a2, a3, &v2);
    if (v15)
    {
        ::0x4c81f0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v14);
        v14 = v15;
    }
    else if (!v14)
    {
        v14 = std::fs::remove_dir_all(a0, a1);
        if (!v14)
        {
            core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v0);
            return 0;
        }
    }
    core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v0);
    return v14;
}
