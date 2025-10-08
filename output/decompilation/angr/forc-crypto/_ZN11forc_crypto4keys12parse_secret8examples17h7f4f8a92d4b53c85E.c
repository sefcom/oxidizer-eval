long long forc_crypto::keys::parse_secret::examples()
{
    char v0;  // [bp-0x90]
    int v1;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x80]
    char *v4;  // [bp-0x78], Other Possible Types: unsigned long long
    uint128_t v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    int v7;  // [bp-0x58], Other Possible Types: char
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x30]
    char v11;  // [bp-0x28]
    unsigned long long v13;  // rax

    v1 = &g_a2f2d8;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v7.map_or_else("    # Parses the secret of a block production\n    forc crypto parse-secret \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n    # Parses the secret of a peering\n    forc crypto parse-secret -k peering \"f5204427d0ab9a311266c96a377f7c329cb", 143, &v1);
    *((unsigned long long **)&v1) = &g_a2f2e8;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v9.map_or_else("    # Parses the secret of a peering\n    forc crypto parse-secret -k peering \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\nThe following required argument was not provided: secretSECRETParses a private key to view the associated publi", 145, &(unsigned long long)v1);
    v1 = v7;
    v4 = v8;
    memcpy(&v5, &v9, 16);
    v6 = v10;
    alloc::str::join_generic_copy(&v11, &(unsigned long long)v1, 2);
    v13 = v11.into_boxed_slice();
    core::ptr::drop_in_place<forc_crypto::keys::vanity::HexMatcher>(&(unsigned long long)v1);
    return v13;
}
