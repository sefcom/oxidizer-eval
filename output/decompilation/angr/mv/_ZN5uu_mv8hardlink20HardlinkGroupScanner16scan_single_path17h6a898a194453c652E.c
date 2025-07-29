long long uu_mv::hardlink::HardlinkGroupScanner::scan_single_path(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xf8]
    void* v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8]
    char v4;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long v5;  // [bp-0xc8]
    int v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0]
    unsigned long long v11;  // rax

    if ((char)a1.is_dir(a2))
        return a0.scan_directory_recursive(a1, a2);
    std::fs::metadata(&v4, a1, a2);
    if (*((int *)&v4) == 2)
        return v5;
    if (*((long long *)&v9) <= 1)
        return 0;
    v4.rustc_entry(a0 + 24, v7, v8);
    if (v4)
    {
        v3 = v6;
        *((int128_t *)&v0) = *((int128_t *)&v4);
    }
    else
    {
        *((int128_t *)&v2) = *((int128_t *)&v5);
        v1 = 0;
    }
    v11 = (char)v0.or_default();
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, a1, a2);
    v11.push(&v4, &g_5da028);
    return 0;
}
