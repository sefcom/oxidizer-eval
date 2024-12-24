fn uu_pr::parse_usize(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x60]
    let v1: i64;  // [sp-0x58]
    let v2: i384;  // [sp-0x50], Other Possible Types: struct48, Result<struct40, struct16>
    let v4: i64;  // rax

    v0 = a2;
    v1 = a3;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v4 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v2);
    if !v4 {
        return struct8 {
            field_0: 9223372036854775814
        };
    }
    v2 = uu_pr::parse_usize::{{closure}}(&v0, v4);
    return core::ops::function::FnOnce::call_once(a0, &v2);
}
