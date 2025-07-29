long long uu_mv::is_empty_dir(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    unsigned int v6;  // ebx
    char v7;  // bl

    std::fs::read_dir(&v0, a0, a1);
    if (v1 == 2)
    {
        ::0x4c7470::core::ptr::drop_in_place<std::io::error::Error>(v0);
        v6 = 0;
    }
    else
    {
        v3 = v0;
        v4 = v1;
        v2 = 2;
        v2.get_or_insert_with(&(char)v3);
        v7 = (char)v2 ^ 1;
        v6 = v7;
        core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::fs::ReadDir>>(&v2);
    }
    return v6 & 0xffffff00 | v7 & 1;
}
