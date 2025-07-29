long long uu_mv::hardlink::create_hardlink_context(uint128_t a0[8])
{
    int v0;  // [bp-0x88], Other Possible Types: char
    int v1;  // [bp-0x78]
    int v2;  // [bp-0x68]
    int v3;  // [bp-0x58], Other Possible Types: char
    int v4;  // [bp-0x48]
    int v5;  // [bp-0x38]
    int v6;  // [bp-0x28]
    char v7;  // [bp-0x18]

    v0.new();
    v3.new();
    *((void*)&a0[2]) = v2;
    *((void*)&a0[1]) = v1;
    *((void*)&a0[0]) = v0;
    *((void*)&a0[3]) = v3;
    *((void*)&a0[4]) = v4;
    *((void*)&a0[5]) = v5;
    *((void*)&a0[6]) = v6;
    a0[7] = *((int128_t *)&v7);
    return a0;
}
