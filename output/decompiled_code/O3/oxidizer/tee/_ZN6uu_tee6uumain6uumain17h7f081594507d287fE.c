fn uu_tee::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x398]
    let v1: i64;  // [sp-0x390]
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: i128;  // [sp-0x368]
    let v6: i128;  // [sp-0x358]
    let v7: i64;  // [sp-0x348]
    let v8: i512;  // [sp-0x340], Other Possible Types: Result<struct56, struct16>, struct64
    let v9: struct24;  // [sp-0x300], Other Possible Types: i192
    let v10: i448;  // [sp-0x2e8], Other Possible Types: struct64, struct56, Result<struct40, struct16>, struct712
    let v12: i64;  // rdx
    let v15: i64;  // rax
    let v17: i64;  // rax
    let v18: i64;  // r14
    let v19: i64;  // r15

    v10 = uu_tee::uu_app(a1, v12);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v10, a0, a1);
    match v8 {
        Err(_) => {
            v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v15;
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
                    field_0: v16
                    field_16: *((&v8 as &char + 16) as &i128)
                    field_32: *((&v8 as &char + 32) as &i128)
                    field_48: *((&v8 as &char + 48) as &i128)
                };
                v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v10, v12);
                v0 = v9;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-pipe-errors") as i8 {
                v10 = v0;
                vvar_360{reg 128} = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
                return v15;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, "output-error") as i8 {
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
                v17 = clap_builder::parser::error::MatchesError::unwrap("output-error", &v10);
                if !v17 {
                    v10 = v0;
                    vvar_370{reg 128} = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
                    return v15;
                }
                v18 = *((v17 + 8) as &i64);
                v19 = *((v17 + 16) as &i64);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "warn") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "warn-nopipe") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "exit") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "exit-nopipe") as i8 {
                    core::panicking::panic(); /* do not return */
                }
            }
            v10 = v0;
            v15 = (!uu_tee::tee(&v10) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v15;
        },
    }
}
