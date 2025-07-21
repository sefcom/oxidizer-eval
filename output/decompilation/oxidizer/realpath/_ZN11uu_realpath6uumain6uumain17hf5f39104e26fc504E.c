fn uu_realpath::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x430]
    let v1: u64;  // [bp-0x428]
    let v2: u64;  // [bp-0x420]
    let v3: struct16;  // [bp-0x418]
    let v4: u128;  // [bp-0x408]
    let v5: u64;  // [bp-0x400]
    let v6: u64;  // [bp-0x3f8]
    let v7: u64;  // [bp-0x3e8]
    let v8: u64;  // [bp-0x3e0]
    let v9: struct56;  // [bp-0x3d8]
    let v10: u32;  // [bp-0x3d0]
    let v11: Result<struct56, struct16>;  // [bp-0x3a0], Other Possible Types: struct64
    let v12: struct56;  // [bp-0x3a0], Other Possible Types: struct64
    let v13: struct24;  // [bp-0x360]
    let v14: u64;  // [bp-0x358]
    let v15: u64;  // [bp-0x350]
    let v16: u64;  // [bp-0x348]
    let v17: i64;  // [bp-0x340]
    let v18: struct64;  // [bp-0x338]
    let v19: struct48;  // [bp-0x2f8], Other Possible Types: u8
    let v20: struct56;  // [bp-0x2f8]
    let v21: u64;  // [bp-0x2f0]
    let v22: u64;  // [bp-0x2e8]
    let v24: u8;  // al
    let v25: u32;  // r14d
    let v26: u8;  // al
    let v27: u8;  // al
    let v28: u8;  // al
    let v29: u32;  // ebp
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v32: u32;  // r14d
    let v33: u32;  // r15d
    let v34: void*;  // r9
    let v35: void*;  // rax
    let v36: u64;  // rax
    let v37: void*;  // r9
    let v38: void*;  // rax
    let v39: u64;  // rax
    let v40: i64;  // rdx

    uu_realpath::uu_app(&v19);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    match v11 {
        Err(_) => {
            return alloc::boxed::Box<T>::new(v10, 1);
        },
        Ok(v9) => {
            v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E.field_0, g_523e38.field_0);
            v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E.field_0, g_523e38.field_0, &v20);
            if !v11.field_0 as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            v18 = v12;
            v13 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E.field_0, g_523e08.field_0) as i32 as i8;
            v25 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E.field_0, g_523e18.field_0) as i8 ? 0 : 10);
            v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE.field_0, g_523df8.field_0) as i32 as i8;
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE.field_0, g_523e28.field_0) as i32 as i8;
            v28 = 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-existing") as i32 as i8 {
                v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "canonicalize-missing") as i8 * 2;
            }
            v19 = uu_realpath::prepare_relative_options(&v9, v28 as u32 as u64);
            if v19.field_0 as i64 == 9223372036854775809 {
                return v21;
            }
            v6 = v19.field_40;
            v4 = *(&v19.field_24 as &i128) as u128;
            v0 = v19.field_0 as i64;
            v1 = v21;
            v2 = v22;
            v7 = v14;
            v8 = v14 + v15 * 24;
            v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
            if !v30 {
                return 0;
            }
            v31 = v30;
            v32 = v25;
            v33 = (!v24 ? (v27 + 1) as u32 : 0);
            if v26 {
                do {
                    v34 = 0;
                    if v0 != 0x8000000000000000 {
                        v34 = v1;
                    }
                    v35 = 0;
                    if v4 as i64 != 0x8000000000000000 {
                        v35 = v5;
                    }
                    v36 = uu_realpath::resolve_path(*((v31 + 8) as &i64), *((v31 + 16) as &i64), v32 as u64, v33 as u64, v29 as u64, v34, v2, v35, v6);
                    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
                } while (v31);
            } else {
                do {
                    v37 = 0;
                    if v0 != 0x8000000000000000 {
                        v37 = v1;
                    }
                    v38 = 0;
                    if v4 as i64 != 0x8000000000000000 {
                        v38 = v5;
                    }
                    v39 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v31 + 8) as &i64), *((v31 + 16) as &i64), v32 as u64, v33 as u64, v29 as u64, v37, v2, v38, v6), v31);
                    if v39 {
                        v3 = struct16 {
                            field_0: v39
                            field_8: v40
                        };
                        uucore::mods::error::set_exit_code(*((v40 + 96) as &i64)(v39) as u32 as u64);
                        v16 = uucore::util_name();
                        v17 = v40;
                        eprintln!("{}: {}", &v16, &v3);
                    }
                    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
                } while (v31);
            }
            return 0;
        },
    }
}
