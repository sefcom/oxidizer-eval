long long uu_tail::follow::watch::WatcherRx::watch_with_parent(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    int v4;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb8]
    unsigned int v8;  // [bp-0xb0]
    int v9;  // [bp-0x98], Other Possible Types: char
    unsigned long long v10;  // [bp-0x88]
    int v11;  // [bp-0x80], Other Possible Types: char
    unsigned long long v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    int v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x48]
    char v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v19;  // r15
    unsigned long long v20;  // rdx
    int v21;  // xmm0
    unsigned long long v22;  // rbx

    std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a2, a3);
    if ((char)v2.is_file(v3))
    {
        v19 = v2.parent(v3);
        if (!v19)
        {
            v4.to_vec("pathzeroAnsi -- ", 4);
            v10 = v6;
            memcpy(&v9, &v4, 16);
            memcpy(&v13, &v2, 16);
            v4.spec_to_string(&v13);
            v15 = v10;
            v14 = v9;
            memcpy(&v16, &v4, 16);
            v17 = v6;
            v4.from_iter(&v14);
            uucore::mods::locale::get_message_with_args(&v11, "tail-error-cannot-watch-parent-directory/dev/stdinToo many open files: backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/l", 40, &v4);
            v8 = 1;
            v4 = v11;
            v6 = v12;
            v4.new();
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            return v22;
        }
        if ((char)v19.is_dir(v20))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, v19, v20);
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            v3 = v7;
            v21 = *((int128_t *)&v4);
        }
        else
        {
            v4.to_owned(".tail-error-cannot-watch-parent-directory/dev/stdinToo many open files: backendinotify\ntail-error-backend-cannot-be-used-too-many-filessrc/uu/tail/src/follow/watch.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/", 1);
            v10 = v7;
            memcpy(&v9, &v4, 16);
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            v3 = v10;
        }
        v0 = v21;
    }
    if (!(char)v2.is_absolute(v3))
    {
        std::fs::canonicalize(&v4, v2, v3);
        if ((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63))
        {
            v22 = v5.from();
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            return v22;
        }
        ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        v1 = *((long long *)&v4);
        v2 = v5;
        v3 = v7;
    }
    v22 = a0.watch(a1);
    if (!v22)
    {
        ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        return 0;
    }
    ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return v22;
}
