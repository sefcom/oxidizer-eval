fn uu_tee::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388]
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: i128;  // [sp-0x368]
    let v6: i128;  // [sp-0x358]
    let v7: i64;  // [sp-0x348]
    let v8: i448;  // [sp-0x340], Other Possible Types: Result<struct56, struct16>, struct64
    let v9: struct24;  // [sp-0x300], Other Possible Types: i192
    let v10: i448;  // [sp-0x2e8], Other Possible Types: struct56, Result<struct40, struct16>, struct712, struct64
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v16: i64;  // rax
    let v18: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r14
    let v22: i64;  // r15

    v10 = uu_tee::uu_app(a1, a2);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v10, a0, a1, v12, v13);
    match v8 {
        Err(_) => {
            v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v16;
        },
        Ok(_) => {
            v7 = *((&v8 as &char + 48) as &i64);
            v6 = *((&v8 as &char + 32) as &i128);
            v5 = *((&v8 as &char + 16) as &i128);
            v3 = v8;
            v4 = *((&v8 as &char + 8) as &i64);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "append");
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-interrupts");
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
            v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v10);
            if !v8 {
                v0 = 0;
                v1 = 8;
                v2 = 0;
            } else {
                v10 = struct64 {
                    field_0: v17
                    field_16: *((&v8 as &char + 16) as &i128)
                    field_32: *((&v8 as &char + 32) as &i128)
                    field_48: *((&v8 as &char + 48) as &i128)
                };
                v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v10, v18);
                v19 = v9;
                v1 = *((&v9 as &char + 8) as &i128);
                v0 = v19;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-pipe-errors") as i8 {
                v10 = v0;
                vvar_368{reg 128} = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
                return v16;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, "output-error") as i8 {
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
                v20 = clap_builder::parser::error::MatchesError::unwrap("output-error", &v10);
                if !v20 {
                    v10 = v0;
                    vvar_378{reg 128} = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
                    return v16;
                }
                v21 = *((v20 + 8) as &i64);
                v22 = *((v20 + 16) as &i64);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "warn") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "warn-nopipe") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "exit") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "exit-nopipe") as i8 {
                    core::panicking::panic(); /* do not return */
                }
            }
            v10 = v0;
            v16 = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v16;
        },
    }
}
