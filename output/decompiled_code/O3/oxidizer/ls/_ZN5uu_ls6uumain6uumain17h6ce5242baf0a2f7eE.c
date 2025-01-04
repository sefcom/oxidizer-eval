fn uu_ls::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x5c0], Other Possible Types: struct24
    let v1: struct8;  // [bp-0x5a8], Other Possible Types: i64, struct64
    let v2: i448;  // [bp-0x568]
    let v3: i192;  // [sp-0x530], Other Possible Types: struct24
    let v4: struct24;  // [sp-0x518], Other Possible Types: i192
    let v5: i192;  // [sp-0x500], Other Possible Types: struct24
    let v6: i64;  // [sp-0x4e8], Other Possible Types: Result<struct56, struct16>, struct56, struct64
    let v7: i64;  // [sp-0x4e0]
    let v8: i64;  // [bp-0x3e8]
    let v9: i64;  // [sp-0x3e0]
    let v10: i64;  // [sp-0x3d8]
    let v11: i8;  // [bp-0x3d0]
    let v12: i5696;  // [sp-0x2e8], Other Possible Types: struct712
    let v14: i64;  // r8
    let v15: i64;  // r9
    let v16: i64;  // rdi
    let v17: i8;  // al
    let v18: i64;  // rdx
    let v19: i64;  // rcx
    let v20: i64;  // rax
    let v21: i64;  // r15

    v12 = uu_ls::uu_app(a1, a2);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1, v14, v15);
    if v6 != 0x8000000000000000 {
        v2 = v6;
        v6 = uu_ls::Config::from(&v2, v18, v19, v14, v15);
        v21 = v6;
        v20 = v7;
        if v21 != 0x8000000000000000 {
            memcpy(&v11, &v6, 232);
            v8 = v21;
            v9 = v20;
            v10 = *((&v6 as &char + 16) as &i64);
            v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8);
            v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8, &v6);
            if !v1 {
                v0 = uu_ls::uumain::uumain::{{closure}}();
            } else {
                v6 = struct64 {
                    field_0: v23
                    field_16: *((&v1 as &char + 16) as &i128)
                    field_32: *((&v1 as &char + 32) as &i128)
                    field_48: *((&v1 as &char + 48) as &i128)
                };
                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v6, v18);
                v0 = v5;
            }
            v6 = v0;
            v20 = uu_ls::list(&v6, &v8);
        }
        return v20;
    } else {
        v16 = v7;
        v17 = *((v16 + 213) as &i8);
        if (v17 & 29) == 12 {
            v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
            return v20;
        }
        if !v17 {
            v1 = struct8 {
                field_0: v16
            };
            v3 = <T as alloc::string::ToString>::to_string(&v1);
            v8 = v3;
            v20 = alloc::boxed::Box<T>::new(&v8);
        } else {
            v1 = struct8 {
                field_0: v16
            };
            v4 = <T as alloc::string::ToString>::to_string(&v1);
            v8 = v4;
            v20 = alloc::boxed::Box<T>::new(&v8);
        }
        return v20;
    }
}
