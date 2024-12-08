fn uu_tr::operation::Sequence::parse_octal_two_digits(a0: void*, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v2: u64;  // [sp-0x10]
    let v3: u64;  // [sp-0x8]

    v0 = &g_40bbe8;
    v1 = 8;
    v2 = 2;
    v3 = 2;
    return nom::combinator::map_opt::{{closure}}(a0, &v0, a1, a2);
}
