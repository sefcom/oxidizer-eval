long long uu_env::split_iterator::SplitIterator::skip_one(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x27]
    unsigned int v4;  // [bp-0x24]
    char v5;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0x18]
    char v7;  // [bp-0x10]
    char v8;  // [bp-0xf]
    char v9;  // [bp-0xc]

    v5.consume_one_ascii_or_all_non_ascii(a1 + 24);
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v4 = *((int *)&v9);
        v3 = *((int *)&v8);
        v0 = v5;
        v1 = v6;
        v2 = v7;
        ::0x4bdd60::core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>(&v0);
        a0->field_0 = 12;
        return 12;
    }
    a0->field_8 = v6;
    a0->field_10 = v6;
    a0->field_18 = v7;
    a0->field_0 = 11;
    return 11;
}
