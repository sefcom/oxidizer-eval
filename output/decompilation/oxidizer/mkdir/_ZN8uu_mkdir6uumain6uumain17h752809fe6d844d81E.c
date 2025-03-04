fn uu_mkdir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x680]
    let v1: i64;  // [sp-0x678]
    let v2: i64;  // [bp-0x670], Other Possible Types: struct56
    let v3: i64;  // [sp-0x668]
    let v4: iNone;  // [sp-0x638]
    let v5: iNone;  // [sp-0x628]
    let v6: struct24;  // [sp-0x618]
    let v7: i8;  // [bp-0x600]
    let v9: i8;  // [bp-0x5f0]
    let v12: struct24;  // [sp-0x5c8], Other Possible Types: struct712, struct56, unsigned long
    let v13: i64;  // [sp-0x5c0]
    let v14: iNone;  // [bp-0x5b8]
    let v15: i32;  // [sp-0x5b0]
    let v16: iNone;  // [sp-0x5a8]
    let v17: i64;  // [sp-0x598]
    let v18: i64;  // [sp-0x590]
    let v19: struct24;  // [sp-0x2f8], Other Possible Types: struct64, struct712
    let v22: iNone;  // xmm0
    let v25: i64;  // rax
    let v26: iNone;  // xmm0
    let v27: i64;  // r12
    let v28: i64;  // r13
    let v29: iNone;  // ymm0
    let v32: i64;  // rdx
    let v35: i64;  // rbx

    v6 = uucore::Args::collect_lossy(a0, a1);
    v12 = uu_mkdir::uu_app();
    v19 = clap_builder::builder::command::Command::after_help(&v12, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v22 = v6.field_0;
    v12 = struct24 {
        field_0: v22
        field_16: v6.field_16
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v19, &v12);
    if v2 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v25;
    }
    v26 = *(&v9 as &i128);
    v2 = struct56 {
        field_0: v23
        field_8: v24
        field_16: v26
        field_32: *(&v10 as &i128)
        field_48: *(&v11 as &i64)
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
    v19 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v12);
    v27 = v19.field_0 as i64;
    if !v27 {
        v5 = 0;
        v4 = (((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E) as u128;
        v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v27 = core::ops::function::FnOnce::call_once;
        v28 = 0;
    } else {
        v0 = *((&v19.field_0 as &char + 8) as &i64);
        v4 = v19.field_16;
        v5 = v19.field_32;
        v1 = v19.field_48 as i64;
        v28 = *((&v19.field_48 as &char + 8) as &i64);
    }
    v19 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode(&v6) as i32);
    if v19.field_0 as i64 != 0x8000000000000000 {
        v12 = v19;
        v15 = 1;
        alloc::boxed::Box<T>::new(&v12);
    } else {
        v32 = *((&v19.field_0 as &char + 8) as &i32);
        v12 = v27;
        v13 = v0;
        v14 = v4;
        v16 = v5;
        v17 = v1;
        v18 = v28;
        uu_mkdir::exec(&v12, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32, v32, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32);
    }
    v25 = v35;
    return v25;
}
