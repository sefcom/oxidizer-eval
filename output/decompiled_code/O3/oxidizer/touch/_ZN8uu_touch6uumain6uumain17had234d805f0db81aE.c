fn uu_touch::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [bp-0x438]
    let v1: i64;  // [sp-0x430]
    let v2: i32;  // [bp-0x428]
    let v3: i128;  // [sp-0x418], Other Possible Types: Result<struct56, struct16>, struct64
    let v4: i64;  // [bp-0x408]
    let v6: struct56;  // [sp-0x3d0]
    let v7: i64;  // [sp-0x3c8]
    let v8: i192;  // [bp-0x398]
    let v9: i64;  // [sp-0x388]
    let v10: struct24;  // [sp-0x380], Other Possible Types: i192
    let v11: i128;  // [sp-0x368], Other Possible Types: struct48
    let v12: i64;  // [sp-0x358]
    let v13: i64;  // [sp-0x338], Other Possible Types: struct64
    let v14: i192;  // [sp-0x2f8], Other Possible Types: Result<struct12, struct16>, struct24, struct712, struct56
    let v16: i64;  // rax
    let v18: i64;  // rdi
    let v19: i64;  // rdx
    let v20: i64;  // rsi
    let v21: i64;  // rdx
    let v22: i64;  // r14
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // r8
    let v26: i64;  // r9

    v14 = uu_touch::uu_app(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    match v3 {
        Err(_) => {
            v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            return v16;
        },
        Ok(_) => {
            v6 = struct56 {
                field_0: v17
                field_8: v18
                field_16: *((&v3 as &char + 16) as &i128)
                field_32: v5
                field_48: *((&v3 as &char + 48) as &i64)
            };
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, _ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8, &v14);
        },
    }
    if !v13 {
        v16 = uu_touch::uumain::uumain::{{closure}}(v18, v20, v21);
        return v16;
    }
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v17
        field_8: *((&v3 as &char + 8) as &i128)
        field_24: *((&v3 as &char + 24) as &i128)
        field_40: *((&v3 as &char + 40) as &i128)
        field_56: *((&v3 as &char + 56) as &i64)
    };
    v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v19);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, _ZN8uu_touch7options8NO_DEREF17he03623364051e442E, g_7117f8);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8);
    v22 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8, &v14);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8);
    v23 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8, &v14);
    if v22 {
        v14 = std::sys::os_str::bytes::Slice::to_owned(*((v22 + 8) as &i64), *((v22 + 16) as &i64));
        v0 = v14;
        goto LABEL_573558;
    }
    if !v23 {
        v0 = 9223372036854775809;
        goto LABEL_573558;
    } else {
        v14 = uu_touch::parse_timestamp(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
        if v14 {
            v16 = *((&v14 as &char + 8) as &i64);
        } else {
            v1 = *((&v14 as &char + 8) as &i64);
            v2 = *((&v14 as &char + 16) as &i32);
            v0 = 0x8000000000000000;
LABEL_573558:
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, _ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8);
            v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8, &v14);
            if !v24 {
                v8 = 0x8000000000000000;
            } else {
                v14 = <alloc::string::String as core::clone::Clone>::clone(v24);
                v8 = v14;
            }
            v12 = *((&v0 as &char + 16) as &i64);
            v11 = v0;
            v4 = v9;
            v3 = v8;
            v14 = v3;
            v11 = uu_touch::touch(*((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64), &v14, v25, v26);
            if v11 == 9223372036854775812 {
                return 0;
            }
            v3 = v11;
            v16 = alloc::boxed::Box<T>::new(&v3);
        }
        return v16;
    }
}
