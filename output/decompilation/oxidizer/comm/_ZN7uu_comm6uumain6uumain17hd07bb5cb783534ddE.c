fn uu_comm::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i448;  // [bp-0x438], Other Possible Types: struct56, struct64, struct24
    let v1: i8;  // [bp-0x430]
    let v2: i8;  // [bp-0x428]
    let v3: i8;  // [bp-0x418]
    let v4: i8;  // [bp-0x408]
    let v5: struct24;  // [sp-0x3f8], Other Possible Types: i192
    let v6: i64;  // [sp-0x3e0]
    let v7: i64;  // [sp-0x3d8]
    let v8: i128;  // [sp-0x3d0]
    let v9: i128;  // [sp-0x3c0]
    let v10: i64;  // [sp-0x3b0]
    let v11: i64;  // [sp-0x3a8]
    let v12: i64;  // [sp-0x3a0]
    let v13: i128;  // [sp-0x398]
    let v14: i128;  // [sp-0x388]
    let v15: i8;  // [sp-0x378]
    let v16: i32;  // [bp-0x377]
    let v17: i32;  // [sp-0x374]
    let v18: i64;  // [sp-0x370]
    let v19: i64;  // [sp-0x368]
    let v20: i128;  // [sp-0x360]
    let v21: i128;  // [sp-0x350]
    let v22: i8;  // [sp-0x340]
    let v23: i32;  // [bp-0x33f]
    let v24: i32;  // [sp-0x33c]
    let v25: i64;  // [sp-0x338]
    let v26: i64;  // [sp-0x330]
    let v27: i512;  // [sp-0x328]
    let v28: i320;  // [sp-0x2e8], Other Possible Types: struct44, Result<struct40, struct8>, struct712, struct56
    let v32: i64;  // rax
    let v34: i64;  // rbx
    let v35: i64;  // rdi
    let v36: i64;  // r14
    let v37: i32;  // ebp
    let v38: i8;  // al
    let v39: i64;  // rbx
    let v40: i64;  // rcx
    let v41: i8;  // al
    let v42: i64;  // rbx
    let v43: i64;  // r14
    let v45: i64;  // rcx
    let v46: struct8;  // rax
    let v47: i64;  // rcx
    let v48: i64;  // rax
    let v49: i64;  // rbx
    let v50: i64;  // r14
    let v51: i8;  // al

    v28 = uu_comm::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v28, a0, a1);
    if v6 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v32;
    }
    v10 = v4;
    v9 = v3;
    v8 = v2;
    v6 = v0;
    v7 = v1;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "FILE1");
    v34 = clap_builder::parser::error::MatchesError::unwrap("FILE1", &v28);
    if !v34 {
        v35 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs";
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, "FILE2");
        v36 = clap_builder::parser::error::MatchesError::unwrap("FILE2", &v28);
        if !v36 {
            v35 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs";
        } else {
            v37 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "zero-terminated") as i8 ? 0 : 10);
            v28 = uu_comm::open_file(*((v34 + 8) as &i64), *((v34 + 16) as &i64), v37);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v28, v34);
            v38 = *((&v0 as &char + 48) as &i8);
            v39 = v0;
            v40 = *((&v0 as &char + 8) as &i64);
            if v15 == 11 {
                return v32;
            }
            v14 = *((&v0 as &char + 32) as &i128);
            v13 = *((&v0 as &char + 16) as &i128);
            v16 = *((&v0 as &char + 49) as &i32);
            v17 = *((&v0 as &char + 52) as &i32);
            v11 = v39;
            v12 = v40;
            v15 = v38;
            v28 = uu_comm::open_file(*((v36 + 8) as &i64), *((v36 + 16) as &i64), v37);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v28, v36);
            v41 = *((&v0 as &char + 48) as &i8);
            v42 = v0;
            v43 = *((&v0 as &char + 8) as &i64);
            if v22 != 11 {
                v21 = *((&v0 as &char + 32) as &i128);
                v20 = *((&v0 as &char + 16) as &i128);
                v23 = *((&v0 as &char + 49) as &i32);
                v24 = *((&v0 as &char + 52) as &i32);
                v18 = v42;
                v19 = v43;
                v22 = v41;
                v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6, "output-delimiter");
                v0 = clap_builder::parser::error::MatchesError::unwrap("output-delimiter", &v28);
                if !v0 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/comm/src/comm.rs"); /* do not return */
                }
                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
                v45 = *((&v5 as &char + 8) as &i64);
                v25 = v45 + 24;
                v26 = v45 + *((&v5 as &char + 16) as &i64) * 24;
                do {
                    v46 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v46 && *((&v5 as &char + 16) as &i64) {
                        v48 = *((&v5 as &char + 8) as &i64);
                        v49 = *((v48 + 8) as &i64);
                        v50 = *((v48 + 16) as &i64);
                        v51 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v50, 1, 0) as i8;
                        if v51 {
                            v49 = &g_41429c;
                        }
                        if v51 {
                            v50 = 1;
                        }
                        uu_comm::comm(&v11, &v18, v49, v50, &v6);
                        return 0;
                    }
                } while ((v47 = *((&v5 as &char + 8) as &i64), alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v46 + 8) as &i64), *((v46 + 16) as &i64), *((v47 + 8) as &i64), *((v47 + 16) as &i64)) as i8));
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v28 = v0;
                alloc::boxed::Box<T>::new(&v28);
            }
        }
    }
    core::option::unwrap_failed(v35); /* do not return */
}
