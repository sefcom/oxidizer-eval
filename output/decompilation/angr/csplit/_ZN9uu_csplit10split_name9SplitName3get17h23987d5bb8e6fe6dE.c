long long uu_csplit::split_name::SplitName::get(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    int v6;  // [bp-0x38], Other Possible Types: char
    char v7;  // [bp-0x28]

    v0.clone(a1);
    a1 + 24.fmt(&v0, a2).unwrap();
    v3.from_utf8_lossy(v1, v2);
    v6.to_vec(v4, v5);
    a0->field_10 = *((long long *)&v7);
    *((void*)&a0->field_0) = v6;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
    ::0x5a1850::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
    return a0;
}
