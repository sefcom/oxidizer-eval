fn uu_tee::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x390]
    let v1: u128;  // [bp-0x388]
    let v2: void*;  // [bp-0x380]
    let v3: u64;  // [bp-0x378]
    let v4: u64;  // [bp-0x370]
    let v5: u128;  // [bp-0x368]
    let v6: u128;  // [bp-0x358]
    let v7: u64;  // [bp-0x348]
    let v8: Result<struct56, struct16>;  // [bp-0x340], Other Possible Types: struct64
    let v9: u64;  // [bp-0x338]
    let v10: u128;  // [bp-0x330]
    let v11: u128;  // [bp-0x320]
    let v12: u128;  // [bp-0x310]
    let v13: struct24;  // [bp-0x300]
    let v14: u128;  // [bp-0x2f8]
    let v15: Result<struct40, struct16>;  // [bp-0x2e8], Other Possible Types: struct56, struct64, struct32, u8
    let v17: u8;  // al
    let v18: u8;  // al
    let v20: u8;  // cl
    let v21: i64;  // rax
    let v22: void*;  // r14
    let v23: u64;  // r15
    let v24: u64;  // rax
    let v25: u64;  // r14

    uu_tee::uu_app(&v15);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    match v8 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(_) => {
            v7 = *((&v8 as &char + 48) as &i64);
            v6 = v11;
            v5 = v10;
            v3 = v8 as i64;
            v4 = v9;
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "append") as i32 as i8;
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-interrupts") as i32 as i8;
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
            v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v15);
            if v8.field_0 as i64 {
                v15 = struct64 {
                    field_0: v8.field_0
                    field_16: v10
                    field_32: v11
                    field_48: v12
                };
                v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v15);
                v1 = v14;
                v0 = v13.field_0 as i64;
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-pipe-errors") as i8 {
                v20 = 4;
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, "output-error") as i8 {
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
                    v21 = clap_builder::parser::error::MatchesError::unwrap("output-error", &v15);
                    if v21 {
                        v22 = *((v21 + 8) as &i64);
                        v23 = *((v21 + 16) as &i64);
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "warn") as i8 {
                            v20 = 1;
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "warn-nopipe") as i8 {
                                v20 = 2;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "exit") as i8 {
                                    v20 = 3;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "exit-nopipe") as i8 {
                                        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                                    }
                                }
                            }
                        }
                    }
                }
            }
            v15 = struct32 {
                field_0: *(&v0 as &i128)
                field_16: v2
                field_24: v17
                field_25: v18
                field_26: v20
            };
            v15 = struct27 {
                field_0: *(&v0 as &i128)
                field_16: v2
                field_24: v17
                field_25: v18
                field_26: v20
            };
            v24 = uu_tee::tee(&v15);
            v25 = (!v24 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v25;
        },
    }
}
