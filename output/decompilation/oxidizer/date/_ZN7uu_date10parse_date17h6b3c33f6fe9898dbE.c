fn uu_date::parse_date(a0: &Result<struct48, struct16>, a1: u32) -> u64 {
    let v0: u8;  // [bp-0x50]
    let v2: i8;  // [bp-0x40]
    let v3: u128;  // [sp-0x38]
    let v4: u64;  // [sp-0x28]
    let v6: u64;  // rdx
    let v7: u64;  // rax

    parse_datetime::parse_datetime(&v0, <&T as core::convert::AsRef<U>>::as_ref(a1), v6);
    v7 = 9223372036854775810;
    if *(&v0 as &i64) == 9223372036854775810 {
        return Err(struct16 {
            field_0: v1
        });
    }
    v4 = v2;
    v3 = *(&v0 as &i128);
    v7 = uu_date::parse_date::{{closure}}(a0, a1, &v3);
}
