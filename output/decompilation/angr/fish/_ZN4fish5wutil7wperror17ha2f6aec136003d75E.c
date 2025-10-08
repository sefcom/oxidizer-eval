void fish::wutil::wperror(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x18]

    fish::common::wcs2osstring(&v0, a0, a1);
    v3.from_utf8_lossy(v1, v2);
    fish::wutil::perror(v4, *((long long *)&v5));
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return;
}
