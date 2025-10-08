long long uu_nohup::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x358]
    unsigned int v2;  // [bp-0x350]
    char v3;  // [bp-0x34c]
    char v4;  // [bp-0x340]
    char v5;  // [bp-0x33c]
    char v6;  // [bp-0x330]
    char v7;  // [bp-0x32c]
    unsigned long long v8;  // [bp-0x320]
    unsigned long long v9;  // [bp-0x318]
    unsigned int v10;  // [bp-0x310]
    char v11;  // [bp-0x30c]
    char v12;  // [bp-0x2fc]
    unsigned int v13;  // [bp-0x2ec]
    int v14;  // [bp-0x2e8]
    char **v15;  // [bp-0x2e0]
    char v16;  // [bp-0x2d8]
    char v17;  // [bp-0x2c8]
    char v18;  // [bp-0x2b8]
    unsigned long long v20;  // rax

    uu_nohup::uu_app(&(char)v14);
    v0.try_get_matches_from(&(char)v14, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v9.new();
    memcpy(&v11, &v3, 16);
    memcpy(&v12, &v5, 16);
    v13 = *((int *)&v7);
    v8 = v0;
    v9 = v1;
    v10 = v2;
    v20 = uu_nohup::replace_fds();
    if (v20)
    {
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
        return v20;
    }
    signal(1, 0x1);
    (char)v14.try_get_many(&v8);
    v0.unwrap(&(char)v14);
    if (!v0)
        core::option::unwrap_failed(&g_4de208); /* do not return */
    memcpy(&v18, &v6, 16);
    memcpy(&v17, &v4, 16);
    memcpy(&v16, &v2, 16);
    *((int128_t *)&v14) = *((int128_t *)&v0);
    v0.collect(&(char)v14);
    (char)v14.collect(v1, *((long long *)&v2) * 16 + v1);
    (char)v14.push();
    if (!*((long long *)&v16))
        core::panicking::panic_bounds_check(0, 0, &g_4de238); /* do not return */
    uucore::mods::error::set_exit_code(execvp(*(v15), v15) == 2 | 126);
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>((long long)v14, v15);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return 0;
}
