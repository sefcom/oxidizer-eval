fn uu_pr::parse_usize(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: Result<struct40, struct16>;  // [bp-0x80], Other Possible Types: struct48
    let v3: struct48;  // [bp-0x50]
    let v4: struct48;  // [bp-0x50]
    let v6: u64;  // rax

    v0 = a2;
    v1 = a3;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v6 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v2);
    if !v6 {
        return struct8 {
            field_0: 9223372036854775814
        };
    }
    v3 = uu_pr::parse_usize::{{closure}}(&v0, v6);
    v2 = v4;
    return core::ops::function::FnOnce::call_once(a0, &v2) as u64;
}
