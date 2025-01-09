fn uu_cp::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x4b8], Other Possible Types: struct24, struct112
    let v1: i64;  // [bp-0x4a8]
    let v2: i128;  // [bp-0x498]
    let v3: i128;  // [sp-0x488]
    let v4: struct24;  // [sp-0x448]
    let v7: i64;  // [sp-0x418]
    let v8: i64;  // [sp-0x410]
    let v9: i128;  // [sp-0x408]
    let v10: i64;  // [sp-0x3f8]
    let v11: i128;  // [sp-0x3e8]
    let v12: i64;  // [sp-0x3d8]
    let v13: i128;  // [bp-0x3c8]
    let v14: i128;  // [sp-0x3b8]
    let v15: i128;  // [sp-0x3a8]
    let v16: i64;  // [sp-0x398]
    let v17: i64;  // [sp-0x390]
    let v18: i128;  // [sp-0x388]
    let v19: i128;  // [sp-0x378]
    let v20: i128;  // [sp-0x368]
    let v21: i128;  // [sp-0x358]
    let v22: i64;  // [sp-0x348]
    let v23: i8;  // [bp-0x330]
    let v24: i8;  // [bp-0x328]
    let v25: i8;  // [bp-0x320]
    let v26: i8;  // [bp-0x310]
    let v27: i8;  // [bp-0x300]
    let v28: i224;  // [sp-0x2f8], Other Possible Types: struct64, struct712, struct112, struct48
    let v29: i128;  // [bp-0x2e8]
    let v30: i128;  // [bp-0x2d8]
    let v31: i128;  // [bp-0x2c8]
    let v33: i64;  // r14
    let v35: i64;  // rax
    let v40: i64;  // rax
    let v45: i64;  // rax
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2
    let v55: i64;  // rdx

    v28 = uu_cp::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v23, &v28, a0, a1);
    if v23 != 0x8000000000000000 {
        v16 = v27;
        v15 = v26;
        v14 = v25;
        v13 = v23;
        uu_cp::Options::from_matches(&v28, &v13);
        v0 = *((&v28 as &char + 8) as &i128);
        v1 = *((&v28 as &char + 24) as &i128);
        v2 = *((&v28 as &char + 40) as &i128);
        v3 = *((&v28 as &char + 56) as &i128);
        if v17 == 0x8000000000000000 {
            v28 = struct64 {
                field_0: v36
                field_16: v37
                field_32: v38
                field_48: v3
            };
            alloc::boxed::Box<T>::new(&v28);
            return v40;
        }
        v21 = v3;
        v18 = v0;
        v19 = v1;
        v20 = v2;
        v17 = v28;
        v22 = *((&v28 as &char + 72) as &i64);
        if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v21 as &char + 4) as &i32)) && (v22 & 0xff00000000) {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v28 = v0;
            alloc::boxed::Box<T>::new(&v28);
            return v40;
        }
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v13, "paths");
        v0 = clap_builder::parser::error::MatchesError::unwrap("paths", &v28);
        if !v0 {
            v45 = 0x8000000000000000;
        } else {
            v28 = struct112 {
                field_0: v42
                field_16: v43
                field_32: v44
                field_48: v3
                field_64: *((&v0 as &char + 64) as &i128)
                field_80: *((&v0 as &char + 80) as &i128)
                field_96: *((&v0 as &char + 96) as &i128)
            };
            v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v28);
        }
        v4 = struct24 {
            field_0: v48
            field_8: v5
            field_16: v6
        };
        v28 = uu_cp::parse_path_args(&v4, &v17);
        v0 = *((&v28 as &char + 8) as &i128);
        v1 = *((&v28 as &char + 24) as &i128);
        v2 = *((&v28 as &char + 40) as &i128);
        if v28 != 13 {
            v28 = v28;
            alloc::boxed::Box<T>::new(&v28);
            return v40;
        }
        v10 = v1;
        v9 = v0;
        v12 = *((&v2 as &char + 8) as &i64);
        v11 = *((&v1 as &char + 8) as &i128);
        uu_cp::copy(&v0, *((&v9 as &char + 8) as &i64), v1, *((&v11 as &char + 8) as &i64), *((&v2 as &char + 8) as &i64), &v17);
        if v0 != 13 {
            v53 = v1;
            v54 = v2;
            v28 = v0;
            v31 = v3;
            v30 = v54;
            v29 = v53;
            if v28 != 5 {
                v7 = uucore::util_name();
                v8 = v55;
                eprint!("{}: ", &v7);
                eprintln!("{}", &v28);
            }
            uucore::mods::error::set_exit_code(1);
        }
    } else {
        v33 = v24;
        v28 = uu_cp::uu_app();
        match (*((v33 + 213) as &i8)) {
            12 => {
                v35 = clap_builder::builder::command::Command::print_help(&v28);
                if v35 {
                    v40 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                    return v40;
                }
            }
            14 => {
                clap_builder::builder::command::Command::render_version(&v17, &v28);
                print!("{}", &v17);
                break;
            }
            _ => {
                v40 = alloc::boxed::Box<T>::new(v33);
                return v40;
            }
        }
    }
    v40 = 0;
    return 0;
}
