fn uu_uniq::opt_parsed(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i72;  // [sp-0xd0], Other Possible Types: Result<struct8, struct1>
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: i64;  // [sp-0xb0]
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: i64;  // [sp-0x80]
    let v10: i8;  // [sp-0x78]
    let v11: i64;  // [sp-0x70], Other Possible Types: Result<struct40, struct8>
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: i64;  // [sp-0x58]
    let v15: i64;  // [sp-0x50]
    let v16: i8;  // [bp-0x40]
    let v17: i32;  // [sp-0x28]
    let v19: i64;  // r14
    let v20: i64;  // r15
    let v21: i64;  // rax
    let v22: i64;  // r14
    let v23: i64;  // r15
    let v24: i64;  // rax

    v19 = a2;
    v20 = a1;
    v1 = a1;
    v2 = a2;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a3, v20, v19);
    v21 = clap_builder::parser::error::MatchesError::unwrap(v20, v19, &v11);
    if !v21 {
        return struct16 {
            field_0: 0
        };
    }
    v22 = *((v21 + 8) as &i64);
    v23 = *((v21 + 16) as &i64);
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v22, v23);
    match (v0) {
        0 => {
            v24 = v0;
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &i64) = v24;
            goto LABEL_4bd32f;
        }
        2 => {
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &i64) = -1;
LABEL_4bd32f:
            break;
        }
        _ => {
            v7 = 0;
            v8 = v22;
            v9 = v23;
            v10 = 0;
            v3 = &v1;
            v4 = <&T as core::fmt::Display>::fmt;
            v5 = &v7;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v11 = "Invalid argument for ";
            v12 = 2;
            v15 = 0;
            v13 = &v3;
            v14 = 2;
            core::option::Option<T>::map_or_else();
            v17 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v16);
            *((a0 + 16) as &&i64) = &g_5304c0;
            break;
        }
    }
    return struct8 {
        field_0: v25
    };
}
