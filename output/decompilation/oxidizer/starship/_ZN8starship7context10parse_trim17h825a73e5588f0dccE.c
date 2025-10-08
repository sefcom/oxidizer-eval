fn starship::context::parse_trim(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u8;  // [bp-0x18]
    let v5: &str;  // rax:rdx

    v5 = core::str::<impl str>::trim_matches(a1, a2, a2);
    if !v5.length {
        return struct1 {
            field_0: 2
        };
    }
    core::num::<impl core::str::traits::FromStr for i64>::from_str(&v0, v5.data_ptr, a2);
    return struct16 {
        field_0: *(&v0 as &i128)
    };
}
