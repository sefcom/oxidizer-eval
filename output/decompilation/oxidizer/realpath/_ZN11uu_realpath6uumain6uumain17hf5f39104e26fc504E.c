fn uu_realpath::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x430]
    let v1: u64;  // [bp-0x428]
    let v2: u64;  // [bp-0x420]
    let v3: u64;  // [bp-0x418]
    let v4: u8;  // [bp-0x408]
    let v5: u64;  // [bp-0x400]
    let v6: u64;  // [bp-0x400]
    let v7: u64;  // [bp-0x3f8]
    let v8: u64;  // [bp-0x3e8]
    let v9: u64;  // [bp-0x3e0]
    let v10: u160;  // [bp-0x3d8]
    let v11: u32;  // [bp-0x3d0]
    let v12: u8;  // [bp-0x3c4]
    let v13: u8;  // [bp-0x3b4]
    let v14: u32;  // [bp-0x3a4]
    let v15: Result<struct56, struct16>;  // [bp-0x3a0]
    let v16: struct64;  // [bp-0x3a0], Other Possible Types: u160
    let v17: struct24;  // [bp-0x360]
    let v18: u64;  // [bp-0x358]
    let v19: u64;  // [bp-0x350]
    let v20: u64;  // [bp-0x348]
    let v21: i64;  // [bp-0x340]
    let v22: u8;  // [bp-0x338]
    let v23: u8;  // [bp-0x328]
    let v24: u8;  // [bp-0x318]
    let v25: u8;  // [bp-0x308]
    let v26: u8;  // [bp-0x2f8], Other Possible Types: struct48
    let v27: struct56;  // [bp-0x2f8]
    let v28: u64;  // [bp-0x2f0]
    let v29: u64;  // [bp-0x2e8]
    let v31: u8;  // al
    let v32: u32;  // r14d
    let v33: u8;  // al
    let v34: u8;  // al
    let v35: u8;  // al
    let v36: u32;  // ebp
    let v37: i64;  // rax
    let v38: i64;  // rbx
    let v39: u32;  // r14d
    let v40: u32;  // r15d
    let v42: u64;  // r9
    let v44: u64;  // r9
    let v46: u64;  // rax
    let v48: u64;  // rax
    let v50: void*;  // r9
    let v51: void*;  // rax
    let v52: u64;  // rax
    let v53: i64;  // rdx

    uu_realpath::uu_app(&v26);
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v26, a0, a1);
    match v15 {
        Err(_) => {
            return alloc::boxed::Box<T>::new(v11, 1);
        },
        Ok(_) => {
            memcpy(&v12, &v15, 16);
            memcpy(&v13, &v15, 16);
            v14 = *((&v15 as &char + 52) as &i32);
            v10 = v16;
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E.field_0, g_523e38.field_0);
            v16 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E.field_0, g_523e38.field_0, &v27);
            if !v16.field_0 as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            memcpy(&v25, &v16 as u8, 16);
            memcpy(&v24, &v16, 16);
            memcpy(&v23, &v16, 16);
            memcpy(&v22, &v16, 16);
            v17 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22 as u128);
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E.field_0, g_523e08.field_0) as i32 as i8;
            v32 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E.field_0, g_523e18.field_0) as i8 ? 0 : 10);
            v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE.field_0, g_523df8.field_0) as i32 as i8;
            v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE.field_0, g_523e28.field_0) as i32 as i8;
            v35 = 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "canonicalize-existing") as i32 as i8 {
                v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "canonicalize-missing") as i8 * 2;
            }
            v26 = uu_realpath::prepare_relative_options(&v10, v35 as u32 as u64);
            if v26.field_0 as i64 == 9223372036854775809 {
                return v28;
            }
            v7 = v26.field_40;
            memcpy(&v4, &v26 as u8, 16);
            v0 = v26.field_0 as i64;
            v1 = v28;
            v2 = v29;
            v8 = v18;
            v9 = v18 + v19 * 24;
            v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
            if !v37 {
                return 0;
            }
            v38 = v37;
            v39 = v32;
            v40 = (!v31 ? (v34 + 1) as u32 : 0);
            if v33 {
                do {
                    v5 = v6;
                    v42 = 0;
                    if v0 != 0x8000000000000000 {
                        v42 = v1;
                    }
                    v44 = v42;
                    v46 = 0;
                    if v4 != 0x8000000000000000 {
                        v46 = v5;
                    }
                    v5 = v6;
                    v48 = uu_realpath::resolve_path(*((v38 + 8) as &i64), *((v38 + 16) as &i64), v39 as u64, v40 as u64, v36 as u64, v44, v2, v46, v7);
                    v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
                } while (v38);
            } else {
                do {
                    v50 = 0;
                    if v0 != 0x8000000000000000 {
                        v50 = v1;
                    }
                    v51 = 0;
                    if v4 != 0x8000000000000000 {
                        v51 = v5;
                    }
                    v52 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v38 + 8) as &i64), *((v38 + 16) as &i64), v39 as u64, v40 as u64, v36 as u64, v50, v2, v51, v7), v38);
                    if v52 {
                        v3 = v52;
                        uucore::mods::error::set_exit_code(*((v53 + 96) as &i64)(v52) as u32 as u64);
                        v20 = uucore::util_name();
                        v21 = v53;
                        eprintln!("{}: {}", &v20, &v3);
                    }
                    v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
                } while (v38);
            }
            return 0;
        },
    }
}
