fn uu_tee::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388], Other Possible Types: int
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: iNone;  // [sp-0x368]
    let v6: iNone;  // [sp-0x358]
    let v7: i64;  // [sp-0x348]
    let v8: struct64;  // [sp-0x340], Other Possible Types: char
    let v9: i8;  // [bp-0x338]
    let v10: i8;  // [bp-0x330]
    let v11: i8;  // [bp-0x320]
    let v12: i8;  // [bp-0x310]
    let v13: struct24;  // [sp-0x300]
    let v14: struct712;  // [sp-0x2e8], Other Possible Types: struct64, Result<struct40, struct8>, struct56, int
    let v15: i64;  // [sp-0x2d8]
    let v16: i8;  // [sp-0x2d0]
    let v17: i8;  // [sp-0x2cf]
    let v18: i8;  // [sp-0x2ce]
    let v22: i8;  // al
    let v23: i64;  // r14
    let v24: i8;  // al
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r14
    let v29: i64;  // r15
    let v30: i64;  // r14

    v14 = uu_tee::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v14, a0, a1);
    if v3 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v23;
    }
    v7 = *(&v12 as &i64);
    v6 = *(&v11 as &i128);
    v5 = *(&v10 as &i128);
    v3 = *(&v8 as &i64);
    v4 = *(&v9 as &i64);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "append") as i32;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-interrupts") as i32;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
    v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v14);
    if !v8.field_0 as i64 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v14 = struct64 {
            field_0: v25
            field_16: v8.field_16
            field_32: v8.field_32
            field_48: v8.field_48
        };
        v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v14);
        v26 = v13.field_0;
        *(&v1 as &i128) = *(&v13.field_8 as &i128);
        v0 = v26;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "ignore-pipe-errors") as i8 {
        vvar_356{stack -720} = v22;
        vvar_357{stack -719} = v24;
        vvar_358{stack -744} = *(&v0 as &i128);
        vvar_359{stack -728} = v2;
        vvar_360{stack -718} = 4;
        vvar_362{reg 128} = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
        return v23;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, "output-error") as i8 {
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
        v27 = clap_builder::parser::error::MatchesError::unwrap("output-error", &v14);
        if !v27 {
            vvar_367{stack -720} = v22;
            vvar_368{stack -719} = v24;
            vvar_369{stack -744} = *(&v0 as &i128);
            vvar_370{stack -728} = v2;
            vvar_371{stack -718} = 4;
            vvar_373{reg 128} = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
            return v23;
        }
        v28 = *((v27 + 8) as &i64);
        v29 = *((v27 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "warn") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "warn-nopipe") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "exit") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "exit-nopipe") as i8 {
            core::panicking::panic("internal error: entered unreachable code", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tee/src/tee.rs"); /* do not return */
        }
    }
    v16 = v22;
    v17 = v24;
    v14 = *(&v0 as &i128);
    v15 = v2;
    v18 = 4;
    v30 = (!uu_tee::tee(&v14) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
    return v23;
}
