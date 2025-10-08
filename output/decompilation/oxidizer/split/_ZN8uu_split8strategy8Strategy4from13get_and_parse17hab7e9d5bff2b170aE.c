fn uu_split::strategy::Strategy::from::get_and_parse(a0: &struct40, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [bp-0xa8], Other Possible Types: u64
    let v1: alloc::string::String;  // [bp-0xa0]
    let v2: u128;  // [bp-0x98]
    let v3: Result<struct32, struct16>;  // [bp-0x78]
    let v4: struct32;  // [bp-0x78]
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x70]
    let v6: struct32;  // [bp-0x58]
    let v8: i64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v8 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    core::option::unwrap(v8);
    v3 = uucore::features::parser::parse_size::parse_size_u64_max(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
    if v3 as i32 != 4 {
        v6 = v4;
        a5(&v0, &v6);
        v10 = *((&v0 as &char + 32) as &i64);
        return struct40 {
            field_0: v0 as i128
            field_16: v2
            field_32: v10
        };
    } else if v5 {
        v9 = a4(a0 + 8) as u64;
        return struct8 {
            field_0: 4
        };
    } else {
        v1 = <alloc::string::String as core::clone::Clone>::clone(v8);
        v0 = 1;
        return a5(a0, &v0) as u64;
    }
}
