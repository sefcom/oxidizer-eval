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
    let v10: i8;  // [bp-0x600]
    let v11: i8;  // [bp-0x5f8]
    let v12: i8;  // [bp-0x5f0]
    let v13: i8;  // [bp-0x5e0]
    let v14: i8;  // [bp-0x5d0]
    let v15: i128;  // [sp-0x5c8], Other Possible Types: struct64, struct28, struct56, struct712
    let v16: i5696;  // [sp-0x2f8], Other Possible Types: struct64, Result<struct24, struct12>, struct712
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v21: i128;  // xmm0
    let v22: i64;  // rcx
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v30: i64;  // rdx
    let v33: i64;  // r8
    let v34: i64;  // r9

    v9 = uucore::Args::collect_lossy(a0, a1);
    v15 = uu_mkdir::uu_app(v18, v19);
    v16 = clap_builder::builder::command::Command::after_help(&v15, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.");
    v15.16 = (stack_base)[1544] as i64;
    v21 = v9;
    v15 = v21;
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v16, &v15, v22);
    if v2 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v25;
    }
    v6 = v14;
    v26 = v12;
    v5 = v13;
    v4 = v26;
    v2 = v10;
    v3 = v11;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "dirs");
    v16 = clap_builder::parser::error::MatchesError::unwrap("dirs", &v15);
    if !v16 {
        v8 = 0;
        v7 = (v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E) as u128;
        v0 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h1cf5b654077c55a2E;
    } else {
        v0 = *((&v16 as &char + 8) as &i64);
        v7 = *((&v16 as &char + 16) as &i128);
        v8 = *((&v16 as &char + 32) as &i128);
        v1 = *((&v16 as &char + 48) as &i64);
    }
    v16 = uu_mkdir::get_mode(&v2, uu_mkdir::strip_minus_from_mode(&v9, v18, v19) as i32);
    match v16 {
        Ok(_) => {
            v15 = struct28 {
                field_0: v16
                field_16: *((&v16 as &char + 16) as &i64)
                field_24: 1
            };
            v25 = alloc::boxed::Box<T>::new(&v15);
        },
        Err(_) => {
            v30 = *((&v16 as &char + 8) as &i32) as u32 as u64;
            *(&v15.field_0 as &struct64) = struct64 {
                field_0: v31
                field_8: v0
                field_16: v7
                field_32: v8
                field_48: v1
                field_56: v32
            };
            v25 = uu_mkdir::exec(&v15, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "parents") as i32 as u32 as u64, v30, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "verbose") as i32 as u32 as u64, v33, v34);
        },
    }
    return v25;
}
