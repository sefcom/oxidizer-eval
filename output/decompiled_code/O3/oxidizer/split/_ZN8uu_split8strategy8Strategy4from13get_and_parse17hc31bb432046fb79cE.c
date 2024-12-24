fn uu_split::strategy::Strategy::from::get_and_parse(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78], Other Possible Types: Result<struct40, struct16>
    let v1: struct24;  // [sp-0x70]
    let v2: Result<struct32, struct16>;  // [sp-0x50], Other Possible Types: i256
    let v4: i64;  // rax
    let v5: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v4 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    if !v4 {
        core::option::unwrap_failed(); /* do not return */
    }
    v2 = uucore::parser::parse_size::parse_size_u64_max(*((v4 + 8) as &i64), *((v4 + 16) as &i64));
    if v2 != 3 {
        core::ops::function::FnOnce::call_once(&v0, a5, &v2);
        v5 = *((&v0 as &char + 32) as &i64);
        *((a0 + 32) as &i64) = v5;
        *((a0 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
        *(a0 as &i320) = v0;
        return v5;
    } else if !*((&v2 as &char + 8) as &i64) {
        v1 = <alloc::string::String as core::clone::Clone>::clone(v4);
        v0 = 1;
        v5 = a5();
        return v5;
    } else {
        v5 = a4();
        *(a0 as &i64) = 4;
        return v5;
    }
}
