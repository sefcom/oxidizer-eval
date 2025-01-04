fn uu_mkdir::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x680]
    let v1: i64;  // [sp-0x678]
    let v2: i64;  // [sp-0x670]
    let v3: i64;  // [sp-0x668]
    let v4: i128;  // [sp-0x660]
    let v5: i128;  // [sp-0x650]
    let v6: i64;  // [sp-0x640]
    let v7: i128;  // [sp-0x638]
    let v8: i128;  // [sp-0x628]
    let v9: struct24;  // [sp-0x618], Other Possible Types: i192
    let v10: Result<struct56, struct16>;  // [sp-0x600], Other Possible Types: i448
    let v11: i448;  // [sp-0x5c8], Other Possible Types: struct712, struct56, struct64
    let v12: i64;  // [sp-0x5b8]
    let v13: i192;  // [sp-0x2f8], Other Possible Types: struct64, Result<struct24, struct12>, struct712
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v18: i128;  // xmm0
    let v19: i64;  // rcx
    let v20: i64;  // r8
    let v21: i64;  // r9
    let v24: i64;  // rax
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v29: i64;  // rdx

    v9 = uucore::Args::collect_lossy(a0, a1);
    v11 = uu_mkdir::uu_app(v15, v16);
    v13 = clap_builder::builder::command::Command::after_help(&v11, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v12 = *((&v9 as &char + 16) as &i64);
    v18 = v9;
    v11 = v18;
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v13, &v11, v19, v20, v21);
    match v10 {
        Err(_) => {
            v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v24;
        },
        Ok(_) => {
            v6 = *((&v10 as &char + 48) as &i64);
            v25 = *((&v10 as &char + 16) as &i128);
            v5 = *((&v10 as &char + 32) as &i128);
            v4 = v25;
            v2 = v10;
            v3 = *((&v10 as &char + 8) as &i64);
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
            v13 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v11);
            if !v13 {
                v8 = 0;
                v7 = (v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E) as u128;
                v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
            } else {
                v0 = *((&v13 as &char + 8) as &i64);
                v7 = *((&v13 as &char + 16) as &i128);
                v8 = *((&v13 as &char + 32) as &i128);
                v1 = *((&v13 as &char + 48) as &i64);
            }
            v13 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode(&v9, v15, v16) as i32 as u32 as u64);
            match v13 {
                Ok(_) => {
                    v11 = v13;
                    v24 = alloc::boxed::Box<T>::new(&v11);
                },
                Err(_) => {
                    v29 = *((&v13 as &char + 8) as &i32) as u32 as u64;
                    *(&v11.field_0 as &struct64) = struct64 {
                        field_0: v30
                        field_8: v0
                        field_16: v7
                        field_32: v8
                        field_48: v1
                        field_56: v31
                    };
                    v24 = uu_mkdir::exec(&v11, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32 as u32 as u64, v29, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32 as u32 as u64, v20, v21);
                },
            }
            return v24;
        },
    }
}
