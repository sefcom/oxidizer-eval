long long fish::io::BufferedOutputStream::append_with_separation(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax

    fish::common::wcs2osstring(&v0, a1, a2);
    v4 = a0.append(v1, *((long long *)&v2), a3);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return v4;
}
