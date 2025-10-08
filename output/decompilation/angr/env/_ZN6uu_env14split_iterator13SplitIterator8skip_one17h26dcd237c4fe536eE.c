long long uu_env::split_iterator::SplitIterator::skip_one(struct_0 *a0, unsigned long a1)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    char v4;  // al

    v0.consume_one_ascii_or_all_non_ascii(a1 + 24);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v1);
        a0->field_0 = 12;
        return 12;
    }
    v4 = v2;
    a0->field_8 = v1;
    a0->field_10 = v1;
    a0->field_18 = v4;
    a0->field_0 = 11;
    return 11;
}
