fn uu_pr::parse_usize(a0: &Option<Result<struct32, struct8>>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x90]
    let v1: i64;  // [sp-0x88]
    let v2: Result<struct40, struct8>;  // [sp-0x80], Other Possible Types: struct48
    let v3: struct48;  // [sp-0x50]
    let v5: i64;  // rax
    let v6: i64;  // rax

    v0 = a2;
    v1 = a3;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v5 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v2);
    if !v5 {
        v6 = 9223372036854775814;
        return struct8 {
            field_0: 9223372036854775814
        };
    }
    v3 = uu_pr::parse_usize::{{closure}}(&v0, v5);
    v2 = v3;
    v6 = core::ops::function::FnOnce::call_once(a0, &v2);
}
