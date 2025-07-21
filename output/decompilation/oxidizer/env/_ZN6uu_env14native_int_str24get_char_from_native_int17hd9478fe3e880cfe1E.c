fn uu_env::native_int_str::get_char_from_native_int(a0: i8) -> long long {
    let v0: struct32;  // [bp-0x21], Other Possible Types: u8
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]

    v0 = struct32 {
        field_0: a0
        field_1: <UNKNOWN>
    };
    return (!v1 ? uu_env::native_int_str::get_char_from_native_int::{{closure}}(v2, *(&(&(&v0)[1].field_0)[1] as &i64)) : 0x110000);
}
