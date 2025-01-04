fn uu_shred::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x428]
    let v1: i8;  // [bp-0x420]
    let v2: i8;  // [bp-0x418]
    let v3: i8;  // [bp-0x410]
    let v4: i8;  // [sp-0x3f9]
    let v5: i64;  // [sp-0x3f0]
    let v6: i64;  // [sp-0x3e0], Other Possible Types: struct24, struct64, Result<struct56, struct16>
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
    let v18: i128;  // [sp-0x328]
    let v19: i192;  // [sp-0x310]
    let v20: i224;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct16>, struct24, struct56, struct712
    let v21: i128;  // [bp-0x2f0]
    let v22: i128;  // [bp-0x2e8]
    let v23: i128;  // [bp-0x2d8]
    let v24: i128;  // [sp-0x2c8]
    let v27: i64;  // r8
    let v28: i64;  // r9
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // r14
    let v32: i64;  // r15
    let v33: i64;  // r12
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i64;  // rdx
    let v38: i64;  // rax
    let v39: i64;  // r13
    let v40: i64;  // rsi
    let v42: i128;  // xmm0
    let v43: i128;  // xmm1
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: struct8;  // rax
    let v47: i64;  // rax

    v20 = uu_shred::uu_app(a1, a2);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v20, a0, a1, v27, v28);
    if v12 == 0x8000000000000000 {
        v29 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v29;
    }
    v16 = *((&v6 as &char + 48) as &i64);
    v15 = *((&v6 as &char + 32) as &i128);
    v14 = *((&v6 as &char + 16) as &i128);
    v12 = v6;
    v13 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v12, "file") as i8 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v20 = v6;
        v29 = alloc::boxed::Box<T>::new(&v20);
    } else {
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "iterations");
        v30 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v20);
        if !v30 {
            core::panicking::panic(); /* do not return */
        }
        v31 = *((v30 + 8) as &i64);
        v32 = *((v30 + 16) as &i64);
        v10 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v31, v32);
        if v10 {
            v6 = 0;
            v7 = v31;
            v8 = v32;
            v9 = 1;
            v19 = format!("invalid number of passes: {:?}", &v6);
            v20 = v19;
            v29 = alloc::boxed::Box<T>::new(&v20);
        } else {
            v17 = v11;
            v33 = &v20 | -0x100 | 3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "u") as i8 {
LABEL_474d3c:
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "force") as i8;
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "size");
                v38 = clap_builder::parser::error::MatchesError::unwrap("size", &v20);
                v39 = 0x8000000000000000;
                if v38 {
                    v20 = <alloc::string::String as core::clone::Clone>::clone(v38);
                    v18 = *((&v20 as &char + 8) as &i128);
                    v39 = v20;
                }
                v20 = v39;
                v21 = v18;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "exact");
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "zero");
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "verbose");
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "file");
                v6 = clap_builder::parser::error::MatchesError::unwrap("file", &v20);
                if !v6 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v42 = v6;
                v43 = *((&v6 as &char + 16) as &i128);
                v24 = *((&v6 as &char + 48) as &i128);
                v23 = *((&v6 as &char + 32) as &i128);
                v22 = v43;
                v20 = v42;
                loop {
                    v46 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v44, v45);
                    if !v46 {
                        return 0;
                    }
                    v47 = uu_shred::wipe_file(*((v46 + 8) as &i64), *((v46 + 16) as &i64), v17, v33 & 4294967295 & 4294967295, uu_shred::get_size(&v20, v40, v37), v37, v0, v1, v2, v3);
                    if v47 {
                        v5 = v47;
                        *((v37 + 96) as &i64)();
                        uucore::mods::error::set_exit_code();
                        v10 = uucore::util_name();
                        v11 = v37;
                        eprintln!("{:?}: {:?}", &v10, &v5);
                    }
                }
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v12, "remove") as i8 {
                    v33 = 0;
                    goto LABEL_474d3c;
                }
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, "remove");
                v34 = clap_builder::parser::error::MatchesError::unwrap("remove", &v20);
                if !(v34 && (v35 = core::ops::function::FnOnce::call_once(*((v34 + 8) as &i64), *((v34 + 16) as &i64)), v35)) {
                    panic!("internal error: entered unreachable code: should be caught by clap");
                }
                v36 = v35;
                v33 = v33 | -0x100 | 1;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v37, "unlink") as i8) {
                    goto LABEL_474d3c;
                }
                v33 = v33 | -0x100 | 2;
                if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v37, "unlink") as i8) {
                    goto LABEL_474d3c;
                }
            }
        }
    }
    return v29;
}
