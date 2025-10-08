fn forc_fmt::help() -> long long {
    let v0: struct40;  // [bp-0xb0]
    let v1: struct24;  // [bp-0x88]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: alloc::string::String;  // [bp-0x20]
    let v5: struct24;  // [bp-0x20]
    let v7: u64;  // rdx

    v0 = struct40 {
        field_0: 0x8000000000000000
        field_8: "EXAMPLES:"
        field_24: 0
        field_32: 81604378627
    };
    v2 = forc_fmt::examples();
    v3 = v7;
    v4 = format!("{}\n{}", &v0, &v2);
    v1 = v5;
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
}
