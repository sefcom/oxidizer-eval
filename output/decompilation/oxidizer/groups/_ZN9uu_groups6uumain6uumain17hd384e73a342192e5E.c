fn uu_groups::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x4f8], Other Possible Types: u64
    let v1: u64;  // [bp-0x4f8]
    let v2: u64;  // [bp-0x4f0]
    let v3: u64;  // [bp-0x4f0]
    let v4: u32;  // [bp-0x4e8]
    let v5: u64;  // [bp-0x4e8]
    let v6: u128;  // [bp-0x4c8]
    let v7: u64;  // [bp-0x4c0]
    let v8: u64;  // [bp-0x4b8]
    let v9: u64;  // [bp-0x4a8]
    let v10: u128;  // [bp-0x4a8]
    let v11: u64;  // [bp-0x4a0]
    let v12: u64;  // [bp-0x498]
    let v13: u64;  // [bp-0x488]
    let v14: u128;  // [bp-0x488]
    let v15: u64;  // [bp-0x488]
    let v16: u64;  // [bp-0x478]
    let v17: void*;  // [bp-0x460], Other Possible Types: u64
    let v18: u128;  // [bp-0x458]
    let v19: void*;  // [bp-0x450], Other Possible Types: u64
    let v20: Option<struct24>;  // [bp-0x448]
    let v21: u128;  // [bp-0x448]
    let v22: u64;  // [bp-0x438]
    let v23: u64;  // [bp-0x430]
    let v24: u64;  // [bp-0x428]
    let v25: u64;  // [bp-0x420]
    let v26: struct16;  // [bp-0x418]
    let v27: struct56;  // [bp-0x418]
    let v28: u128;  // [bp-0x418]
    let v29: u128;  // [bp-0x418]
    let v30: i8;  // [bp-0x408], Other Possible Types: u64
    let v31: u128;  // [bp-0x3f8]
    let v32: iNone;  // [bp-0x3e8]
    let v33: iNone;  // [bp-0x3d8]
    let v34: iNone;  // [bp-0x3c8]
    let v35: iNone;  // [bp-0x3b8]
    let v36: u192;  // [bp-0x3a8]
    let v37: struct56;  // [bp-0x390]
    let v38: u64;  // [bp-0x388]
    let v39: struct32;  // [bp-0x358]
    let v40: struct128;  // [bp-0x338], Other Possible Types: struct712, struct24, u64
    let v41: u64;  // [bp-0x338]
    let v42: u64;  // [bp-0x338]
    let v43: struct56;  // [bp-0x338]
    let v44: u64;  // [bp-0x330]
    let v45: u64;  // [bp-0x328]
    let v46: u64;  // [bp-0x328]
    let v47: struct64;  // [bp-0x70]
    let v49: u256;  // ymm0
    let v50: u256;  // ymm0
    let v51: iNone;  // xmm0
    let v52: u256;  // ymm0
    let v53: core::fmt::Arguments;  // rbx
    let v54: i64;  // r14
    let v55: u256;  // ymm0
    let v56: u64;  // rdx
    let v57: iNone;  // xmm0
    let v58: iNone;  // xmm0
    let v59: iNone;  // xmm0
    let v60: iNone;  // xmm0
    let v61: u128;  // xmm0
    let v62: u32;  // rdx
    let v63: void*;  // rbx

    v40 = uu_groups::uu_app();
    v28 = clap_builder::builder::command::Command::try_get_matches_from(&v40, a0, a1);
    if (((0 ^ v26.field_0) & (0 ^ -(v26.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
    }
    v50 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v30 as &i128);
    v37 = v27;
    v43 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v37);
    v47 = clap_builder::parser::error::MatchesError::unwrap(&v43);
    if v47.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v43, &v47);
        v51 = *(&v43.field_8 as &i128);
        v29 = *(&v43.field_8 as &i128);
        v40 = v41;
        if v40 == 0x8000000000000000 {
            goto LABEL_4553e9;
        }
        v52 = (v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
        v18 = v29;
        v17 = v40;
        if v19 {
            v39 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v17);
            v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v39);
            if let None = v20 {
                return 0;
            }
            do {
                v8 = v22;
                v55 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
                v6 = v21;
                <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v53, v7, v22);
                if v29 as i64 == 0x8000000000000000 {
                    v16 = v8;
                    v52 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                    v14 = v6;
                    uucore::mods::error::set_exit_code(1);
                    v9 = uucore::util_name();
                    v11 = v56;
                    eprintln!("{}: {}", &v9, &v14 as u64);
                    v45 = v46;
                    v0 = v1;
                    v2 = v3;
                    v4 = v5;
                } else {
                    v57 = v36 as i128;
                    v58 = v35;
                    v59 = v34;
                    v60 = v33;
                    v61 = v29;
                    v40 = struct128 {
                        field_0: v61
                        field_16: *(&v30 as &i128)
                        field_32: v31
                        field_48: v32
                        field_64: v60
                        field_80: v59
                        field_96: v58
                        field_112: v57
                    };
                    uucore::features::entries::Passwd::belongs_to(&v0, &v40);
                    core::iter::traits::iterator::Iterator::collect(&v23, v2, v4 * 4 + v2);
                    v0 = alloc::str::join_generic_copy(v24, v25);
                    v12 = v4;
                    v52 = (((((v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                    v10 = v0.field_0;
                    println!("{} : {}", &v6 as u8, &v10 as u64);
                    v13 = v15;
                    v0 = v1;
                    v2 = v3;
                    v4 = v5;
                }
                <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v54, &v39);
            } while (v21 as i64 != 0x8000000000000000);
            return 0;
        }
    } else {
LABEL_4553e9:
        v42 = v40;
        v17 = 0;
        v18 = 8;
        v19 = 0;
    }
    vvar_727{stack -824} = struct24 OrderedDict([(0, 𝜙@64b [((4543465, None), vvar_413{stack -824}), ((4543854, None), vvar_610{stack -824})]), (16, 𝜙@64b [((4543465, None), vvar_417{stack -808}), ((4543854, None), None)])])
    uucore::features::entries::get_groups_gnu(&v40, 0, v62);
    if v40.field_0 as i64 == 0x8000000000000000 {
        v40 = 0x8000000000000000;
        v63 = alloc::boxed::Box<T>::new(&v40) as u64;
    } else {
        core::iter::traits::iterator::Iterator::collect(&v0 as u8, v44, v44 + v46 * 4);
        v40 = alloc::str::join_generic_copy(v2, v4);
        v30 = v46;
        v28 = v40.field_0;
        println!("{}", &v28);
    }
    return v63;
}
