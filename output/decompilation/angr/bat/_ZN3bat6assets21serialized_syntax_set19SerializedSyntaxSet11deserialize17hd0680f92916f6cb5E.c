long long bat::assets::serialized_syntax_set::SerializedSyntaxSet::deserialize(void* *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    if (!((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63)))
        return bat::assets::asset_from_cache(a0, a1[1], a1[2]);
    v2 = v4;
    v1 = v5;
    bat::assets::asset_from_contents(&v0, a1[1], a1[2], "n/adata integrated in binary is never faulty, but make sure `compressed` is in sync!src/assets.rsSome referenced contexts could not be found!\n- ", 3);
    v6 = a0 + 1.expect(&v0);
    *(a0) = 0;
    return v6;
}
