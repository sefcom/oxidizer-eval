fn uu_comm::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i448;  // [sp-0x438], Other Possible Types: struct56, struct64, Result<struct56, struct8>, struct24
    let v1: i192;  // [sp-0x3f8], Other Possible Types: struct24
    let v2: i64;  // [sp-0x3e0]
    let v3: i64;  // [sp-0x3d8]
    let v4: i128;  // [sp-0x3d0]
    let v5: i128;  // [sp-0x3c0]
    let v6: i64;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a8]
    let v8: i64;  // [sp-0x3a0]
    let v9: i128;  // [sp-0x398]
    let v10: i128;  // [sp-0x388]
    let v11: i8;  // [sp-0x378]
    let v12: i32;  // [bp-0x377]
    let v13: i32;  // [sp-0x374]
    let v14: i64;  // [bp-0x370]
    let v15: i64;  // [sp-0x368]
    let v16: i128;  // [sp-0x360]
    let v17: i128;  // [sp-0x350]
    let v18: i8;  // [sp-0x340]
    let v19: i32;  // [bp-0x33f]
    let v20: i32;  // [sp-0x33c]
    let v21: i64;  // [sp-0x338]
    let v22: i64;  // [sp-0x330]
    let v23: struct64;  // [bp-0x328]
    let v24: i352;  // [sp-0x2e8], Other Possible Types: Result<struct40, struct8>, struct44, struct712, struct56, struct28
    let v28: i64;  // rax
    let v30: i64;  // rbx
    let v31: i64;  // rdi
    let v32: i64;  // r14
    let v33: i32;  // ebp
    let v34: i8;  // al
    let v35: i64;  // rcx
    let v36: i8;  // al
    let v37: i64;  // rbx
    let v38: i64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v41: struct8;  // rax
    let v42: i64;  // rcx
    let v43: i64;  // rax
    let v44: i64;  // rbx
    let v45: i64;  // r14
    let v46: i8;  // al

    v24 = uu_comm::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    match v0 {
        Err(_) => {
            v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v28;
        },
        Ok(_) => {
            v6 = *((&v0 as &char + 48) as &i64);
            v5 = *((&v0 as &char + 32) as &i128);
            v4 = *((&v0 as &char + 16) as &i128);
            v2 = v0;
            v3 = *((&v0 as &char + 8) as &i64);
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "FILE1");
            v30 = clap_builder::parser::error::MatchesError::unwrap("FILE1", &v24);
            if !v30 {
                v31 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs";
            } else {
                v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "FILE2");
                v32 = clap_builder::parser::error::MatchesError::unwrap("FILE2", &v24);
                if !v32 {
                    v31 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs";
                } else {
                    v33 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2, "zero-terminated") as i8 ? 0 : 10);
                    v24 = uu_comm::open_file(*((v30 + 8) as &i64), *((v30 + 16) as &i64), v33 as u32 as u64);
                    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v24, v30);
                    v34 = *((&v0 as &char + 48) as &i8);
                    v28 = v0;
                    v35 = *((&v0 as &char + 8) as &i64);
                    if v11 != 11 {
                        v10 = *((&v0 as &char + 32) as &i128);
                        v9 = *((&v0 as &char + 16) as &i128);
                        v12 = *((&v0 as &char + 49) as &i32);
                        v13 = *((&v0 as &char + 52) as &i32);
                        v7 = v28;
                        v8 = v35;
                        v11 = v34;
                        v24 = uu_comm::open_file(*((v32 + 8) as &i64), *((v32 + 16) as &i64), v33 as u32 as u64);
                        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v24, v32);
                        v36 = *((&v0 as &char + 48) as &i8);
                        v37 = v0;
                        v38 = *((&v0 as &char + 8) as &i64);
                        if v18 != 11 {
                            v17 = *((&v0 as &char + 32) as &i128);
                            v16 = *((&v0 as &char + 16) as &i128);
                            v19 = *((&v0 as &char + 49) as &i32);
                            v20 = *((&v0 as &char + 52) as &i32);
                            v28 = v37;
                            v15 = v38;
                            v18 = v36;
                            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "output-delimiter");
                            v0 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v24);
                            if !v0 {
                                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs"); /* do not return */
                            }
                            v23 = struct64 {
                                field_0: v0
                                field_16: *((&v0 as &char + 16) as &i128)
                                field_32: *((&v0 as &char + 32) as &i128)
                                field_48: *((&v0 as &char + 48) as &i128)
                            };
                            v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23);
                            v39 = *((&v1 as &char + 16) as &i64);
                            if !v39 {
                                core::slice::index::slice_start_index_len_fail(1, 0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs"); /* do not return */
                            }
                            v40 = *((&v1 as &char + 8) as &i64);
                            v21 = v40 + 24;
                            v22 = v40 + v39 * 24;
                            do {
                                v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                                if !v41 && *((&v1 as &char + 16) as &i64) {
                                    v43 = *((&v1 as &char + 8) as &i64);
                                    v44 = *((v43 + 8) as &i64);
                                    v45 = *((v43 + 16) as &i64);
                                    v46 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v44, v45, 1, 0) as i8;
                                    if v46 {
                                        v44 = &g_41429c;
                                    }
                                    if v46 {
                                        v45 = 1;
                                    }
                                    uu_comm::comm(&v7, &v14, v44, v45, &v2);
                                    return 0;
                                }
                            } while ((v42 = *((&v1 as &char + 8) as &i64), alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v41 + 8) as &i64), *((v41 + 16) as &i64), *((v42 + 8) as &i64), *((v42 + 16) as &i64)) as i8));
                            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                            v24 = struct28 {
                                field_0: v0
                                field_16: *((&v0 as &char + 16) as &i64)
                                field_24: 1
                            };
                            v28 = alloc::boxed::Box<T>::new(&v24);
                        }
                    }
                    return v28;
                }
            }
            core::option::unwrap_failed(v31); /* do not return */
        },
    }
}
