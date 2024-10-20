fn uu_join::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x650], Other Possible Types: struct16, Enum, struct712
    let v1: i64;  // [sp-0x648]
    let v2: i64;  // [sp-0x640]
    let v3: i32;  // [sp-0x638]
    let v4: struct16;  // [sp-0x370]
    let v8: i64;  // [sp-0x218]
    let v9: i64;  // [sp-0x208]
    let v10: i128;  // [sp-0x200]
    let v11: i128;  // [sp-0x1f0]
    let v12: i128;  // [sp-0x1e0]
    let v13: i128;  // [sp-0x1d0]
    let v14: i64;  // [sp-0x1c0]
    let v15: struct56;  // [sp-0x80], Other Possible Types: i64
    let v16: i64;  // [sp-0x78]
    let v18: i64;  // rax
    let v21: i64;  // rbx
    let v22: i64;  // r12
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i128;  // xmm0

    v0 = uu_join::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v0, a0, a1);
    if v15 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v18;
    }
    v15 = struct56 {
        field_0: v19
        field_8: v20
        field_16: v5
        field_32: v6
        field_48: v7
    };
    v0 = uu_join::parse_settings(&v15);
    if v8 != 0x8000000000000000 {
        v14 = *((&v0 as &char + 88) as &i64);
        v13 = *((&v0 as &char + 72) as &i128);
        v12 = *((&v0 as &char + 56) as &i128);
        v11 = *((&v0 as &char + 40) as &i128);
        v10 = *((&v0 as &char + 24) as &i128);
        v8 = v0;
        v9 = v2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, &v15, &g_412804, 5);
        v21 = clap_builder::parser::error::MatchesError::unwrap(&g_412804, 5, &v0);
        if !v21 {
            goto LABEL_44654e;
        } else {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, &v15, &g_412809, 5);
            v22 = clap_builder::parser::error::MatchesError::unwrap(&g_412809, 5, &v0);
            if !v22 {
LABEL_44654e:
                core::option::unwrap_failed(); /* do not return */
            } else if !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v21 + 8) as &i64), *((v21 + 16) as &i64), &g_41280e, 1) as i8) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v22 + 8) as &i64), *((v22 + 16) as &i64), &g_41280e, 1) as i8) {
                v23 = *((&v11 as &char + 8) as &i64) ^ 0x8000000000000000;
                if v23 >= 4 {
                    v23 = 1;
                }
                goto *((4268672 + vvar_38{reg 24} * 4) as &i32) + 4268672;
            } else {
                v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(35, 0);
                v24 = v2;
                *((v24 + 16) as &i128) = 146760927701809502397250260650940309620;
                *(v24 as &i128) = 148117698967430905040467717767973597026;
                *((v24 + 31) as &i32) = 1953853550;
                v3 = 1;
                v0 = v1;
                v1 = v24;
                v2 = 35;
                v18 = __rust_alloc(32, 8);
                v25 = v0;
                *((v18 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
                *(v18 as &i128) = v25;
            }
        }
    }
    return v18;
}
