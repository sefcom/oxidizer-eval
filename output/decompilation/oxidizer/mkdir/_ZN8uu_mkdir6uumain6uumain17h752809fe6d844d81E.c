fn uu_mkdir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x680]
    let v1: i64;  // [sp-0x678]
    let v2: i64;  // [sp-0x670], Other Possible Types: struct56
    let v3: i64;  // [sp-0x668]
    let v4: i128;  // [sp-0x638]
    let v5: i128;  // [sp-0x628]
    let v6: struct24;  // [sp-0x618], Other Possible Types: i192
    let v7: i8;  // [bp-0x600]
    let v9: i8;  // [bp-0x5f0]
    let v12: i5696;  // [sp-0x5c8], Other Possible Types: struct24, struct712, struct56, struct64
    let v13: i192;  // [sp-0x2f8], Other Possible Types: Result<struct24, struct4>, struct712, struct64
    let v16: i128;  // xmm0
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v23: i256;  // ymm0
    let v26: i64;  // rdx

    v6 = uucore::Args::collect_lossy(a0, a1);
    v12 = uu_mkdir::uu_app();
    v13 = clap_builder::builder::command::Command::after_help(&v12, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v16 = v6;
    v12 = struct24 {
        field_0: v16
        field_16: *((&v6 as &char + 16) as &i64)
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v13, &v12);
    if v2 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v19;
    }
    v20 = v9;
    v2 = struct56 {
        field_0: v17
        field_8: v18
        field_16: v20
        field_32: v10
        field_48: v11
    };
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
    v13 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v12);
    if !v13 {
        v5 = 0;
        v4 = (((v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E) as u128;
        v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
    } else {
        v0 = *((&v13 as &char + 8) as &i64);
        v4 = *((&v13 as &char + 16) as &i128);
        v5 = *((&v13 as &char + 32) as &i128);
        v1 = *((&v13 as &char + 48) as &i64);
    }
    v13 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode() as i32);
    match v13 {
        Ok(_) => {
            v12 = v13;
            alloc::boxed::Box<T>::new(&v12);
        },
        Err(_) => {
            v26 = *((&v13 as &char + 8) as &i32) as u32 as u64;
            *(&v12.field_0 as &struct64) = struct64 {
                field_0: v21
                field_8: v0
                field_16: v4
                field_32: v5
                field_48: v1
                field_56: v22
            };
            uu_mkdir::exec(&v12, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32 as u32 as u64, v26, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32 as u32 as u64);
        },
    }
    return v19;
}
