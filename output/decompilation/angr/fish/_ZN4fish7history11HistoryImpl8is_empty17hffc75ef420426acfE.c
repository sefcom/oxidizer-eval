long long fish::history::HistoryImpl::is_empty(struct_0 *a0)
{
    char v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x68]
    unsigned int v7;  // ebx

    if (a0->field_50)
    {
        return 0;
    }
    else if (a0->field_fd)
    {
        return v7 & 0xffffff00 | !a0->field_68;
    }
    else
    {
        v3.history_file_path(a0->field_30, *((long long *)&a0->field_38));
        if (*((long long *)&v3) >= 9223372036854775810)
        {
            v2 = *((long long *)&v4);
            memcpy(&v0, &v3, 16);
            fish::wutil::wstat(&v3, v1, *((long long *)&v4));
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
            return v7 & 0xffffff00 | !*((long long *)&v5) | *((int *)&v3) == 2;
        }
        core::ptr::drop_in_place<core::result::Result<core::option::Option<widestring::utfstring::Utf32String>,std::io::error::Error>>(&v3);
        return v7 & 0xffffff00 | 1;
    }
}
