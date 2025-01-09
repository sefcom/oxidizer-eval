fn uu_ptx::read_word_filter_file(a0: &Result<struct48, struct8>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x108], Other Possible Types: Result<struct4, struct8>, struct48
    let v1: i128;  // [sp-0xf8]
    let v2: i128;  // [sp-0xe8]
    let v3: struct16;  // [sp-0xd8], Other Possible Types: struct48
    let v4: Option<Result<struct24, struct8>>;  // [sp-0xa8], Other Possible Types: i200
    let v5: struct24;  // [bp-0x90]
    let v7: struct44;  // [sp-0x78], Other Possible Types: i352
    let v8: struct24;  // [sp-0x48], Other Possible Types: i192
    let v10: i64;  // rax
    let v14: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, a2, a3);
    v10 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, &v0);
    if !v10 {
        core::option::expect_failed("parsing options failed!", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    v8 = <alloc::string::String as core::clone::Clone>::clone(v10);
    v0 = std::fs::File::open(&v8) as u64;
    return Err(struct8 {
        field_0: v11
    });
    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32));
    v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v3 = v0;
    v2 = v7;
    v1 = *((&v7 as &char + 16) as &i128);
    v0 = v7;
    loop {
        v4 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0);
        if v4 == 9223372036854775809 {
            break;
        }
        return Err(struct8 {
            field_0: v6
        });
        v5 = struct24 {
            field_0: v12
            field_8: v13
            field_16: *((&v4 as &char + 16) as &i64)
        };
        v3 = hashbrown::map::HashMap<K,V,S,A>::insert(&v5);
    }
    v14 = a0;
    return v3;
}
