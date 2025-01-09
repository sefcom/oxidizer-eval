fn uu_ls::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x5c0]
    let v1: struct8;  // [bp-0x5a8], Other Possible Types: struct64, i64
    let v2: struct56;  // [bp-0x568]
    let v3: struct24;  // [sp-0x530]
    let v4: struct24;  // [sp-0x518]
    let v5: struct24;  // [sp-0x500]
    let v6: i448;  // [sp-0x4e8], Other Possible Types: Result<struct56, struct8>, struct64, struct24, struct56
    let v7: i64;  // [sp-0x4e0]
    let v9: struct28;  // [bp-0x3e8], Other Possible Types: i64
    let v10: i64;  // [sp-0x3e0]
    let v11: i64;  // [sp-0x3d8]
    let v12: i8;  // [bp-0x3d0]
    let v13: i5696;  // [sp-0x2e8], Other Possible Types: struct712
    let v15: i64;  // rdi
    let v16: i8;  // al
    let v17: i64;  // rax
    let v18: i64;  // r15

    v13 = uu_ls::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if v6 != 0x8000000000000000 {
        v2 = struct56 {
            field_0: v6
            field_16: *((&v6 as &char + 16) as &i128)
            field_32: v8
            field_48: *((&v6 as &char + 48) as &i64)
        };
        v6 = uu_ls::Config::from(&v2);
        v18 = v6;
        v17 = v7;
        if v18 != 0x8000000000000000 {
            memcpy(&v12, &v6, 232);
            v9 = v18;
            v10 = v17;
            v11 = *((&v6 as &char + 16) as &i64);
            v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8);
            v1 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8, &v6);
            if !v1 {
                v0 = uu_ls::uumain::uumain::{{closure}}();
            } else {
                v6 = struct64 {
                    field_0: v20
                    field_16: *((&v1 as &char + 16) as &i128)
                    field_32: *((&v1 as &char + 32) as &i128)
                    field_48: *((&v1 as &char + 48) as &i128)
                };
                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v6);
                v0 = v5;
            }
            *(&v6.field_0 as &struct24) = struct24 {
                field_0: v0
                field_8: *((&v0 as &char + 8) as &i64)
                field_16: *((&v0 as &char + 16) as &i64)
            };
            v17 = uu_ls::list(&v6, &v9);
        }
        return v17;
    } else {
        v15 = v7;
        v16 = *((v15 + 213) as &i8);
        if (v16 & 29) == 12 {
            v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
            return v17;
        }
        if !v16 {
            v1 = struct8 {
                field_0: v15
            };
            v3 = <T as alloc::string::ToString>::to_string(&v1);
            v9 = struct28 {
                field_0: v3
                field_16: *((&v3 as &char + 16) as &i64)
                field_24: 1
            };
            v17 = alloc::boxed::Box<T>::new(&v9);
        } else {
            v1 = struct8 {
                field_0: v15
            };
            v4 = <T as alloc::string::ToString>::to_string(&v1);
            v9 = struct28 {
                field_0: v4
                field_16: *((&v4 as &char + 16) as &i64)
                field_24: 2
            };
            v17 = alloc::boxed::Box<T>::new(&v9);
        }
        return v17;
    }
}
