fn forc_crypto::keys::parse_secret::examples() -> u64 {
    let v0: u8;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v3: alloc::string::String;  // [bp-0x80], Other Possible Types: u64
    let v4: alloc::string::String;  // [bp-0x78], Other Possible Types: struct_0 *, u64
    let v5: iNone;  // [bp-0x70], Other Possible Types: alloc::string::String, u128
    let v6: u64;  // [bp-0x60]
    let v7: struct24;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: struct24;  // [bp-0x40]
    let v10: u64;  // [bp-0x30]
    let v11: Result<struct24, struct24>;  // [bp-0x28]

    v1 = "    # Parses the secret of a block production\n    forc crypto parse-secret \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v7 = core::option::Option<T>::map_or_else("    # Parses the secret of a block production\n    forc crypto parse-secret \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n", &v1);
    v1 = "    # Parses the secret of a peering\n    forc crypto parse-secret -k peering \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v9 = core::option::Option<T>::map_or_else("    # Parses the secret of a peering\n    forc crypto parse-secret -k peering \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n", &v1);
    v1 = v7.field_0;
    v4 = v8;
    v5 = v9.field_0;
    v6 = v10;
    v11 = alloc::str::join_generic_copy(&v1, 2);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v11);
}
