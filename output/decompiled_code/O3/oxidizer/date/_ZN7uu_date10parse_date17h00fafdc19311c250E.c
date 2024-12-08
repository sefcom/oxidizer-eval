fn uu_date::parse_date(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x50], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x38]
    let v3: i64;  // rdx
    let v4: i64;  // rcx
    let v5: i64;  // r8
    let v6: i64;  // r9

    v0 = parse_datetime::parse_datetime(<&T as core::convert::AsRef<U>>::as_ref(a1), v3, v4, v5, v6);
    if v0 == 9223372036854775810 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: *((&v0 as &char + 8) as &i128)
        };
    }
    v1 = struct24 {
        field_0: v0
        field_16: *((&v0 as &char + 16) as &i64)
    };
    return uu_date::parse_date::{{closure}}(a0, a1, &v1);
}
