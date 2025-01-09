fn uu_uniq::opt_parsed(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xd0], Other Possible Types: Result<struct8, struct1>
    let v1: i8;  // [bp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v8: i64;  // [sp-0x90]
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v11: i8;  // [sp-0x78]
    let v12: i328;  // [sp-0x70], Other Possible Types: Result<struct40, struct8>
    let v13: i64;  // [sp-0x68]
    let v14: i64;  // [sp-0x60]
    let v15: i64;  // [sp-0x58]
    let v16: i64;  // [sp-0x50]
    let v17: i8;  // [bp-0x40]
    let v18: i32;  // [sp-0x28]
    let v20: i64;  // r14
    let v21: i64;  // r15
    let v22: i64;  // rax
    let v23: i64;  // r14
    let v24: i64;  // r15
    let v25: i64;  // rax

    v20 = a2;
    v21 = a1;
    v2 = a1;
    v3 = a2;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a3, v21, v20);
    v22 = clap_builder::parser::error::MatchesError::unwrap(v21, v20, &v12);
    return struct16 {
        field_0: 0
    };
    v23 = *((v22 + 8) as &i64);
    v24 = *((v22 + 16) as &i64);
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v23, v24) as u64;
    switch (v0) {
    case 0:
        v25 = v1;
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = v25;
        goto LABEL_4bd32f;
    case 2:
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = -1;
LABEL_4bd32f:
        break;
    default:
        v8 = 0;
        v9 = v23;
        v10 = v24;
        v11 = 0;
        v4 = &v2;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v8;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v12 = "Invalid argument for ";
        v13 = 2;
        v16 = 0;
        v14 = &v4;
        v15 = 2;
        core::option::Option<T>::map_or_else();
        v18 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v17);
        *((a0 + 16) as &&i64) = &g_5304c0;
        break;
    }
    return struct8 {
        field_0: v26
    };
}
