fn uu_split::strategy::Strategy::from::get_and_parse(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Option<struct40> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x78]
    let v1: alloc::string::String;  // [bp-0x70]
    let v2: u128;  // [bp-0x68]
    let v3: u64;  // [bp-0x58]
    let v4: u8;  // [bp-0x50]
    let v5: i8;  // [bp-0x48]
    let v6: i64;  // rax
    let v7: i64;  // rdi
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, a0, a1, a2);
    v6 = clap_builder::parser::error::MatchesError::unwrap(a1, a2, &v0);
    if !v6 {
        core::option::unwrap_failed(); /* do not return */
    }
    uucore::parser::parse_size::parse_size_u64_max(*((v6 + 8) as &i64), *((v6 + 16) as &i64), a2);
    if *(&v4 as &i32) != 3 {
        core::ops::function::FnOnce::call_once(&v0, a4, &v4);
        *((v8 + 32) as &u64) = v3;
        *((v8 + 16) as &u128) = v2;
        *(v8 as &i128) = *(&v0 as &i128);
        return;
    } else if *(&v5 as &i64) {
        a3(v7 + 8);
        *(v7 as &i64) = 4;
        return;
    } else {
        v1 = <alloc::string::String as core::clone::Clone>::clone(v6);
        v0 = 1;
        a4(v9, &v0);
        return;
    }
}
