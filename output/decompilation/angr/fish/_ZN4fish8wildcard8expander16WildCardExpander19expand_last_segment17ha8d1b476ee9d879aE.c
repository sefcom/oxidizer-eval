long long fish::wildcard::expander::WildCardExpander::expand_last_segment(void* a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, char a8)
{
    unsigned long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5[3];  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long long v7[3];  // rdx
    unsigned long long v8;  // rax

    v6 = a0.interrupted_or_overflowed();
    if ((char)v6)
        return v6;
    v0 = a8;
    while (true)
    {
        v4 = a3.next();
        v5[0] = v7;
        if (v4 == 2 || ((char)v4 & 1))
            break;
        core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v4);
        if (!((char)(short)a0[136] & 32) || v7.is_dir())
        {
            if (((char)a0[136] & 8))
            {
                v4.to_vec(a1, a2);
                v1.add(&v4, v7[1], v7[2]);
                a0.try_add_completion_result(v2, v3, v7[1], v7[2], a4, a5, a6, a7, v7, v0);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            }
            else if ((char)fish::wildcard::wildcard_match(v7, a4, a5))
            {
                v4.to_vec(a1, a2);
                v1.add(&v4, v7[1], v7[2]);
                a0.add_expansion_result(&v1);
            }
        }
        v8 = a0.interrupted_or_overflowed();
        if ((char)v8)
            return v8;
    }
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v4);
}
