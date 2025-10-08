fn uu_uniq::opt_parsed(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xd0]
    let v1: u8;  // [bp-0xcf]
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u64;  // [bp-0xb8]
    let v5: void*;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u8;  // [bp-0x78]
    let v9: Result<struct40, struct16>;  // [bp-0x70]
    let v10: alloc::string::String;  // [bp-0x40]
    let v13: i64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v3 = a1;
    v4 = a2;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a3, a1, a2);
    v13 = clap_builder::parser::error::MatchesError::unwrap(a1, a2, &v9);
    if !v13 {
        return struct16 {
            field_0: 0
        };
    }
    v16 = core::num::<impl usize>::from_ascii_radix(&v0, *((v13 + 8) as &i64), *((v13 + 16) as &i64));
    if !v0 {
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &u64) = v2;
    } else if v1 == 2 {
        return struct24 {
            field_0: v14
            field_8: 1
            field_16: -1
        };
    } else {
        v5 = 0;
        v6 = *((v13 + 8) as &i64);
        v7 = *((v13 + 16) as &i64);
        v8 = 0;
        v10 = format!("Invalid argument for {}: {}", &v3, &v5);
        *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(&v10) as u64;
        *((a0 + 16) as &&u8) = &g_4f5890;
        v15 = 1;
    }
}
