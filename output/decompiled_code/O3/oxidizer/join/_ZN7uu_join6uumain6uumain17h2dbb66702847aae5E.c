fn uu_join::uumain::uumain() -> u32 {
    let v0: i64;  // [sp-0x560]
    let v1: i64;  // [sp-0x558]
    let v2: i64;  // [sp-0x550]
    let v3: i128;  // [sp-0x548]
    let v4: i128;  // [sp-0x538]
    let v5: i128;  // [sp-0x528]
    let v6: i128;  // [sp-0x518]
    let v7: i64;  // [sp-0x508]
    let v8: i64;  // [sp-0x4e8], Other Possible Types: struct56
    let v9: i64;  // [sp-0x4e0]
    let v10: i768;  // [sp-0x450], Other Possible Types: Result<struct96, struct24>, struct712, struct28
    let v11: i64;  // [sp-0x440]
    let v12: i8;  // [bp-0x170], Other Possible Types: struct24
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i64;  // rdi
    let v23: i64;  // rbx
    let v24: i64;  // r15
    let v25: i64;  // r12

    v10 = uu_join::uu_app(v17, v18);
    clap_builder::builder::command::Command::try_get_matches_from(&v12, &v10, v19, v17);
    if v8 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        goto LABEL_475754;
    }
    v8 = struct56 {
        field_0: v20
        field_8: v19
        field_16: v13
        field_32: v14
        field_48: v15
    };
    v10 = uu_join::parse_settings(&v8);
    match v10 {
        Ok(_) => {
            v7 = *((&v10 as &char + 88) as &i64);
            v6 = *((&v10 as &char + 72) as &i128);
            v5 = *((&v10 as &char + 56) as &i128);
            v4 = *((&v10 as &char + 40) as &i128);
            v3 = *((&v10 as &char + 24) as &i128);
            v0 = v10;
            v1 = *((&v10 as &char + 8) as &i64);
            v2 = v11;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file1");
            v23 = clap_builder::parser::error::MatchesError::unwrap("file1", &v10);
            if !v23 {
                goto LABEL_47577f;
            } else {
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file2");
                v24 = clap_builder::parser::error::MatchesError::unwrap("file2", &v10);
                if !v24 {
LABEL_47577f:
                    core::option::unwrap_failed(); /* do not return */
                } else if !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v23 + 8) as &i64), *((v23 + 16) as &i64), "-") as i8) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v24 + 8) as &i64), *((v24 + 16) as &i64), "-") as i8) {
                    v25 = 0x8000000000000000 ^ *((&v4 as &char + 8) as &i64);
                    if v25 >= 4 {
                        v25 = 1;
                    }
                    goto (*((4240936 + vvar_52{reg 16} * 4) as &i32) + 4240936) as i64;
                } else {
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v10 = struct28 {
                        field_0: v12
                        field_16: *((&v12 as &char + 16) as &i64)
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v10);
                }
            }
        },
        Err(_) => {
LABEL_475754:
        },
    }
    return;
}
