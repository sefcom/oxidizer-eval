fn uu_touch::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x438]
    let v1: i64;  // [sp-0x430]
    let v2: i32;  // [bp-0x428]
    let v3: i512;  // [sp-0x418], Other Possible Types: Result<struct56, struct16>, struct64, struct48
    let v4: i64;  // [sp-0x408]
    let v5: i64;  // [sp-0x3d0]
    let v6: i64;  // [sp-0x3c8]
    let v7: i64;  // [bp-0x398]
    let v8: i64;  // [sp-0x388]
    let v9: struct24;  // [sp-0x380], Other Possible Types: i192
    let v10: i128;  // [sp-0x368], Other Possible Types: struct52
    let v11: i64;  // [sp-0x358]
    let v12: i512;  // [sp-0x338]
    let v13: i320;  // [sp-0x2f8], Other Possible Types: Result<struct12, struct16>, struct24, struct56, struct712
    let v15: i64;  // rax
    let v16: i64;  // rdx
    let v17: i64;  // rdi
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // r14
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v23: i64;  // r8
    let v24: i64;  // r9
    let v25: i64;  // rax

    v13 = uu_touch::uu_app(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if v5 == 0x8000000000000000 {
        v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v15;
    }
    v5 = v3;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40);
    v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE, g_710d40, &v13);
    if !v12 {
        v15 = uu_touch::uumain::uumain::{{closure}}(v17, v18, v19);
        return v15;
    }
    v12 = v3;
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12, v16);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E, g_711590);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0);
    v20 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE, g_7115d0, &v13);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0);
    v21 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E, g_7115e0, &v13);
    if v20 {
        v13 = std::sys::os_str::bytes::Slice::to_owned(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
        v0 = v13;
        goto LABEL_573ca8;
    }
    if !v21 {
        v0 = 9223372036854775809;
        goto LABEL_573ca8;
    } else {
        v13 = uu_touch::parse_timestamp(*((v21 + 8) as &i64), *((v21 + 16) as &i64), v22, v23, v24);
        if v13 {
            v15 = *((&v13 as &char + 8) as &i64);
        } else {
            v1 = *((&v13 as &char + 8) as &i64);
            v2 = *((&v13 as &char + 16) as &i32);
            v0 = 0x8000000000000000;
LABEL_573ca8:
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v5, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0);
            v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E, g_7115c0, &v13);
            if !v25 {
                v7 = 0x8000000000000000;
            } else {
                v13 = <alloc::string::String as core::clone::Clone>::clone(v25);
                v7 = v13;
            }
            v11 = *((&v0 as &char + 16) as &i64);
            v10 = v0;
            v4 = v8;
            v3 = v7;
            v13 = v3;
            v10 = uu_touch::touch(*((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64), &v13, v23, v24);
            if v3 == 9223372036854775812 {
                return 0;
            }
            v3 = struct48 {
                field_0: v26
                field_8: *((&v10 as &char + 8) as &i128)
                field_24: *((&v10 as &char + 24) as &i128)
                field_40: *((&v10 as &char + 40) as &i64)
            };
            v15 = alloc::boxed::Box<T>::new(&v3);
        }
        return v15;
    }
}
