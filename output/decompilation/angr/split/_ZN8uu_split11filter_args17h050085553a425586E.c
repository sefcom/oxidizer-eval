long long uu_split::filter_args(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, char *a3, char *a4)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r12

    v0 = a2;
    v6 = a1[1];
    v7 = a1[2];
    core::str::converts::from_utf8(&v2, v6, v7);
    if (*((int *)&v2) == 1)
    {
        a0[0] = a1[0];
        a0[1] = v6;
        a0[2] = v7;
        return a0;
    }
    if ((char)uu_split::should_extract_obs_lines(v3, v4, *(a3), *(a4)))
        uu_split::handle_extract_obs_lines(&v2, v3, v4, v0);
    else
        v2.to_vec(v3, v4);
    v1 = v2;
    v0 = v3;
    uu_split::handle_preceding_options(v3, v4, a3, a4);
    a0[0] = v1;
    a0[1] = v0;
    a0[2] = v4;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1[0], v6);
    return a0;
}
