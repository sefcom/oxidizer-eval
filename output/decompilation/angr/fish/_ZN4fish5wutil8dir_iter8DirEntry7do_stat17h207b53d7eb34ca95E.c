int fish::wutil::dir_iter::DirEntry::do_stat(struct_1 *a0)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xa0]
    unsigned int v3;  // eax
    unsigned long long v4;  // rax
    char v5;  // al
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned long long v8;  // rdx

    v3 = dirfd(a0->field_18->field_10);
    if (v3 < 0)
        return v3;
    v4 = fish::common::wcs2zstring(a0->field_8, a0->field_10);
    if (fstatat(v3, v4, &v0, 0))
    {
        if ((int)errno::errno() != 40)
            v5 = 0;
        else
            v5 = 6;
    }
    else
    {
        v6 = 0xf000 & *((int *)&v1);
        a0->field_28 = 1;
        a0->field_30 = *((int128_t *)&v0);
        v7 = v6 - 0x1000;
        v5 = (v7 < 0xc000 ? *(&(&g_10e1ea0)[v7 >> 12]) : 0);
    }
    a0->field_41 = v5;
    return (unsigned int)core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v8);
}
