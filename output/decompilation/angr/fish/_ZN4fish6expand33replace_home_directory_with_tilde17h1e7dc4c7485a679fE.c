long long fish::expand::replace_home_directory_with_tilde(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, void* a4)
{
    char v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x50]

    v3.to_vec(a1, a2);
    if (v4.starts_with(v5, "/", 1))
    {
        v6.to_vec("~", 1);
        v2 = *((long long *)&v7);
        memcpy(&v0, &v6, 16);
        fish::expand::expand_tilde(&v0, a3, a4);
        if (!v2)
        {
            a0->field_10 = v5;
            a0->field_0 = *((int128_t *)&v3);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            return a0;
        }
        if (!v1.ends_with(v2, "/", 1))
            v0.push(47);
        if (v4.starts_with(v5, v1, v2))
        {
            v6.splice(&v3, 0, v2, "~", "]");
            core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v6);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    a0->field_10 = v5;
    a0->field_0 = *((int128_t *)&v3);
    return a0;
}
