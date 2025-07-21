fn uu_ls::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x5c0], Other Possible Types: u64
    let v1: struct24;  // [bp-0x5c0]
    let v2: u128;  // [bp-0x5b8]
    let v3: struct64;  // [bp-0x5a8], Other Possible Types: struct_0 *
    let v4: u128;  // [bp-0x598]
    let v5: u128;  // [bp-0x588]
    let v6: u128;  // [bp-0x578]
    let v7: struct56;  // [bp-0x568]
    let v8: struct24;  // [bp-0x530]
    let v9: u64;  // [bp-0x520]
    let v10: struct24;  // [bp-0x518]
    let v11: u64;  // [bp-0x508]
    let v12: struct24;  // [bp-0x500]
    let v13: u128;  // [bp-0x4f8]
    let v14: Result<struct56, struct16>;  // [bp-0x4e8], Other Possible Types: struct24, struct56, struct64
    let v15: struct56;  // [bp-0x4e8]
    let v16: core::fmt::Arguments;  // [bp-0x4e0], Other Possible Types: struct_0 *
    let v17: u64;  // [bp-0x4d8]
    let v18: struct28;  // [bp-0x3e8], Other Possible Types: u64
    let v19: core::fmt::Arguments;  // [bp-0x3e0]
    let v20: u64;  // [bp-0x3d8]
    let v21: u8;  // [bp-0x3d0]
    let v22: u8;  // [bp-0x2e8]
    let v24: i64;  // rdi
    let v25: core::fmt::Arguments;  // rbx
    let v26: u64;  // rax

    uu_ls::uu_app(&v22);
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1);
    match v14 {
        Err(_) => {
            v24 = v16;
            if (*((v24 + 213) as &i8) & 29) == 12 {
                return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
            }
            if *((v24 + 213) as &i8) {
                v3 = v24;
                v10 = <T as alloc::string::ToString>::to_string(&v3);
                v18 = struct28 {
                    field_0: v10.field_0
                    field_16: v11
                    field_24: 2
                };
                v26 = alloc::boxed::Box<T>::new(&v18);
            } else {
                v3 = v24;
                v8 = <T as alloc::string::ToString>::to_string(&v3);
                v18 = struct28 {
                    field_0: v8.field_0
                    field_16: v9
                    field_24: 1
                };
                v26 = alloc::boxed::Box<T>::new(&v18);
            }
            return v26;
        },
        Ok(v7) => {
            uu_ls::Config::from(&v14, &v7);
            v25 = v16;
            if let Err(_) = v14 {
                return v25;
            }
            memcpy(&v21, &v14 as u8, 232);
            v18 = v14 as i64;
            v19 = v25;
            v20 = v17;
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_6131f8.field_0);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_6131f8.field_0, &v14);
            if v3.field_0 as i64 {
                v14 = struct64 {
                    field_0: v3.field_0
                    field_16: v4
                    field_32: v5
                    field_48: v6
                };
                v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v14);
                v2 = v13;
                v0 = v12.field_0 as i64;
            } else {
                v0 = uu_ls::uumain::uumain::{{closure}}();
            }
            v14 = v1;
            v25 = uu_ls::list(&v14, &v18);
            return v25;
        },
    }
}
