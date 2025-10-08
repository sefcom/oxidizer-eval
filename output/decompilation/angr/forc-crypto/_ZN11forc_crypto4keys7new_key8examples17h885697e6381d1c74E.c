long long forc_crypto::keys::new_key::examples()
{
    char v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    char *v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xc0], Other Possible Types: uint128_t
    unsigned long long v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0x98]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x60]
    int v12;  // [bp-0x58], Other Possible Types: char
    unsigned long long v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x30]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // rax

    v1 = &g_a2f2a8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v10.map_or_else("    # Creates a new key default for block production\n    forc crypto new-key\n\n    # Creates a new key for peering\n    forc crypto new-key -k peering\n\n    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\nThe following re", 78, &v1);
    v1 = &g_a2f2b8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v12.map_or_else("    # Creates a new key for peering\n    forc crypto new-key -k peering\n\n    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\nThe following required argument was not provided: key_typeKey type to generate. It can either ", 72, &v1);
    v8 = v12;
    v9 = v13;
    v1 = &g_a2f2c8;
    v2 = 1;
    v3 = &v0;
    v4 = 0;
    v14.map_or_else("    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\nThe following required argument was not provided: key_typeKey type to generate. It can either be `block-production` or `peering`Creates a new key for use with fuel-co", 90, &v1);
    memcpy(&v1, &v10, 16);
    v3 = v11;
    v4 = v8;
    v5 = v9;
    memcpy(&v6, &v14, 16);
    v7 = v15;
    alloc::str::join_generic_copy(&v16, &v1, 3);
    v18 = v16.into_boxed_slice();
    core::ptr::drop_in_place<[alloc::string::String; 3]>(&v1);
    return v18;
}
