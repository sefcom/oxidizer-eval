fn uu_tee::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x398]
    let v1: i64;  // [sp-0x390]
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: i128;  // [sp-0x368]
    let v6: i128;  // [sp-0x358]
    let v7: i64;  // [sp-0x348]
    let v8: i512;  // [bp-0x340], Other Possible Types: struct64
    let v9: i8;  // [bp-0x338]
    let v10: i8;  // [bp-0x330]
    let v11: i8;  // [bp-0x320]
    let v12: i8;  // [bp-0x310]
    let v13: i192;  // [sp-0x300], Other Possible Types: struct24
    let v14: i320;  // [sp-0x2e8], Other Possible Types: struct56, Result<struct40, struct16>, struct64, struct712, struct27
    let v16: i64;  // rdx
    let v19: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // r14
    let v23: i64;  // r15

    v14 = uu_tee::uu_app(a1, v16);
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v14, a0, a1);
    if v3 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v19;
    }
    v7 = v12;
    v6 = v11;
    v5 = v10;
    v3 = v8;
    v4 = v9;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "append");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-interrupts");
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
    v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v14);
    if !v8 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v14 = struct64 {
            field_0: v20
            field_16: *((&v8 as &char + 16) as &i128)
            field_32: *((&v8 as &char + 32) as &i128)
            field_48: *((&v8 as &char + 48) as &i128)
        };
        v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v14, v16);
        v0 = v13;
        v2 = *((&v13 as &char + 16) as &i64);
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-pipe-errors") as i8 {
        v14 = struct27 {
            field_0: v0
            field_16: v2
            field_24: v24
            field_25: v24
            field_26: 4
        };
        vvar_359{reg 128} = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
        return v19;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, "output-error") as i8 {
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
        v21 = clap_builder::parser::error::MatchesError::unwrap("output-error", &v14);
        if !v21 {
            v14 = struct27 {
                field_0: v0
                field_16: v2
                field_24: v24
                field_25: v24
                field_26: 4
            };
            vvar_369{reg 128} = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v19;
        }
        v22 = *((v21 + 8) as &i64);
        v23 = *((v21 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "warn") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "warn-nopipe") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "exit") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, "exit-nopipe") as i8 {
            core::panicking::panic(); /* do not return */
        }
    }
    v14 = struct27 {
        field_0: v0
        field_16: v2
        field_24: v24
        field_25: v24
        field_26: 4
    };
    v19 = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
    return v19;
}
