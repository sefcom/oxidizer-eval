long long uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(struct_0 *a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    char v2;  // [sp-0x28]
    unsigned int v3;  // [bp-0x27]
    unsigned int v4;  // [sp-0x24]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
    char v7;  // [bp-0x10]
    char v8;  // [bp-0xf]
    char v9;  // [bp-0xc]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    char v13;  // cl
    unsigned long long v14;  // rax

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h7739c2ca57f426c6(&v5, a1 + 24);
    v11 = *((long long *)&v5);
    v12 = *((long long *)&v6);
    v13 = v7;
    if (v0 == 0x8000000000000000)
    {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v2;
        v14 = 5;
    }
    else
    {
        v4 = *((int *)&v9);
        v3 = *((int *)&v8);
        v0 = v11;
        v1 = v12;
        v2 = v13;
        ::0x4d9540::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::ha04eda48ed707972(&v0);
        v14 = 8;
    }
    a0->field_0 = v14;
    return v14;
}
