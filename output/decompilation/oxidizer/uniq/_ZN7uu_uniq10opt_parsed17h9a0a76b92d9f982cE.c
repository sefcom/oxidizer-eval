fn uu_uniq::opt_parsed(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xd0]
    let v1: struct48;  // [bp-0xc8]
    let v2: u64;  // [bp-0xc0]
    let v3: u64;  // [bp-0xb8]
    let v4: void*;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u8;  // [bp-0x78]
    let v8: Result<struct40, struct16>;  // [bp-0x70]
    let v9: alloc::string::String;  // [bp-0x40]
    let v12: i64;  // rax
    let v13: i64;  // rdi
    let v14: i64;  // rdi, Other Possible Types: struct_2 *
    let v15: u64;  // rax

    v2 = a0;
    v3 = a1;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a2, a0, a1);
    v12 = clap_builder::parser::error::MatchesError::unwrap(a0, a1, &v8);
    if !v12 {
        *(v13 as &i128) = 0;
        return;
    }
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v12 + 8) as &i64), *((v12 + 16) as &i64));
    if !v0 as i8 {
        *((v14 + 8) as &i64) = 1;
        *((v14 + 16) as &struct48) = v1;
    } else if *((&v0 as &char + 1) as &i8) == 2 {
        *((v14 + 8) as &i64) = 1;
        *((v14 + 16) as &i64) = -1;
    } else {
        v4 = 0;
        v5 = *((v12 + 8) as &i64);
        v6 = *((v12 + 16) as &i64);
        v7 = 0;
        v9 = format!("Invalid argument for {}: {}", &v2, &v4);
        *((v14 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
        *((v14 + 16) as &&u8) = &g_5304c0;
        v15 = 1;
    }
    *(v14 as &u64) = v15;
    return;
}
