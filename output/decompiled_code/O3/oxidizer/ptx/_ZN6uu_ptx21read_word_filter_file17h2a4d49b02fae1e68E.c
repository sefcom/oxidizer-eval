fn uu_ptx::read_word_filter_file(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x108], Other Possible Types: Result<struct4, struct8>, struct48
    let v1: i128;  // [sp-0xf8]
    let v2: i128;  // [sp-0xe8]
    let v3: struct16;  // [bp-0xd8], Other Possible Types: i384
    let v4: i128;  // [sp-0xc8]
    let v5: i128;  // [sp-0xb8]
    let v6: Option<Result<struct24, struct16>>;  // [sp-0xa8], Other Possible Types: i192
    let v7: struct24;  // [bp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: struct44;  // [sp-0x78], Other Possible Types: i352
    let v10: i192;  // [sp-0x48], Other Possible Types: struct24
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v19: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v12 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    if !v12 {
        core::option::expect_failed(); /* do not return */
    }
    v10 = <alloc::string::String as core::clone::Clone>::clone(v12);
    v0 = std::fs::File::open(&v10, v13);
    match v0 {
        Err(v14) => {
            return struct16 {
                field_0: 0
                field_8: v14
            };
        },
        Ok(_) => {
            v9 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v15, v13);
            v3 = v0;
            v2 = v9;
            v1 = *((&v9 as &char + 16) as &i128);
            v0 = v9;
            loop {
                v6 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0, v16);
                v17 = v6;
                if v17 == 9223372036854775809 {
                    v14 = a0;
                    *((v14 + 32) as &i128) = v5;
                    *((v14 + 16) as &i128) = v4;
                    *(v14 as &struct16) = v3;
                    return v14;
                } else if v17 != 0x8000000000000000 {
                    v7 = struct24 {
                        field_0: v17
                        field_8: v18
                        field_16: *((&v6 as &char + 16) as &i64)
                    };
                    v3 = hashbrown::map::HashMap<K,V,S,A>::insert(&v7);
                } else {
                    v19 = a0;
                    *((v19 + 8) as &i64) = v8;
                    *(v19 as &i64) = 0;
                    return v14;
                }
            }
        },
    }
}
