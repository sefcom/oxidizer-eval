fn uu_date::parse_date(a0: i64, a1: void*) -> void {
    let v0: struct24;  // [bp-0x68]
    let v1: u128;  // [bp-0x60]
    let v2: struct48;  // [bp-0x50]
    let v3: u128;  // [bp-0x40]
    let v6: u64;  // rdx

    v0 = parse_datetime::parse_datetime(<alloc::string::String as core::convert::AsRef<str>>::as_ref(a1[8] as i64, a1[16] as i64), v6);
    if v0.field_0 != 9223372036854775810 {
        v2 = uu_date::parse_date::{{closure}}(a1[8] as i64, a1[16] as i64, &v0);
        return struct48 {
            field_0: v2.field_0
            field_16: v3
            field_32: *((&v2.field_24 as &char + 8) as &i128)
        };
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v1
    };
}
