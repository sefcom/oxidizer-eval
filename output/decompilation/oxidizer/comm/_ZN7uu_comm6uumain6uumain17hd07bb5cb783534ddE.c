fn uu_comm::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct56;  // [bp-0x438], Other Possible Types: struct64
    let v1: Result<struct56, struct16>;  // [bp-0x438]
    let v2: struct56;  // [bp-0x438]
    let v3: struct24;  // [bp-0x438], Other Possible Types: struct64
    let v4: u64;  // [bp-0x430]
    let v5: u128;  // [bp-0x428]
    let v6: u128;  // [bp-0x418]
    let v7: u8;  // [bp-0x408]
    let v8: struct24;  // [bp-0x3f8]
    let v9: i64;  // [bp-0x3f0]
    let v10: u64;  // [bp-0x3e8]
    let v11: u64;  // [bp-0x3e0]
    let v12: u64;  // [bp-0x3d8]
    let v13: u128;  // [bp-0x3d0]
    let v14: u128;  // [bp-0x3c0]
    let v15: u64;  // [bp-0x3b0]
    let v16: u64;  // [bp-0x3a8]
    let v17: u64;  // [bp-0x3a0]
    let v18: u128;  // [bp-0x398]
    let v19: u128;  // [bp-0x388]
    let v20: u8;  // [bp-0x378]
    let v21: u32;  // [bp-0x377]
    let v22: u32;  // [bp-0x374]
    let v23: u64;  // [bp-0x370]
    let v24: u64;  // [bp-0x368]
    let v25: u128;  // [bp-0x360]
    let v26: u128;  // [bp-0x350]
    let v27: u8;  // [bp-0x340]
    let v28: u32;  // [bp-0x33f]
    let v29: u32;  // [bp-0x33c]
    let v30: struct16;  // [bp-0x338]
    let v31: struct64;  // [bp-0x328]
    let v32: struct56;  // [bp-0x2e8], Other Possible Types: Result<struct40, struct16>, struct28, struct44, u8
    let v34: u32;  // ebp
    let v35: i64;  // rbx
    let v36: i64;  // r14
    let v37: u32;  // ebp
    let v38: u64;  // rbx
    let v39: i64;  // rax
    let v40: u64;  // r14
    let v41: u8;  // cc_dep1
    let v42: u64;  // rbx

    uu_comm::uu_app(&v32);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v32, a0, a1);
    match v1 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        },
        Ok(_) => {
            v15 = *((&v1 as &char + 48) as &i64);
            v14 = v6;
            v13 = v5;
            v11 = v1 as i64;
            v12 = v4;
            v34 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "zero-terminated") as i8 ? 0 : 10);
            v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "FILE1");
            v35 = clap_builder::parser::error::MatchesError::unwrap("FILE1", &v32);
            if v35 {
                v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "FILE2");
                v36 = clap_builder::parser::error::MatchesError::unwrap("FILE2", &v32);
                if v36 {
                    v37 = v34;
                    v32 = uu_comm::open_file(*((v35 + 8) as &i64), *((v35 + 16) as &i64), v37 as u64);
                    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v32, v35);
                    v38 = v0.field_0 as i64;
                    if v7 == 11 {
                        return v38;
                    }
                    v19 = v6;
                    v18 = v5;
                    v21 = *((&v0.field_48 as &char + 1) as &i32) as u32;
                    v22 = *((&v0.field_48 as &char + 4) as &i32);
                    v16 = v38;
                    v17 = v4;
                    v20 = v7;
                    v32 = uu_comm::open_file(*((v36 + 8) as &i64), *((v36 + 16) as &i64), v37 as u64);
                    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v32, v36);
                    v38 = v2.field_0 as i64;
                    if v7 != 11 {
                        v26 = v6;
                        v25 = v5;
                        v28 = *((&v2.field_48 as &char + 1) as &i32) as u32;
                        v29 = *((&v2.field_48 as &char + 4) as &i32);
                        v23 = v38;
                        v24 = v4;
                        v27 = v7;
                        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, "output-delimiter");
                        v0 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v32);
                        if !v0.field_0 as i64 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v31 = v3;
                        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v31);
                        v30 = struct16 {
                            field_0: v9 + 24
                            field_8: v9 + v10 * 24
                        };
                        do {
                            if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v30) {
                                v41 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v9 + 8) as &i64), *((v9 + 16) as &i64), 1, 0) as i8;
                                uu_comm::comm(&v16, &v23, v42, v40, &v11);
                                return 0;
                            }
                        } while (alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v39 + 8) as &i64), *((v39 + 16) as &i64), *((v9 + 8) as &i64), *((v9 + 16) as &i64)) as i8);
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v32 = struct32 {
                            field_0: v3.field_0
                            field_16: v3.field_16
                            field_24: 1
                        };
                        v32 = struct28 {
                            field_0: v3.field_0
                            field_16: v3.field_16
                            field_24: 1
                        };
                        v38 = alloc::boxed::Box<T>::new(&v32);
                    }
                    return v38;
                }
            }
            core::option::unwrap_failed(); /* do not return */
        },
    }
}
