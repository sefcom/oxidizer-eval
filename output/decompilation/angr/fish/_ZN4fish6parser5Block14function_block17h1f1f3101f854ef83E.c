long long fish::parser::Block::function_block(unsigned long long a0[3], struct_0 *a1, struct_1 *a2, char a3)
{
    int v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x58]
    char v3;  // [bp-0x54]
    char v4;  // [bp-0x53]
    int v5;  // [bp-0x48]
    unsigned long v6;  // [bp-0x38]
    int v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x20]
    unsigned long long v10;  // rax

    v3 = a3;
    v4 = 0;
    *((uint128_t *)&v0) = 0;
    v2 = 0;
    v6 = a1->field_10;
    *((uint128_t *)&v5) = a1->field_0;
    *((uint128_t *)&v7) = a2->field_0;
    v8 = a2->field_10;
    v10 = v5.new();
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<fish::parser::BlockData>>>(0);
    v0 = v10;
    a0[2] = *((long long *)&v2);
    a0[0] = v0;
    a0[1] = v1;
    return a0;
}
