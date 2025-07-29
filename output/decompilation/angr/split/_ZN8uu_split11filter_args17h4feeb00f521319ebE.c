long long uu_split::filter_args(struct_0 *a0, struct_0 *a1, unsigned long long a2, char *a3, char *a4)
{
    char v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    int v3;  // [bp-0x58], Other Possible Types: char
    unsigned long long v4;  // [bp-0x48]

    v0.try_from(*((long long *)&a1->padding_1[7]), a1->field_10);
    if ((v0 & 1))
    {
        a0->field_10 = a1->field_10;
        *((int128_t *)&a0->field_0) = *((int128_t *)&a1->field_0);
        return a0;
    }
    if ((char)uu_split::should_extract_obs_lines(v1, v2, *(a3), *(a4)))
        uu_split::handle_extract_obs_lines(&v0, v1, v2, a2);
    else
        v0.to_owned(v1, v2);
    v4 = v2;
    memcpy(&v3, &v0, 16);
    uu_split::handle_preceding_options(v1, v2, a3, a4);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    ::0x4ad990::core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1);
    return a0;
}
