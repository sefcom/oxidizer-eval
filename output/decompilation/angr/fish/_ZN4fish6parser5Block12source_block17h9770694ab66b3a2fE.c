long long fish::parser::Block::source_block(unsigned long long a0[3], unsigned long long a1)
{
    int v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x48]
    unsigned short v3;  // [bp-0x44]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax

    v3 = 10;
    *((uint128_t *)&v0) = 0;
    v2 = 0;
    v5 = a1;
    v4 = 9223372036854775809;
    v7 = v4.new();
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<fish::parser::BlockData>>>(0);
    v0 = v7;
    a0[2] = *((long long *)&v2);
    a0[0] = v0;
    a0[1] = v1;
    return a0;
}
