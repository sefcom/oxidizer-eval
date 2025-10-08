fn fd::hyperlink::PathUrl::new(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct24;  // [bp-0x28]

    v0 = fd::filesystem::absolute_path(a1, a2);
    return struct24 {
        field_0: v0.field_0
        field_8: *(&v0.field_8 as &i128)
    };
}
