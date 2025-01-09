long long uu_df::table::RowFormatter::scaled_bytes::h6673754bc74912ba(unsigned long long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x10]
    unsigned long long v1;  // [sp-0x8]
    unsigned long long v3;  // rax
    unsigned long v4;  // rbx
    int v5;  // ymm1
    int v6;  // xmm1
    unsigned long v7;  // xmm0lq
    int v8;  // ymm0

    v3 = a1->field_54;
    if ((char)v3 == 2)
    {
        v1 = v4;
        v6 = InterleaveLOV(0x4530000043300000, (uint128_t)(v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | a1->field_48)) - 0x45300000000000004330000000000000;
        ceil(v7);
        v0 = (unsigned long long)((((v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000), AddV((unsigned long long)(v6 >> 64) CONCAT (unsigned long long)(v6 >> 64), v6))));
        return _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h22804fad5dd1c657(a0, &v0);
    }
    return uu_df::blocks::to_magnitude_and_suffix::hfc39cb976c1a05ed(a0, a2, 0, v3 & 4294967295);
}
