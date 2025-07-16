fn uu_tr::operation::Sequence::parse_octal_two_digits(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: u256;  // [bp-0x20]

    v0 = struct32 {
        field_0: &g_415510
        field_8: 8
        field_16: 2
        field_24: 2
    };
    return nom::combinator::map_opt::{{closure}}(a0, &v0, a1, a2) as u64;
}
