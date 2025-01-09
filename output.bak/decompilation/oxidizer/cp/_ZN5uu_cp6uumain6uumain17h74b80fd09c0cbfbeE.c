fn uu_cp::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x4b8], Other Possible Types: struct112, struct24
    let v1: i64;  // [bp-0x4a8]
    let v2: i128;  // [bp-0x498]
    let v3: i128;  // [sp-0x488]
    let v4: struct24;  // [sp-0x448]
    let v5: i64;  // [sp-0x418]
    let v6: i64;  // [sp-0x410]
    let v7: i128;  // [sp-0x408]
    let v8: i64;  // [sp-0x3f8]
    let v9: i128;  // [sp-0x3e8]
    let v10: i64;  // [sp-0x3d8]
    let v11: i448;  // [sp-0x3c8]
    let v12: i8;  // [sp-0x390]
    let v13: i128;  // [sp-0x388]
    let v14: i128;  // [sp-0x378]
    let v15: i128;  // [sp-0x368]
    let v16: i128;  // [sp-0x358]
    let v17: i64;  // [sp-0x348]
    let v18: i456;  // [sp-0x330], Other Possible Types: Result<struct56, struct8>
    let v19: i128;  // [sp-0x2f8], Other Possible Types: struct64, struct712, struct48, Result<struct81, struct32>, struct112, struct28
    let v20: i128;  // [bp-0x2e8]
    let v21: i128;  // [bp-0x2d8]
    let v22: i128;  // [bp-0x2c8]
    let v24: i64;  // r14
    let v25: i32;  // eax
    let v26: i64;  // rax
    let v30: i64;  // rax
    let v34: i64;  // rax
    let v39: i128;  // xmm1
    let v40: i128;  // xmm2
    let v41: i64;  // rdx

    v19 = uu_cp::uu_app();
    v18 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    match v18 {
        Ok(_) => {
            v11 = v18;
            v19 = uu_cp::Options::from_matches(&v11);
            v0 = *((&v19 as &char + 8) as &i128);
            v1 = *((&v19 as &char + 24) as &i128);
            v2 = *((&v19 as &char + 40) as &i128);
            v3 = *((&v19 as &char + 56) as &i128);
            if v12 == 0x8000000000000000 {
                v19 = struct64 {
                    field_0: v27
                    field_16: v28
                    field_32: v29
                    field_48: v3
                };
                v30 = alloc::boxed::Box<T>::new(&v19);
                return v30;
            }
            v16 = v3;
            v13 = v0;
            v14 = v1;
            v15 = v2;
            v12 = v19;
            v17 = *((&v19 as &char + 72) as &i64);
            if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v16 as &char + 4) as &i32) as u32 as u64) && (v17 as i64 & 0xff00000000) {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v19 = struct28 {
                    field_0: v0
                    field_16: v1
                    field_24: 1
                };
                v30 = alloc::boxed::Box<T>::new(&v19);
                return v30;
            }
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v11, "paths");
            v0 = clap_builder::parser::error::MatchesError::unwrap("paths", &v19);
            if !v0 {
                v34 = 0x8000000000000000;
            } else {
                v19 = struct112 {
                    field_0: v31
                    field_16: v32
                    field_32: v33
                    field_48: v3
                    field_64: *((&v0 as &char + 64) as &i128)
                    field_80: *((&v0 as &char + 80) as &i128)
                    field_96: *((&v0 as &char + 96) as &i128)
                };
                v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v19);
            }
            v4 = struct24 {
                field_0: v35
                field_8: v36
                field_16: v37
            };
            v19 = uu_cp::parse_path_args(&v4, &v12);
            v0 = *((&v19 as &char + 8) as &i128);
            v1 = *((&v19 as &char + 24) as &i128);
            v2 = *((&v19 as &char + 40) as &i128);
            if v19 != 13 {
                v19 = struct64 {
                    field_0: v19
                    field_16: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_48: <UNKNOWN>
                };
                v30 = alloc::boxed::Box<T>::new(&v19);
                return v30;
            }
            v8 = v1;
            v7 = v0;
            v10 = *((&v2 as &char + 8) as &i64);
            v9 = *((&v1 as &char + 8) as &i128);
            uu_cp::copy(&v0, *((&v7 as &char + 8) as &i64), v1, *((&v9 as &char + 8) as &i64), *((&v2 as &char + 8) as &i64), &v12);
            if v0 != 13 {
                v39 = v1;
                v40 = v2;
                v19 = v0;
                v22 = v3;
                v21 = v40;
                v20 = v39;
                if v19 != 5 {
                    v5 = uucore::util_name();
                    v6 = v41;
                    eprint!("{:?}: ", &v5);
                    eprintln!("{:?}", &v19);
                }
                uucore::mods::error::set_exit_code(1);
            }
        },
        Err(v24) => {
            v19 = uu_cp::uu_app();
            switch (v25) {
            case 12:
                v26 = clap_builder::builder::command::Command::print_help(&v19);
                if v26 {
                    v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
                    return v30;
                }
            case 14:
                clap_builder::builder::command::Command::render_version(&v12, &v19);
                print!("{:?}", &v12);
                break;
            default:
                v30 = alloc::boxed::Box<T>::new(*((&v18 as &char + 8) as &i64));
                return v30;
            }
        },
    }
    return 0;
}
