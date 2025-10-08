long long uu_env::string_expander::StringExpander::take_one(unsigned long long a0)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x57]
    char v4;  // [bp-0x54]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    unsigned int v8;  // [bp-0x37]
    unsigned int v9;  // [bp-0x34]
    char v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    char v12;  // [bp-0x20]

    v0.consume_one_ascii_or_all_non_ascii(a0 + 24);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v1;
    v9 = *((int *)&v4);
    v8 = *((int *)&v3);
    v5 = v0;
    v6 = v1;
    v7 = v2;
    v0.into_iter(&v5);
    v10.next(&v0);
    if (*((int *)&v10) != 1)
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v0);
    do
    {
        if (!v11)
            a0.push(*((long long *)&v12) >> 32);
        else
            a0.spec_extend(v11, *((long long *)&v12) + v11);
        v10.next(&v0);
    } while ((v10 & 1));
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v0);
}
