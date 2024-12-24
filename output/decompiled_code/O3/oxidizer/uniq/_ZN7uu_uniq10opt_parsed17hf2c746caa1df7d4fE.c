fn uu_uniq::opt_parsed(a0: &u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xd0], Other Possible Types: Result<struct8, struct1>
    let v1: i8;  // [bp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i8;  // [sp-0x78]
    let v8: i320;  // [sp-0x70], Other Possible Types: Result<struct40, struct16>
    let v9: i192;  // [sp-0x40]
    let v10: i32;  // [sp-0x28]
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // rax
    let v15: i64;  // r14
    let v16: i64;  // r15
    let v17: i64;  // rax
    let v18: i64;  // rax

    v12 = a2;
    v13 = a1;
    v2 = a1;
    v3 = a2;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a3, v13, v12);
    v14 = clap_builder::parser::error::MatchesError::unwrap(v13, v12, &v8);
    if !v14 {
        return struct8 {
            field_0: v18
        };
    }
    v15 = *((v14 + 8) as &i64);
    v16 = *((v14 + 16) as &i64);
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v15, v16);
    switch (v0) {
    case 0:
        v17 = v1;
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = v17;
        goto LABEL_4bd29f;
    case 2:
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = -1;
LABEL_4bd29f:
        v18 = 0;
        break;
    default:
        v4 = 0;
        v5 = v15;
        v6 = v16;
        v7 = 0;
        v9 = format!("Invalid argument for {:?}: {:?}", &v2, &v4);
        v10 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
        *((a0 + 16) as &&i64) = &g_531090;
        v18 = 1;
        break;
    }
    return struct8 {
        field_0: v18
    };
}
