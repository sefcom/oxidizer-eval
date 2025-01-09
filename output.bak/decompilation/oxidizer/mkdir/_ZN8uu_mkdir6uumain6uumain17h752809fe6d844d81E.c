fn uu_mkdir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x680]
    let v1: i64;  // [sp-0x678]
    let v2: struct56;  // [sp-0x670]
    let v3: i64;  // [sp-0x668]
    let v4: i128;  // [sp-0x638]
    let v5: i128;  // [sp-0x628]
    let v6: struct24;  // [sp-0x618], Other Possible Types: i192
    let v7: i456;  // [sp-0x600], Other Possible Types: Result<struct56, struct8>
    let v8: i224;  // [sp-0x5c8], Other Possible Types: struct24, struct56, struct712, struct64
    let v9: i200;  // [sp-0x2f8], Other Possible Types: struct712, struct64, Result<struct24, struct4>
    let v12: i128;  // xmm0
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v17: i256;  // ymm0
    let v20: i64;  // rdx

    v6 = uucore::Args::collect_lossy(a0, a1);
    v8 = uu_mkdir::uu_app();
    v9 = clap_builder::builder::command::Command::after_help(&v8, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v12 = v6;
    v8 = struct24 {
        field_0: v12
        field_16: *((&v6 as &char + 16) as &i64)
    };
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v9, &v8);
    match v7 {
        Err(_) => {
            v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v13;
        },
        Ok(_) => {
            v14 = *((&v7 as &char + 16) as &i128);
            v2 = struct56 {
                field_0: v15
                field_8: v16
                field_16: v14
                field_32: *((&v7 as &char + 32) as &i128)
                field_48: *((&v7 as &char + 48) as &i64)
            };
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
            v9 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v8);
            if !v9 {
                v5 = 0;
                v4 = (v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E) as u128;
                v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
            } else {
                v0 = *((&v9 as &char + 8) as &i64);
                v4 = *((&v9 as &char + 16) as &i128);
                v5 = *((&v9 as &char + 32) as &i128);
                v1 = *((&v9 as &char + 48) as &i64);
            }
            v9 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode() as i32 as u32 as u64);
            match v9 {
                Ok(_) => {
                    v8 = v9;
                    v13 = alloc::boxed::Box<T>::new(&v8);
                },
                Err(_) => {
                    v20 = *((&v9 as &char + 8) as &i32) as u32 as u64;
                    *(&v8.field_0 as &struct64) = struct64 {
                        field_0: v21
                        field_8: v0
                        field_16: v4
                        field_32: v5
                        field_48: v1
                        field_56: v22
                    };
                    v13 = uu_mkdir::exec(&v8, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32 as u32 as u64, v20, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32 as u32 as u64);
                },
            }
            return v13;
        },
    }
}
