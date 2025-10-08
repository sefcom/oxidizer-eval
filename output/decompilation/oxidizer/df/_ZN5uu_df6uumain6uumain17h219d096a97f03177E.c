fn uu_df::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x470]
    let v2: u64;  // [bp-0x468]
    let v3: void*;  // [bp-0x460]
    let v4: struct24;  // [bp-0x458], Other Possible Types: struct32, u128
    let v5: void*;  // [bp-0x450]
    let v6: u64;  // [bp-0x448]
    let v8: u64;  // [bp-0x428]
    let v9: struct16;  // [bp-0x408], Other Possible Types: u64
    let v10: struct56;  // [bp-0x408], Other Possible Types: u64
    let v11: u128;  // [bp-0x400]
    let v12: u128;  // [bp-0x3f0]
    let v13: u128;  // [bp-0x3e0]
    let v14: iNone;  // [bp-0x3d0]
    let v15: iNone;  // [bp-0x3c0]
    let v16: struct56;  // [bp-0x3b0]
    let v17: Result<struct24, struct24>;  // [bp-0x378]
    let v18: u64;  // [bp-0x370]
    let v19: void*;  // [bp-0x368]
    let v20: struct24;  // [bp-0x360]
    let v21: u64;  // [bp-0x358]
    let v22: void*;  // [bp-0x350]
    let v23: struct32;  // [bp-0x348], Other Possible Types: u128
    let v24: u128;  // [bp-0x338]
    let v25: struct64;  // [bp-0x328]
    let v26: Result<struct86, struct40>;  // [bp-0x2e8], Other Possible Types: struct56, u8
    let v27: u64;  // [bp-0x2e8]
    let v29: u128;  // [bp-0x2e8]
    let v30: u64;  // [bp-0x2e0]
    let v31: void*;  // [bp-0x2d8], Other Possible Types: u64
    let v32: u32;  // [bp-0x2d0]
    let v33: u128;  // [bp-0x2c0]
    let v34: iNone;  // [bp-0x2b0]
    let v36: core::fmt::Arguments;  // r14

    uu_df::uu_app(&v26);
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v26, a0, a1);
    if (((0 ^ v9.field_0) & (0 ^ -(v10))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9.field_8);
    }
    v16 = v10;
    v26 = uu_df::Options::from(&v16);
    v4 = *((&v26 as &char + 8) as &i128);
    v6 = *((&v26 as &char + 24) as &i128);
    match v26 {
        Err(_) => {
            v23 = v4;
            v36 = alloc::boxed::Box<T>::new(&v23) as u64;
        },
        Ok(_) => {
            v15 = *((&v26 as &char + 72) as &i128);
            v14 = v34;
            v13 = v33;
            v23 = v4;
            v24 = v6;
            v11 = v4;
            v12 = v24;
            v9 = v26 as i64;
            v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E.field_0, g_503030.field_0);
            v25 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E.field_0, g_503030.field_0, &v26);
            if v25.field_0 as i64 {
                core::iter::traits::iterator::Iterator::collect(&v4 as u8, &v25);
                v20 = uu_df::get_named_filesystems(v5, v6, &v9);
                if v20.field_0 as i64 == 0x8000000000000000 {
                    v36 = uu_df::uumain::uumain::{{closure}}(v30, v31);
                } else {
                    v27 = v20.field_0 as i64;
                    v30 = v21;
                    v31 = v22;
                    if v31 {
                        uu_df::table::Table::new(&v27, &v9, &v8);
                        println!("{}", &v27);
                        return 0;
                    }
                }
            } else {
                v17 = uu_df::get_all_filesystems(&v9);
                match v17 {
                    Err(_) => {
                        v36 = uu_df::uumain::uumain::{{closure}}(v2, v3);
                    },
                    Ok(_) => {
                        v0 = v17 as i64;
                        v2 = v18;
                        v3 = v19;
                        if v3 {
                            uu_df::table::Table::new(&v27, &v9, &v8);
                            println!("{}", &v27);
                            return 0;
                        }
                        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no file systems processed");
                        v31 = v6;
                        v29 = v4.field_0;
                        v32 = 1;
                        v36 = alloc::boxed::Box<T>::new(&v26) as u64;
                    },
                }
            }
        },
    }
    return v36;
}
