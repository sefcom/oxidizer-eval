void fish::env::config_paths::ConfigPaths::from_exec_path(struct_0 *a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    int v3;  // [bp-0x78], Other Possible Types: char
    unsigned long v4;  // [bp-0x68]
    char v5;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x40]
    unsigned long long v11;  // r13
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx

    if ((char)core::sync::atomic::atomic_load(&g_15a9470, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9460);
        v5.into_iter(&v3);
        v0.spec_extend(&v5);
        v0.push(58, &g_14d6720);
        v0.push(32, &g_14d6720);
        v9.to_vec("embed-data feature is active, ignoring data pathssrc/env/var.rs", 49);
        v5.into_iter(&v9);
        v0.spec_extend(&v5);
        v0.push(10, &g_14d6720);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v6.to_vec("/etc/embed-data feature is active, ignoring data pathssrc/env/var.rs", 5);
    v3.join(v7, *((long long *)&v8));
    v11 = a1[1];
    v12 = v11.parent(a1[2]);
    if (v12)
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v6, v12, v13);
        memcpy(&v0, &v7, 16);
        v5 = v6;
    }
    else
    {
        v5 = 0x8000000000000000;
    }
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    a0->field_18 = v5;
    a0->field_20 = *((int128_t *)&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
    core::ptr::drop_in_place<std::path::PathBuf>(a1[0], v11);
    return;
}
