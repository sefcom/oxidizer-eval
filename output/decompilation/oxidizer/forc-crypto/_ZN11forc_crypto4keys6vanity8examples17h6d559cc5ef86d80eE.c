fn forc_crypto::keys::vanity::examples() -> u64 {
    let v0: u8;  // [bp-0x120]
    let v1: struct16;  // [bp-0x118], Other Possible Types: u64
    let v2: u128;  // [bp-0x118]
    let v3: alloc::string::String;  // [bp-0x110], Other Possible Types: core::fmt::Arguments, struct16, u64
    let v4: core::fmt::rt::Argument;  // [bp-0x108], Other Possible Types: struct16, struct32, struct_0 *, u64
    let v5: iNone;  // [bp-0x100], Other Possible Types: core::fmt::Arguments, core::fmt::rt::Argument, u128
    let v6: struct16;  // [bp-0xf0]
    let v7: iNone;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xd8]
    let v9: iNone;  // [bp-0xd0]
    let v10: struct32;  // [bp-0xc0]
    let v11: struct24;  // [bp-0xb0]
    let v12: u64;  // [bp-0xa0]
    let v13: core::fmt::rt::Argument;  // [bp-0x98]
    let v14: struct16;  // [bp-0x88]
    let v15: Result<struct24, struct24>;  // [bp-0x78]
    let v16: struct24;  // [bp-0x68]
    let v17: struct24;  // [bp-0x58]
    let v18: u64;  // [bp-0x48]
    let v19: struct24;  // [bp-0x40]
    let v20: struct32;  // [bp-0x30]
    let v21: Result<struct24, struct24>;  // [bp-0x28]

    v1 = "    # Generate a checksummed vanity address with a given prefix\n    forc crypto vanity --starts-with \"aaa\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v17 = core::option::Option<T>::map_or_else("    # Generate a checksummed vanity address with a given prefix\n    forc crypto vanity --starts-with \"aaa\"\n\n", &v1);
    v1 = "    # Generate a checksummed vanity address with a given suffix\n    forc crypto vanity --ends-with \"aaa\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v11 = core::option::Option<T>::map_or_else("    # Generate a checksummed vanity address with a given suffix\n    forc crypto vanity --ends-with \"aaa\"\n\n", &v1);
    v13 = v11.field_0;
    v14 = v12;
    v1 = "    # Generate a checksummed vanity address with a given prefix and suffix\n    forc crypto vanity --starts-with \"00\" --ends-with \"ff\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v11 = core::option::Option<T>::map_or_else("    # Generate a checksummed vanity address with a given prefix and suffix\n    forc crypto vanity --starts-with \"00\" --ends-with \"ff\"\n\n", &v1);
    v15 = v11.field_0;
    v16 = v12;
    v2 = "    # Generate a checksummed vanity address with a given regex pattern\n    forc crypto vanity --regex \"^00.*ff$\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v19 = core::option::Option<T>::map_or_else("    # Generate a checksummed vanity address with a given regex pattern\n    forc crypto vanity --regex \"^00.*ff$\"\n\n", &v2);
    v2 = v17.field_0;
    v4 = v18;
    v5 = v13;
    v6 = v14;
    v7 = v15;
    v8 = v16;
    v9 = v19.field_0;
    v10 = v20;
    v21 = alloc::str::join_generic_copy(&v2, 4);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v21);
}
