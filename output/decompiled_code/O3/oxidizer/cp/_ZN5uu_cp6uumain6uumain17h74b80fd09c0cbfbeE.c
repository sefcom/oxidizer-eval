fn uu_cp::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x4b8]
    let v1: i64;  // [bp-0x4a8]
    let v2: i64;  // [sp-0x4a0]
    let v3: i128;  // [bp-0x498]
    let v4: i128;  // [sp-0x488]
    let v5: i8;  // [bp-0x478]
    let v6: i8;  // [bp-0x468]
    let v7: i8;  // [bp-0x458]
    let v8: struct24;  // [sp-0x448]
    let v9: i64;  // [sp-0x418]
    let v10: i64;  // [sp-0x410]
    let v11: i128;  // [sp-0x408]
    let v12: i64;  // [sp-0x3f8]
    let v13: i128;  // [sp-0x3e8]
    let v14: i64;  // [sp-0x3d8]
    let v15: i64;  // [bp-0x3c8]
    let v16: i64;  // [sp-0x3c0]
    let v17: i64;  // [sp-0x390]
    let v18: i128;  // [sp-0x388]
    let v19: i128;  // [sp-0x378]
    let v20: i128;  // [sp-0x368]
    let v21: i128;  // [sp-0x358]
    let v22: i64;  // [sp-0x348]
    let v23: Result<struct56, struct16>;  // [sp-0x330], Other Possible Types: i448
    let v24: i5696;  // [sp-0x2f8], Other Possible Types: struct64, struct712, Result<struct81, struct40>, struct48
    let v25: i128;  // [bp-0x2e8]
    let v26: i128;  // [bp-0x2d8]
    let v27: i128;  // [bp-0x2c8]
    let v28: i128;  // [sp-0x2b8]
    let v29: i128;  // [sp-0x2a8]
    let v30: i128;  // [sp-0x298]
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v34: i64;  // r14
    let v35: i64;  // rsi
    let v36: i64;  // rdx
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i32;  // eax
    let v40: i64;  // rcx
    let v41: i64;  // rax
    let v45: i64;  // rax
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i64;  // rax
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2

    v24 = uu_cp::uu_app(a1, a2);
    v23 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1, v32, v33);
    match v23 {
        Ok(_) => {
            v15 = v23;
            v24 = uu_cp::Options::from_matches(&v15, v37, v38, v32, v33);
            v0 = *((&v24 as &char + 8) as &i128);
            v1 = *((&v24 as &char + 24) as &i128);
            v3 = *((&v24 as &char + 40) as &i128);
            v4 = *((&v24 as &char + 56) as &i128);
            if v17 == 0x8000000000000000 {
                v24 = struct64 {
                    field_0: v42
                    field_16: v43
                    field_32: v44
                    field_48: v4
                };
                v45 = alloc::boxed::Box<T>::new(&v24);
                return v45;
            }
            v21 = v4;
            v18 = v0;
            v19 = v1;
            v20 = v3;
            v17 = v24;
            v22 = *((&v24 as &char + 72) as &i64);
            if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v21 as &char + 4) as &i32) as u32 as u64) && (v22 as i64 & 0xff00000000) {
                <T as alloc::slice::hack::ConvertVec>::to_vec();
                v24 = v0;
                v45 = alloc::boxed::Box<T>::new(&v24);
                return v45;
            }
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v15, "paths");
            clap_builder::parser::error::MatchesError::unwrap("paths", &v24);
            if !v0 {
                v49 = 0x8000000000000000;
            } else {
                v30 = v7;
                v29 = v6;
                v28 = v5;
                v46 = v0;
                v47 = v1;
                v48 = v3;
                v27 = v4;
                v26 = v48;
                v25 = v47;
                v24 = v46;
                v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24);
            }
            v8 = struct24 {
                field_0: v50
                field_8: v51
                field_16: v38
            };
            v24 = uu_cp::parse_path_args(&v8, &v17);
            v0 = *((&v24 as &char + 8) as &i128);
            v1 = *((&v24 as &char + 24) as &i128);
            v3 = *((&v24 as &char + 40) as &i128);
            if v24 != 13 {
                v24 = v24;
                v45 = alloc::boxed::Box<T>::new(&v24);
                return v45;
            }
            v12 = v1;
            v11 = v0;
            v14 = *((&v3 as &char + 8) as &i64);
            v13 = *((&v1 as &char + 8) as &i128);
            uu_cp::copy(&v0, *((&v11 as &char + 8) as &i64), v1, *((&v13 as &char + 8) as &i64), *((&v3 as &char + 8) as &i64), &v17);
            if v0 != 13 {
                v53 = v1;
                v54 = v3;
                v24 = v0;
                v27 = v4;
                v26 = v54;
                v25 = v53;
                if v24 != 5 {
                    v9 = uucore::util_name();
                    v10 = v37;
                    eprint!("{:?}: ", &v9);
                    eprintln!("{:?}", &v24);
                }
                uucore::mods::error::set_exit_code();
            }
        },
        Err(_) => {
            v34 = *((&v23 as &char + 8) as &i64);
            v24 = uu_cp::uu_app(v35, v36);
            switch (v39) {
            case 12:
                v41 = clap_builder::builder::command::Command::print_help(&v24, v35, v36, v40, v32, v33);
                if v41 {
                    v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
                    return v45;
                }
            case 14:
                clap_builder::builder::command::Command::render_version(&v17, &v24);
                v15 = &v17;
                v16 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = 0;
                v2 = 1;
                std::io::stdio::_print(&v0);
                break;
            default:
                v45 = alloc::boxed::Box<T>::new(v34);
                return v45;
            }
        },
    }
    return 0;
}
