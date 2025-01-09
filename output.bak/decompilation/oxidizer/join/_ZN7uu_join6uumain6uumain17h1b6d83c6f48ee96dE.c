fn uu_join::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x570]
    let v2: i64;  // [sp-0x560]
    let v3: i128;  // [sp-0x558]
    let v4: i128;  // [sp-0x548]
    let v5: i128;  // [sp-0x538]
    let v6: i128;  // [sp-0x528]
    let v7: i64;  // [sp-0x518]
    let v8: struct56;  // [sp-0x4e8]
    let v9: i64;  // [sp-0x4e0]
    let v10: i776;  // [sp-0x450], Other Possible Types: Result<struct40, struct8>, struct28, struct712
    let v11: i64;  // [sp-0x440]
    let v12: Result<struct56, struct8>;  // [sp-0x170], Other Possible Types: struct24
    let v14: i64;  // rax
    let v19: i64;  // rbx
    let v21: i64;  // r15
    let v22: i64;  // rax

    v10 = uu_join::uu_app();
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v10, a0, a1);
    match v12 {
        Err(_) => {
            v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
            return v14;
        },
        Ok(_) => {
            v8 = struct56 {
                field_0: v15
                field_8: v16
                field_16: *((&v12 as &char + 16) as &i128)
                field_32: *((&v12 as &char + 32) as &i128)
                field_48: *((&v12 as &char + 48) as &i64)
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
                    v14 = *((&v10 as &char + 8) as &i64);
                    v2 = v11;
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file1");
                    v19 = clap_builder::parser::error::MatchesError::unwrap("file1", &v10);
                    if !v19 {
                        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
                    }
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file2");
                    v21 = clap_builder::parser::error::MatchesError::unwrap("file2", &v10);
                    if !v21 {
                        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs"); /* do not return */
                    }
                    if !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v19 + 8) as &i64), *((v19 + 16) as &i64), "-") as i8) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v21 + 8) as &i64), *((v21 + 16) as &i64), "-") as i8) {
                        v22 = *((&v4 as &char + 8) as &i64) ^ 0x8000000000000000;
                        if 4 <= v22 {
                            v22 = 1;
                        }
                        goto (*((4240936 + vvar_38{reg 16} * 4) as &i32) + 4240936) as i64;
                    } else {
                        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v10 = struct28 {
                            field_0: v12
                            field_16: *((&v12 as &char + 16) as &i64)
                            field_24: 1
                        };
                        v14 = alloc::boxed::Box<T>::new(&v10);
                    }
                },
                Err(_) => {
                },
            }
            return v14;
        },
    }
}
