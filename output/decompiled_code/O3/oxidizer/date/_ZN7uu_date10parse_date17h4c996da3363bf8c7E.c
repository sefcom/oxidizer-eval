fn uu_date::parse_date(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x80], Other Possible Types: struct24
    let v1: i192;  // [bp-0x68]
    let v2: struct48;  // [sp-0x50], Other Possible Types: i384
    let v4: i64;  // r15
    let v5: i64;  // r12
    let v6: i64;  // rdx
    let v7: i64;  // rcx
    let v8: i64;  // r8
    let v9: i64;  // r9
    let v10: i128;  // xmm0
    let v11: i128;  // xmm1

    v4 = *((a1 + 8) as &i64);
    v5 = *((a1 + 16) as &i64);
    v0 = parse_datetime::parse_datetime(<alloc::string::String as core::convert::AsRef<str>>::as_ref(v4, v5), v6, v7, v8, v9);
    if v0 == 9223372036854775810 {
        *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v1 = v0;
        v2 = uu_date::parse_date::{{closure}}(v4, v5, &v1);
        v10 = v2;
        v11 = *((&v2 as &char + 16) as &i128);
        *((a0 + 32) as &i128) = *((&v2 as &char + 32) as &i128);
        *((a0 + 16) as &i128) = v11;
        *(a0 as &i128) = v10;
    }
    return;
}
