fn fd::filter::size::SizeFilter::from_string(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v2 = fd::filter::size::SizeFilter::parse_opt(a1, a2);
    if v2 == 3 {
        v3 = fd::filter::size::SizeFilter::from_string::{{closure}}(&v0, a1, a2);
    }
    return struct16 {
        field_0: v2
        field_8: v3
    };
}
