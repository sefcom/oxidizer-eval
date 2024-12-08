fn uu_ptx::read_word_filter_file(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x108], Other Possible Types: Result<struct40, struct16>, struct48
    let v1: i128;  // [sp-0xd8], Other Possible Types: struct16
    let v2: i128;  // [sp-0xc8]
    let v3: i128;  // [sp-0xb8]
    let v4: i192;  // [sp-0xa8], Other Possible Types: Option<Result<struct24, struct16>>
    let v5: struct24;  // [bp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: struct44;  // [sp-0x78], Other Possible Types: i352
    let v8: struct24;  // [sp-0x48], Other Possible Types: i192
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v17: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v10 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    if !v10 {
        core::option::expect_failed(); /* do not return */
    }
    v8 = <alloc::string::String as core::clone::Clone>::clone(v10);
    v0 = std::fs::File::open(&v8, v11);
    match v0 {
        Err(_) => {
            v12 = *((&v0 as &char + 8) as &i64);
            return struct16 {
                field_0: 0
                field_8: v12
            };
        },
        Ok(_) => {
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v13, v11);
            v3 = v0.field_32;
            v2 = v0.field_16;
            v1 = v0;
            v0.field_32 = (stack_base)[88] as i128;
            v0.field_16 = (stack_base)[104] as i128;
            v0 = v7;
            loop {
                v4 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0, v14);
                v15 = v4;
                if v15 == 9223372036854775809 {
                    v12 = a0;
                    *((v12 + 32) as &i128) = v3;
                    *((v12 + 16) as &i128) = v2;
                    *(v12 as &struct16) = v1;
                    return v12;
                } else if v15 != 0x8000000000000000 {
                    v5 = struct24 {
                        field_0: v15
                        field_8: v16
                        field_16: *((&v4 as &char + 16) as &i64)
                    };
                    v1 = hashbrown::map::HashMap<K,V,S,A>::insert(&v5);
                } else {
                    v17 = a0;
                    *((v17 + 8) as &i64) = v6;
                    *(v17 as &i64) = 0;
                    return v12;
                }
            }
        },
    }
}
