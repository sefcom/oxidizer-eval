fn uu_uniq::opt_parsed(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct8, struct1>;  // [sp-0xd0]
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: i8;  // [sp-0x78]
    let v7: Result<struct40, struct8>;  // [sp-0x70]
    let v8: String;  // [sp-0x40]
    let v9: i32;  // [sp-0x28]
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // rax

    v1 = a1;
    v2 = a2;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a3, a1, a2);
    v11 = clap_builder::parser::error::MatchesError::unwrap(a1, a2, &v7);
    if !v11 {
        return struct16 {
            field_0: 0
        };
    }
    v12 = *((v11 + 8) as &i64);
    v13 = *((v11 + 16) as &i64);
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v12, v13);
    match (v0 as i8) {
        0 => {
            v14 = v0 as i64;
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &unsigned long) = v14;
            goto LABEL_4bd32f;
        }
        2 => {
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &i64) = -1;
LABEL_4bd32f:
            break;
        }
        _ => {
            v3 = 0;
            v4 = v12;
            v5 = v13;
            v6 = 0;
            v8 = format!("Invalid argument for {}: {}", &v1, &v3);
            v9 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v8);
            *((a0 + 16) as &&i64) = &g_5304c0;
            break;
        }
    }
    return struct8 {
        field_0: v15
    };
}
