void uu_csplit::split_name::SplitName::get(unsigned long long a0, unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x30]
    char v5;  // [bp-0x28]

    v0.clone(a1[1], a1[2]);
    a1 + 1.fmt(&v0, a2).unwrap();
    v3.from_utf8_lossy(v1, v2);
    a0.clone(v4, *((long long *)&v5));
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v3, v4);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
    return;
}
