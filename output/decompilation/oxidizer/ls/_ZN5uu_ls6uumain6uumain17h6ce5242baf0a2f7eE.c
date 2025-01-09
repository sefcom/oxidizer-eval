fn uu_ls::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x5c0]
    let v1: struct8;  // [bp-0x5a8], Other Possible Types: struct64, i64
    let v2: i448;  // [sp-0x568]
    let v3: i192;  // [sp-0x530], Other Possible Types: struct24
    let v4: i192;  // [sp-0x518], Other Possible Types: struct24
    let v5: struct24;  // [sp-0x500]
    let v6: i8;  // [bp-0x4e8], Other Possible Types: struct24, struct64, Result<struct208, struct16>, struct56
    let v7: i64;  // [sp-0x4e0]
    let v8: i224;  // [sp-0x3e8]
    let v9: i64;  // [sp-0x3e0]
    let v10: i64;  // [sp-0x3d8]
    let v11: i8;  // [bp-0x3d0]
    let v12: i5696;  // [sp-0x2e8], Other Possible Types: struct712
    let v14: i64;  // rdi
    let v15: i8;  // al
    let v16: i64;  // rax
    let v17: i64;  // r15

    v12 = uu_ls::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v12, a0, a1);
    if v6 != 0x8000000000000000 {
        v2 = v6;
        v6 = uu_ls::Config::from(&v2);
        v17 = v6;
        if v17 == 0x8000000000000000 {
            return v16;
        }
        memcpy(&v11, &v6, 232);
        v8 = v17;
        v9 = v7;
        v10 = *((&v6 as &char + 16) as &i64);
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8);
        v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8, &v6);
        if !v1 {
            v0 = uu_ls::uumain::uumain::{{closure}}();
        } else {
            v6 = struct64 {
                field_0: v19
                field_16: *((&v1 as &char + 16) as &i128)
                field_32: *((&v1 as &char + 32) as &i128)
                field_48: *((&v1 as &char + 48) as &i128)
            };
            v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v6);
            v0 = v5;
        }
        v6 = v0;
        uu_ls::list(&v6, &v8);
        return v16;
    } else {
        v14 = v7;
        v15 = *((v14 + 213) as &i8);
        if (v15 & 29) == 12 {
            v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
            return v16;
        }
        if !v15 {
            v1 = struct8 {
                field_0: v14
            };
            v3 = <T as alloc::string::ToString>::to_string(&v1);
            v8 = v3;
            alloc::boxed::Box<T>::new(&v8);
        } else {
            v1 = struct8 {
                field_0: v14
            };
            v4 = <T as alloc::string::ToString>::to_string(&v1);
            v8 = v4;
            alloc::boxed::Box<T>::new(&v8);
        }
        return v16;
    }
}
