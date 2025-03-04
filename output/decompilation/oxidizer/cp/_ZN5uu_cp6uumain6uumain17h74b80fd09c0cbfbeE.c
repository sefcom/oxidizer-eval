fn uu_cp::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x4b8], Other Possible Types: int, struct24, struct64, struct112
    let v1: i64;  // [bp-0x4a8], Other Possible Types: int
    let v2: iNone;  // [bp-0x498]
    let v3: iNone;  // [sp-0x488]
    let v4: struct24;  // [sp-0x448], Other Possible Types: unsigned long
    let v7: i64;  // [sp-0x410]
    let v8: iNone;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f8]
    let v10: iNone;  // [sp-0x3e8]
    let v11: i64;  // [sp-0x3d8]
    let v12: iNone;  // [sp-0x3c8]
    let v13: i64;  // [sp-0x390], Other Possible Types: char
    let v14: iNone;  // [sp-0x388]
    let v15: iNone;  // [sp-0x378]
    let v16: iNone;  // [sp-0x368]
    let v17: iNone;  // [sp-0x358]
    let v18: i64;  // [sp-0x348]
    let v19: i8;  // [bp-0x330]
    let v20: i8;  // [bp-0x328]
    let v21: struct64;  // [sp-0x2f8], Other Possible Types: struct712, unsigned long, int, struct48, struct24, struct112, struct81
    let v22: iNone;  // [bp-0x2e8]
    let v23: i32;  // [sp-0x2e0]
    let v24: iNone;  // [bp-0x2d8]
    let v25: iNone;  // [bp-0x2c8]
    let v28: i32;  // eax
    let v29: iNone;  // xmm0
    let v30: iNone;  // xmm1
    let v31: iNone;  // xmm2
    let v32: i64;  // rbx
    let v36: i64;  // rax
    let v48: i64;  // rdx

    v21 = uu_cp::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v19, &v21, a0, a1);
    if *(&v19 as &i64) != 0x8000000000000000 {
        v12 = *(&v19 as &i448);
        v21 = uu_cp::Options::from_matches(&v12);
        *(&v0 as &i128) = *((&v21.field_0 as &char + 8) as &i128);
        *(&v1 as &i128) = *(&v21.field_24 as &i128);
        *(&v2 as &i128) = *(&v21.field_40 as &i128);
        v3 = *(&v21.field_54 as &i128);
        if v13 == 0x8000000000000000 {
            v29 = v0 as i128;
            v30 = v1 as i128;
            v31 = v2 as i128;
            v25 = v3;
            v24 = v31;
            v22 = v30;
            v21 = v29;
            v32 = alloc::boxed::Box<T>::new(&v21);
            return v32;
        }
        v17 = v3;
        v14 = v0 as i128;
        v15 = v1 as i128;
        v16 = v2 as i128;
        v13 = v21;
        v18 = *(&v21.field_70 as &i64);
        if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq((&v17)[4] as i32) && (v18 as u64 & 0xff00000000) {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v21 = v0;
            v23 = 1;
            v32 = alloc::boxed::Box<T>::new(&v21);
            return v32;
        }
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v12, "paths");
        v0 = clap_builder::parser::error::MatchesError::unwrap("paths", &v21);
        if !v0 {
            v36 = 0x8000000000000000;
        } else {
            v21 = struct112 {
                field_0: v33
                field_16: v34
                field_32: v35
                field_48: v3
                field_64: v0.field_64
                field_80: v0.field_80
                field_96: v0.field_96
            };
            v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21);
            v36 = v4;
        }
        v4 = struct24 {
            field_0: v41
            field_8: v42
            field_16: v38
        };
        v21 = uu_cp::parse_path_args(&v4, &v13);
        *(&v0 as &i128) = *((&v21.field_0 as &char + 8) as &i128);
        *(&v1 as &i128) = *((&v21.field_16 as &char + 8) as &i128);
        *(&v2 as &i128) = *((&v21.field_32 as &char + 8) as &i128);
        if v21 != 13 {
            v21 = v21;
            v32 = alloc::boxed::Box<T>::new(&v21);
            return v32;
        }
        v9 = v1;
        v8 = v0 as i128;
        v11 = (&v2)[8] as i64;
        v10 = (&v1)[8] as i128;
        v0 = uu_cp::copy((&v8)[8] as i64, v1, (&v10)[8] as i64, (&v2)[8] as i64, &v13);
        if v0 != 13 {
            v21 = v0;
            if v21.field_0 as i32 != 5 {
                v7 = v48;
                show_error!("{}", &v21);
            }
            uucore::mods::error::set_exit_code(1);
        }
    } else {
        v21 = uu_cp::uu_app();
        v28 = *((*(&v20 as &i64) + 213) as &i8);
        match (v28) {
            12 => {
                if clap_builder::builder::command::Command::print_help(&v21) {
                    return v32;
                }
            }
            14 => {
                clap_builder::builder::command::Command::render_version(&v13, &v21);
                print!("{}", &v13);
                break;
            }
            _ => {
                return v32;
            }
        }
    }
    return 0;
}
