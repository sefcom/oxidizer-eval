fn uu_ptx::read_char_filter_file(a0: i64, a1: i64) -> u64 {
    let v0: i32;  // [bp-0x64]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: i320;  // [sp-0x48], Other Possible Types: Result<struct40, struct16>, struct48
    let v6: i64;  // rax
    let v7: i64;  // rdx
    let v8: i64;  // rax
    let v9: i128;  // xmm0
    let v10: i128;  // xmm1

    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "break-file");
    v6 = clap_builder::parser::error::MatchesError::unwrap("break-file", &v4);
    if !v6 {
        core::option::expect_failed(); /* do not return */
    }
    v4 = std::fs::File::open(v6, v7);
    match v4 {
        Err(_) => {
            v8 = *((&v4 as &char + 8) as &i64);
            return struct16 {
                field_0: 0
                field_8: v8
            };
        },
        Ok(v0) => {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if !<std::fs::File as std::io::Read>::read_to_string(&v0, &v1, v7) {
                v4 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(v2, v3 + v2);
                v9 = v4;
                v10 = *((&v4 as &char + 16) as &i128);
                *((a0 + 32) as &i128) = *((&v4 as &char + 32) as &i128);
                *((a0 + 16) as &i128) = v10;
                *(a0 as &i128) = v9;
            } else {
                *((a0 + 8) as &i64) = v7;
                *(a0 as &i64) = 0;
            }
            return v8;
        },
    }
}
