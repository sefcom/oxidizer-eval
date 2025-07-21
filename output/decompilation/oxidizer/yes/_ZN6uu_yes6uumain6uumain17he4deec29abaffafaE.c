fn uu_yes::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x398]
    let v1: struct8;  // [bp-0x390], Other Possible Types: u64
    let v2: u64;  // [bp-0x388]
    let v3: void*;  // [bp-0x380]
    let v4: u64;  // [bp-0x378]
    let v5: u64;  // [bp-0x370]
    let v6: u128;  // [bp-0x368]
    let v7: u128;  // [bp-0x358]
    let v8: u64;  // [bp-0x348]
    let v9: Result<struct56, struct16>;  // [bp-0x340], Other Possible Types: struct64, struct8, struct_0 *
    let v10: u64;  // [bp-0x338]
    let v11: u128;  // [bp-0x330]
    let v12: u128;  // [bp-0x320]
    let v13: u128;  // [bp-0x300]
    let v14: u64;  // [bp-0x2f0]
    let v15: struct28;  // [bp-0x2e8], Other Possible Types: struct56, struct700, struct24, u64
    let v16: u64;  // [bp-0x2e0]
    let v17: i64;  // [bp-0x2d8], Other Possible Types: u64
    let v18: u64;  // [bp-0x2d0]
    let v19: void*;  // [bp-0x2c8]
    let v21: u64;  // rdx
    let v22: u64;  // rbx
    let v23: void*;  // r14

    v15 = uu_yes::uu_app();
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    match v9 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        },
        Ok(_) => {
            v8 = *((&v9 as &char + 48) as &i64);
            v7 = v12;
            v6 = v11;
            v4 = v9 as i64;
            v5 = v10;
            v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x4000, 0);
            v1 = v16;
            v2 = v17;
            v3 = 0;
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "STRING");
            v9 = clap_builder::parser::error::MatchesError::unwrap("STRING", &v15);
            v9 = uu_yes::args_into_buffer(v21);
            v1 = uu_yes::prepare_buffer();
            v22 = uu_yes::exec(v2, 0);
            if !(v22 && std::io::error::Error::kind(v22) != 11) {
                return v23;
            }
            v0 = v22;
            v9 = &v0;
            v10 = <std::io::error::Error as core::fmt::Display>::fmt;
            v15 = "standard output: ";
            v16 = 1;
            v19 = 0;
            v17 = &v9;
            v18 = 1;
            v15 = core::option::Option<T>::map_or_else(v21);
            v15 = struct28 {
                field_0: v13
                field_16: v14
                field_24: 1
            };
            v23 = alloc::boxed::Box<T>::new(&v15);
            return v23;
        },
    }
}
