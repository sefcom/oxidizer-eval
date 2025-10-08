long long fish::parser::Block::event_block(unsigned long long a0[3], struct_0 *a1)
{
    int v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x70]
    unsigned int v2;  // [bp-0x68]
    unsigned short v3;  // [bp-0x64]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    int v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x18]
    unsigned long long v11;  // rax

    v3 = 11;
    *((uint128_t *)&v0) = 0;
    v2 = 0;
    v4 = 1;
    v5 = 1;
    *((uint128_t *)&v6) = a1->field_0;
    *((uint128_t *)&v7) = a1->field_10;
    *((uint128_t *)&v8) = a1->field_20;
    v9 = a1->field_30;
    *((double *)&v5) = v4.new();
    v4 = 0x8000000000000000;
    v11 = v4.new();
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<fish::parser::BlockData>>>(0);
    v0 = v11;
    a0[2] = *((long long *)&v2);
    a0[0] = v0;
    a0[1] = v1;
    return a0;
}
