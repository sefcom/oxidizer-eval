fn uu_shred::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x428]
    let v1: i8;  // [bp-0x420]
    let v2: i8;  // [bp-0x418]
    let v3: i8;  // [bp-0x410]
    let v4: i8;  // [sp-0x3f9]
    let v5: i64;  // [sp-0x3f0]
    let v6: i64;  // [bp-0x3e0], Other Possible Types: struct64, struct24
    let v7: i64;  // [sp-0x3d8]
    let v8: i8;  // [bp-0x3d0]
    let v9: i8;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3c0]
    let v11: i8;  // [bp-0x3b0]
    let v12: i64;  // [sp-0x3a0], Other Possible Types: Result<struct8, struct1>
    let v13: i64;  // [sp-0x398]
    let v14: i64;  // [sp-0x390]
    let v15: i64;  // [sp-0x388]
    let v16: i128;  // [sp-0x380]
    let v17: i128;  // [sp-0x370]
    let v18: i64;  // [sp-0x360]
    let v19: i64;  // [sp-0x350]
    let v20: i128;  // [sp-0x328]
    let v21: i192;  // [sp-0x310]
    let v22: i64;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct28, struct712, struct56, struct24
    let v23: i128;  // [bp-0x2f0]
    let v24: i128;  // [bp-0x2e8]
    let v25: i128;  // [bp-0x2d8]
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // r14
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rbx
    let v36: i64;  // rdx
    let v37: i64;  // rax
    let v38: i64;  // r13
    let v39: i64;  // rsi
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i64;  // rsi
    let v44: i64;  // rdx
    let v45: struct8;  // rax
    let v46: i64;  // rax

    v22 = uu_shred::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v22, a0, a1);
    if v14 == 0x8000000000000000 {
        v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v28;
    }
    v18 = v11;
    v17 = v10;
    v16 = v8;
    v14 = v6;
    v15 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "file") as i8 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v22 = struct28 {
            field_0: v6
            field_16: v8
            field_24: 1
        };
        v28 = alloc::boxed::Box<T>::new(&v22);
    } else {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "iterations");
        v29 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v22);
        if !v29 {
            core::panicking::panic(); /* do not return */
        }
        v30 = *((v29 + 8) as &i64);
        v31 = *((v29 + 16) as &i64);
        v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v30, v31);
        if v12 {
            v6 = 0;
            v7 = v30;
            v8 = v31;
            v9 = 1;
            v21 = format!("invalid number of passes: {:?}", &v6);
            v22 = struct28 {
                field_0: v21
                field_16: *((&v21 as &char + 16) as &i64)
                field_24: 1
            };
            v28 = alloc::boxed::Box<T>::new(&v22);
        } else {
            v19 = v13;
            v32 = &v22 | -0x100 | 3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "u") as i8 {
LABEL_4709ac:
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "force") as i8;
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "size");
                v37 = clap_builder::parser::error::MatchesError::unwrap("size", &v22);
                if v37 {
                    v22 = <alloc::string::String as core::clone::Clone>::clone(v37);
                    v20 = *((&v22 as &char + 8) as &i128);
                    v38 = v22;
                }
                v22 = v38;
                v23 = v20;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "exact");
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "zero");
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "verbose");
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "file");
                v6 = clap_builder::parser::error::MatchesError::unwrap("file", &v22);
                if !v6 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v41 = v6;
                v42 = *((&v6 as &char + 16) as &i128);
                v22.field_64 = (stack_base)[944] as i128;
                v25 = *((&v6 as &char + 32) as &i128);
                v24 = v42;
                v22 = v41;
                loop {
                    v45 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v43, v44);
                    if !v45 {
                        return 0;
                    }
                    v46 = uu_shred::wipe_file(*((v45 + 8) as &i64), *((v45 + 16) as &i64), v19, v32 & 4294967295 & 4294967295, uu_shred::get_size(&v22, v39, v36), v36, v0, v1, v2, v3);
                    if v46 {
                        v5 = v46;
                        *((v36 + 96) as &i64)();
                        uucore::mods::error::set_exit_code();
                        v12 = uucore::util_name();
                        v13 = v36;
                        eprintln!("{:?}: {:?}", &v12, &v5);
                    }
                }
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "remove") as i8 {
                    v32 = 0;
                    goto LABEL_4709ac;
                }
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "remove");
                v33 = clap_builder::parser::error::MatchesError::unwrap("remove", &v22);
                if !(v33 && (v34 = core::ops::function::FnOnce::call_once(*((v33 + 8) as &i64), *((v33 + 16) as &i64)), v34)) {
                    panic!("internal error: entered unreachable code: should be caught by clap");
                }
                v35 = v34;
                v32 = v32 | -0x100 | 1;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v36, "unlink") as i8) {
                    goto LABEL_4709ac;
                }
                v32 = v32 | -0x100 | 2;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v36, "unlink") as i8) {
                    goto LABEL_4709ac;
                }
            }
        }
    }
    return v28;
}
