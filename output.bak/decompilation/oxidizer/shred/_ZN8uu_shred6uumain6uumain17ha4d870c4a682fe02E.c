fn uu_shred::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x428]
    let v1: i64;  // [sp-0x420]
    let v2: i64;  // [sp-0x418]
    let v3: i64;  // [sp-0x410]
    let v4: i8;  // [sp-0x3f9]
    let v5: i64;  // [sp-0x3f0]
    let v6: i512;  // [sp-0x3e0], Other Possible Types: Result<struct56, struct8>, struct24, struct64
    let v7: i64;  // [sp-0x3d8]
    let v8: i64;  // [sp-0x3d0]
    let v9: i8;  // [bp-0x3c8]
    let v10: Result<struct8, struct1>;  // [sp-0x3a0], Other Possible Types: i64
    let v11: i64;  // [sp-0x398]
    let v12: i64;  // [sp-0x390]
    let v13: i64;  // [sp-0x388]
    let v14: i128;  // [sp-0x380]
    let v15: i128;  // [sp-0x370]
    let v16: i64;  // [sp-0x360]
    let v17: i64;  // [sp-0x350]
    let v18: i64;  // [sp-0x348]
    let v19: i64;  // [sp-0x340]
    let v20: i128;  // [sp-0x328]
    let v23: i64;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct28, struct56, struct24, struct712
    let v24: i64;  // [sp-0x2f0]
    let v25: i128;  // [sp-0x2e8]
    let v26: i64;  // [bp-0x2e0]
    let v27: i128;  // [bp-0x2d8]
    let v28: i128;  // [sp-0x2c8]
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // r14
    let v34: i64;  // r15
    let v35: i64;  // r12
    let v36: i64;  // rax
    let v37: i64;  // rbx
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r13
    let v41: i64;  // rsi
    let v42: i64;  // r15
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: struct8;  // rax
    let v49: i64;  // rax

    v23 = uu_shred::uu_app();
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v23, a0, a1);
    if v12 == 0x8000000000000000 {
        v31 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v31;
    }
    v16 = *((&v6 as &char + 48) as &i64);
    v15 = *((&v6 as &char + 32) as &i128);
    v14 = *((&v6 as &char + 16) as &i128);
    v12 = v6;
    v13 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v12, "file") as i8 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v23 = struct28 {
            field_0: v6
            field_16: v8
            field_24: 1
        };
        v31 = alloc::boxed::Box<T>::new(&v23);
    } else {
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "iterations");
        v32 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v23);
        if !v32 {
            core::panicking::panic("internal error: entered unreachable code", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
        }
        v33 = *((v32 + 8) as &i64);
        v34 = *((v32 + 16) as &i64);
        v10 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v33, v34) as u64;
        if v10 {
            v6 = 0;
            v7 = v33;
            v8 = v34;
            v9 = 1;
            v18 = &v6;
            v19 = <os_display::Quoted as core::fmt::Display>::fmt;
            v23 = "invalid number of passes: ";
            v24 = 1;
            v27 = 0;
            v25 = &v18;
            v26 = 1;
            core::option::Option<T>::map_or_else();
            v23 = struct28 {
                field_0: v21
                field_16: v22
                field_24: 1
            };
            v31 = alloc::boxed::Box<T>::new(&v23);
        } else {
            v17 = v11;
            v35 = &v23 | -0x100 | 3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "u") as i8 {
LABEL_474d3c:
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "force") as i8;
                v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "size");
                v39 = clap_builder::parser::error::MatchesError::unwrap("size", &v23);
                v40 = 0x8000000000000000;
                if v39 {
                    v23 = <alloc::string::String as core::clone::Clone>::clone(v39);
                    v20 = *((&v23 as &char + 8) as &i128);
                    v40 = v23;
                }
                v23 = v40;
                v24 = v20;
                v42 = uu_shred::get_size(&v23, v41);
                v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "file");
                v6 = clap_builder::parser::error::MatchesError::unwrap("file", &v23);
                if !v6 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
                }
                v46 = v6;
                v47 = *((&v6 as &char + 16) as &i128);
                v28 = *((&v6 as &char + 48) as &i128);
                v27 = *((&v6 as &char + 32) as &i128);
                v25 = v47;
                v23 = v46;
                loop {
                    v48 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v48 {
                        return 0;
                    }
                    v3 = v4;
                    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "verbose") as i32;
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "zero") as i32;
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "exact") as i32 | v42 == 1;
                    v49 = uu_shred::wipe_file(*((v48 + 8) as &i64), *((v48 + 16) as &i64), v17, v35 & 4294967295 & 4294967295, v42, v38);
                    if v49 {
                        v5 = v49;
                        uucore::mods::error::set_exit_code(*((v38 + 96) as &i64)());
                        v10 = uucore::util_name();
                        v11 = v38;
                        eprintln!("{:?}: {:?}", &v10, &v5);
                    }
                }
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v12, "remove") as i8 {
                    v35 = 0;
                    goto LABEL_474d3c;
                }
                v23 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "remove");
                if !(clap_builder::parser::error::MatchesError::unwrap("remove", &v23) && (v36 = core::ops::function::FnOnce::call_once(), v36)) {
                    panic!("internal error: entered unreachable code: should be caught by clap");
                }
                v37 = v36;
                v35 = v35 | -0x100 | 1;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v38, "unlink") as i8) {
                    goto LABEL_474d3c;
                }
                v35 = v35 | -0x100 | 2;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v38, "unlink") as i8) {
                    goto LABEL_474d3c;
                }
            }
        }
    }
    return v31;
}
