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
    let v9: i192;  // [sp-0x618], Other Possible Types: struct24
    let v10: i448;  // [sp-0x600], Other Possible Types: Result<struct56, struct16>
    let v11: i128;  // [sp-0x5c8], Other Possible Types: struct712, struct64, struct56
    let v12: i512;  // [sp-0x2f8], Other Possible Types: struct712, Result<struct24, struct12>, struct64
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v17: i128;  // xmm0
    let v18: i64;  // rcx
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v26: i64;  // rdx
    let v29: i64;  // r8
    let v30: i64;  // r9

    v9 = uucore::Args::collect_lossy(a0, a1);
    v11 = uu_mkdir::uu_app(v14, v15);
    v12 = clap_builder::builder::command::Command::after_help(&v11, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v11.16 = (stack_base)[1544] as i64;
    v17 = v9;
    v11 = v17;
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v12, &v11, v18);
    match v10 {
        Err(_) => {
            v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v21;
        },
        Ok(_) => {
            v6 = *((&v10 as &char + 48) as &i64);
            v22 = *((&v10 as &char + 16) as &i128);
            v5 = *((&v10 as &char + 32) as &i128);
            v4 = v22;
            v2 = v10;
            v3 = *((&v10 as &char + 8) as &i64);
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
            v12 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v11);
            if !v12 {
                v8 = 0;
                v7 = (v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E) as u128;
                v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
            } else {
                v0 = *((&v12 as &char + 8) as &i64);
                v7 = *((&v12 as &char + 16) as &i128);
                v8 = *((&v12 as &char + 32) as &i128);
                v1 = *((&v12 as &char + 48) as &i64);
            }
            v12 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode(&v9, v14, v15) as i32 as u32 as u64);
            match v12 {
                Ok(_) => {
                    v11 = v12;
                    v21 = alloc::boxed::Box<T>::new(&v11);
                },
                Err(_) => {
                    v26 = *((&v12 as &char + 8) as &i32) as u32 as u64;
                    *(&v11.field_0 as &struct64) = struct64 {
                        field_0: v27
                        field_8: v0
                        field_16: v7
                        field_32: v8
                        field_48: v1
                        field_56: v28
                    };
                    v21 = uu_mkdir::exec(&v11, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32 as u32 as u64, v26, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32 as u32 as u64, v29, v30);
                },
            }
            return v21;
        },
    }
}
