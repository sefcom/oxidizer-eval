fn uu_ls::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x5c0], Other Possible Types: struct24
    let v1: u192;  // [bp-0x5c0]
    let v2: u128;  // [bp-0x5b8]
    let v3: i64;  // [bp-0x5a8], Other Possible Types: struct64
    let v4: u128;  // [bp-0x598]
    let v5: u128;  // [bp-0x588]
    let v6: u128;  // [bp-0x578]
    let v7: u8;  // [bp-0x568]
    let v8: u8;  // [bp-0x558]
    let v9: u128;  // [bp-0x548]
    let v10: u64;  // [bp-0x538]
    let v11: struct24;  // [bp-0x530]
    let v12: u64;  // [bp-0x520]
    let v13: struct24;  // [bp-0x518]
    let v14: u64;  // [bp-0x508]
    let v15: struct24;  // [bp-0x500]
    let v16: u128;  // [bp-0x4f8]
    let v17: u512;  // [bp-0x4e8], Other Possible Types: struct56, Result<struct56, struct16>
    let v18: u64;  // [bp-0x4e0], Other Possible Types: struct_0 *
    let v19: u64;  // [bp-0x4d8]
    let v20: u128;  // [bp-0x4c8]
    let v21: u224;  // [bp-0x3e8]
    let v22: u64;  // [bp-0x3e0]
    let v23: u64;  // [bp-0x3d8]
    let v24: u8;  // [bp-0x3d0]
    let v25: u8;  // [bp-0x2e8]
    let v27: i64;  // rdi
    let v28: u64;  // rbx
    let v29: u64;  // rax

    uu_ls::uu_app(&v25);
    v17 = clap_builder::builder::command::Command::try_get_matches_from(&v25, a0, a1);
    match v17 {
        Err(_) => {
            v27 = v18;
            if (*((v27 + 213) as &i8) & 29) == 12 {
                return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
            }
            if *((v27 + 213) as &i8) {
                v3 = v27;
                v13 = <T as alloc::string::ToString>::to_string(&v3);
                v21 = struct28 {
                    field_0: v13.field_0
                    field_16: v14
                    field_24: 2
                };
                v29 = alloc::boxed::Box<T>::new(&v21);
            } else {
                v3 = v27;
                v11 = <T as alloc::string::ToString>::to_string(&v3);
                v21 = struct28 {
                    field_0: v11.field_0
                    field_16: v12
                    field_24: 1
                };
                v29 = alloc::boxed::Box<T>::new(&v21);
            }
            return v29;
        },
        Ok(_) => {
            v10 = *((&v17 as &char + 48) as &i64);
            v9 = v20;
            memcpy(&v8, &v17, 16);
            memcpy(&v7, &v17, 16);
            uu_ls::Config::from(&v17, &v7 as u128);
            v28 = v18;
            if let Err(_) = v17 {
                return v28;
            }
            memcpy(&v24, &v17 as u8, 232);
            v21 = v17 as i64;
            v22 = v28;
            v23 = v19;
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7 as u128, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_6131f8.field_0);
            v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_6131f8.field_0, &v17);
            if v3.field_0 as i64 {
                v17 = struct64 {
                    field_0: v3.field_0
                    field_16: v4
                    field_32: v5
                    field_48: v6
                };
                v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17);
                v2 = v16;
                v0 = v15.field_0 as i64;
            } else {
                v0 = uu_ls::uumain::uumain::{{closure}}();
            }
            v17 = v1;
            v28 = uu_ls::list(&v17, &v21);
            return v28;
        },
    }
}
