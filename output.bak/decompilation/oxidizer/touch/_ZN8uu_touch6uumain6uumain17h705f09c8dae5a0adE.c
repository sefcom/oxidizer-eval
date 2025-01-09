fn uu_touch::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x438], Other Possible Types: struct24
    let v1: i96;  // [bp-0x430]
    let v2: i64;  // [sp-0x418], Other Possible Types: struct48, Result<struct56, struct8>, struct64
    let v3: i64;  // [sp-0x408]
    let v5: i64;  // [sp-0x3d0], Other Possible Types: struct56
    let v6: i64;  // [sp-0x3c8]
    let v7: i64;  // [bp-0x398]
    let v8: i64;  // [sp-0x388]
    let v9: struct24;  // [sp-0x380]
    let v10: i128;  // [sp-0x368], Other Possible Types: struct52
    let v11: i64;  // [sp-0x358]
    let v12: struct64;  // [sp-0x338], Other Possible Types: i64
    let v13: i128;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct24, struct712, struct56
    let v14: i64;  // [sp-0x2e8]
    let v15: i128;  // [sp-0x2e0]
    let v16: i64;  // [sp-0x2d0]
    let v17: i8;  // [sp-0x2c8]
    let v18: i8;  // [sp-0x2c7]
    let v19: i8;  // [sp-0x2c6]
    let v20: i8;  // [sp-0x2c5]
    let v22: i64;  // rax
    let v24: i8;  // al
    let v25: i64;  // r14
    let v26: i64;  // rax
    let v27: i64;  // rax

    v13 = uu_touch::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if v5 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v22;
    }
    v5 = struct56 {
        field_0: v2
        field_8: v23
        field_16: *((&v2 as &char + 16) as &i128)
        field_32: *((&v2 as &char + 32) as &i128)
        field_48: *((&v2 as &char + 48) as &i64)
    };
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40);
    v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40, &v13);
    if !v12 {
        v22 = uu_touch::uumain::uumain::{{closure}}();
        return v22;
    }
    *(&v12.field_0 as &struct64) = struct64 {
        field_0: v2
        field_8: *((&v2 as &char + 8) as &i128)
        field_24: v4
        field_40: *((&v2 as &char + 40) as &i128)
        field_56: *((&v2 as &char + 56) as &i64)
    };
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E, g_711590);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0);
    v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0, &v13);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0);
    v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0, &v13);
    if v25 {
        v13 = std::sys::os_str::bytes::Slice::to_owned(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        v0 = v13;
        goto LABEL_573ca8;
    }
    if !v26 {
        v0 = 9223372036854775809;
        goto LABEL_573ca8;
    } else {
        v13 = uu_touch::parse_timestamp(*((v26 + 8) as &i64), *((v26 + 16) as &i64));
        match v13 {
            Err(_) => {
                v22 = *((&v13 as &char + 8) as &i64);
            },
            Ok(v1) => {
                v0 = 0x8000000000000000;
LABEL_573ca8:
                v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0);
                v27 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0, &v13);
                if !v27 {
                    v7 = 0x8000000000000000;
                } else {
                    v13 = <alloc::string::String as core::clone::Clone>::clone(v27);
                }
                v11 = *((&v0 as &char + 16) as &i64);
                v10 = v0;
                v3 = v8;
                v2 = v7;
                v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E, g_711580) as i32 as i8;
                v18 = v24;
                v15 = v10;
                v16 = v11;
                v13 = v2;
                v14 = v3;
                v20 = uu_touch::determine_atime_mtime_change(&v5) as i8;
                v19 = 0;
                v10 = uu_touch::touch();
                if v2 == 9223372036854775812 {
                    return 0;
                }
                v2 = struct48 {
                    field_0: v28
                    field_8: *((&v10 as &char + 8) as &i128)
                    field_24: *((&v10 as &char + 24) as &i128)
                    field_40: *((&v10 as &char + 40) as &i64)
                };
                v22 = alloc::boxed::Box<T>::new(&v2);
            },
        }
        return v22;
    }
}
