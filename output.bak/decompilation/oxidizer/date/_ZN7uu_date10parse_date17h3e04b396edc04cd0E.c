fn uu_date::parse_date(a0: &Result<struct48, struct16>, a1: &u64) -> u64 {
    let v0: struct24;  // [sp-0x80]
    let v1: struct24;  // [bp-0x68]
    let v2: struct48;  // [sp-0x50], Other Possible Types: i384
    let v4: i64;  // r15
    let v5: i64;  // r12
    let v6: i64;  // rdx
    let v7: i128;  // xmm0
    let v8: i128;  // xmm1

    v4 = *((a1 + 8) as &i64);
    v5 = *((a1 + 16) as &i64);
    v0 = parse_datetime::parse_datetime(<alloc::string::String as core::convert::AsRef<str>>::as_ref(v4, v5), v6);
    return Err(struct16 {
        field_0: *((&v0 as &char + 8) as &i128)
    });
    *(&v1.field_0 as &struct24) = struct24 {
        field_0: v0
        field_16: *((&v0 as &char + 16) as &i64)
    };
    v2 = uu_date::parse_date::{{closure}}(v4, v5, &v1);
    v7 = v2;
    v8 = *((&v2 as &char + 16) as &i128);
    return Ok(struct48 {
        field_0: v7
        field_16: v8
        field_32: *((&v2 as &char + 32) as &i128)
    });
}
