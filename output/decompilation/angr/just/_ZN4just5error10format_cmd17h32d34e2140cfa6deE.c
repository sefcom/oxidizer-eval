char just::error::format_cmd(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    int v3;  // [bp-0x30], Other Possible Types: char
    char v4;  // [bp-0x20]

    v3.chain(a1, a2, a3);
    v0.collect(&v3);
    alloc::str::join_generic_copy(&v3, v1, v2, " [private]\nexport ", 1);
    a0->field_10 = *((long long *)&v4);
    *((void*)&a0->field_0) = v3;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
}
