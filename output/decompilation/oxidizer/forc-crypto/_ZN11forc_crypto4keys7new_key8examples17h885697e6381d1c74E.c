fn forc_crypto::keys::new_key::examples() -> u64 {
    let v0: u8;  // [bp-0xe0]
    let v1: alloc::string::String;  // [bp-0xd8], Other Possible Types: u64
    let v2: u128;  // [bp-0xd8]
    let v3: struct32;  // [bp-0xd0], Other Possible Types: u64
    let v4: core::fmt::Arguments;  // [bp-0xc8], Other Possible Types: core::fmt::rt::Argument, struct_0 *, struct_1 *
    let v5: core::fmt::rt::Argument;  // [bp-0xc0], Other Possible Types: u128
    let v6: core::fmt::rt::Argument;  // [bp-0xb0]
    let v7: core::fmt::rt::Argument;  // [bp-0xa8]
    let v8: struct16;  // [bp-0x98]
    let v9: iNone;  // [bp-0x88]
    let v10: alloc::string::String;  // [bp-0x78]
    let v11: struct24;  // [bp-0x70]
    let v12: core::fmt::rt::Argument;  // [bp-0x60]
    let v13: struct24;  // [bp-0x58]
    let v14: alloc::string::String;  // [bp-0x48]
    let v15: struct24;  // [bp-0x40]
    let v16: struct16;  // [bp-0x30]
    let v17: Result<struct24, struct24>;  // [bp-0x28]

    v1 = "    # Creates a new key default for block production\n    forc crypto new-key\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v11 = core::option::Option<T>::map_or_else("    # Creates a new key default for block production\n    forc crypto new-key\n\n", &v1);
    v1 = "    # Creates a new key for peering\n    forc crypto new-key -k peering\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v13 = core::option::Option<T>::map_or_else("    # Creates a new key for peering\n    forc crypto new-key -k peering\n\n", &v1);
    v9 = v13.field_0;
    v10 = v14;
    v1 = "    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v15 = core::option::Option<T>::map_or_else("    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\n", &v1);
    v2 = v11.field_0;
    v4 = v12;
    v5 = v9;
    v6 = v10;
    v7 = v15.field_0;
    v8 = v16;
    v17 = alloc::str::join_generic_copy(&v1, 3);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v17);
}
