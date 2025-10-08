long long fish::wildcard::expander::WildCardExpander::expand_trailing_slash(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [bp-0x128]
    unsigned long long v1[3];  // [bp-0x120]
    unsigned long v2;  // [bp-0x110]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xf8]
    int v5;  // [bp-0xf0]
    int v6;  // [bp-0xe0]
    char v7;  // [bp-0xd0]
    int v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    char v12;  // [bp-0x88]
    int v13;  // [bp-0x78]
    int v14;  // [bp-0x68]
    char v15;  // [bp-0x58]
    int v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x38]
    unsigned long long v19;  // rax
    char v20;  // r12b
    unsigned long long v21;  // rax
    unsigned long long v22[3];  // rdx

    v19 = a0.interrupted_or_overflowed();
    if ((char)v19)
    {
        return v19;
    }
    else if (!((char)a0->field_88 & 8))
    {
        v21 = fish::wutil::waccess(a1, a2, 0);
        if ((unsigned int)v21)
            return v21;
        v3.to_vec(a1, a2);
        return a0.add_expansion_result(&v3);
    }
    else
    {
        v3.open_dir(a0, a1, a2, 0);
        if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
            return core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&v3);
        v17 = v9;
        v16 = v8;
        memcpy(&v15, &v7, 16);
        v14 = v6;
        v13 = v5;
        memcpy(&v12, &v3, 16);
        v2 = a5;
        while (true)
        {
            v0 = v12.next();
            v1[0] = v22;
            if (v0 == 2 || ((char)v0 & 1) || (char)a0.interrupted_or_overflowed())
                break;
            if ((!(v20 & 32) || v22.is_dir()) && v22[2] && !v22[1].starts_with(v22[2], 46))
            {
                v3.to_vec(a1, a2);
                v11 = (long long)v5;
                memcpy(&v10, &v3, 16);
                v3.add(&v10, v22[1], v22[2]);
                a0.try_add_completion_result(v4, (long long)v5, v22[1], v22[2], 4, 0, a3, a4, v22, v2);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
            }
            core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v0);
        }
        core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v0);
        return core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v12);
    }
}
