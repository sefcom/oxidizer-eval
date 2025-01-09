fn uu_date::parse_date(a0: &Result<struct48, struct16>, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x80]
    let v2: i192;  // [sp-0x68]
    let v3: i384;  // [sp-0x50], Other Possible Types: struct48
    let v5: i64;  // r15
    let v6: i64;  // r12
    let v7: i64;  // rdx
    let v8: i128;  // xmm0
    let v9: i128;  // xmm1

    v5 = *((a1 + 8) as &i64);
    v6 = *((a1 + 16) as &i64);
    parse_datetime::parse_datetime(&v0, <alloc::string::String as core::convert::AsRef<str>>::as_ref(v5, v6), v7);
    if v0 != 9223372036854775810 {
        v2 = v0;
        v3 = uu_date::parse_date::{{closure}}(v5, v6, &v2);
        v8 = v3;
        v9 = *((&v3 as &char + 16) as &i128);
        return Ok(struct48 {
            field_0: v8
            field_16: v9
            field_32: *((&v3 as &char + 32) as &i128)
        });
    }
    return Err(struct16 {
        field_0: v1
    });
}
