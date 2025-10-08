fn uu_comm::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct56;  // [bp-0x3e8], Other Possible Types: u64
    let v1: struct16;  // [bp-0x3e8]
    let v2: struct56;  // [bp-0x3e8]
    let v3: struct64;  // [bp-0x3e8]
    let v4: struct24;  // [bp-0x3e8]
    let v5: u64;  // [bp-0x3e0]
    let v6: iNone;  // [bp-0x3d8]
    let v7: iNone;  // [bp-0x3c8]
    let v8: i8;  // [bp-0x3b8], Other Possible Types: u8
    let v9: u8;  // [bp-0x3a8]
    let v10: i64;  // [bp-0x3a0]
    let v11: u64;  // [bp-0x398]
    let v12: u64;  // [bp-0x390]
    let v13: u64;  // [bp-0x388]
    let v14: iNone;  // [bp-0x380]
    let v15: iNone;  // [bp-0x370]
    let v16: u64;  // [bp-0x360]
    let v17: u64;  // [bp-0x358]
    let v18: u64;  // [bp-0x350]
    let v19: iNone;  // [bp-0x348]
    let v20: iNone;  // [bp-0x338]
    let v21: u8;  // [bp-0x328]
    let v22: u32;  // [bp-0x327]
    let v23: u32;  // [bp-0x324]
    let v24: u64;  // [bp-0x320]
    let v25: u64;  // [bp-0x318]
    let v26: iNone;  // [bp-0x310]
    let v27: iNone;  // [bp-0x300]
    let v28: u8;  // [bp-0x2f0]
    let v29: u32;  // [bp-0x2ef]
    let v30: u32;  // [bp-0x2ec]
    let v31: struct28;  // [bp-0x2e8], Other Possible Types: struct56, struct64, struct712, Result<struct40, struct16>, struct44
    let v33: u64;  // rdi
    let v34: u32;  // ebp
    let v35: i64;  // rbx
    let v36: i64;  // r15
    let v37: u32;  // ebp
    let v38: u64;  // rbx
    let v39: iNone;  // xmm0
    let v40: i64;  // r14
    let v41: void*;  // r15
    let v42: void*;  // r15
    let v44: u8;  // cc_dep1
    let v45: void*;  // rdx
    let v46: u64;  // r15

    v31 = uu_comm::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v31, a0, a1);
    v33 = v5;
    if (((0 ^ v1.field_0) & (0 ^ -(v0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v16 = *(&v8 as &i64);
    v15 = v7;
    v14 = v6;
    v12 = v1.field_0;
    v13 = v5;
    v34 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "zero-terminated") ? 0 : 10);
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, &g_418192);
    v35 = clap_builder::parser::error::MatchesError::unwrap(&g_418192, &v31);
    if v35 {
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, &g_418197);
        v36 = clap_builder::parser::error::MatchesError::unwrap(&g_418197, &v31);
        if v36 {
            v37 = v34;
            v31 = uu_comm::open_file(*((v35 + 8) as &i64), *((v35 + 16) as &i64), v37);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v31, v35);
            v38 = v0.field_0;
            if v8 == 11 {
                return v38;
            }
            v20 = v7;
            v19 = v6;
            v22 = *((&v0.field_48 as &char + 1) as &i32);
            v23 = *((&v0.field_48 as &char + 4) as &i32);
            v17 = v38;
            v18 = v5;
            v21 = v8;
            v31 = uu_comm::open_file(*((v36 + 8) as &i64), *((v36 + 16) as &i64), v37);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v31, v36);
            v38 = v2.field_0;
            if v8 != 11 {
                v27 = v7;
                v26 = v6;
                v29 = *((&v2.field_48 as &char + 1) as &i32);
                v30 = *((&v2.field_48 as &char + 4) as &i32);
                v24 = v38;
                v25 = v5;
                v28 = v8;
                v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12);
                v3 = clap_builder::parser::error::MatchesError::unwrap(&v31);
                core::option::unwrap(v3);
                v39 = v3.field_0;
                v31 = struct64 {
                    field_0: v39
                    field_16: v6
                    field_32: v7
                    field_48: v3.field_48
                };
                core::iter::traits::iterator::Iterator::collect(&v9, &v31);
                v40 = v10;
                v41 = 0;
                do {
                    v42 = v41;
                    if v11 * 24 - 24 == v42 {
                        v44 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v40 + 8) as &i64), *((v40 + 16) as &i64), 1, 0);
                        v38 = uu_comm::comm(&v17, &v24, v45, v46, &v12);
                    }
                    v41 = v42 + 24;
                } while (alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((32 + v40 + v42 as &u8) as &i64), *((40 + v40 + v42 as &u8) as &i64), *((v40 + 8) as &i64), *((v40 + 16) as &i64)));
                v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("multiple conflicting output delimiters specified");
                v31 = struct28 {
                    field_0: *(&v4.field_0 as &i128)
                    field_16: v4.field_16
                    field_24: 1
                };
                v38 = alloc::boxed::Box<T>::new(&v31) as u64;
            }
            return v38;
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
