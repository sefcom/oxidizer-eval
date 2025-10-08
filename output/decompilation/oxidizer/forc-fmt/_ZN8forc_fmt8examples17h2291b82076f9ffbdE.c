fn forc_fmt::examples() -> u64 {
    let v0: u8;  // [bp-0x188]
    let v1: struct24;  // [bp-0x180]
    let v2: u64;  // [bp-0x170]
    let v3: struct144;  // [bp-0x168], Other Possible Types: u64
    let v4: u64;  // [bp-0x160]
    let v5: i64;  // [bp-0x158], Other Possible Types: struct_1 *, struct_2 *, struct_3 *, struct_4 *, struct_5 *
    let v6: u128;  // [bp-0x150]
    let v7: iNone;  // [bp-0xd8]
    let v8: u64;  // [bp-0xc8]
    let v9: iNone;  // [bp-0xb8]
    let v10: u64;  // [bp-0xa8]
    let v11: iNone;  // [bp-0x98]
    let v12: u64;  // [bp-0x88]
    let v13: iNone;  // [bp-0x78]
    let v14: u64;  // [bp-0x68]
    let v15: struct24;  // [bp-0x58]
    let v16: u64;  // [bp-0x48]
    let v17: struct24;  // [bp-0x40]
    let v18: u64;  // [bp-0x30]
    let v19: struct24;  // [bp-0x28]

    v3 = "    # Run the formatter in check mode on the current directory\n    forc fmt --check\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v15 = core::option::Option<T>::map_or_else("    # Run the formatter in check mode on the current directory\n    forc fmt --check\n\n", &v3);
    v3 = "    # Run the formatter in check mode on the current directory with short format\n    forc fmt -c\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Run the formatter in check mode on the current directory with short format\n    forc fmt -c\n\n", &v3);
    v7 = v1.field_0;
    v8 = v2;
    v3 = "    # Run formatter against a given file\n    forc fmt --file {path}/src/main.sw\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Run formatter against a given file\n    forc fmt --file {path}/src/main.sw\n\n", &v3);
    v9 = v1.field_0;
    v10 = v2;
    v3 = "    # Run formatter against a given file with short format\n    forc fmt -f {path}/src/main.sw\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Run formatter against a given file with short format\n    forc fmt -f {path}/src/main.sw\n\n", &v3);
    v11 = v1.field_0;
    v12 = v2;
    v3 = "    # Run formatter against a given dir\n    forc fmt --path {path}\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Run formatter against a given dir\n    forc fmt --path {path}\n\n", &v3);
    v13 = v1.field_0;
    v14 = v2;
    v3 = "    # Run formatter against a given dir with short format\n    forc fmt -p {path}\n\n";
    v4 = 1;
    v5 = &v0;
    v6 = 0;
    v17 = core::option::Option<T>::map_or_else("    # Run formatter against a given dir with short format\n    forc fmt -p {path}\n\n", &v3);
    v3 = struct144 {
        field_0: v15.field_0
        field_16: v16
        field_24: v7
        field_40: v8
        field_48: v9
        field_64: v10
        field_72: v11
        field_88: v12
        field_96: v13
        field_112: v14
        field_120: v17.field_0
        field_136: v18
    };
    v19 = alloc::str::join_generic_copy(&v3);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v19);
}
