fn uu_date::parse_date(a0: &Result<struct48, struct16>, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x50], Other Possible Types: struct24
    let v1: i192;  // [sp-0x38], Other Possible Types: struct24
    let v3: i64;  // rdx
    let v4: i64;  // rax

    v0 = parse_datetime::parse_datetime(<&T as core::convert::AsRef<U>>::as_ref(a1), v3);
    v4 = 9223372036854775810;
    if v0 == 9223372036854775810 {
        return Err(struct16 {
            field_0: *((&v0 as &char + 8) as &i128)
        });
    }
    v1 = v0;
    v4 = uu_date::parse_date::{{closure}}(a0, a1, &v1);
}
