fn uu_cp::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x4b8], Other Possible Types: struct112
    let v1: i128;  // [bp-0x4a8]
    let v2: i64;  // [sp-0x4a0]
    let v3: i128;  // [bp-0x498]
    let v4: i128;  // [sp-0x488]
    let v5: struct24;  // [sp-0x448]
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i128;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f8]
    let v10: i128;  // [sp-0x3e8]
    let v11: i64;  // [sp-0x3d8]
    let v12: i448;  // [bp-0x3c8]
    let v13: i64;  // [sp-0x3c0]
    let v14: i64;  // [sp-0x390]
    let v15: i128;  // [sp-0x388]
    let v16: i128;  // [sp-0x378]
    let v17: i128;  // [sp-0x368]
    let v18: i128;  // [sp-0x358]
    let v19: i64;  // [sp-0x348]
    let v20: Result<struct56, struct16>;  // [sp-0x330], Other Possible Types: i448
    let v21: i64;  // [sp-0x2f8], Other Possible Types: struct64, struct712, Result<struct81, struct40>, struct48
    let v22: i128;  // [bp-0x2e8]
    let v23: i128;  // [bp-0x2d8]
    let v24: i128;  // [bp-0x2c8]
    let v25: i128;  // [sp-0x2b8]
    let v26: i128;  // [sp-0x2a8]
    let v28: i64;  // r14
    let v29: i64;  // rsi
    let v30: i64;  // rdx
    let v31: i64;  // rdx
    let v32: i64;  // rcx
    let v33: i64;  // r8
    let v34: i64;  // r9
    let v35: i32;  // eax
    let v36: i64;  // rcx
    let v37: i64;  // r8
    let v38: i64;  // r9
    let v39: i64;  // rax
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i64;  // rax
    let v51: i128;  // xmm1
    let v52: i128;  // xmm2

    v21 = uu_cp::uu_app(a1, a2);
    v20 = clap_builder::builder::command::Command::try_get_matches_from(&v21, a0, a1);
    match v20 {
        Ok(_) => {
            v12 = v20;
            v21 = uu_cp::Options::from_matches(&v12, v31, v32, v33, v34);
            v0 = *((&v21 as &char + 8) as &i128);
            v1 = *((&v21 as &char + 24) as &i128);
            v3 = *((&v21 as &char + 40) as &i128);
            v4 = *((&v21 as &char + 56) as &i128);
            if v14 == 0x8000000000000000 {
                v21 = struct64 {
                    field_0: v40
                    field_16: v41
                    field_32: v42
                    field_48: v4
                };
                v43 = alloc::boxed::Box<T>::new(&v21);
                return v43;
            }
            v18 = v4;
            v15 = v0;
            v16 = v1;
            v17 = v3;
            v14 = v21;
            v19 = *((&v21 as &char + 72) as &i64);
            if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v18 as &char + 4) as &i32) as u32 as u64) && (v19 as i64 & 0xff00000000) {
                <T as alloc::slice::hack::ConvertVec>::to_vec();
                v21 = v0;
                v43 = alloc::boxed::Box<T>::new(&v21);
                return v43;
            }
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v12, "paths");
            v0 = clap_builder::parser::error::MatchesError::unwrap("paths", &v21);
            if !v0 {
                v47 = 0x8000000000000000;
            } else {
                v21.96 = (stack_base)[1112] as i128;
                v26 = *((&v0 as &char + 80) as &i128);
                v25 = *((&v0 as &char + 64) as &i128);
                v44 = v0;
                v45 = *((&v0 as &char + 16) as &i128);
                v46 = *((&v0 as &char + 32) as &i128);
                *(&v24 as &struct112) = v0.field_48;
                v23 = v46;
                v22 = v45;
                v21 = v44;
                v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21);
            }
            v5 = struct24 {
                field_0: v48
                field_8: v49
                field_16: v32
            };
            v21 = uu_cp::parse_path_args(&v5, &v14);
            v0 = *((&v21 as &char + 8) as &i128);
            v1 = *((&v21 as &char + 24) as &i128);
            v3 = *((&v21 as &char + 40) as &i128);
            if v21 != 13 {
                v21 = v21;
                v43 = alloc::boxed::Box<T>::new(&v21);
                return v43;
            }
            v9 = v0.field_16;
            v8 = v0;
            v11 = *((&v3 as &char + 8) as &i64);
            v10 = *((&v1 as &char + 8) as &i128);
            uu_cp::copy(&v0, *((&v8 as &char + 8) as &i64), v0.field_16, *((&v10 as &char + 8) as &i64), *((&v3 as &char + 8) as &i64), &v14);
            if v0 != 13 {
                v51 = v1;
                v52 = v3;
                v21 = v0;
                *(&v24 as &struct112) = v0.field_48;
                v23 = v52;
                v22 = v51;
                if v21 != 5 {
                    v6 = uucore::util_name();
                    v7 = v31;
                    eprint!("{:?}: ", &v6);
                    eprintln!("{:?}", &v21);
                }
                uucore::mods::error::set_exit_code();
            }
        },
        Err(_) => {
            v28 = *((&v20 as &char + 8) as &i64);
            v21 = uu_cp::uu_app(v29, v30);
            switch (v35) {
            case 12:
                v39 = clap_builder::builder::command::Command::print_help(&v21, v29, v30, v36, v37, v38);
                if v39 {
                    v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39);
                    return v43;
                }
            case 14:
                clap_builder::builder::command::Command::render_version(&v14, &v21);
                v12 = &v14;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = 0;
                v2 = 1;
                std::io::stdio::_print(&v0);
                break;
            default:
                v43 = alloc::boxed::Box<T>::new(v28);
                return v43;
            }
        },
    }
    return 0;
}
