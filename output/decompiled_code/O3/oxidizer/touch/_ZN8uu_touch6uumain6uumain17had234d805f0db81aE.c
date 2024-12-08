fn uu_touch::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [bp-0x438]
    let v1: i64;  // [sp-0x430]
    let v2: i64;  // [bp-0x428]
    let v3: i128;  // [bp-0x418], Other Possible Types: struct48, struct64
    let v4: i64;  // [bp-0x408]
    let v7: i64;  // [sp-0x3d0], Other Possible Types: struct56
    let v8: i64;  // [sp-0x3c8]
    let v9: i128;  // [bp-0x398]
    let v10: i64;  // [sp-0x388]
    let v11: i192;  // [sp-0x380], Other Possible Types: struct24
    let v12: i128;  // [sp-0x368], Other Possible Types: struct48
    let v13: i64;  // [sp-0x358]
    let v14: i64;  // [sp-0x338], Other Possible Types: struct64
    let v15: i320;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct24, struct56, struct712
    let v16: i64;  // [sp-0x2e8]
    let v17: i128;  // [sp-0x2e0]
    let v19: i64;  // rax
    let v21: i64;  // rdi
    let v22: i64;  // rdx
    let v23: i64;  // rsi
    let v24: i64;  // rdx
    let v25: i8;  // al
    let v26: i64;  // r14
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // r8
    let v30: i64;  // r9

    v15 = uu_touch::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v15, a0, a1);
    if v7 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v19;
    }
    v7 = struct56 {
        field_0: v20
        field_8: v21
        field_16: v4
        field_32: v5
        field_48: v6
    };
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, _ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8);
    v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17hbdc7e242f959e472E, g_710fe8, &v15);
    if !v14 {
        v19 = uu_touch::uumain::uumain::{{closure}}(v21, v23, v24);
        return v19;
    }
    *(&v14.field_0 as &struct64) = struct64 {
        field_0: v20
        field_8: *((&v3 as &char + 8) as &i128)
        field_24: *((&v3 as &char + 24) as &i128)
        field_40: *((&v3 as &char + 40) as &i128)
        field_56: *((&v3 as &char + 56) as &i64)
    };
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14, v22);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, _ZN8uu_touch7options8NO_DEREF17he03623364051e442E, g_7117f8) as i32;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, _ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8);
    v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h5fa0c0dd04476dc4E, g_7117c8, &v15);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, _ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8);
    v27 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17ha471abf40c884a8cE, g_7117d8, &v15);
    if v26 {
        v15 = std::sys::os_str::bytes::Slice::to_owned(*((v26 + 8) as &i64), *((v26 + 16) as &i64));
        *(&v2 as &struct24) = v15.field_16;
        v0 = v15;
        goto LABEL_573558;
    }
    if !v27 {
        v0 = 9223372036854775809;
        goto LABEL_573558;
    } else {
        v15 = uu_touch::parse_timestamp(*((v27 + 8) as &i64), *((v27 + 16) as &i64));
        if v15 {
            v19 = *((&v15 as &char + 8) as &i64);
        } else {
            v1 = *((&v15 as &char + 8) as &i64);
            v2 = *((&v15 as &char + 16) as &i32);
            v0 = 0x8000000000000000;
LABEL_573558:
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, _ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8);
            v28 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h74493e7bb508a5afE, g_7117b8, &v15);
            if !v28 {
                v9 = 0x8000000000000000;
            } else {
                v15 = <alloc::string::String as core::clone::Clone>::clone(v28);
                v10 = v15.field_16;
                *(&v9 as &Result<struct12, struct16>) = v15;
            }
            v13 = v2;
            v12 = v0;
            v4 = v10;
            v3 = v9;
            v15.field_64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -976, _ZN8uu_touch7options9NO_CREATE17h04d7b8b0d46f47bcE, _ZN8uu_touch7options9NO_CREATE17h04d7b8b0d46f47bcE) as i32;
            v15.49 = vvar_166{reg 16};
            v17 = v12;
            v15.field_48 = vvar_440{stack -856};
            v15 = v3;
            v16 = v4;
            v15.51 = uu_touch::determine_atime_mtime_change(stack_base + -976) as i8;
            v15.50 = 0;
            v12 = uu_touch::touch(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), &v15, v29, v30);
            if v12 == 9223372036854775812 {
                return 0;
            }
            v3 = struct48 {
                field_0: v12
                field_16: *((&v12 as &char + 16) as &i128)
                field_32: *((&v12 as &char + 32) as &i128)
            };
            v19 = alloc::boxed::Box<T>::new(&v3);
        }
        return v19;
    }
}
