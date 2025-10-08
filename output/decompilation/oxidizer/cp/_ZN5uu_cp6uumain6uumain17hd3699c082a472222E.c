fn uu_cp::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x538], Other Possible Types: struct56, u8
    let v1: u128;  // [bp-0x528]
    let v2: u128;  // [bp-0x518]
    let v3: u64;  // [bp-0x510]
    let v4: struct24;  // [bp-0x4f8]
    let v5: u64;  // [bp-0x4c8]
    let v6: u64;  // [bp-0x4c0]
    let v7: struct56;  // [bp-0x4b8]
    let v8: u128;  // [bp-0x478]
    let v9: void*;  // [bp-0x470]
    let v10: u64;  // [bp-0x468]
    let v11: iNone;  // [bp-0x458]
    let v12: u64;  // [bp-0x450]
    let v13: u64;  // [bp-0x448]
    let v14: u64;  // [bp-0x440]
    let v15: u128;  // [bp-0x438]
    let v16: u128;  // [bp-0x428]
    let v17: iNone;  // [bp-0x418]
    let v18: u64;  // [bp-0x408]
    let v19: iNone;  // [bp-0x400]
    let v20: u128;  // [bp-0x3f0]
    let v21: u64;  // [bp-0x3e0]
    let v22: u128;  // [bp-0x3c8]
    let v23: iNone;  // [bp-0x3b8]
    let v24: iNone;  // [bp-0x3a8]
    let v25: u64;  // [bp-0x398]
    let v26: struct16;  // [bp-0x390]
    let v27: struct56;  // [bp-0x390], Other Possible Types: u64
    let v28: i64;  // [bp-0x388]
    let v29: struct712;  // [bp-0x358], Other Possible Types: u64
    let v30: u128;  // [bp-0x358]
    let v31: struct48;  // [bp-0x358]
    let v32: struct56;  // [bp-0x358]
    let v33: struct24;  // [bp-0x358]
    let v34: u128;  // [bp-0x350]
    let v35: void*;  // [bp-0x348], Other Possible Types: int, u64
    let v36: void*;  // [bp-0x348]
    let v37: u128;  // [bp-0x340]
    let v38: iNone;  // [bp-0x338]
    let v39: u128;  // [bp-0x330]
    let v40: u64;  // [bp-0x328]
    let v41: u64;  // [bp-0x320]
    let v42: iNone;  // [bp-0x318]
    let v43: u128;  // [bp-0x308]
    let v44: struct112;  // [bp-0x90]
    let v46: i64;  // rbx
    let v47: u32;  // eax
    let v49: u64;  // rax
    let v51: u64;  // r14
    let v52: u64;  // rax
    let v53: u64;  // rdx
    let v55: u64;  // rdx
    let v56: iNone;  // xmm1
    let v57: iNone;  // xmm2
    let v58: u64;  // rdx
    let v59: u128;  // xmm0
    let v60: iNone;  // xmm1

    v29 = uu_cp::uu_app();
    v26 = clap_builder::builder::command::Command::try_get_matches_from(&v29, a0, a1);
    if (((0 ^ v26.field_0) & (0 ^ -(v27))) >> 63) as char {
        v46 = v28;
        v29 = uu_cp::uu_app();
        v47 = *((v46 + 221) as &i8);
        match (v47) {
            12 => {
                v49 = clap_builder::builder::command::Command::print_help(&v29);
                if v49 {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
                }
            }
            14 => {
                clap_builder::builder::command::Command::render_version(&v0, &v29);
                print!("{}", &v0);
            }
            _ => {
                return alloc::boxed::Box<T>::new(v46);
            }
        }
        return 0;
    } else {
        v7 = v27;
        v30 = uu_cp::Options::from_matches(&v7);
        v22 = *(&v33.field_8 as &i128);
        v23 = *(&(&v29)[3] as &i128);
        v24 = *(&(&v29)[5] as &i128);
        v25 = v41;
        if v33.field_0 == 0x8000000000000000 {
            v51 = alloc::boxed::Box<T>::new(&v22) as u64;
        } else {
            v21 = (&v29)[12].field_0;
            v20 = v43;
            v19 = v42;
            v15 = v22;
            *(&v16 as void*) = v23;
            v17 = v24;
            v18 = v25;
            v14 = v33.field_0;
            if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v20 as &char + 4) as &i32)) && *((&v21 as &char + 5) as &i8) {
                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("options --backup and --no-clobber are mutually exclusive");
                v35 = v0.field_16;
                v30 = *(&v0.field_0 as &i128);
                v37 = 1;
                v51 = alloc::boxed::Box<T>::new(&v30) as u64;
            } else {
                v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v7);
                v44 = clap_builder::parser::error::MatchesError::unwrap(&v31);
                if v44.field_0 as i64 {
                    core::iter::traits::iterator::Iterator::collect(&v31, &v44);
                    v52 = v31.field_0;
                    v53 = v31.field_8;
                    v36 = v35;
                }
                v36 = v36;
                v4 = struct24 {
                    field_0: v52
                    field_8: v53
                    field_16: v35
                };
                v32 = uu_cp::parse_path_args(&v4, &v14);
                v0 = *((&v32.field_0 as &char + 8) as &i128);
                v1 = *((&v32.field_16 as &char + 8) as &i128);
                v2 = *((&v32.field_32 as &char + 8) as &i128);
                if v32.field_0 as i64 == 9223372036854775820 {
                    v55 = v1;
                    v10 = v1;
                    v8 = v0;
                    v13 = v3;
                    *(&v11 as &i128) = *((&v1 as &char + 8) as &i128);
                    v0 = uu_cp::copy(v9, v55, v12, v3, &v14);
                    if v0.field_0 as i64 == 9223372036854775820 {
                        return 0;
                    }
                    v56 = v0.field_16;
                    v57 = v0.field_32;
                    v30 = v0.field_0;
                    v40 = v0.field_48;
                    v38 = v57;
                    v35 = v56;
                    if 0x8000000000000000 + v30 as i64 != 4 {
                        v5 = uucore::util_name();
                        v6 = v58;
                        eprint!("{}: ", &v5);
                        eprintln!("{}", &v32);
                    }
                    uucore::mods::error::set_exit_code(1);
                    return 0;
                } else {
                    v59 = v0;
                    v60 = v1;
                    v39 = v2;
                    *(&v37 as void*) = v60;
                    v34 = v59;
                    v29 = v32.field_0;
                    v51 = alloc::boxed::Box<T>::new(&v29) as u64;
                }
            }
        }
        return v51;
    }
}
