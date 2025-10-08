fn uu_stdbuf::check_option(a0: i64, a1: u64, a2: void*, a3: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x50], Other Possible Types: struct32
    let v2: void*;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v2 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    if !v2 {
        *((a0 + 8) as &i64) = 0;
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2[8] as i64, v2[16] as i64, "L") {
        v0 = uucore::features::parser::parse_size::parse_size_u64(v2[8] as i64, v2[16] as i64);
        return core::result::Result<T,E>::map_or_else(a0, &v0);
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "input") {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: 1
        };
    } else {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "line buffering stdin is meaningless");
    }
}
